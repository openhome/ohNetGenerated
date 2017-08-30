# Makefile for Windows
#

openhome_system=Windows

!if [cl 2>&1 | find "for x64" > nul] == 0
!message Detected 64-bit compiler.
openhome_architecture=x64
!elseif [cl 2>&1 | find "for 80x86" > nul] == 0
!message Detected 32-bit compiler.
openhome_architecture=x86
!elseif [cl 2>&1 | find "for x86" > nul] == 0
!message Detected 32-bit compiler.
openhome_architecture=x86
!else
!message Cannot tell if compiler is 32-bit or 64-bit. Please specify openhome_architecture=x64 or openhome_architecture=x86.
!endif

depsPlatform = Windows-$(openhome_architecture)

csharp_pcl_profile = PCLProfileNone
!if "$(windows_store_10)"=="1"
csharp_pcl_profile = PCLProfile259
!endif

!if "$(debug)"=="1"
link_flag_debug = /debug
link_flag_debug_dll = $(link_flag_debug)
debug_specific_cflags = /MTd /Z7 /Od /RTC1
debug_csharp = /define:DEBUG,$(csharp_pcl_profile) /debug+
build_dir = Debug
openhome_configuration = Debug
android_ndk_debug = 1
!else
link_flag_debug =
link_flag_debug_dll = /debug /opt:ref
debug_specific_cflags = /MT /Ox
debug_csharp = /define:$(csharp_pcl_profile) /optimize+ /debug:pdbonly
build_dir = Release
openhome_configuration = Release
android_ndk_debug = 0
!endif

!message Building for system $(openhome_system), architecture $(openhome_architecture), configuration $(openhome_configuration)

# Macros used by Common.mak
ar = lib /nologo /out:$(objdir)
cflags_third_party = $(debug_specific_cflags) /W4 /EHsc /FR$(objdir) -DDEFINE_LITTLE_ENDIAN -DDEFINE_TRACE -D_CRT_SECURE_NO_WARNINGS
cflags = $(cflags_third_party) /WX
cppflags = $(cflags)
objdirbare = Build\Obj\Windows\$(build_dir)
objdir = $(objdirbare)^\
header_install = Build\Include
inc_build = dependencies\$(depsPlatform)\ohNet-$(depsPlatform)-Release\include\ohnet
includes = -I$(inc_build)
bundle_build = Build\Bundles
osdir = Windows
objext = obj
libprefix =
libext = lib
sharedlibprefix = 
sharedlibext = lib
exeext = exe
compiler = cl /nologo /Fo$(objdir)
link = link /nologo $(link_flag_debug) /SUBSYSTEM:CONSOLE /map Ws2_32.lib Iphlpapi.lib Dbghelp.lib /incremental:no
linkoutput = /out:
dllprefix =
dllext = dll
linkopts_ohNet =
link_dll = link /nologo $(link_flag_debug_dll) /map Ws2_32.lib Iphlpapi.lib Dbghelp.lib /dll
csharp = csc /nologo /platform:anycpu
csharpdefines = 
!if "$(windows_store_10)"=="1"
portable45refs=c:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETPortable\v4.5\ 
profile259refs=$(portable45refs)Profile\Profile259\ 
portablerefs = /reference:"$(portable45refs)mscorlib.dll" /reference:"$(profile259refs)mscorlib.dll" /reference:"$(profile259refs)System.dll" /reference:"$(profile259refs)System.Core.dll" /reference:"$(portable45refs)System.Runtime.InteropServices.dll" /reference:"$(profile259refs)System.Runtime.dll" /reference:"$(profile259refs)System.Collections.dll" /reference:"$(profile259refs)Microsoft.CSharp.dll" /reference:"$(profile259refs)System.ComponentModel.dll" /reference:"$(profile259refs)System.ComponentModel.EventBasedAsync.dll" /reference:"$(profile259refs)System.Diagnostics.Contracts.dll" /reference:"$(profile259refs)System.Diagnostics.Debug.dll" /reference:"$(profile259refs)System.Diagnostics.Tools.dll"  /reference:"$(profile259refs)System.Dynamic.Runtime.dll" /reference:"$(profile259refs)System.Globalization.dll" /reference:"$(profile259refs)System.IO.dll" /reference:"$(profile259refs)System.Linq.dll" /reference:"$(profile259refs)System.Linq.Expressions.dll" /reference:"$(profile259refs)System.Linq.Queryable.dll" /reference:"$(profile259refs)System.Net.dll" /reference:"$(profile259refs)System.Net.NetworkInformation.dll" /reference:"$(profile259refs)System.Net.Primitives.dll" /reference:"$(profile259refs)System.Net.Requests.dll" /reference:"$(profile259refs)System.ObjectModel.dll" /reference:"$(profile259refs)System.Reflection.dll" /reference:"$(profile259refs)System.Reflection.Extensions.dll" /reference:"$(profile259refs)System.Reflection.Primitives.dll" /reference:"$(profile259refs)System.Resources.ResourceManager.dll" /reference:"$(profile259refs)System.Runtime.Extensions.dll" /reference:"$(profile259refs)System.Runtime.InteropServices.WindowsRuntime.dll" /reference:"$(profile259refs)System.Runtime.Serialization.dll" /reference:"$(profile259refs)System.Runtime.Serialization.Json.dll" /reference:"$(profile259refs)System.Runtime.Serialization.Primitives.dll" /reference:"$(profile259refs)System.Runtime.Serialization.Xml.dll" /reference:"$(profile259refs)System.Security.Principal.dll" /reference:"$(profile259refs)System.ServiceModel.Web.dll" /reference:"$(profile259refs)System.Text.Encoding.dll" /reference:"$(profile259refs)System.Text.Encoding.Extensions.dll" /reference:"$(profile259refs)System.Text.RegularExpressions.dll" /reference:"$(profile259refs)System.Threading.dll" /reference:"$(profile259refs)System.Threading.Tasks.dll" /reference:"$(profile259refs)System.Windows.dll" /reference:"$(profile259refs)System.Xml.dll" /reference:"$(profile259refs)System.Xml.Linq.dll" /reference:"$(profile259refs)System.Xml.ReaderWriter.dll" /reference:"$(profile259refs)System.Xml.Serialization.dll" /reference:"$(profile259refs)System.Xml.XDocument.dll" /reference:"$(profile259refs)System.Xml.XmlSerializer.dll" 
csharpdefines = /nostdlib+ $(portablerefs)
!endif
publicjavadir = OpenHome\Net\Bindings\Java^\
includes_jni = -I"$(JAVA_HOME)\include" -I"$(JAVA_HOME)\include\win32"
link_jvm = "$(JAVA_HOME)\lib\jvm.lib"
java_cflags = $(cflags)
javac =  "$(JAVA_HOME)\bin\javac.exe"
jar =  "$(JAVA_HOME)\bin\jar.exe"
jarflags = cf
android_build_dir = OpenHome/Net/Bindings/Android/libs/
dirsep = ^\
installdir = $(PROGRAMFILES)\ohNet
installlibdir = $(installdir)\lib
installincludedir = $(installdir)\include
mkdir = Scripts\mkdir.bat
rmdir = Scripts\rmdir.bat
uset4 = no

default : all

include T4Windows.mak
# Actual building of code is shared between platforms
include Common.mak

!if "$(uset4)"=="yes"
build_targets = $(all_targets) tt
!else
build_targets = $(all_targets)
!endif

!if "$(uset4)"=="yes"
!include Generated\GenerateSourceFiles.mak
!endif

!include Generated\Proxies.mak
!include Generated\Devices.mak

include UserTargets.mak

# Following macros must be provided by each file which wraps Common.mak

make_obj_dir:
	if not exist $(objdirbare) mkdir $(objdirbare)

copy_build_includes:
	if not exist $(header_install) mkdir $(header_install)
	if not exist $(header_install)\OpenHome mkdir $(header_install)\OpenHome
	if not exist $(header_install)\OpenHome\Net mkdir $(header_install)\OpenHome\Net
	if not exist $(header_install)\OpenHome\Net\Core mkdir $(header_install)\OpenHome\Net\Core
	if not exist $(header_install)\OpenHome\Net\C mkdir $(header_install)\OpenHome\Net\C
	if not exist $(header_install)\OpenHome\Net\Cpp mkdir $(header_install)\OpenHome\Net\Cpp
	copy OpenHome\Net\ControlPoint\Proxies\*.h $(header_install)\OpenHome\Net\Core > nul
	copy OpenHome\Net\Device\Providers\*.h $(header_install)\OpenHome\Net\Core > nul
	copy OpenHome\Net\Bindings\C\ControlPoint\Proxies\*.h $(header_install)\OpenHome\Net\C > nul
	copy OpenHome\Net\Bindings\C\Device\Providers\*.h $(header_install)\OpenHome\Net\C > nul
	copy OpenHome\Net\Bindings\Cpp\ControlPoint\Proxies\*.h $(header_install)\OpenHome\Net\Cpp > nul
	copy OpenHome\Net\Bindings\Cpp\Device\Providers\*.h $(header_install)\OpenHome\Net\Cpp > nul

bundle-after-build: $(all_targets)
	if not exist "$(bundle_build)" mkdir "$(bundle_build)"
	python bundle_binaries.py --system $(openhome_system) --architecture $(openhome_architecture) --configuration $(openhome_configuration)
	python bundle_binaries.py --system $(openhome_system) --architecture $(openhome_architecture) --configuration $(openhome_configuration) --managed

bundle:
	if not exist "$(bundle_build)" mkdir "$(bundle_build)"
	python bundle_binaries.py --system $(openhome_system) --architecture $(openhome_architecture) --configuration $(openhome_configuration)
	python bundle_binaries.py --system $(openhome_system) --architecture $(openhome_architecture) --configuration $(openhome_configuration) --managed
