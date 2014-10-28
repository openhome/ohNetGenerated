proxyCppCore = OpenHome$(dirsep)Net$(dirsep)ControlPoint$(dirsep)Proxies$(dirsep)
proxyC = OpenHome$(dirsep)Net$(dirsep)Bindings$(dirsep)C$(dirsep)ControlPoint$(dirsep)Proxies$(dirsep)
proxyCppStd = OpenHome$(dirsep)Net$(dirsep)Bindings$(dirsep)Cpp$(dirsep)ControlPoint$(dirsep)Proxies$(dirsep)
proxyCs = OpenHome$(dirsep)Net$(dirsep)Bindings$(dirsep)Cs$(dirsep)ControlPoint$(dirsep)Proxies$(dirsep)
proxyJava = OpenHome$(dirsep)Net$(dirsep)Bindings$(dirsep)Java$(dirsep)org$(dirsep)openhome$(dirsep)net$(dirsep)controlpoint$(dirsep)proxies$(dirsep)
proxyJs = OpenHome$(dirsep)Net$(dirsep)Bindings$(dirsep)Js$(dirsep)ControlPoint$(dirsep)Proxies$(dirsep)
deviceCppCore = OpenHome$(dirsep)Net$(dirsep)Device$(dirsep)Providers$(dirsep)
deviceCppStd = OpenHome$(dirsep)Net$(dirsep)Bindings$(dirsep)Cpp$(dirsep)Device$(dirsep)Providers$(dirsep)
deviceC = OpenHome$(dirsep)Net$(dirsep)Bindings$(dirsep)C$(dirsep)Device$(dirsep)Providers$(dirsep)
deviceCs = OpenHome$(dirsep)Net$(dirsep)Bindings$(dirsep)Cs$(dirsep)Device$(dirsep)Providers$(dirsep)
deviceJava = OpenHome$(dirsep)Net$(dirsep)Bindings$(dirsep)Java$(dirsep)org$(dirsep)openhome$(dirsep)net$(dirsep)device$(dirsep)providers$(dirsep)

depDirCs = dependencies$(dirsep)$(depsPlatform)$(dirsep)ohNet-$(depsPlatform)-Release$(dirsep)lib$(dirsep)
ohNetLibDir = dependencies$(dirsep)$(depsPlatform)$(dirsep)ohNet-$(depsPlatform)-Release$(dirsep)lib$(dirsep)

JavaAll : $(objdir)ohnet-generated.jar
$(objdir)ohnet-generated.jar : CpProxyJavaClasses DvDeviceJavaClasses
	$(jar) $(jarflags) $(objdir)ohnet-generated.jar -C $(objdir) org

Generated$(dirsep)GenerateSourceFiles.mak : $(tt) OpenHome$(dirsep)Net$(dirsep)Service$(dirsep)Services.xml OpenHome/Net/T4/Templates/UpnpMakeT4.tt
	$(mkdir) Generated
	$(t4) -o Generated$(dirsep)GenerateSourceFiles.mak OpenHome/Net/T4/Templates/UpnpMakeT4.tt -a xml:OpenHome/Net/Service/Services.xml
	@echo Attention: a makefile has been re-generated.

Generated$(dirsep)Proxies.mak : $(tt) OpenHome$(dirsep)Net$(dirsep)Service$(dirsep)Services.xml OpenHome/Net/T4/Templates/CpUpnpMakeProxies.tt
	$(mkdir) Generated
	$(t4) -o Generated$(dirsep)Proxies.mak OpenHome/Net/T4/Templates/CpUpnpMakeProxies.tt -a xml:OpenHome/Net/Service/Services.xml
	@echo Attention: a makefile has been re-generated.

Generated$(dirsep)Devices.mak : $(tt) OpenHome$(dirsep)Net$(dirsep)Service$(dirsep)Services.xml OpenHome/Net/T4/Templates/DvUpnpMakeDevices.tt
	$(mkdir) Generated
	$(t4) -o Generated$(dirsep)Devices.mak OpenHome/Net/T4/Templates/DvUpnpMakeDevices.tt -a xml:OpenHome/Net/Service/Services.xml
	@echo Attention: a makefile has been re-generated.

native_targets = make_obj_dir copy_build_includes proxies devices

all_targets = $(native_targets) CpProxyDotNetAssemblies DvDeviceDotNetAssemblies
