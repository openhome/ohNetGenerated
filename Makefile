
rsync ?= yes

ifeq ($(rsync),yes)
cp = rsync -u
else
cp = cp -u
endif

ifeq ($(debug),1)
debug_specific_cflags = -g -O0
debug_csharp = /define:DEBUG /debug+
build_dir = Debug
openhome_configuration = Debug
android_ndk_debug = 1
else
debug_specific_cflags = -g -O2
debug_csharp = /optimize+ /debug:pdbonly
build_dir = Release
openhome_configuration = Release
android_ndk_debug=0
endif



# Figure out platform, openhome_system and openhome_architecture

gcc_machine = $(shell ${CROSS_COMPILE}gcc -dumpmachine)
MACHINE = $(shell uname -s)

$(info CROSS_COMPILE: ${CROSS_COMPILE})
$(info Machine reported by compiler is: ${gcc_machine})
$(info Machine reported by uname is: ${MACHINE})
$(info PLATFORM: ${PLATFORM})

ifeq ($(MACHINE),Darwin)
  ifeq ($(iOs-arm64),1)
    platform = iOS
    detected_openhome_system = iOs
    detected_openhome_architecture = arm64
  else ifeq ($(iOs-x64),1)
    platform = iOS
    detected_openhome_system = iOs
    detected_openhome_architecture = x64
  else
    platform = IntelMac
    detected_openhome_system = Mac
    detected_openhome_architecture = x64
  endif
else ifneq (, $(findstring powerpc, $(gcc_machine)))
    platform = Linux-ppc32
    detected_openhome_system = Linux
    detected_openhome_architecture = ppc32
else ifeq ($(Android-anycpu), 1)
    platform = Android
    detected_openhome_system = Android
    detected_openhome_architecture = anycpu
else ifneq (,$(findstring Linux-x86,${PLATFORM}))
    ifneq (,$(findstring x86_64,$(gcc_machine)))
        platform = Vanilla
        detected_openhome_system = Linux
        detected_openhome_architecture = x86
        CFLAGS = -m32
        LDFLAGS = -m32
    endif
else
  # At present, platform == Vanilla is used for Kirkwood, x86 and x64 Posix builds.
  platform ?= Vanilla
    ifeq ($(Qnap-anycpu), 1)
        detected_openhome_system = Qnap
    else ifneq (,$(findstring linux,$(gcc_machine)))
      detected_openhome_system = Linux
    endif
    ifeq ($(gcc_machine),arm-none-linux-gnueabi)
      detected_openhome_architecture = armel
    endif
    ifeq ($(gcc_machine),arm-linux-gnueabi)
      detected_openhome_architecture = armel
    endif
    ifeq ($(gcc_machine),arm-linux-gnueabihf)
      detected_openhome_architecture = armhf
      ifneq (,$(findstring raspbian,$(CROSS_COMPILE)))
        detected_openhome_architecture = rpi
      endif
    endif
    ifneq (,$(findstring i686,$(gcc_machine)))
      detected_openhome_architecture = x86
    endif
    ifneq (,$(findstring i586,$(gcc_machine)))
      detected_openhome_architecture = x86
    endif
    ifneq (,$(findstring i486,$(gcc_machine)))
      detected_openhome_architecture = x86
    endif
    ifneq (,$(findstring i386,$(gcc_machine)))
      detected_openhome_architecture = x86
    endif
    ifneq (,$(findstring amd64,$(gcc_machine)))
      detected_openhome_architecture = x64
    endif
    ifneq (,$(findstring x86_64,$(gcc_machine)))
      detected_openhome_architecture = x64
    endif


endif

detected_openhome_system ?= Unknown
detected_openhome_architecture ?= Unknown

ifneq (${openhome_system},)
  ifneq (${openhome_system},${detected_openhome_system})
    $(warning Detected compiler is for system ${detected_openhome_system} but expected ${openhome_system}. Build will probably fail.)
  endif
endif

ifneq (${openhome_architecture},)
  ifneq (${openhome_architecture},${detected_openhome_architecture})
    $(warning Detected compiler is for architecture ${detected_openhome_architecture} but expected ${openhome_architecture}. Build will probably fail.)
  endif
endif

openhome_system = ${detected_openhome_system}
openhome_architecture = ${detected_openhome_architecture}

dotnetsdk = dotnet
dotnetRuntime = linux-x64

# NOTE: If you change this, you MUST go through an edit any of the csproj (or csproj generation code) to ensure that the correct defines
#       are included for iOS builds. 
dotnetFramework = net6.0

ifeq ($(openhome_system),Linux)
  dotnetsdk = ~/.dotnet/dotnet
endif

ifeq ($(platform),Android)
    osbuilddir = $(platform)-$(detected_openhome_architecture)
    objdir = Build/Obj/$(osbuilddir)/$(build_dir)/
    android_build_dir = OpenHome/Net/Bindings/Android/libs/
    managed_only = yes

    dotnetsdk = ~/.dotnet/dotnet
endif

ifeq ($(platform),iOS)
	nocpp11=yes
	linkopts_ohNet =
	platform_prefix=iPhoneOS
	platform_compiler=arm-apple-darwin10
	platform_arch=$(detected_openhome_architecture)
	ifeq ($(detected_openhome_architecture),x64)
		platform_prefix=iPhoneSimulator
		platform_compiler=i686-apple-darwin10
		platform_arch=x86_64
	endif
	devroot=/Applications/Xcode.app/Contents/Developer
	toolroot=$(devroot)/Toolchains/XcodeDefault.xctoolchain/usr/bin
	sdkroot=$(devroot)/Platforms/$(platform_prefix).platform/Developer/SDKs/$(platform_prefix).sdk
	platform_cflags = -I$(sdkroot)/usr/include/ -miphoneos-version-min=12.0 -pipe -no-cpp-precomp -isysroot $(sdkroot) -DPLATFORM_MACOSX_GNU -DPLATFORM_IOS
	# TODO: Support armv6 for old devices
	osbuilddir = $(platform)-$(detected_openhome_architecture)
	objdir = Build/Obj/$(osbuilddir)/$(build_dir)/
	platform_linkflags = -L$(sdkroot)/usr/lib/ -arch $(platform_arch)  -L$(sdkroot)/usr/lib/system
	compiler = $(toolroot)/clang -arch $(platform_arch) -isysroot $(sdkroot) -o $(objdir)
	# No support for linking Shared Objects for ARM MAC
	# link = $(devroot)/usr/bin/llvm-gcc-4.2  -pthread -Wl $(platform_linkflags)
	ar = $(toolroot)/ar rc $(objdir)
    mono_lib_dir=/Library/Frameworks/Xamarin.iOS.framework/Versions/Current/lib/mono/Xamarin.iOS
	csharpdefines = /define:IOS /r:$(mono_lib_dir)/Xamarin.iOS.dll
	no_shared_objects = yes

  dotnetFramework = net6.0-ios
  dotnetRuntime = osx-x64
endif

ifeq ($(platform),IntelMac)
	# Darwin, not ARM -> Intel Mac
	platform ?= IntelMac
	linkopts_ohNet = -Wl,-install_name,@loader_path/libohNet.dylib
	platform_cflags = -DPLATFORM_MACOSX_GNU -arch x86_64 -mmacosx-version-min=10.7
	platform_linkflags = -arch x86_64 -framework CoreFoundation -framework SystemConfiguration
	osbuilddir = Mac-x64
	openhome_architecture = x64

	objdir = Build/Obj/$(osbuilddir)/$(build_dir)/
	compiler = clang -fPIC -stdlib=libc++ -o $(objdir)
	link = clang++ -pthread -stdlib=libc++ $(platform_linkflags)
	ar = ar rc $(objdir)
	openhome_system = Mac
endif

ifneq (,$(findstring $(platform),Vanilla Linux-ppc32))
  ifeq ($(gcc4_1), yes)
    version_specific_cflags = ${CROSS_COMPILE_CFLAGS}
    version_specific_cflags_third_party = -Wno-non-virtual-dtor
    version_specific_java_cflags = -Wstrict-aliasing=0
  else
    gcc_min_ver = $(shell ${CROSS_COMPILE}gcc -dumpversion | cut -f2 -d'.')
    version_specific_cflags = $(shell if [ $(gcc_min_ver) -ge 6 ]; then echo '-Wno-psabi'; fi)
    version_specific_cflags += ${CROSS_COMPILE_CFLAGS}
    version_specific_cflags_third_party =
    version_specific_java_cflags =
  endif

  version_specific_linkflags = ${CROSS_COMPILE_LINKFLAGS}
  version_specific_library_path = ${CROSS_COMPILE_LIBRARY_PATH}
  version_specific_includes = ${CROSS_COMPILE_INCLUDES}

  # Continuing with the non-Darwin settings...
  objdir = Build/Obj/$(osdir)/$(build_dir)/
  compiler = ${CROSS_COMPILE}gcc -o $(objdir)
  link = $(version_specific_library_path) ${CROSS_COMPILE}g++ $(platform_linkflags)
  ar = $(version_specific_library_path) ${CROSS_COMPILE}ar rc $(objdir)
endif

ifeq ($(platform), Core-ppc32)
    # platform == Core1
    openhome_system = Core
    openhome_architecture = ppc32
    endian = BIG
    platform_cflags = -mcpu=403
    platform_linkflags = -mcpu=403 ${CROSS_LINKFLAGS}
    linkopts_ohNet =
    osdir = Core
    osbuilddir = Core-ppc32
    objdir = Build/Obj/$(osbuilddir)/$(build_dir)/
    native_only = yes
    compiler = ${CROSS_COMPILE}gcc -o $(objdir)
    link = ${CROSS_COMPILE}g++ $(platform_linkflags)
    ar = ${CROSS_COMPILE}ar rc $(objdir)
endif

ifeq ($(platform), Core-armv5)
    # platform == Core2
    openhome_system = Core
    openhome_architecture = armv5
    endian = LITTLE
    platform_cflags = -mcpu=arm926ej-s -Wno-psabi -fexceptions -marm -mapcs -fno-omit-frame-pointer
    platform_linkflags = -mcpu=arm926ej-s ${CROSS_LINKFLAGS}
    linkopts_ohNet =
    osdir = Core
    osbuilddir = Core-armv5
    objdir = Build/Obj/$(osbuilddir)/$(build_dir)/
    native_only = yes
    compiler = ${CROSS_COMPILE}gcc -o $(objdir)
    link = ${CROSS_COMPILE}g++ $(platform_linkflags)
    ar = ${CROSS_COMPILE}ar rc $(objdir)
endif

ifeq ($(platform), Linux-ppc32)
    # platform == Linux-ppc32
    endian = BIG
    platform_cflags = $(version_specific_cflags) -fPIC
    platform_linkflags = $(version_specific_linkflags) -pthread
    linkopts_ohNet = -Wl,-soname,libohNet.so
    osbuilddir = Posix
    osdir = Posix
endif

ifeq ($(platform), Vanilla)
	# platform == Vanilla (i.e. Kirkwood, x86 or x64)
	platform_cflags = $(version_specific_cflags) -fPIC
	platform_linkflags = $(version_specific_linkflags) -pthread
        linkopts_ohNet = -Wl,-soname,libohNet.so
	osbuilddir = Posix
	osdir = Posix
	endian ?= LITTLE
	ifeq ($(Qnap-anycpu), 1)
	    openhome_system = Qnap
	else
	    openhome_system = Linux
	endif
endif

$(info Building for system ${openhome_system} and architecture ${openhome_architecture})

# Macros used by Common.mak
native_only ?= no
managed_only ?= no
no_shared_objects ?= no
endian ?= LITTLE
cflags_base = -fexceptions -Wall $(version_specific_cflags_third_party) -pipe -D_GNU_SOURCE -D_REENTRANT -DDEFINE_$(endian)_ENDIAN -DDEFINE_TRACE $(debug_specific_cflags) -fvisibility=hidden $(platform_cflags)
cflags_third_party = $(cflags_base) -Wno-int-to-pointer-cast
ifeq ($(nocpp11), yes)
    cppflags = $(cflags_base) -Werror
else ifeq ($(platform),IntelMac)
    cppflags = $(cflags_base) -std=c++11 -Werror
else
    cppflags = $(cflags_base) -std=c++0x -D__STDC_VERSION__=199901L -Werror
endif
cflags = $(cflags_base) -Werror
depsPlatform = ${openhome_system}-${openhome_architecture}
header_install = Build/Include
inc_build = dependencies/$(depsPlatform)/ohNet-$(depsPlatform)-Release/include/ohnet
includes = -I$(inc_build)/ $(version_specific_includes)
bundle_build = Build/Bundles
osdir ?= Posix
objext = o
libprefix = lib
libext = a
sharedlibprefix = lib
ifeq ($(MACHINE), Darwin)
	sharedlibext = dylib
	dllext = dylib
else
	sharedlibext = so
	dllext = so
endif
exeext = elf
linkoutput = -o
dllprefix = lib
ifeq ($(MACHINE), Darwin)
	link_dll = $(version_specific_library_path) clang++ -pthread  $(platform_linkflags) -shared -stdlib=libc++
else
	link_dll = $(version_specific_library_path) ${CROSS_COMPILE}g++ -pthread  $(platform_linkflags) -shared -shared-libgcc
endif

csharp = mcs /nologo $(debug_csharp)

csharpdefines ?=
publicjavadir = OpenHome/Net/Bindings/Java/

ifeq ($(platform), IntelMac)
	includes_jni = -I/System/Library/Frameworks/JavaVM.framework/Headers -I/usr/include/malloc
	link_jvm = /System/Library/Frameworks/JavaVM.framework/JavaVM
	javac = /usr/bin/javac
	jar = /usr/bin/jar
else
	includes_jni = -I$(JAVA_HOME)/include -I$(JAVA_HOME)/include/linux
        ifeq ($(platform), Linux-ppc32)
            libjvm_dir ?= $(JAVA_HOME)/jre/lib/ppc/server
        else
            ifneq (,$(findstring arm,$(gcc_machine)))
                libjvm_dir ?= $(JAVA_HOME)/jre/lib/arm/server
            else
                libjvm_dir ?= $(JAVA_HOME)/jre/lib/i386/server
            endif
        endif
	link_jvm = $(libjvm_dir)/libjvm.so
	javac = $(JAVA_HOME)/bin/javac
	jar = $(JAVA_HOME)/bin/jar
endif

java_cflags = -fexceptions -Wall $(version_specific_java_cflags) -Werror -pipe -D_GNU_SOURCE -D_REENTRANT -DDEFINE_$(endian)_ENDIAN -DDEFINE_TRACE $(debug_specific_cflags) $(platform_cflags)
jarflags = cf
dirsep = /
prefix = /usr/local
installlibdir = $(prefix)/lib/ohNet
installincludedir = $(prefix)/include/ohNet
installpkgconfdir = $(prefix)/lib/pkgconfig
mkdir = mkdir -p
rmdir = rm -rf
uset4 = no

ifeq ($(Android-anycpu), 1)
build_targets_base = make_obj_dir CpProxyJavaClasses DvDeviceJavaClasses CpProxyDotNetAssemblies DvDeviceDotNetAssemblies
else
ifeq ($(managed_only), yes)
build_targets_base = make_obj_dir CpProxyDotNetAssemblies DvDeviceDotNetAssemblies
else
ifeq ($(native_only), yes)
build_targets_base = $(native_targets)
else
build_targets_base = $(all_targets)
endif
endif
endif
ifeq ($(uset4), yes)
build_targets = $(build_targets_base) tt
else
build_targets = $(build_targets_base)
endif
default : all


ifeq (,$(findstring clean,$(MAKECMDGOALS)))
# Include the rules to prepare the template engine and the macros to use it.
ifeq ($(uset4), yes)
include T4Linux.mak
endif

# Actual building of code is shared between platforms
include Common.mak

# Include the generated makefiles. Because nmake on Windows requires contortions to
# include such files and handle their non-existance, these includes have to be at
# the platform-specific level.
ifeq ($(uset4),yes)
include Generated/GenerateSourceFiles.mak
endif

include Generated/Proxies.mak
include Generated/Devices.mak

endif
include UserTargets.mak

# Following macros must be provided by each file which wraps Common.mak

make_obj_dir:
	$(mkdir) $(objdir)

copy_build_includes:
	$(mkdir) $(header_install)
	$(mkdir) $(header_install)/OpenHome
	$(mkdir) $(header_install)/OpenHome/Net
	$(mkdir) $(header_install)/OpenHome/Net/Core
	$(mkdir) $(header_install)/OpenHome/Net/C
	$(mkdir) $(header_install)/OpenHome/Net/Cpp
	$(cp) OpenHome/Net/ControlPoint/Proxies/*.h $(header_install)/OpenHome/Net/Core
	$(cp) OpenHome/Net/Device/Providers/*.h $(header_install)/OpenHome/Net/Core
	$(cp) OpenHome/Net/Bindings/C/ControlPoint/Proxies/*.h $(header_install)/OpenHome/Net/C
	$(cp) OpenHome/Net/Bindings/C/Device/Providers/*.h $(header_install)/OpenHome/Net/C
	$(cp) OpenHome/Net/Bindings/Cpp/ControlPoint/Proxies/*.h $(header_install)/OpenHome/Net/Cpp
	$(cp) OpenHome/Net/Bindings/Cpp/Device/Providers/*.h $(header_install)/OpenHome/Net/Cpp

java_packages = ohnet \
				openhome.net.controlpoint \
				openhome.net.controlpoint.proxies \
				openhome.net.core \
				org.openhome.net.device \
				org.openhome.net.test \

docs:
	rm -rf Build/Docs
	$(mkdir) Build/Docs
	$(mkdir) Build/Docs/C
	doxygen DoxyfileC
	$(mkdir) Build/Docs/CppCore
	doxygen DoxyfileCppCore
	$(mkdir) Build/Docs/CppStd
	doxygen DoxyfileCppStd
	$(mkdir) Build/Docs/Cs
	doxygen DoxyfileCs
	$(mkdir) Build/Docs/Java
	doxygen DoxyfileJava
	$(mkdir) Build/Docs/Js
	perl ./JsDoc/jsdoc.pl -d Build/Docs/Js OpenHome/Net/Bindings/Js/ControlPoint OpenHome/Net/Bindings/Js/ControlPoint/Proxies

bundle-after-build: $(build_targets)
	$(mkdir) $(bundle_build)
	python bundle_binaries.py --system $(openhome_system) --architecture $(openhome_architecture) --configuration $(openhome_configuration)
	python bundle_binaries.py --system $(openhome_system) --architecture $(openhome_architecture) --configuration $(openhome_configuration) --managed

bundle:
	$(mkdir) $(bundle_build)
	python bundle_binaries.py --system $(openhome_system) --architecture $(openhome_architecture) --configuration $(openhome_configuration)
	python bundle_binaries.py --system $(openhome_system) --architecture $(openhome_architecture) --configuration $(openhome_configuration) --managed
