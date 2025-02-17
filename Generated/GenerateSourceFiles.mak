# Auto-generated file.  DO NOT EDIT DIRECTLY
# Update UpnpMakeT4.tt and run 
#    make generate-makefiles
# to apply any updates

GenAll: AllCp AllDv

AllCp: CpCppCore CpCppStd CpC CpCs CpJava CpJs

AllDv: DvCppCore DvCppStd DvC DvCs DvJava


CpCppCore:   $(proxyCppCore)CpUpnpOrgAVTransport1.cpp $(proxyCppCore)CpUpnpOrgAVTransport2.cpp $(proxyCppCore)CpUpnpOrgConnectionManager1.cpp $(proxyCppCore)CpUpnpOrgConnectionManager2.cpp $(proxyCppCore)CpUpnpOrgContentDirectory1.cpp $(proxyCppCore)CpUpnpOrgContentDirectory2.cpp $(proxyCppCore)CpUpnpOrgContentDirectory3.cpp $(proxyCppCore)CpUpnpOrgRenderingControl1.cpp $(proxyCppCore)CpUpnpOrgRenderingControl2.cpp $(proxyCppCore)CpUpnpOrgScheduledRecording1.cpp $(proxyCppCore)CpUpnpOrgScheduledRecording2.cpp $(proxyCppCore)CpUpnpOrgSwitchPower1.cpp $(proxyCppCore)CpUpnpOrgDimming1.cpp $(proxyCppCore)CpAvOpenhomeOrgConfigApp1.cpp $(proxyCppCore)CpAvOpenhomeOrgCredentials1.cpp $(proxyCppCore)CpAvOpenhomeOrgExakt1.cpp $(proxyCppCore)CpAvOpenhomeOrgExakt2.cpp $(proxyCppCore)CpAvOpenhomeOrgExakt3.cpp $(proxyCppCore)CpAvOpenhomeOrgExakt4.cpp $(proxyCppCore)CpAvOpenhomeOrgExakt5.cpp $(proxyCppCore)CpAvOpenhomeOrgInfo1.cpp $(proxyCppCore)CpAvOpenhomeOrgTime1.cpp $(proxyCppCore)CpAvOpenhomeOrgPlaylist1.cpp $(proxyCppCore)CpAvOpenhomeOrgVolume1.cpp $(proxyCppCore)CpAvOpenhomeOrgVolume2.cpp $(proxyCppCore)CpAvOpenhomeOrgVolume3.cpp $(proxyCppCore)CpAvOpenhomeOrgVolume4.cpp $(proxyCppCore)CpAvOpenhomeOrgProduct1.cpp $(proxyCppCore)CpAvOpenhomeOrgProduct2.cpp $(proxyCppCore)CpAvOpenhomeOrgProduct3.cpp $(proxyCppCore)CpAvOpenhomeOrgProduct4.cpp $(proxyCppCore)CpAvOpenhomeOrgTransport1.cpp $(proxyCppCore)CpAvOpenhomeOrgRadio1.cpp $(proxyCppCore)CpAvOpenhomeOrgRadio2.cpp $(proxyCppCore)CpAvOpenhomeOrgReceiver1.cpp $(proxyCppCore)CpAvOpenhomeOrgSender1.cpp $(proxyCppCore)CpAvOpenhomeOrgSender2.cpp $(proxyCppCore)CpAvOpenhomeOrgDebug1.cpp $(proxyCppCore)CpAvOpenhomeOrgDebug2.cpp $(proxyCppCore)CpAvOpenhomeOrgPins1.cpp $(proxyCppCore)CpAvOpenhomeOrgPlaylistManager1.cpp $(proxyCppCore)CpAvOpenhomeOrgMediaServer1.cpp $(proxyCppCore)CpAvOpenhomeOrgNetworkMonitor1.cpp $(proxyCppCore)CpOpenhomeOrgTestBasic1.cpp $(proxyCppCore)CpOpenhomeOrgTestLights1.cpp $(proxyCppCore)CpOpenhomeOrgSubscriptionLongPoll1.cpp $(proxyCppCore)CpAvOpenhomeOrgOAuth1.cpp $(proxyCppCore)CpAvOpenhomeOrgReaction1.cpp $(proxyCppCore)CpLinnCoUkFlash1.cpp $(proxyCppCore)CpLinnCoUkVolkano1.cpp $(proxyCppCore)CpLinnCoUkPrivacy1.cpp $(proxyCppCore)CpLinnCoUkExaktInputs1.cpp $(proxyCppCore)CpLinnCoUkCloud1.cpp $(proxyCppCore)CpLinnCoUkCloud2.cpp $(proxyCppCore)CpLinnCoUkUpdate1.cpp $(proxyCppCore)CpLinnCoUkUpdate2.cpp $(proxyCppCore)CpLinnCoUkUpdate3.cpp $(proxyCppCore)CpLinnCoUkConfiguration1.cpp $(proxyCppCore)CpLinnCoUkLipSync1.cpp $(proxyCppCore)CpLinnCoUkExakt21.cpp $(proxyCppCore)CpLinnCoUkExakt22.cpp $(proxyCppCore)CpLinnCoUkWifi1.cpp $(proxyCppCore)CpLinnCoUkZoneReceiver1.cpp $(proxyCppCore)CpLinnCoUkZones1.cpp
$(proxyCppCore)CpUpnpOrgAVTransport1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml
	echo CpUpnpOrgAVTransport1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml" --output=$(proxyCppCore) --domain=upnp.org --type=AVTransport --version=1
$(proxyCppCore)CpUpnpOrgAVTransport2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml
	echo CpUpnpOrgAVTransport2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml" --output=$(proxyCppCore) --domain=upnp.org --type=AVTransport --version=2
$(proxyCppCore)CpUpnpOrgConnectionManager1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml
	echo CpUpnpOrgConnectionManager1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml" --output=$(proxyCppCore) --domain=upnp.org --type=ConnectionManager --version=1
$(proxyCppCore)CpUpnpOrgConnectionManager2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml
	echo CpUpnpOrgConnectionManager2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml" --output=$(proxyCppCore) --domain=upnp.org --type=ConnectionManager --version=2
$(proxyCppCore)CpUpnpOrgContentDirectory1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml
	echo CpUpnpOrgContentDirectory1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml" --output=$(proxyCppCore) --domain=upnp.org --type=ContentDirectory --version=1
$(proxyCppCore)CpUpnpOrgContentDirectory2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml
	echo CpUpnpOrgContentDirectory2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml" --output=$(proxyCppCore) --domain=upnp.org --type=ContentDirectory --version=2
$(proxyCppCore)CpUpnpOrgContentDirectory3.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml
	echo CpUpnpOrgContentDirectory3.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml" --output=$(proxyCppCore) --domain=upnp.org --type=ContentDirectory --version=3
$(proxyCppCore)CpUpnpOrgRenderingControl1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml
	echo CpUpnpOrgRenderingControl1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml" --output=$(proxyCppCore) --domain=upnp.org --type=RenderingControl --version=1
$(proxyCppCore)CpUpnpOrgRenderingControl2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml
	echo CpUpnpOrgRenderingControl2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml" --output=$(proxyCppCore) --domain=upnp.org --type=RenderingControl --version=2
$(proxyCppCore)CpUpnpOrgScheduledRecording1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml
	echo CpUpnpOrgScheduledRecording1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml" --output=$(proxyCppCore) --domain=upnp.org --type=ScheduledRecording --version=1
$(proxyCppCore)CpUpnpOrgScheduledRecording2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml
	echo CpUpnpOrgScheduledRecording2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml" --output=$(proxyCppCore) --domain=upnp.org --type=ScheduledRecording --version=2
$(proxyCppCore)CpUpnpOrgSwitchPower1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml
	echo CpUpnpOrgSwitchPower1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml" --output=$(proxyCppCore) --domain=upnp.org --type=SwitchPower --version=1
$(proxyCppCore)CpUpnpOrgDimming1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml
	echo CpUpnpOrgDimming1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml" --output=$(proxyCppCore) --domain=upnp.org --type=Dimming --version=1
$(proxyCppCore)CpAvOpenhomeOrgConfigApp1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml
	echo CpAvOpenhomeOrgConfigApp1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=ConfigApp --version=1
$(proxyCppCore)CpAvOpenhomeOrgCredentials1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml
	echo CpAvOpenhomeOrgCredentials1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Credentials --version=1
$(proxyCppCore)CpAvOpenhomeOrgExakt1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml
	echo CpAvOpenhomeOrgExakt1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Exakt --version=1
$(proxyCppCore)CpAvOpenhomeOrgExakt2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml
	echo CpAvOpenhomeOrgExakt2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Exakt --version=2
$(proxyCppCore)CpAvOpenhomeOrgExakt3.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml
	echo CpAvOpenhomeOrgExakt3.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Exakt --version=3
$(proxyCppCore)CpAvOpenhomeOrgExakt4.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml
	echo CpAvOpenhomeOrgExakt4.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Exakt --version=4
$(proxyCppCore)CpAvOpenhomeOrgExakt5.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml
	echo CpAvOpenhomeOrgExakt5.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Exakt --version=5
$(proxyCppCore)CpAvOpenhomeOrgInfo1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Info1.xml
	echo CpAvOpenhomeOrgInfo1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Info1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Info --version=1
$(proxyCppCore)CpAvOpenhomeOrgTime1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Time1.xml
	echo CpAvOpenhomeOrgTime1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Time1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Time --version=1
$(proxyCppCore)CpAvOpenhomeOrgPlaylist1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml
	echo CpAvOpenhomeOrgPlaylist1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Playlist --version=1
$(proxyCppCore)CpAvOpenhomeOrgVolume1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml
	echo CpAvOpenhomeOrgVolume1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Volume --version=1
$(proxyCppCore)CpAvOpenhomeOrgVolume2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml
	echo CpAvOpenhomeOrgVolume2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Volume --version=2
$(proxyCppCore)CpAvOpenhomeOrgVolume3.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml
	echo CpAvOpenhomeOrgVolume3.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Volume --version=3
$(proxyCppCore)CpAvOpenhomeOrgVolume4.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml
	echo CpAvOpenhomeOrgVolume4.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Volume --version=4
$(proxyCppCore)CpAvOpenhomeOrgProduct1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product1.xml
	echo CpAvOpenhomeOrgProduct1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Product --version=1
$(proxyCppCore)CpAvOpenhomeOrgProduct2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product2.xml
	echo CpAvOpenhomeOrgProduct2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product2.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Product --version=2
$(proxyCppCore)CpAvOpenhomeOrgProduct3.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product3.xml
	echo CpAvOpenhomeOrgProduct3.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product3.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Product --version=3
$(proxyCppCore)CpAvOpenhomeOrgProduct4.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product4.xml
	echo CpAvOpenhomeOrgProduct4.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product4.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Product --version=4
$(proxyCppCore)CpAvOpenhomeOrgTransport1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml
	echo CpAvOpenhomeOrgTransport1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Transport --version=1
$(proxyCppCore)CpAvOpenhomeOrgRadio1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml
	echo CpAvOpenhomeOrgRadio1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Radio --version=1
$(proxyCppCore)CpAvOpenhomeOrgRadio2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml
	echo CpAvOpenhomeOrgRadio2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Radio --version=2
$(proxyCppCore)CpAvOpenhomeOrgReceiver1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml
	echo CpAvOpenhomeOrgReceiver1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Receiver --version=1
$(proxyCppCore)CpAvOpenhomeOrgSender1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml
	echo CpAvOpenhomeOrgSender1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Sender --version=1
$(proxyCppCore)CpAvOpenhomeOrgSender2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml
	echo CpAvOpenhomeOrgSender2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Sender --version=2
$(proxyCppCore)CpAvOpenhomeOrgDebug1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml
	echo CpAvOpenhomeOrgDebug1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Debug --version=1
$(proxyCppCore)CpAvOpenhomeOrgDebug2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml
	echo CpAvOpenhomeOrgDebug2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Debug --version=2
$(proxyCppCore)CpAvOpenhomeOrgPins1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml
	echo CpAvOpenhomeOrgPins1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Pins --version=1
$(proxyCppCore)CpAvOpenhomeOrgPlaylistManager1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml
	echo CpAvOpenhomeOrgPlaylistManager1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=PlaylistManager --version=1
$(proxyCppCore)CpAvOpenhomeOrgMediaServer1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml
	echo CpAvOpenhomeOrgMediaServer1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=MediaServer --version=1
$(proxyCppCore)CpAvOpenhomeOrgNetworkMonitor1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml
	echo CpAvOpenhomeOrgNetworkMonitor1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=NetworkMonitor --version=1
$(proxyCppCore)CpOpenhomeOrgTestBasic1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml
	echo CpOpenhomeOrgTestBasic1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml" --output=$(proxyCppCore) --domain=openhome.org --type=TestBasic --version=1
$(proxyCppCore)CpOpenhomeOrgTestLights1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml
	echo CpOpenhomeOrgTestLights1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml" --output=$(proxyCppCore) --domain=openhome.org --type=TestLights --version=1
$(proxyCppCore)CpOpenhomeOrgSubscriptionLongPoll1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml
	echo CpOpenhomeOrgSubscriptionLongPoll1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml" --output=$(proxyCppCore) --domain=openhome.org --type=SubscriptionLongPoll --version=1
$(proxyCppCore)CpAvOpenhomeOrgOAuth1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml
	echo CpAvOpenhomeOrgOAuth1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=OAuth --version=1
$(proxyCppCore)CpAvOpenhomeOrgReaction1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml
	echo CpAvOpenhomeOrgReaction1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml" --output=$(proxyCppCore) --domain=av.openhome.org --type=Reaction --version=1
$(proxyCppCore)CpLinnCoUkFlash1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Flash1.xml
	echo CpLinnCoUkFlash1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Flash1.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Flash --version=1
$(proxyCppCore)CpLinnCoUkVolkano1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Volkano1.xml
	echo CpLinnCoUkVolkano1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Volkano1.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Volkano --version=1
$(proxyCppCore)CpLinnCoUkPrivacy1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Privacy1.xml
	echo CpLinnCoUkPrivacy1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Privacy1.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Privacy --version=1
$(proxyCppCore)CpLinnCoUkExaktInputs1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml
	echo CpLinnCoUkExaktInputs1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=ExaktInputs --version=1
$(proxyCppCore)CpLinnCoUkCloud1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Cloud1.xml
	echo CpLinnCoUkCloud1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud1.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Cloud --version=1
$(proxyCppCore)CpLinnCoUkCloud2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Cloud2.xml
	echo CpLinnCoUkCloud2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud2.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Cloud --version=2
$(proxyCppCore)CpLinnCoUkUpdate1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Update1.xml
	echo CpLinnCoUkUpdate1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update1.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Update --version=1
$(proxyCppCore)CpLinnCoUkUpdate2.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Update2.xml
	echo CpLinnCoUkUpdate2.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update2.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Update --version=2
$(proxyCppCore)CpLinnCoUkUpdate3.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Update3.xml
	echo CpLinnCoUkUpdate3.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update3.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Update --version=3
$(proxyCppCore)CpLinnCoUkConfiguration1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Configuration1.xml
	echo CpLinnCoUkConfiguration1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Configuration1.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Configuration --version=1
$(proxyCppCore)CpLinnCoUkLipSync1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/LipSync1.xml
	echo CpLinnCoUkLipSync1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/LipSync1.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=LipSync --version=1
$(proxyCppCore)CpLinnCoUkExakt21.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Exakt21.xml
	echo CpLinnCoUkExakt21.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt21.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Exakt2 --version=1
$(proxyCppCore)CpLinnCoUkExakt22.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Exakt22.xml
	echo CpLinnCoUkExakt22.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt22.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Exakt2 --version=2
$(proxyCppCore)CpLinnCoUkWifi1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Wifi1.xml
	echo CpLinnCoUkWifi1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Wifi1.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Wifi --version=1
$(proxyCppCore)CpLinnCoUkZoneReceiver1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml
	echo CpLinnCoUkZoneReceiver1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=ZoneReceiver --version=1
$(proxyCppCore)CpLinnCoUkZones1.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppBufferSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Zones1.xml
	echo CpLinnCoUkZones1.cpp
	$(ohNetGen) --language=cppcore --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Zones1.xml" --output=$(proxyCppCore) --domain=linn.co.uk --type=Zones --version=1

CpCppStd:   $(proxyCppStd)CpUpnpOrgAVTransport1Std.cpp $(proxyCppStd)CpUpnpOrgAVTransport2Std.cpp $(proxyCppStd)CpUpnpOrgConnectionManager1Std.cpp $(proxyCppStd)CpUpnpOrgConnectionManager2Std.cpp $(proxyCppStd)CpUpnpOrgContentDirectory1Std.cpp $(proxyCppStd)CpUpnpOrgContentDirectory2Std.cpp $(proxyCppStd)CpUpnpOrgContentDirectory3Std.cpp $(proxyCppStd)CpUpnpOrgRenderingControl1Std.cpp $(proxyCppStd)CpUpnpOrgRenderingControl2Std.cpp $(proxyCppStd)CpUpnpOrgScheduledRecording1Std.cpp $(proxyCppStd)CpUpnpOrgScheduledRecording2Std.cpp $(proxyCppStd)CpUpnpOrgSwitchPower1Std.cpp $(proxyCppStd)CpUpnpOrgDimming1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgConfigApp1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgCredentials1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgExakt1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgExakt2Std.cpp $(proxyCppStd)CpAvOpenhomeOrgExakt3Std.cpp $(proxyCppStd)CpAvOpenhomeOrgExakt4Std.cpp $(proxyCppStd)CpAvOpenhomeOrgExakt5Std.cpp $(proxyCppStd)CpAvOpenhomeOrgInfo1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgTime1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgPlaylist1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgVolume1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgVolume2Std.cpp $(proxyCppStd)CpAvOpenhomeOrgVolume3Std.cpp $(proxyCppStd)CpAvOpenhomeOrgVolume4Std.cpp $(proxyCppStd)CpAvOpenhomeOrgProduct1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgProduct2Std.cpp $(proxyCppStd)CpAvOpenhomeOrgProduct3Std.cpp $(proxyCppStd)CpAvOpenhomeOrgProduct4Std.cpp $(proxyCppStd)CpAvOpenhomeOrgTransport1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgRadio1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgRadio2Std.cpp $(proxyCppStd)CpAvOpenhomeOrgReceiver1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgSender1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgSender2Std.cpp $(proxyCppStd)CpAvOpenhomeOrgDebug1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgDebug2Std.cpp $(proxyCppStd)CpAvOpenhomeOrgPins1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgPlaylistManager1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgMediaServer1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgNetworkMonitor1Std.cpp $(proxyCppStd)CpOpenhomeOrgTestBasic1Std.cpp $(proxyCppStd)CpOpenhomeOrgTestLights1Std.cpp $(proxyCppStd)CpOpenhomeOrgSubscriptionLongPoll1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgOAuth1Std.cpp $(proxyCppStd)CpAvOpenhomeOrgReaction1Std.cpp $(proxyCppStd)CpLinnCoUkFlash1Std.cpp $(proxyCppStd)CpLinnCoUkVolkano1Std.cpp $(proxyCppStd)CpLinnCoUkPrivacy1Std.cpp $(proxyCppStd)CpLinnCoUkExaktInputs1Std.cpp $(proxyCppStd)CpLinnCoUkCloud1Std.cpp $(proxyCppStd)CpLinnCoUkCloud2Std.cpp $(proxyCppStd)CpLinnCoUkUpdate1Std.cpp $(proxyCppStd)CpLinnCoUkUpdate2Std.cpp $(proxyCppStd)CpLinnCoUkUpdate3Std.cpp $(proxyCppStd)CpLinnCoUkConfiguration1Std.cpp $(proxyCppStd)CpLinnCoUkLipSync1Std.cpp $(proxyCppStd)CpLinnCoUkExakt21Std.cpp $(proxyCppStd)CpLinnCoUkExakt22Std.cpp $(proxyCppStd)CpLinnCoUkWifi1Std.cpp $(proxyCppStd)CpLinnCoUkZoneReceiver1Std.cpp $(proxyCppStd)CpLinnCoUkZones1Std.cpp
$(proxyCppStd)CpUpnpOrgAVTransport1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml
	echo CpUpnpOrgAVTransport1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml" --output=$(proxyCppStd) --domain=upnp.org --type=AVTransport --version=1
$(proxyCppStd)CpUpnpOrgAVTransport2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml
	echo CpUpnpOrgAVTransport2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml" --output=$(proxyCppStd) --domain=upnp.org --type=AVTransport --version=2
$(proxyCppStd)CpUpnpOrgConnectionManager1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml
	echo CpUpnpOrgConnectionManager1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml" --output=$(proxyCppStd) --domain=upnp.org --type=ConnectionManager --version=1
$(proxyCppStd)CpUpnpOrgConnectionManager2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml
	echo CpUpnpOrgConnectionManager2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml" --output=$(proxyCppStd) --domain=upnp.org --type=ConnectionManager --version=2
$(proxyCppStd)CpUpnpOrgContentDirectory1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml
	echo CpUpnpOrgContentDirectory1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml" --output=$(proxyCppStd) --domain=upnp.org --type=ContentDirectory --version=1
$(proxyCppStd)CpUpnpOrgContentDirectory2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml
	echo CpUpnpOrgContentDirectory2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml" --output=$(proxyCppStd) --domain=upnp.org --type=ContentDirectory --version=2
$(proxyCppStd)CpUpnpOrgContentDirectory3Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml
	echo CpUpnpOrgContentDirectory3Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml" --output=$(proxyCppStd) --domain=upnp.org --type=ContentDirectory --version=3
$(proxyCppStd)CpUpnpOrgRenderingControl1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml
	echo CpUpnpOrgRenderingControl1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml" --output=$(proxyCppStd) --domain=upnp.org --type=RenderingControl --version=1
$(proxyCppStd)CpUpnpOrgRenderingControl2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml
	echo CpUpnpOrgRenderingControl2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml" --output=$(proxyCppStd) --domain=upnp.org --type=RenderingControl --version=2
$(proxyCppStd)CpUpnpOrgScheduledRecording1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml
	echo CpUpnpOrgScheduledRecording1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml" --output=$(proxyCppStd) --domain=upnp.org --type=ScheduledRecording --version=1
$(proxyCppStd)CpUpnpOrgScheduledRecording2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml
	echo CpUpnpOrgScheduledRecording2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml" --output=$(proxyCppStd) --domain=upnp.org --type=ScheduledRecording --version=2
$(proxyCppStd)CpUpnpOrgSwitchPower1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml
	echo CpUpnpOrgSwitchPower1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml" --output=$(proxyCppStd) --domain=upnp.org --type=SwitchPower --version=1
$(proxyCppStd)CpUpnpOrgDimming1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml
	echo CpUpnpOrgDimming1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml" --output=$(proxyCppStd) --domain=upnp.org --type=Dimming --version=1
$(proxyCppStd)CpAvOpenhomeOrgConfigApp1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml
	echo CpAvOpenhomeOrgConfigApp1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=ConfigApp --version=1
$(proxyCppStd)CpAvOpenhomeOrgCredentials1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml
	echo CpAvOpenhomeOrgCredentials1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Credentials --version=1
$(proxyCppStd)CpAvOpenhomeOrgExakt1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml
	echo CpAvOpenhomeOrgExakt1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Exakt --version=1
$(proxyCppStd)CpAvOpenhomeOrgExakt2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml
	echo CpAvOpenhomeOrgExakt2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Exakt --version=2
$(proxyCppStd)CpAvOpenhomeOrgExakt3Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml
	echo CpAvOpenhomeOrgExakt3Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Exakt --version=3
$(proxyCppStd)CpAvOpenhomeOrgExakt4Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml
	echo CpAvOpenhomeOrgExakt4Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Exakt --version=4
$(proxyCppStd)CpAvOpenhomeOrgExakt5Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml
	echo CpAvOpenhomeOrgExakt5Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Exakt --version=5
$(proxyCppStd)CpAvOpenhomeOrgInfo1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Info1.xml
	echo CpAvOpenhomeOrgInfo1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Info1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Info --version=1
$(proxyCppStd)CpAvOpenhomeOrgTime1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Time1.xml
	echo CpAvOpenhomeOrgTime1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Time1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Time --version=1
$(proxyCppStd)CpAvOpenhomeOrgPlaylist1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml
	echo CpAvOpenhomeOrgPlaylist1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Playlist --version=1
$(proxyCppStd)CpAvOpenhomeOrgVolume1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml
	echo CpAvOpenhomeOrgVolume1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Volume --version=1
$(proxyCppStd)CpAvOpenhomeOrgVolume2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml
	echo CpAvOpenhomeOrgVolume2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Volume --version=2
$(proxyCppStd)CpAvOpenhomeOrgVolume3Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml
	echo CpAvOpenhomeOrgVolume3Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Volume --version=3
$(proxyCppStd)CpAvOpenhomeOrgVolume4Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml
	echo CpAvOpenhomeOrgVolume4Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Volume --version=4
$(proxyCppStd)CpAvOpenhomeOrgProduct1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product1.xml
	echo CpAvOpenhomeOrgProduct1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Product --version=1
$(proxyCppStd)CpAvOpenhomeOrgProduct2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product2.xml
	echo CpAvOpenhomeOrgProduct2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product2.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Product --version=2
$(proxyCppStd)CpAvOpenhomeOrgProduct3Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product3.xml
	echo CpAvOpenhomeOrgProduct3Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product3.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Product --version=3
$(proxyCppStd)CpAvOpenhomeOrgProduct4Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product4.xml
	echo CpAvOpenhomeOrgProduct4Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product4.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Product --version=4
$(proxyCppStd)CpAvOpenhomeOrgTransport1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml
	echo CpAvOpenhomeOrgTransport1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Transport --version=1
$(proxyCppStd)CpAvOpenhomeOrgRadio1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml
	echo CpAvOpenhomeOrgRadio1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Radio --version=1
$(proxyCppStd)CpAvOpenhomeOrgRadio2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml
	echo CpAvOpenhomeOrgRadio2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Radio --version=2
$(proxyCppStd)CpAvOpenhomeOrgReceiver1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml
	echo CpAvOpenhomeOrgReceiver1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Receiver --version=1
$(proxyCppStd)CpAvOpenhomeOrgSender1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml
	echo CpAvOpenhomeOrgSender1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Sender --version=1
$(proxyCppStd)CpAvOpenhomeOrgSender2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml
	echo CpAvOpenhomeOrgSender2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Sender --version=2
$(proxyCppStd)CpAvOpenhomeOrgDebug1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml
	echo CpAvOpenhomeOrgDebug1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Debug --version=1
$(proxyCppStd)CpAvOpenhomeOrgDebug2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml
	echo CpAvOpenhomeOrgDebug2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Debug --version=2
$(proxyCppStd)CpAvOpenhomeOrgPins1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml
	echo CpAvOpenhomeOrgPins1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Pins --version=1
$(proxyCppStd)CpAvOpenhomeOrgPlaylistManager1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml
	echo CpAvOpenhomeOrgPlaylistManager1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=PlaylistManager --version=1
$(proxyCppStd)CpAvOpenhomeOrgMediaServer1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml
	echo CpAvOpenhomeOrgMediaServer1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=MediaServer --version=1
$(proxyCppStd)CpAvOpenhomeOrgNetworkMonitor1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml
	echo CpAvOpenhomeOrgNetworkMonitor1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=NetworkMonitor --version=1
$(proxyCppStd)CpOpenhomeOrgTestBasic1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml
	echo CpOpenhomeOrgTestBasic1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml" --output=$(proxyCppStd) --domain=openhome.org --type=TestBasic --version=1
$(proxyCppStd)CpOpenhomeOrgTestLights1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml
	echo CpOpenhomeOrgTestLights1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml" --output=$(proxyCppStd) --domain=openhome.org --type=TestLights --version=1
$(proxyCppStd)CpOpenhomeOrgSubscriptionLongPoll1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml
	echo CpOpenhomeOrgSubscriptionLongPoll1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml" --output=$(proxyCppStd) --domain=openhome.org --type=SubscriptionLongPoll --version=1
$(proxyCppStd)CpAvOpenhomeOrgOAuth1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml
	echo CpAvOpenhomeOrgOAuth1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=OAuth --version=1
$(proxyCppStd)CpAvOpenhomeOrgReaction1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml
	echo CpAvOpenhomeOrgReaction1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml" --output=$(proxyCppStd) --domain=av.openhome.org --type=Reaction --version=1
$(proxyCppStd)CpLinnCoUkFlash1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Flash1.xml
	echo CpLinnCoUkFlash1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Flash1.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Flash --version=1
$(proxyCppStd)CpLinnCoUkVolkano1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Volkano1.xml
	echo CpLinnCoUkVolkano1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Volkano1.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Volkano --version=1
$(proxyCppStd)CpLinnCoUkPrivacy1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Privacy1.xml
	echo CpLinnCoUkPrivacy1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Privacy1.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Privacy --version=1
$(proxyCppStd)CpLinnCoUkExaktInputs1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml
	echo CpLinnCoUkExaktInputs1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=ExaktInputs --version=1
$(proxyCppStd)CpLinnCoUkCloud1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Cloud1.xml
	echo CpLinnCoUkCloud1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud1.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Cloud --version=1
$(proxyCppStd)CpLinnCoUkCloud2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Cloud2.xml
	echo CpLinnCoUkCloud2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud2.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Cloud --version=2
$(proxyCppStd)CpLinnCoUkUpdate1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Update1.xml
	echo CpLinnCoUkUpdate1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update1.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Update --version=1
$(proxyCppStd)CpLinnCoUkUpdate2Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Update2.xml
	echo CpLinnCoUkUpdate2Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update2.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Update --version=2
$(proxyCppStd)CpLinnCoUkUpdate3Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Update3.xml
	echo CpLinnCoUkUpdate3Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update3.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Update --version=3
$(proxyCppStd)CpLinnCoUkConfiguration1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Configuration1.xml
	echo CpLinnCoUkConfiguration1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Configuration1.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Configuration --version=1
$(proxyCppStd)CpLinnCoUkLipSync1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/LipSync1.xml
	echo CpLinnCoUkLipSync1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/LipSync1.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=LipSync --version=1
$(proxyCppStd)CpLinnCoUkExakt21Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Exakt21.xml
	echo CpLinnCoUkExakt21Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt21.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Exakt2 --version=1
$(proxyCppStd)CpLinnCoUkExakt22Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Exakt22.xml
	echo CpLinnCoUkExakt22Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt22.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Exakt2 --version=2
$(proxyCppStd)CpLinnCoUkWifi1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Wifi1.xml
	echo CpLinnCoUkWifi1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Wifi1.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Wifi --version=1
$(proxyCppStd)CpLinnCoUkZoneReceiver1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml
	echo CpLinnCoUkZoneReceiver1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=ZoneReceiver --version=1
$(proxyCppStd)CpLinnCoUkZones1Std.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCppStringSource.tt OpenHome/Net/T4/Templates/CpUpnpCppHeader.tt OpenHome/Net/Service/Upnp/Linn/Zones1.xml
	echo CpLinnCoUkZones1Std.cpp
	$(ohNetGen) --language=cpp --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Zones1.xml" --output=$(proxyCppStd) --domain=linn.co.uk --type=Zones --version=1

CpC:   $(proxyC)CpUpnpOrgAVTransport1C.cpp $(proxyC)CpUpnpOrgAVTransport2C.cpp $(proxyC)CpUpnpOrgConnectionManager1C.cpp $(proxyC)CpUpnpOrgConnectionManager2C.cpp $(proxyC)CpUpnpOrgContentDirectory1C.cpp $(proxyC)CpUpnpOrgContentDirectory2C.cpp $(proxyC)CpUpnpOrgContentDirectory3C.cpp $(proxyC)CpUpnpOrgRenderingControl1C.cpp $(proxyC)CpUpnpOrgRenderingControl2C.cpp $(proxyC)CpUpnpOrgScheduledRecording1C.cpp $(proxyC)CpUpnpOrgScheduledRecording2C.cpp $(proxyC)CpUpnpOrgSwitchPower1C.cpp $(proxyC)CpUpnpOrgDimming1C.cpp $(proxyC)CpAvOpenhomeOrgConfigApp1C.cpp $(proxyC)CpAvOpenhomeOrgCredentials1C.cpp $(proxyC)CpAvOpenhomeOrgExakt1C.cpp $(proxyC)CpAvOpenhomeOrgExakt2C.cpp $(proxyC)CpAvOpenhomeOrgExakt3C.cpp $(proxyC)CpAvOpenhomeOrgExakt4C.cpp $(proxyC)CpAvOpenhomeOrgExakt5C.cpp $(proxyC)CpAvOpenhomeOrgInfo1C.cpp $(proxyC)CpAvOpenhomeOrgTime1C.cpp $(proxyC)CpAvOpenhomeOrgPlaylist1C.cpp $(proxyC)CpAvOpenhomeOrgVolume1C.cpp $(proxyC)CpAvOpenhomeOrgVolume2C.cpp $(proxyC)CpAvOpenhomeOrgVolume3C.cpp $(proxyC)CpAvOpenhomeOrgVolume4C.cpp $(proxyC)CpAvOpenhomeOrgProduct1C.cpp $(proxyC)CpAvOpenhomeOrgProduct2C.cpp $(proxyC)CpAvOpenhomeOrgProduct3C.cpp $(proxyC)CpAvOpenhomeOrgProduct4C.cpp $(proxyC)CpAvOpenhomeOrgTransport1C.cpp $(proxyC)CpAvOpenhomeOrgRadio1C.cpp $(proxyC)CpAvOpenhomeOrgRadio2C.cpp $(proxyC)CpAvOpenhomeOrgReceiver1C.cpp $(proxyC)CpAvOpenhomeOrgSender1C.cpp $(proxyC)CpAvOpenhomeOrgSender2C.cpp $(proxyC)CpAvOpenhomeOrgDebug1C.cpp $(proxyC)CpAvOpenhomeOrgDebug2C.cpp $(proxyC)CpAvOpenhomeOrgPins1C.cpp $(proxyC)CpAvOpenhomeOrgPlaylistManager1C.cpp $(proxyC)CpAvOpenhomeOrgMediaServer1C.cpp $(proxyC)CpAvOpenhomeOrgNetworkMonitor1C.cpp $(proxyC)CpOpenhomeOrgTestBasic1C.cpp $(proxyC)CpOpenhomeOrgTestLights1C.cpp $(proxyC)CpOpenhomeOrgSubscriptionLongPoll1C.cpp $(proxyC)CpAvOpenhomeOrgOAuth1C.cpp $(proxyC)CpAvOpenhomeOrgReaction1C.cpp $(proxyC)CpLinnCoUkFlash1C.cpp $(proxyC)CpLinnCoUkVolkano1C.cpp $(proxyC)CpLinnCoUkPrivacy1C.cpp $(proxyC)CpLinnCoUkExaktInputs1C.cpp $(proxyC)CpLinnCoUkCloud1C.cpp $(proxyC)CpLinnCoUkCloud2C.cpp $(proxyC)CpLinnCoUkUpdate1C.cpp $(proxyC)CpLinnCoUkUpdate2C.cpp $(proxyC)CpLinnCoUkUpdate3C.cpp $(proxyC)CpLinnCoUkConfiguration1C.cpp $(proxyC)CpLinnCoUkLipSync1C.cpp $(proxyC)CpLinnCoUkExakt21C.cpp $(proxyC)CpLinnCoUkExakt22C.cpp $(proxyC)CpLinnCoUkWifi1C.cpp $(proxyC)CpLinnCoUkZoneReceiver1C.cpp $(proxyC)CpLinnCoUkZones1C.cpp
$(proxyC)CpUpnpOrgAVTransport1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml
	echo CpUpnpOrgAVTransport1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml" --output=$(proxyC) --domain=upnp.org --type=AVTransport --version=1
$(proxyC)CpUpnpOrgAVTransport2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml
	echo CpUpnpOrgAVTransport2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml" --output=$(proxyC) --domain=upnp.org --type=AVTransport --version=2
$(proxyC)CpUpnpOrgConnectionManager1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml
	echo CpUpnpOrgConnectionManager1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml" --output=$(proxyC) --domain=upnp.org --type=ConnectionManager --version=1
$(proxyC)CpUpnpOrgConnectionManager2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml
	echo CpUpnpOrgConnectionManager2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml" --output=$(proxyC) --domain=upnp.org --type=ConnectionManager --version=2
$(proxyC)CpUpnpOrgContentDirectory1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml
	echo CpUpnpOrgContentDirectory1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml" --output=$(proxyC) --domain=upnp.org --type=ContentDirectory --version=1
$(proxyC)CpUpnpOrgContentDirectory2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml
	echo CpUpnpOrgContentDirectory2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml" --output=$(proxyC) --domain=upnp.org --type=ContentDirectory --version=2
$(proxyC)CpUpnpOrgContentDirectory3C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml
	echo CpUpnpOrgContentDirectory3C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml" --output=$(proxyC) --domain=upnp.org --type=ContentDirectory --version=3
$(proxyC)CpUpnpOrgRenderingControl1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml
	echo CpUpnpOrgRenderingControl1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml" --output=$(proxyC) --domain=upnp.org --type=RenderingControl --version=1
$(proxyC)CpUpnpOrgRenderingControl2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml
	echo CpUpnpOrgRenderingControl2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml" --output=$(proxyC) --domain=upnp.org --type=RenderingControl --version=2
$(proxyC)CpUpnpOrgScheduledRecording1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml
	echo CpUpnpOrgScheduledRecording1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml" --output=$(proxyC) --domain=upnp.org --type=ScheduledRecording --version=1
$(proxyC)CpUpnpOrgScheduledRecording2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml
	echo CpUpnpOrgScheduledRecording2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml" --output=$(proxyC) --domain=upnp.org --type=ScheduledRecording --version=2
$(proxyC)CpUpnpOrgSwitchPower1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml
	echo CpUpnpOrgSwitchPower1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml" --output=$(proxyC) --domain=upnp.org --type=SwitchPower --version=1
$(proxyC)CpUpnpOrgDimming1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml
	echo CpUpnpOrgDimming1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml" --output=$(proxyC) --domain=upnp.org --type=Dimming --version=1
$(proxyC)CpAvOpenhomeOrgConfigApp1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml
	echo CpAvOpenhomeOrgConfigApp1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml" --output=$(proxyC) --domain=av.openhome.org --type=ConfigApp --version=1
$(proxyC)CpAvOpenhomeOrgCredentials1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml
	echo CpAvOpenhomeOrgCredentials1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Credentials --version=1
$(proxyC)CpAvOpenhomeOrgExakt1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml
	echo CpAvOpenhomeOrgExakt1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Exakt --version=1
$(proxyC)CpAvOpenhomeOrgExakt2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml
	echo CpAvOpenhomeOrgExakt2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml" --output=$(proxyC) --domain=av.openhome.org --type=Exakt --version=2
$(proxyC)CpAvOpenhomeOrgExakt3C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml
	echo CpAvOpenhomeOrgExakt3C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml" --output=$(proxyC) --domain=av.openhome.org --type=Exakt --version=3
$(proxyC)CpAvOpenhomeOrgExakt4C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml
	echo CpAvOpenhomeOrgExakt4C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml" --output=$(proxyC) --domain=av.openhome.org --type=Exakt --version=4
$(proxyC)CpAvOpenhomeOrgExakt5C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml
	echo CpAvOpenhomeOrgExakt5C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml" --output=$(proxyC) --domain=av.openhome.org --type=Exakt --version=5
$(proxyC)CpAvOpenhomeOrgInfo1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Info1.xml
	echo CpAvOpenhomeOrgInfo1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Info1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Info --version=1
$(proxyC)CpAvOpenhomeOrgTime1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Time1.xml
	echo CpAvOpenhomeOrgTime1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Time1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Time --version=1
$(proxyC)CpAvOpenhomeOrgPlaylist1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml
	echo CpAvOpenhomeOrgPlaylist1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Playlist --version=1
$(proxyC)CpAvOpenhomeOrgVolume1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml
	echo CpAvOpenhomeOrgVolume1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Volume --version=1
$(proxyC)CpAvOpenhomeOrgVolume2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml
	echo CpAvOpenhomeOrgVolume2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml" --output=$(proxyC) --domain=av.openhome.org --type=Volume --version=2
$(proxyC)CpAvOpenhomeOrgVolume3C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml
	echo CpAvOpenhomeOrgVolume3C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml" --output=$(proxyC) --domain=av.openhome.org --type=Volume --version=3
$(proxyC)CpAvOpenhomeOrgVolume4C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml
	echo CpAvOpenhomeOrgVolume4C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml" --output=$(proxyC) --domain=av.openhome.org --type=Volume --version=4
$(proxyC)CpAvOpenhomeOrgProduct1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product1.xml
	echo CpAvOpenhomeOrgProduct1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Product --version=1
$(proxyC)CpAvOpenhomeOrgProduct2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product2.xml
	echo CpAvOpenhomeOrgProduct2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product2.xml" --output=$(proxyC) --domain=av.openhome.org --type=Product --version=2
$(proxyC)CpAvOpenhomeOrgProduct3C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product3.xml
	echo CpAvOpenhomeOrgProduct3C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product3.xml" --output=$(proxyC) --domain=av.openhome.org --type=Product --version=3
$(proxyC)CpAvOpenhomeOrgProduct4C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product4.xml
	echo CpAvOpenhomeOrgProduct4C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product4.xml" --output=$(proxyC) --domain=av.openhome.org --type=Product --version=4
$(proxyC)CpAvOpenhomeOrgTransport1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml
	echo CpAvOpenhomeOrgTransport1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Transport --version=1
$(proxyC)CpAvOpenhomeOrgRadio1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml
	echo CpAvOpenhomeOrgRadio1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Radio --version=1
$(proxyC)CpAvOpenhomeOrgRadio2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml
	echo CpAvOpenhomeOrgRadio2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml" --output=$(proxyC) --domain=av.openhome.org --type=Radio --version=2
$(proxyC)CpAvOpenhomeOrgReceiver1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml
	echo CpAvOpenhomeOrgReceiver1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Receiver --version=1
$(proxyC)CpAvOpenhomeOrgSender1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml
	echo CpAvOpenhomeOrgSender1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Sender --version=1
$(proxyC)CpAvOpenhomeOrgSender2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml
	echo CpAvOpenhomeOrgSender2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml" --output=$(proxyC) --domain=av.openhome.org --type=Sender --version=2
$(proxyC)CpAvOpenhomeOrgDebug1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml
	echo CpAvOpenhomeOrgDebug1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Debug --version=1
$(proxyC)CpAvOpenhomeOrgDebug2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml
	echo CpAvOpenhomeOrgDebug2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml" --output=$(proxyC) --domain=av.openhome.org --type=Debug --version=2
$(proxyC)CpAvOpenhomeOrgPins1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml
	echo CpAvOpenhomeOrgPins1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Pins --version=1
$(proxyC)CpAvOpenhomeOrgPlaylistManager1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml
	echo CpAvOpenhomeOrgPlaylistManager1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml" --output=$(proxyC) --domain=av.openhome.org --type=PlaylistManager --version=1
$(proxyC)CpAvOpenhomeOrgMediaServer1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml
	echo CpAvOpenhomeOrgMediaServer1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml" --output=$(proxyC) --domain=av.openhome.org --type=MediaServer --version=1
$(proxyC)CpAvOpenhomeOrgNetworkMonitor1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml
	echo CpAvOpenhomeOrgNetworkMonitor1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml" --output=$(proxyC) --domain=av.openhome.org --type=NetworkMonitor --version=1
$(proxyC)CpOpenhomeOrgTestBasic1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml
	echo CpOpenhomeOrgTestBasic1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml" --output=$(proxyC) --domain=openhome.org --type=TestBasic --version=1
$(proxyC)CpOpenhomeOrgTestLights1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml
	echo CpOpenhomeOrgTestLights1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml" --output=$(proxyC) --domain=openhome.org --type=TestLights --version=1
$(proxyC)CpOpenhomeOrgSubscriptionLongPoll1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml
	echo CpOpenhomeOrgSubscriptionLongPoll1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml" --output=$(proxyC) --domain=openhome.org --type=SubscriptionLongPoll --version=1
$(proxyC)CpAvOpenhomeOrgOAuth1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml
	echo CpAvOpenhomeOrgOAuth1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml" --output=$(proxyC) --domain=av.openhome.org --type=OAuth --version=1
$(proxyC)CpAvOpenhomeOrgReaction1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml
	echo CpAvOpenhomeOrgReaction1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml" --output=$(proxyC) --domain=av.openhome.org --type=Reaction --version=1
$(proxyC)CpLinnCoUkFlash1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Flash1.xml
	echo CpLinnCoUkFlash1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Flash1.xml" --output=$(proxyC) --domain=linn.co.uk --type=Flash --version=1
$(proxyC)CpLinnCoUkVolkano1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Volkano1.xml
	echo CpLinnCoUkVolkano1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Volkano1.xml" --output=$(proxyC) --domain=linn.co.uk --type=Volkano --version=1
$(proxyC)CpLinnCoUkPrivacy1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Privacy1.xml
	echo CpLinnCoUkPrivacy1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Privacy1.xml" --output=$(proxyC) --domain=linn.co.uk --type=Privacy --version=1
$(proxyC)CpLinnCoUkExaktInputs1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml
	echo CpLinnCoUkExaktInputs1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml" --output=$(proxyC) --domain=linn.co.uk --type=ExaktInputs --version=1
$(proxyC)CpLinnCoUkCloud1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Cloud1.xml
	echo CpLinnCoUkCloud1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud1.xml" --output=$(proxyC) --domain=linn.co.uk --type=Cloud --version=1
$(proxyC)CpLinnCoUkCloud2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Cloud2.xml
	echo CpLinnCoUkCloud2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud2.xml" --output=$(proxyC) --domain=linn.co.uk --type=Cloud --version=2
$(proxyC)CpLinnCoUkUpdate1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Update1.xml
	echo CpLinnCoUkUpdate1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update1.xml" --output=$(proxyC) --domain=linn.co.uk --type=Update --version=1
$(proxyC)CpLinnCoUkUpdate2C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Update2.xml
	echo CpLinnCoUkUpdate2C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update2.xml" --output=$(proxyC) --domain=linn.co.uk --type=Update --version=2
$(proxyC)CpLinnCoUkUpdate3C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Update3.xml
	echo CpLinnCoUkUpdate3C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update3.xml" --output=$(proxyC) --domain=linn.co.uk --type=Update --version=3
$(proxyC)CpLinnCoUkConfiguration1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Configuration1.xml
	echo CpLinnCoUkConfiguration1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Configuration1.xml" --output=$(proxyC) --domain=linn.co.uk --type=Configuration --version=1
$(proxyC)CpLinnCoUkLipSync1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/LipSync1.xml
	echo CpLinnCoUkLipSync1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/LipSync1.xml" --output=$(proxyC) --domain=linn.co.uk --type=LipSync --version=1
$(proxyC)CpLinnCoUkExakt21C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Exakt21.xml
	echo CpLinnCoUkExakt21C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt21.xml" --output=$(proxyC) --domain=linn.co.uk --type=Exakt2 --version=1
$(proxyC)CpLinnCoUkExakt22C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Exakt22.xml
	echo CpLinnCoUkExakt22C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt22.xml" --output=$(proxyC) --domain=linn.co.uk --type=Exakt2 --version=2
$(proxyC)CpLinnCoUkWifi1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Wifi1.xml
	echo CpLinnCoUkWifi1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Wifi1.xml" --output=$(proxyC) --domain=linn.co.uk --type=Wifi --version=1
$(proxyC)CpLinnCoUkZoneReceiver1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml
	echo CpLinnCoUkZoneReceiver1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml" --output=$(proxyC) --domain=linn.co.uk --type=ZoneReceiver --version=1
$(proxyC)CpLinnCoUkZones1C.cpp : $(tt) OpenHome/Net/T4/Templates/CpUpnpCSource.tt OpenHome/Net/T4/Templates/CpUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Zones1.xml
	echo CpLinnCoUkZones1C.cpp
	$(ohNetGen) --language=c --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Zones1.xml" --output=$(proxyC) --domain=linn.co.uk --type=Zones --version=1

CpCs:   $(proxyCs)CpUpnpOrgAVTransport1.cs $(proxyCs)CpUpnpOrgAVTransport2.cs $(proxyCs)CpUpnpOrgConnectionManager1.cs $(proxyCs)CpUpnpOrgConnectionManager2.cs $(proxyCs)CpUpnpOrgContentDirectory1.cs $(proxyCs)CpUpnpOrgContentDirectory2.cs $(proxyCs)CpUpnpOrgContentDirectory3.cs $(proxyCs)CpUpnpOrgRenderingControl1.cs $(proxyCs)CpUpnpOrgRenderingControl2.cs $(proxyCs)CpUpnpOrgScheduledRecording1.cs $(proxyCs)CpUpnpOrgScheduledRecording2.cs $(proxyCs)CpUpnpOrgSwitchPower1.cs $(proxyCs)CpUpnpOrgDimming1.cs $(proxyCs)CpAvOpenhomeOrgConfigApp1.cs $(proxyCs)CpAvOpenhomeOrgCredentials1.cs $(proxyCs)CpAvOpenhomeOrgExakt1.cs $(proxyCs)CpAvOpenhomeOrgExakt2.cs $(proxyCs)CpAvOpenhomeOrgExakt3.cs $(proxyCs)CpAvOpenhomeOrgExakt4.cs $(proxyCs)CpAvOpenhomeOrgExakt5.cs $(proxyCs)CpAvOpenhomeOrgInfo1.cs $(proxyCs)CpAvOpenhomeOrgTime1.cs $(proxyCs)CpAvOpenhomeOrgPlaylist1.cs $(proxyCs)CpAvOpenhomeOrgVolume1.cs $(proxyCs)CpAvOpenhomeOrgVolume2.cs $(proxyCs)CpAvOpenhomeOrgVolume3.cs $(proxyCs)CpAvOpenhomeOrgVolume4.cs $(proxyCs)CpAvOpenhomeOrgProduct1.cs $(proxyCs)CpAvOpenhomeOrgProduct2.cs $(proxyCs)CpAvOpenhomeOrgProduct3.cs $(proxyCs)CpAvOpenhomeOrgProduct4.cs $(proxyCs)CpAvOpenhomeOrgTransport1.cs $(proxyCs)CpAvOpenhomeOrgRadio1.cs $(proxyCs)CpAvOpenhomeOrgRadio2.cs $(proxyCs)CpAvOpenhomeOrgReceiver1.cs $(proxyCs)CpAvOpenhomeOrgSender1.cs $(proxyCs)CpAvOpenhomeOrgSender2.cs $(proxyCs)CpAvOpenhomeOrgDebug1.cs $(proxyCs)CpAvOpenhomeOrgDebug2.cs $(proxyCs)CpAvOpenhomeOrgPins1.cs $(proxyCs)CpAvOpenhomeOrgPlaylistManager1.cs $(proxyCs)CpAvOpenhomeOrgMediaServer1.cs $(proxyCs)CpAvOpenhomeOrgNetworkMonitor1.cs $(proxyCs)CpOpenhomeOrgTestBasic1.cs $(proxyCs)CpOpenhomeOrgTestLights1.cs $(proxyCs)CpOpenhomeOrgSubscriptionLongPoll1.cs $(proxyCs)CpAvOpenhomeOrgOAuth1.cs $(proxyCs)CpAvOpenhomeOrgReaction1.cs $(proxyCs)CpLinnCoUkFlash1.cs $(proxyCs)CpLinnCoUkVolkano1.cs $(proxyCs)CpLinnCoUkPrivacy1.cs $(proxyCs)CpLinnCoUkExaktInputs1.cs $(proxyCs)CpLinnCoUkCloud1.cs $(proxyCs)CpLinnCoUkCloud2.cs $(proxyCs)CpLinnCoUkUpdate1.cs $(proxyCs)CpLinnCoUkUpdate2.cs $(proxyCs)CpLinnCoUkUpdate3.cs $(proxyCs)CpLinnCoUkConfiguration1.cs $(proxyCs)CpLinnCoUkLipSync1.cs $(proxyCs)CpLinnCoUkExakt21.cs $(proxyCs)CpLinnCoUkExakt22.cs $(proxyCs)CpLinnCoUkWifi1.cs $(proxyCs)CpLinnCoUkZoneReceiver1.cs $(proxyCs)CpLinnCoUkZones1.cs
$(proxyCs)CpUpnpOrgAVTransport1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml
	echo CpUpnpOrgAVTransport1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml" --output=$(proxyCs) --domain=upnp.org --type=AVTransport --version=1
$(proxyCs)CpUpnpOrgAVTransport2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml
	echo CpUpnpOrgAVTransport2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml" --output=$(proxyCs) --domain=upnp.org --type=AVTransport --version=2
$(proxyCs)CpUpnpOrgConnectionManager1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml
	echo CpUpnpOrgConnectionManager1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml" --output=$(proxyCs) --domain=upnp.org --type=ConnectionManager --version=1
$(proxyCs)CpUpnpOrgConnectionManager2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml
	echo CpUpnpOrgConnectionManager2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml" --output=$(proxyCs) --domain=upnp.org --type=ConnectionManager --version=2
$(proxyCs)CpUpnpOrgContentDirectory1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml
	echo CpUpnpOrgContentDirectory1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml" --output=$(proxyCs) --domain=upnp.org --type=ContentDirectory --version=1
$(proxyCs)CpUpnpOrgContentDirectory2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml
	echo CpUpnpOrgContentDirectory2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml" --output=$(proxyCs) --domain=upnp.org --type=ContentDirectory --version=2
$(proxyCs)CpUpnpOrgContentDirectory3.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml
	echo CpUpnpOrgContentDirectory3.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml" --output=$(proxyCs) --domain=upnp.org --type=ContentDirectory --version=3
$(proxyCs)CpUpnpOrgRenderingControl1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml
	echo CpUpnpOrgRenderingControl1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml" --output=$(proxyCs) --domain=upnp.org --type=RenderingControl --version=1
$(proxyCs)CpUpnpOrgRenderingControl2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml
	echo CpUpnpOrgRenderingControl2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml" --output=$(proxyCs) --domain=upnp.org --type=RenderingControl --version=2
$(proxyCs)CpUpnpOrgScheduledRecording1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml
	echo CpUpnpOrgScheduledRecording1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml" --output=$(proxyCs) --domain=upnp.org --type=ScheduledRecording --version=1
$(proxyCs)CpUpnpOrgScheduledRecording2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml
	echo CpUpnpOrgScheduledRecording2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml" --output=$(proxyCs) --domain=upnp.org --type=ScheduledRecording --version=2
$(proxyCs)CpUpnpOrgSwitchPower1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml
	echo CpUpnpOrgSwitchPower1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml" --output=$(proxyCs) --domain=upnp.org --type=SwitchPower --version=1
$(proxyCs)CpUpnpOrgDimming1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml
	echo CpUpnpOrgDimming1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml" --output=$(proxyCs) --domain=upnp.org --type=Dimming --version=1
$(proxyCs)CpAvOpenhomeOrgConfigApp1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml
	echo CpAvOpenhomeOrgConfigApp1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=ConfigApp --version=1
$(proxyCs)CpAvOpenhomeOrgCredentials1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml
	echo CpAvOpenhomeOrgCredentials1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Credentials --version=1
$(proxyCs)CpAvOpenhomeOrgExakt1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml
	echo CpAvOpenhomeOrgExakt1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Exakt --version=1
$(proxyCs)CpAvOpenhomeOrgExakt2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml
	echo CpAvOpenhomeOrgExakt2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Exakt --version=2
$(proxyCs)CpAvOpenhomeOrgExakt3.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml
	echo CpAvOpenhomeOrgExakt3.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Exakt --version=3
$(proxyCs)CpAvOpenhomeOrgExakt4.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml
	echo CpAvOpenhomeOrgExakt4.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Exakt --version=4
$(proxyCs)CpAvOpenhomeOrgExakt5.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml
	echo CpAvOpenhomeOrgExakt5.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Exakt --version=5
$(proxyCs)CpAvOpenhomeOrgInfo1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Info1.xml
	echo CpAvOpenhomeOrgInfo1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Info1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Info --version=1
$(proxyCs)CpAvOpenhomeOrgTime1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Time1.xml
	echo CpAvOpenhomeOrgTime1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Time1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Time --version=1
$(proxyCs)CpAvOpenhomeOrgPlaylist1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml
	echo CpAvOpenhomeOrgPlaylist1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Playlist --version=1
$(proxyCs)CpAvOpenhomeOrgVolume1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml
	echo CpAvOpenhomeOrgVolume1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Volume --version=1
$(proxyCs)CpAvOpenhomeOrgVolume2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml
	echo CpAvOpenhomeOrgVolume2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Volume --version=2
$(proxyCs)CpAvOpenhomeOrgVolume3.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml
	echo CpAvOpenhomeOrgVolume3.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Volume --version=3
$(proxyCs)CpAvOpenhomeOrgVolume4.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml
	echo CpAvOpenhomeOrgVolume4.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Volume --version=4
$(proxyCs)CpAvOpenhomeOrgProduct1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Product1.xml
	echo CpAvOpenhomeOrgProduct1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Product --version=1
$(proxyCs)CpAvOpenhomeOrgProduct2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Product2.xml
	echo CpAvOpenhomeOrgProduct2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product2.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Product --version=2
$(proxyCs)CpAvOpenhomeOrgProduct3.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Product3.xml
	echo CpAvOpenhomeOrgProduct3.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product3.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Product --version=3
$(proxyCs)CpAvOpenhomeOrgProduct4.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Product4.xml
	echo CpAvOpenhomeOrgProduct4.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product4.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Product --version=4
$(proxyCs)CpAvOpenhomeOrgTransport1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml
	echo CpAvOpenhomeOrgTransport1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Transport --version=1
$(proxyCs)CpAvOpenhomeOrgRadio1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml
	echo CpAvOpenhomeOrgRadio1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Radio --version=1
$(proxyCs)CpAvOpenhomeOrgRadio2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml
	echo CpAvOpenhomeOrgRadio2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Radio --version=2
$(proxyCs)CpAvOpenhomeOrgReceiver1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml
	echo CpAvOpenhomeOrgReceiver1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Receiver --version=1
$(proxyCs)CpAvOpenhomeOrgSender1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml
	echo CpAvOpenhomeOrgSender1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Sender --version=1
$(proxyCs)CpAvOpenhomeOrgSender2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml
	echo CpAvOpenhomeOrgSender2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Sender --version=2
$(proxyCs)CpAvOpenhomeOrgDebug1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml
	echo CpAvOpenhomeOrgDebug1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Debug --version=1
$(proxyCs)CpAvOpenhomeOrgDebug2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml
	echo CpAvOpenhomeOrgDebug2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Debug --version=2
$(proxyCs)CpAvOpenhomeOrgPins1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml
	echo CpAvOpenhomeOrgPins1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Pins --version=1
$(proxyCs)CpAvOpenhomeOrgPlaylistManager1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml
	echo CpAvOpenhomeOrgPlaylistManager1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=PlaylistManager --version=1
$(proxyCs)CpAvOpenhomeOrgMediaServer1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml
	echo CpAvOpenhomeOrgMediaServer1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=MediaServer --version=1
$(proxyCs)CpAvOpenhomeOrgNetworkMonitor1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml
	echo CpAvOpenhomeOrgNetworkMonitor1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=NetworkMonitor --version=1
$(proxyCs)CpOpenhomeOrgTestBasic1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml
	echo CpOpenhomeOrgTestBasic1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml" --output=$(proxyCs) --domain=openhome.org --type=TestBasic --version=1
$(proxyCs)CpOpenhomeOrgTestLights1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml
	echo CpOpenhomeOrgTestLights1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml" --output=$(proxyCs) --domain=openhome.org --type=TestLights --version=1
$(proxyCs)CpOpenhomeOrgSubscriptionLongPoll1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml
	echo CpOpenhomeOrgSubscriptionLongPoll1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml" --output=$(proxyCs) --domain=openhome.org --type=SubscriptionLongPoll --version=1
$(proxyCs)CpAvOpenhomeOrgOAuth1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml
	echo CpAvOpenhomeOrgOAuth1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=OAuth --version=1
$(proxyCs)CpAvOpenhomeOrgReaction1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml
	echo CpAvOpenhomeOrgReaction1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml" --output=$(proxyCs) --domain=av.openhome.org --type=Reaction --version=1
$(proxyCs)CpLinnCoUkFlash1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Flash1.xml
	echo CpLinnCoUkFlash1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Flash1.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Flash --version=1
$(proxyCs)CpLinnCoUkVolkano1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Volkano1.xml
	echo CpLinnCoUkVolkano1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Volkano1.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Volkano --version=1
$(proxyCs)CpLinnCoUkPrivacy1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Privacy1.xml
	echo CpLinnCoUkPrivacy1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Privacy1.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Privacy --version=1
$(proxyCs)CpLinnCoUkExaktInputs1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml
	echo CpLinnCoUkExaktInputs1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml" --output=$(proxyCs) --domain=linn.co.uk --type=ExaktInputs --version=1
$(proxyCs)CpLinnCoUkCloud1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Cloud1.xml
	echo CpLinnCoUkCloud1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud1.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Cloud --version=1
$(proxyCs)CpLinnCoUkCloud2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Cloud2.xml
	echo CpLinnCoUkCloud2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud2.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Cloud --version=2
$(proxyCs)CpLinnCoUkUpdate1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Update1.xml
	echo CpLinnCoUkUpdate1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update1.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Update --version=1
$(proxyCs)CpLinnCoUkUpdate2.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Update2.xml
	echo CpLinnCoUkUpdate2.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update2.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Update --version=2
$(proxyCs)CpLinnCoUkUpdate3.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Update3.xml
	echo CpLinnCoUkUpdate3.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update3.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Update --version=3
$(proxyCs)CpLinnCoUkConfiguration1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Configuration1.xml
	echo CpLinnCoUkConfiguration1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Configuration1.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Configuration --version=1
$(proxyCs)CpLinnCoUkLipSync1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/LipSync1.xml
	echo CpLinnCoUkLipSync1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/LipSync1.xml" --output=$(proxyCs) --domain=linn.co.uk --type=LipSync --version=1
$(proxyCs)CpLinnCoUkExakt21.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Exakt21.xml
	echo CpLinnCoUkExakt21.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt21.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Exakt2 --version=1
$(proxyCs)CpLinnCoUkExakt22.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Exakt22.xml
	echo CpLinnCoUkExakt22.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt22.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Exakt2 --version=2
$(proxyCs)CpLinnCoUkWifi1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Wifi1.xml
	echo CpLinnCoUkWifi1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Wifi1.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Wifi --version=1
$(proxyCs)CpLinnCoUkZoneReceiver1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml
	echo CpLinnCoUkZoneReceiver1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml" --output=$(proxyCs) --domain=linn.co.uk --type=ZoneReceiver --version=1
$(proxyCs)CpLinnCoUkZones1.cs : $(tt) OpenHome/Net/T4/Templates/CpUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Zones1.xml
	echo CpLinnCoUkZones1.cs
	$(ohNetGen) --language=cs --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Zones1.xml" --output=$(proxyCs) --domain=linn.co.uk --type=Zones --version=1

CpJava:   $(proxyJava)CpProxyUpnpOrgAVTransport1.java $(proxyJava)CpProxyUpnpOrgAVTransport2.java $(proxyJava)CpProxyUpnpOrgConnectionManager1.java $(proxyJava)CpProxyUpnpOrgConnectionManager2.java $(proxyJava)CpProxyUpnpOrgContentDirectory1.java $(proxyJava)CpProxyUpnpOrgContentDirectory2.java $(proxyJava)CpProxyUpnpOrgContentDirectory3.java $(proxyJava)CpProxyUpnpOrgRenderingControl1.java $(proxyJava)CpProxyUpnpOrgRenderingControl2.java $(proxyJava)CpProxyUpnpOrgScheduledRecording1.java $(proxyJava)CpProxyUpnpOrgScheduledRecording2.java $(proxyJava)CpProxyUpnpOrgSwitchPower1.java $(proxyJava)CpProxyUpnpOrgDimming1.java $(proxyJava)CpProxyAvOpenhomeOrgConfigApp1.java $(proxyJava)CpProxyAvOpenhomeOrgCredentials1.java $(proxyJava)CpProxyAvOpenhomeOrgExakt1.java $(proxyJava)CpProxyAvOpenhomeOrgExakt2.java $(proxyJava)CpProxyAvOpenhomeOrgExakt3.java $(proxyJava)CpProxyAvOpenhomeOrgExakt4.java $(proxyJava)CpProxyAvOpenhomeOrgExakt5.java $(proxyJava)CpProxyAvOpenhomeOrgInfo1.java $(proxyJava)CpProxyAvOpenhomeOrgTime1.java $(proxyJava)CpProxyAvOpenhomeOrgPlaylist1.java $(proxyJava)CpProxyAvOpenhomeOrgVolume1.java $(proxyJava)CpProxyAvOpenhomeOrgVolume2.java $(proxyJava)CpProxyAvOpenhomeOrgVolume3.java $(proxyJava)CpProxyAvOpenhomeOrgVolume4.java $(proxyJava)CpProxyAvOpenhomeOrgProduct1.java $(proxyJava)CpProxyAvOpenhomeOrgProduct2.java $(proxyJava)CpProxyAvOpenhomeOrgProduct3.java $(proxyJava)CpProxyAvOpenhomeOrgProduct4.java $(proxyJava)CpProxyAvOpenhomeOrgTransport1.java $(proxyJava)CpProxyAvOpenhomeOrgRadio1.java $(proxyJava)CpProxyAvOpenhomeOrgRadio2.java $(proxyJava)CpProxyAvOpenhomeOrgReceiver1.java $(proxyJava)CpProxyAvOpenhomeOrgSender1.java $(proxyJava)CpProxyAvOpenhomeOrgSender2.java $(proxyJava)CpProxyAvOpenhomeOrgDebug1.java $(proxyJava)CpProxyAvOpenhomeOrgDebug2.java $(proxyJava)CpProxyAvOpenhomeOrgPins1.java $(proxyJava)CpProxyAvOpenhomeOrgPlaylistManager1.java $(proxyJava)CpProxyAvOpenhomeOrgMediaServer1.java $(proxyJava)CpProxyAvOpenhomeOrgNetworkMonitor1.java $(proxyJava)CpProxyOpenhomeOrgTestBasic1.java $(proxyJava)CpProxyOpenhomeOrgTestLights1.java $(proxyJava)CpProxyOpenhomeOrgSubscriptionLongPoll1.java $(proxyJava)CpProxyAvOpenhomeOrgOAuth1.java $(proxyJava)CpProxyAvOpenhomeOrgReaction1.java $(proxyJava)CpProxyLinnCoUkFlash1.java $(proxyJava)CpProxyLinnCoUkVolkano1.java $(proxyJava)CpProxyLinnCoUkPrivacy1.java $(proxyJava)CpProxyLinnCoUkExaktInputs1.java $(proxyJava)CpProxyLinnCoUkCloud1.java $(proxyJava)CpProxyLinnCoUkCloud2.java $(proxyJava)CpProxyLinnCoUkUpdate1.java $(proxyJava)CpProxyLinnCoUkUpdate2.java $(proxyJava)CpProxyLinnCoUkUpdate3.java $(proxyJava)CpProxyLinnCoUkConfiguration1.java $(proxyJava)CpProxyLinnCoUkLipSync1.java $(proxyJava)CpProxyLinnCoUkExakt21.java $(proxyJava)CpProxyLinnCoUkExakt22.java $(proxyJava)CpProxyLinnCoUkWifi1.java $(proxyJava)CpProxyLinnCoUkZoneReceiver1.java $(proxyJava)CpProxyLinnCoUkZones1.java
$(proxyJava)CpProxyUpnpOrgAVTransport1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml
	echo CpProxyUpnpOrgAVTransport1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml" --output=$(proxyJava) --domain=upnp.org --type=AVTransport --version=1
$(proxyJava)CpProxyUpnpOrgAVTransport2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml
	echo CpProxyUpnpOrgAVTransport2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml" --output=$(proxyJava) --domain=upnp.org --type=AVTransport --version=2
$(proxyJava)CpProxyUpnpOrgConnectionManager1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml
	echo CpProxyUpnpOrgConnectionManager1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml" --output=$(proxyJava) --domain=upnp.org --type=ConnectionManager --version=1
$(proxyJava)CpProxyUpnpOrgConnectionManager2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml
	echo CpProxyUpnpOrgConnectionManager2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml" --output=$(proxyJava) --domain=upnp.org --type=ConnectionManager --version=2
$(proxyJava)CpProxyUpnpOrgContentDirectory1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml
	echo CpProxyUpnpOrgContentDirectory1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml" --output=$(proxyJava) --domain=upnp.org --type=ContentDirectory --version=1
$(proxyJava)CpProxyUpnpOrgContentDirectory2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml
	echo CpProxyUpnpOrgContentDirectory2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml" --output=$(proxyJava) --domain=upnp.org --type=ContentDirectory --version=2
$(proxyJava)CpProxyUpnpOrgContentDirectory3.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml
	echo CpProxyUpnpOrgContentDirectory3.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml" --output=$(proxyJava) --domain=upnp.org --type=ContentDirectory --version=3
$(proxyJava)CpProxyUpnpOrgRenderingControl1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml
	echo CpProxyUpnpOrgRenderingControl1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml" --output=$(proxyJava) --domain=upnp.org --type=RenderingControl --version=1
$(proxyJava)CpProxyUpnpOrgRenderingControl2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml
	echo CpProxyUpnpOrgRenderingControl2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml" --output=$(proxyJava) --domain=upnp.org --type=RenderingControl --version=2
$(proxyJava)CpProxyUpnpOrgScheduledRecording1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml
	echo CpProxyUpnpOrgScheduledRecording1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml" --output=$(proxyJava) --domain=upnp.org --type=ScheduledRecording --version=1
$(proxyJava)CpProxyUpnpOrgScheduledRecording2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml
	echo CpProxyUpnpOrgScheduledRecording2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml" --output=$(proxyJava) --domain=upnp.org --type=ScheduledRecording --version=2
$(proxyJava)CpProxyUpnpOrgSwitchPower1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml
	echo CpProxyUpnpOrgSwitchPower1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml" --output=$(proxyJava) --domain=upnp.org --type=SwitchPower --version=1
$(proxyJava)CpProxyUpnpOrgDimming1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml
	echo CpProxyUpnpOrgDimming1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml" --output=$(proxyJava) --domain=upnp.org --type=Dimming --version=1
$(proxyJava)CpProxyAvOpenhomeOrgConfigApp1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml
	echo CpProxyAvOpenhomeOrgConfigApp1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=ConfigApp --version=1
$(proxyJava)CpProxyAvOpenhomeOrgCredentials1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml
	echo CpProxyAvOpenhomeOrgCredentials1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Credentials --version=1
$(proxyJava)CpProxyAvOpenhomeOrgExakt1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml
	echo CpProxyAvOpenhomeOrgExakt1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Exakt --version=1
$(proxyJava)CpProxyAvOpenhomeOrgExakt2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml
	echo CpProxyAvOpenhomeOrgExakt2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Exakt --version=2
$(proxyJava)CpProxyAvOpenhomeOrgExakt3.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml
	echo CpProxyAvOpenhomeOrgExakt3.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Exakt --version=3
$(proxyJava)CpProxyAvOpenhomeOrgExakt4.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml
	echo CpProxyAvOpenhomeOrgExakt4.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Exakt --version=4
$(proxyJava)CpProxyAvOpenhomeOrgExakt5.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml
	echo CpProxyAvOpenhomeOrgExakt5.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Exakt --version=5
$(proxyJava)CpProxyAvOpenhomeOrgInfo1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Info1.xml
	echo CpProxyAvOpenhomeOrgInfo1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Info1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Info --version=1
$(proxyJava)CpProxyAvOpenhomeOrgTime1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Time1.xml
	echo CpProxyAvOpenhomeOrgTime1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Time1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Time --version=1
$(proxyJava)CpProxyAvOpenhomeOrgPlaylist1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml
	echo CpProxyAvOpenhomeOrgPlaylist1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Playlist --version=1
$(proxyJava)CpProxyAvOpenhomeOrgVolume1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml
	echo CpProxyAvOpenhomeOrgVolume1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Volume --version=1
$(proxyJava)CpProxyAvOpenhomeOrgVolume2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml
	echo CpProxyAvOpenhomeOrgVolume2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Volume --version=2
$(proxyJava)CpProxyAvOpenhomeOrgVolume3.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml
	echo CpProxyAvOpenhomeOrgVolume3.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Volume --version=3
$(proxyJava)CpProxyAvOpenhomeOrgVolume4.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml
	echo CpProxyAvOpenhomeOrgVolume4.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Volume --version=4
$(proxyJava)CpProxyAvOpenhomeOrgProduct1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Product1.xml
	echo CpProxyAvOpenhomeOrgProduct1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Product --version=1
$(proxyJava)CpProxyAvOpenhomeOrgProduct2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Product2.xml
	echo CpProxyAvOpenhomeOrgProduct2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product2.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Product --version=2
$(proxyJava)CpProxyAvOpenhomeOrgProduct3.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Product3.xml
	echo CpProxyAvOpenhomeOrgProduct3.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product3.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Product --version=3
$(proxyJava)CpProxyAvOpenhomeOrgProduct4.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Product4.xml
	echo CpProxyAvOpenhomeOrgProduct4.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product4.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Product --version=4
$(proxyJava)CpProxyAvOpenhomeOrgTransport1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml
	echo CpProxyAvOpenhomeOrgTransport1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Transport --version=1
$(proxyJava)CpProxyAvOpenhomeOrgRadio1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml
	echo CpProxyAvOpenhomeOrgRadio1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Radio --version=1
$(proxyJava)CpProxyAvOpenhomeOrgRadio2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml
	echo CpProxyAvOpenhomeOrgRadio2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Radio --version=2
$(proxyJava)CpProxyAvOpenhomeOrgReceiver1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml
	echo CpProxyAvOpenhomeOrgReceiver1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Receiver --version=1
$(proxyJava)CpProxyAvOpenhomeOrgSender1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml
	echo CpProxyAvOpenhomeOrgSender1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Sender --version=1
$(proxyJava)CpProxyAvOpenhomeOrgSender2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml
	echo CpProxyAvOpenhomeOrgSender2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Sender --version=2
$(proxyJava)CpProxyAvOpenhomeOrgDebug1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml
	echo CpProxyAvOpenhomeOrgDebug1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Debug --version=1
$(proxyJava)CpProxyAvOpenhomeOrgDebug2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml
	echo CpProxyAvOpenhomeOrgDebug2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Debug --version=2
$(proxyJava)CpProxyAvOpenhomeOrgPins1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml
	echo CpProxyAvOpenhomeOrgPins1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Pins --version=1
$(proxyJava)CpProxyAvOpenhomeOrgPlaylistManager1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml
	echo CpProxyAvOpenhomeOrgPlaylistManager1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=PlaylistManager --version=1
$(proxyJava)CpProxyAvOpenhomeOrgMediaServer1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml
	echo CpProxyAvOpenhomeOrgMediaServer1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=MediaServer --version=1
$(proxyJava)CpProxyAvOpenhomeOrgNetworkMonitor1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml
	echo CpProxyAvOpenhomeOrgNetworkMonitor1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=NetworkMonitor --version=1
$(proxyJava)CpProxyOpenhomeOrgTestBasic1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml
	echo CpProxyOpenhomeOrgTestBasic1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml" --output=$(proxyJava) --domain=openhome.org --type=TestBasic --version=1
$(proxyJava)CpProxyOpenhomeOrgTestLights1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml
	echo CpProxyOpenhomeOrgTestLights1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml" --output=$(proxyJava) --domain=openhome.org --type=TestLights --version=1
$(proxyJava)CpProxyOpenhomeOrgSubscriptionLongPoll1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml
	echo CpProxyOpenhomeOrgSubscriptionLongPoll1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml" --output=$(proxyJava) --domain=openhome.org --type=SubscriptionLongPoll --version=1
$(proxyJava)CpProxyAvOpenhomeOrgOAuth1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml
	echo CpProxyAvOpenhomeOrgOAuth1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=OAuth --version=1
$(proxyJava)CpProxyAvOpenhomeOrgReaction1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml
	echo CpProxyAvOpenhomeOrgReaction1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml" --output=$(proxyJava) --domain=av.openhome.org --type=Reaction --version=1
$(proxyJava)CpProxyLinnCoUkFlash1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Flash1.xml
	echo CpProxyLinnCoUkFlash1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Flash1.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Flash --version=1
$(proxyJava)CpProxyLinnCoUkVolkano1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Volkano1.xml
	echo CpProxyLinnCoUkVolkano1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Volkano1.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Volkano --version=1
$(proxyJava)CpProxyLinnCoUkPrivacy1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Privacy1.xml
	echo CpProxyLinnCoUkPrivacy1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Privacy1.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Privacy --version=1
$(proxyJava)CpProxyLinnCoUkExaktInputs1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml
	echo CpProxyLinnCoUkExaktInputs1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml" --output=$(proxyJava) --domain=linn.co.uk --type=ExaktInputs --version=1
$(proxyJava)CpProxyLinnCoUkCloud1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Cloud1.xml
	echo CpProxyLinnCoUkCloud1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud1.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Cloud --version=1
$(proxyJava)CpProxyLinnCoUkCloud2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Cloud2.xml
	echo CpProxyLinnCoUkCloud2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud2.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Cloud --version=2
$(proxyJava)CpProxyLinnCoUkUpdate1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Update1.xml
	echo CpProxyLinnCoUkUpdate1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update1.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Update --version=1
$(proxyJava)CpProxyLinnCoUkUpdate2.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Update2.xml
	echo CpProxyLinnCoUkUpdate2.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update2.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Update --version=2
$(proxyJava)CpProxyLinnCoUkUpdate3.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Update3.xml
	echo CpProxyLinnCoUkUpdate3.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update3.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Update --version=3
$(proxyJava)CpProxyLinnCoUkConfiguration1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Configuration1.xml
	echo CpProxyLinnCoUkConfiguration1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Configuration1.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Configuration --version=1
$(proxyJava)CpProxyLinnCoUkLipSync1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/LipSync1.xml
	echo CpProxyLinnCoUkLipSync1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/LipSync1.xml" --output=$(proxyJava) --domain=linn.co.uk --type=LipSync --version=1
$(proxyJava)CpProxyLinnCoUkExakt21.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Exakt21.xml
	echo CpProxyLinnCoUkExakt21.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt21.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Exakt2 --version=1
$(proxyJava)CpProxyLinnCoUkExakt22.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Exakt22.xml
	echo CpProxyLinnCoUkExakt22.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt22.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Exakt2 --version=2
$(proxyJava)CpProxyLinnCoUkWifi1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Wifi1.xml
	echo CpProxyLinnCoUkWifi1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Wifi1.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Wifi --version=1
$(proxyJava)CpProxyLinnCoUkZoneReceiver1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml
	echo CpProxyLinnCoUkZoneReceiver1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml" --output=$(proxyJava) --domain=linn.co.uk --type=ZoneReceiver --version=1
$(proxyJava)CpProxyLinnCoUkZones1.java : $(tt) OpenHome/Net/T4/Templates/CpUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Zones1.xml
	echo CpProxyLinnCoUkZones1.java
	$(ohNetGen) --language=java --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Zones1.xml" --output=$(proxyJava) --domain=linn.co.uk --type=Zones --version=1

CpJs:   $(proxyJs)CpUpnpOrgAVTransport1.js $(proxyJs)CpUpnpOrgAVTransport2.js $(proxyJs)CpUpnpOrgConnectionManager1.js $(proxyJs)CpUpnpOrgConnectionManager2.js $(proxyJs)CpUpnpOrgContentDirectory1.js $(proxyJs)CpUpnpOrgContentDirectory2.js $(proxyJs)CpUpnpOrgContentDirectory3.js $(proxyJs)CpUpnpOrgRenderingControl1.js $(proxyJs)CpUpnpOrgRenderingControl2.js $(proxyJs)CpUpnpOrgScheduledRecording1.js $(proxyJs)CpUpnpOrgScheduledRecording2.js $(proxyJs)CpUpnpOrgSwitchPower1.js $(proxyJs)CpUpnpOrgDimming1.js $(proxyJs)CpAvOpenhomeOrgConfigApp1.js $(proxyJs)CpAvOpenhomeOrgCredentials1.js $(proxyJs)CpAvOpenhomeOrgExakt1.js $(proxyJs)CpAvOpenhomeOrgExakt2.js $(proxyJs)CpAvOpenhomeOrgExakt3.js $(proxyJs)CpAvOpenhomeOrgExakt4.js $(proxyJs)CpAvOpenhomeOrgExakt5.js $(proxyJs)CpAvOpenhomeOrgInfo1.js $(proxyJs)CpAvOpenhomeOrgTime1.js $(proxyJs)CpAvOpenhomeOrgPlaylist1.js $(proxyJs)CpAvOpenhomeOrgVolume1.js $(proxyJs)CpAvOpenhomeOrgVolume2.js $(proxyJs)CpAvOpenhomeOrgVolume3.js $(proxyJs)CpAvOpenhomeOrgVolume4.js $(proxyJs)CpAvOpenhomeOrgProduct1.js $(proxyJs)CpAvOpenhomeOrgProduct2.js $(proxyJs)CpAvOpenhomeOrgProduct3.js $(proxyJs)CpAvOpenhomeOrgProduct4.js $(proxyJs)CpAvOpenhomeOrgTransport1.js $(proxyJs)CpAvOpenhomeOrgRadio1.js $(proxyJs)CpAvOpenhomeOrgRadio2.js $(proxyJs)CpAvOpenhomeOrgReceiver1.js $(proxyJs)CpAvOpenhomeOrgSender1.js $(proxyJs)CpAvOpenhomeOrgSender2.js $(proxyJs)CpAvOpenhomeOrgDebug1.js $(proxyJs)CpAvOpenhomeOrgDebug2.js $(proxyJs)CpAvOpenhomeOrgPins1.js $(proxyJs)CpAvOpenhomeOrgPlaylistManager1.js $(proxyJs)CpAvOpenhomeOrgMediaServer1.js $(proxyJs)CpAvOpenhomeOrgNetworkMonitor1.js $(proxyJs)CpOpenhomeOrgTestBasic1.js $(proxyJs)CpOpenhomeOrgTestLights1.js $(proxyJs)CpOpenhomeOrgSubscriptionLongPoll1.js $(proxyJs)CpAvOpenhomeOrgOAuth1.js $(proxyJs)CpAvOpenhomeOrgReaction1.js $(proxyJs)CpLinnCoUkFlash1.js $(proxyJs)CpLinnCoUkVolkano1.js $(proxyJs)CpLinnCoUkPrivacy1.js $(proxyJs)CpLinnCoUkExaktInputs1.js $(proxyJs)CpLinnCoUkCloud1.js $(proxyJs)CpLinnCoUkCloud2.js $(proxyJs)CpLinnCoUkUpdate1.js $(proxyJs)CpLinnCoUkUpdate2.js $(proxyJs)CpLinnCoUkUpdate3.js $(proxyJs)CpLinnCoUkConfiguration1.js $(proxyJs)CpLinnCoUkLipSync1.js $(proxyJs)CpLinnCoUkExakt21.js $(proxyJs)CpLinnCoUkExakt22.js $(proxyJs)CpLinnCoUkWifi1.js $(proxyJs)CpLinnCoUkZoneReceiver1.js $(proxyJs)CpLinnCoUkZones1.js
$(proxyJs)CpUpnpOrgAVTransport1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml
	echo CpUpnpOrgAVTransport1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml" --output=$(proxyJs) --domain=upnp.org --type=AVTransport --version=1
$(proxyJs)CpUpnpOrgAVTransport2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml
	echo CpUpnpOrgAVTransport2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml" --output=$(proxyJs) --domain=upnp.org --type=AVTransport --version=2
$(proxyJs)CpUpnpOrgConnectionManager1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml
	echo CpUpnpOrgConnectionManager1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml" --output=$(proxyJs) --domain=upnp.org --type=ConnectionManager --version=1
$(proxyJs)CpUpnpOrgConnectionManager2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml
	echo CpUpnpOrgConnectionManager2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml" --output=$(proxyJs) --domain=upnp.org --type=ConnectionManager --version=2
$(proxyJs)CpUpnpOrgContentDirectory1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml
	echo CpUpnpOrgContentDirectory1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml" --output=$(proxyJs) --domain=upnp.org --type=ContentDirectory --version=1
$(proxyJs)CpUpnpOrgContentDirectory2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml
	echo CpUpnpOrgContentDirectory2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml" --output=$(proxyJs) --domain=upnp.org --type=ContentDirectory --version=2
$(proxyJs)CpUpnpOrgContentDirectory3.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml
	echo CpUpnpOrgContentDirectory3.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml" --output=$(proxyJs) --domain=upnp.org --type=ContentDirectory --version=3
$(proxyJs)CpUpnpOrgRenderingControl1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml
	echo CpUpnpOrgRenderingControl1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml" --output=$(proxyJs) --domain=upnp.org --type=RenderingControl --version=1
$(proxyJs)CpUpnpOrgRenderingControl2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml
	echo CpUpnpOrgRenderingControl2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml" --output=$(proxyJs) --domain=upnp.org --type=RenderingControl --version=2
$(proxyJs)CpUpnpOrgScheduledRecording1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml
	echo CpUpnpOrgScheduledRecording1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml" --output=$(proxyJs) --domain=upnp.org --type=ScheduledRecording --version=1
$(proxyJs)CpUpnpOrgScheduledRecording2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml
	echo CpUpnpOrgScheduledRecording2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml" --output=$(proxyJs) --domain=upnp.org --type=ScheduledRecording --version=2
$(proxyJs)CpUpnpOrgSwitchPower1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml
	echo CpUpnpOrgSwitchPower1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml" --output=$(proxyJs) --domain=upnp.org --type=SwitchPower --version=1
$(proxyJs)CpUpnpOrgDimming1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml
	echo CpUpnpOrgDimming1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml" --output=$(proxyJs) --domain=upnp.org --type=Dimming --version=1
$(proxyJs)CpAvOpenhomeOrgConfigApp1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml
	echo CpAvOpenhomeOrgConfigApp1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=ConfigApp --version=1
$(proxyJs)CpAvOpenhomeOrgCredentials1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml
	echo CpAvOpenhomeOrgCredentials1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Credentials --version=1
$(proxyJs)CpAvOpenhomeOrgExakt1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml
	echo CpAvOpenhomeOrgExakt1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Exakt --version=1
$(proxyJs)CpAvOpenhomeOrgExakt2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml
	echo CpAvOpenhomeOrgExakt2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Exakt --version=2
$(proxyJs)CpAvOpenhomeOrgExakt3.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml
	echo CpAvOpenhomeOrgExakt3.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Exakt --version=3
$(proxyJs)CpAvOpenhomeOrgExakt4.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml
	echo CpAvOpenhomeOrgExakt4.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Exakt --version=4
$(proxyJs)CpAvOpenhomeOrgExakt5.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml
	echo CpAvOpenhomeOrgExakt5.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Exakt --version=5
$(proxyJs)CpAvOpenhomeOrgInfo1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Info1.xml
	echo CpAvOpenhomeOrgInfo1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Info1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Info --version=1
$(proxyJs)CpAvOpenhomeOrgTime1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Time1.xml
	echo CpAvOpenhomeOrgTime1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Time1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Time --version=1
$(proxyJs)CpAvOpenhomeOrgPlaylist1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml
	echo CpAvOpenhomeOrgPlaylist1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Playlist --version=1
$(proxyJs)CpAvOpenhomeOrgVolume1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml
	echo CpAvOpenhomeOrgVolume1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Volume --version=1
$(proxyJs)CpAvOpenhomeOrgVolume2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml
	echo CpAvOpenhomeOrgVolume2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Volume --version=2
$(proxyJs)CpAvOpenhomeOrgVolume3.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml
	echo CpAvOpenhomeOrgVolume3.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Volume --version=3
$(proxyJs)CpAvOpenhomeOrgVolume4.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml
	echo CpAvOpenhomeOrgVolume4.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Volume --version=4
$(proxyJs)CpAvOpenhomeOrgProduct1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Product1.xml
	echo CpAvOpenhomeOrgProduct1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Product --version=1
$(proxyJs)CpAvOpenhomeOrgProduct2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Product2.xml
	echo CpAvOpenhomeOrgProduct2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product2.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Product --version=2
$(proxyJs)CpAvOpenhomeOrgProduct3.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Product3.xml
	echo CpAvOpenhomeOrgProduct3.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product3.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Product --version=3
$(proxyJs)CpAvOpenhomeOrgProduct4.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Product4.xml
	echo CpAvOpenhomeOrgProduct4.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product4.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Product --version=4
$(proxyJs)CpAvOpenhomeOrgTransport1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml
	echo CpAvOpenhomeOrgTransport1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Transport --version=1
$(proxyJs)CpAvOpenhomeOrgRadio1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml
	echo CpAvOpenhomeOrgRadio1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Radio --version=1
$(proxyJs)CpAvOpenhomeOrgRadio2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml
	echo CpAvOpenhomeOrgRadio2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Radio --version=2
$(proxyJs)CpAvOpenhomeOrgReceiver1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml
	echo CpAvOpenhomeOrgReceiver1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Receiver --version=1
$(proxyJs)CpAvOpenhomeOrgSender1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml
	echo CpAvOpenhomeOrgSender1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Sender --version=1
$(proxyJs)CpAvOpenhomeOrgSender2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml
	echo CpAvOpenhomeOrgSender2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Sender --version=2
$(proxyJs)CpAvOpenhomeOrgDebug1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml
	echo CpAvOpenhomeOrgDebug1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Debug --version=1
$(proxyJs)CpAvOpenhomeOrgDebug2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml
	echo CpAvOpenhomeOrgDebug2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Debug --version=2
$(proxyJs)CpAvOpenhomeOrgPins1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml
	echo CpAvOpenhomeOrgPins1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Pins --version=1
$(proxyJs)CpAvOpenhomeOrgPlaylistManager1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml
	echo CpAvOpenhomeOrgPlaylistManager1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=PlaylistManager --version=1
$(proxyJs)CpAvOpenhomeOrgMediaServer1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml
	echo CpAvOpenhomeOrgMediaServer1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=MediaServer --version=1
$(proxyJs)CpAvOpenhomeOrgNetworkMonitor1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml
	echo CpAvOpenhomeOrgNetworkMonitor1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=NetworkMonitor --version=1
$(proxyJs)CpOpenhomeOrgTestBasic1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml
	echo CpOpenhomeOrgTestBasic1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml" --output=$(proxyJs) --domain=openhome.org --type=TestBasic --version=1
$(proxyJs)CpOpenhomeOrgTestLights1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml
	echo CpOpenhomeOrgTestLights1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml" --output=$(proxyJs) --domain=openhome.org --type=TestLights --version=1
$(proxyJs)CpOpenhomeOrgSubscriptionLongPoll1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml
	echo CpOpenhomeOrgSubscriptionLongPoll1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml" --output=$(proxyJs) --domain=openhome.org --type=SubscriptionLongPoll --version=1
$(proxyJs)CpAvOpenhomeOrgOAuth1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml
	echo CpAvOpenhomeOrgOAuth1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=OAuth --version=1
$(proxyJs)CpAvOpenhomeOrgReaction1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml
	echo CpAvOpenhomeOrgReaction1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml" --output=$(proxyJs) --domain=av.openhome.org --type=Reaction --version=1
$(proxyJs)CpLinnCoUkFlash1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Flash1.xml
	echo CpLinnCoUkFlash1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Flash1.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Flash --version=1
$(proxyJs)CpLinnCoUkVolkano1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Volkano1.xml
	echo CpLinnCoUkVolkano1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Volkano1.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Volkano --version=1
$(proxyJs)CpLinnCoUkPrivacy1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Privacy1.xml
	echo CpLinnCoUkPrivacy1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Privacy1.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Privacy --version=1
$(proxyJs)CpLinnCoUkExaktInputs1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml
	echo CpLinnCoUkExaktInputs1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml" --output=$(proxyJs) --domain=linn.co.uk --type=ExaktInputs --version=1
$(proxyJs)CpLinnCoUkCloud1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Cloud1.xml
	echo CpLinnCoUkCloud1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud1.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Cloud --version=1
$(proxyJs)CpLinnCoUkCloud2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Cloud2.xml
	echo CpLinnCoUkCloud2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud2.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Cloud --version=2
$(proxyJs)CpLinnCoUkUpdate1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Update1.xml
	echo CpLinnCoUkUpdate1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update1.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Update --version=1
$(proxyJs)CpLinnCoUkUpdate2.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Update2.xml
	echo CpLinnCoUkUpdate2.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update2.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Update --version=2
$(proxyJs)CpLinnCoUkUpdate3.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Update3.xml
	echo CpLinnCoUkUpdate3.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Update3.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Update --version=3
$(proxyJs)CpLinnCoUkConfiguration1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Configuration1.xml
	echo CpLinnCoUkConfiguration1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Configuration1.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Configuration --version=1
$(proxyJs)CpLinnCoUkLipSync1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/LipSync1.xml
	echo CpLinnCoUkLipSync1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/LipSync1.xml" --output=$(proxyJs) --domain=linn.co.uk --type=LipSync --version=1
$(proxyJs)CpLinnCoUkExakt21.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Exakt21.xml
	echo CpLinnCoUkExakt21.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt21.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Exakt2 --version=1
$(proxyJs)CpLinnCoUkExakt22.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Exakt22.xml
	echo CpLinnCoUkExakt22.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt22.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Exakt2 --version=2
$(proxyJs)CpLinnCoUkWifi1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Wifi1.xml
	echo CpLinnCoUkWifi1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Wifi1.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Wifi --version=1
$(proxyJs)CpLinnCoUkZoneReceiver1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml
	echo CpLinnCoUkZoneReceiver1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml" --output=$(proxyJs) --domain=linn.co.uk --type=ZoneReceiver --version=1
$(proxyJs)CpLinnCoUkZones1.js : $(tt) OpenHome/Net/T4/Templates/CpUpnpJs.tt OpenHome/Net/Service/Upnp/Linn/Zones1.xml
	echo CpLinnCoUkZones1.js
	$(ohNetGen) --language=js --stack=cp "--xml=OpenHome/Net/Service/Upnp/Linn/Zones1.xml" --output=$(proxyJs) --domain=linn.co.uk --type=Zones --version=1

DvCppCore :   $(deviceCppCore)DvUpnpOrgAVTransport1.cpp $(deviceCppCore)DvUpnpOrgAVTransport2.cpp $(deviceCppCore)DvUpnpOrgConnectionManager1.cpp $(deviceCppCore)DvUpnpOrgConnectionManager2.cpp $(deviceCppCore)DvUpnpOrgContentDirectory1.cpp $(deviceCppCore)DvUpnpOrgContentDirectory2.cpp $(deviceCppCore)DvUpnpOrgContentDirectory3.cpp $(deviceCppCore)DvUpnpOrgRenderingControl1.cpp $(deviceCppCore)DvUpnpOrgRenderingControl2.cpp $(deviceCppCore)DvUpnpOrgScheduledRecording1.cpp $(deviceCppCore)DvUpnpOrgScheduledRecording2.cpp $(deviceCppCore)DvUpnpOrgSwitchPower1.cpp $(deviceCppCore)DvUpnpOrgDimming1.cpp $(deviceCppCore)DvAvOpenhomeOrgConfigApp1.cpp $(deviceCppCore)DvAvOpenhomeOrgCredentials1.cpp $(deviceCppCore)DvAvOpenhomeOrgExakt1.cpp $(deviceCppCore)DvAvOpenhomeOrgExakt2.cpp $(deviceCppCore)DvAvOpenhomeOrgExakt3.cpp $(deviceCppCore)DvAvOpenhomeOrgExakt4.cpp $(deviceCppCore)DvAvOpenhomeOrgExakt5.cpp $(deviceCppCore)DvAvOpenhomeOrgInfo1.cpp $(deviceCppCore)DvAvOpenhomeOrgTime1.cpp $(deviceCppCore)DvAvOpenhomeOrgPlaylist1.cpp $(deviceCppCore)DvAvOpenhomeOrgVolume1.cpp $(deviceCppCore)DvAvOpenhomeOrgVolume2.cpp $(deviceCppCore)DvAvOpenhomeOrgVolume3.cpp $(deviceCppCore)DvAvOpenhomeOrgVolume4.cpp $(deviceCppCore)DvAvOpenhomeOrgProduct1.cpp $(deviceCppCore)DvAvOpenhomeOrgProduct2.cpp $(deviceCppCore)DvAvOpenhomeOrgProduct3.cpp $(deviceCppCore)DvAvOpenhomeOrgProduct4.cpp $(deviceCppCore)DvAvOpenhomeOrgTransport1.cpp $(deviceCppCore)DvAvOpenhomeOrgRadio1.cpp $(deviceCppCore)DvAvOpenhomeOrgRadio2.cpp $(deviceCppCore)DvAvOpenhomeOrgReceiver1.cpp $(deviceCppCore)DvAvOpenhomeOrgSender1.cpp $(deviceCppCore)DvAvOpenhomeOrgSender2.cpp $(deviceCppCore)DvAvOpenhomeOrgDebug1.cpp $(deviceCppCore)DvAvOpenhomeOrgDebug2.cpp $(deviceCppCore)DvAvOpenhomeOrgPins1.cpp $(deviceCppCore)DvAvOpenhomeOrgPlaylistManager1.cpp $(deviceCppCore)DvAvOpenhomeOrgMediaServer1.cpp $(deviceCppCore)DvAvOpenhomeOrgNetworkMonitor1.cpp $(deviceCppCore)DvOpenhomeOrgTestBasic1.cpp $(deviceCppCore)DvOpenhomeOrgTestLights1.cpp $(deviceCppCore)DvOpenhomeOrgSubscriptionLongPoll1.cpp $(deviceCppCore)DvAvOpenhomeOrgOAuth1.cpp $(deviceCppCore)DvAvOpenhomeOrgReaction1.cpp $(deviceCppCore)DvLinnCoUkFlash1.cpp $(deviceCppCore)DvLinnCoUkVolkano1.cpp $(deviceCppCore)DvLinnCoUkPrivacy1.cpp $(deviceCppCore)DvLinnCoUkExaktInputs1.cpp $(deviceCppCore)DvLinnCoUkCloud1.cpp $(deviceCppCore)DvLinnCoUkCloud2.cpp $(deviceCppCore)DvLinnCoUkUpdate1.cpp $(deviceCppCore)DvLinnCoUkUpdate2.cpp $(deviceCppCore)DvLinnCoUkUpdate3.cpp $(deviceCppCore)DvLinnCoUkConfiguration1.cpp $(deviceCppCore)DvLinnCoUkLipSync1.cpp $(deviceCppCore)DvLinnCoUkExakt21.cpp $(deviceCppCore)DvLinnCoUkExakt22.cpp $(deviceCppCore)DvLinnCoUkWifi1.cpp $(deviceCppCore)DvLinnCoUkZoneReceiver1.cpp $(deviceCppCore)DvLinnCoUkZones1.cpp
$(deviceCppCore)DvUpnpOrgAVTransport1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml
	echo DvUpnpOrgAVTransport1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml" --output=$(deviceCppCore) --domain=upnp.org --type=AVTransport --version=1
$(deviceCppCore)DvUpnpOrgAVTransport2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml
	echo DvUpnpOrgAVTransport2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml" --output=$(deviceCppCore) --domain=upnp.org --type=AVTransport --version=2
$(deviceCppCore)DvUpnpOrgConnectionManager1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml
	echo DvUpnpOrgConnectionManager1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml" --output=$(deviceCppCore) --domain=upnp.org --type=ConnectionManager --version=1
$(deviceCppCore)DvUpnpOrgConnectionManager2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml
	echo DvUpnpOrgConnectionManager2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml" --output=$(deviceCppCore) --domain=upnp.org --type=ConnectionManager --version=2
$(deviceCppCore)DvUpnpOrgContentDirectory1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml
	echo DvUpnpOrgContentDirectory1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml" --output=$(deviceCppCore) --domain=upnp.org --type=ContentDirectory --version=1
$(deviceCppCore)DvUpnpOrgContentDirectory2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml
	echo DvUpnpOrgContentDirectory2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml" --output=$(deviceCppCore) --domain=upnp.org --type=ContentDirectory --version=2
$(deviceCppCore)DvUpnpOrgContentDirectory3.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml
	echo DvUpnpOrgContentDirectory3.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml" --output=$(deviceCppCore) --domain=upnp.org --type=ContentDirectory --version=3
$(deviceCppCore)DvUpnpOrgRenderingControl1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml
	echo DvUpnpOrgRenderingControl1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml" --output=$(deviceCppCore) --domain=upnp.org --type=RenderingControl --version=1
$(deviceCppCore)DvUpnpOrgRenderingControl2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml
	echo DvUpnpOrgRenderingControl2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml" --output=$(deviceCppCore) --domain=upnp.org --type=RenderingControl --version=2
$(deviceCppCore)DvUpnpOrgScheduledRecording1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml
	echo DvUpnpOrgScheduledRecording1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml" --output=$(deviceCppCore) --domain=upnp.org --type=ScheduledRecording --version=1
$(deviceCppCore)DvUpnpOrgScheduledRecording2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml
	echo DvUpnpOrgScheduledRecording2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml" --output=$(deviceCppCore) --domain=upnp.org --type=ScheduledRecording --version=2
$(deviceCppCore)DvUpnpOrgSwitchPower1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml
	echo DvUpnpOrgSwitchPower1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml" --output=$(deviceCppCore) --domain=upnp.org --type=SwitchPower --version=1
$(deviceCppCore)DvUpnpOrgDimming1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml
	echo DvUpnpOrgDimming1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml" --output=$(deviceCppCore) --domain=upnp.org --type=Dimming --version=1
$(deviceCppCore)DvAvOpenhomeOrgConfigApp1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml
	echo DvAvOpenhomeOrgConfigApp1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=ConfigApp --version=1
$(deviceCppCore)DvAvOpenhomeOrgCredentials1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml
	echo DvAvOpenhomeOrgCredentials1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Credentials --version=1
$(deviceCppCore)DvAvOpenhomeOrgExakt1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml
	echo DvAvOpenhomeOrgExakt1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Exakt --version=1
$(deviceCppCore)DvAvOpenhomeOrgExakt2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml
	echo DvAvOpenhomeOrgExakt2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Exakt --version=2
$(deviceCppCore)DvAvOpenhomeOrgExakt3.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml
	echo DvAvOpenhomeOrgExakt3.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Exakt --version=3
$(deviceCppCore)DvAvOpenhomeOrgExakt4.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml
	echo DvAvOpenhomeOrgExakt4.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Exakt --version=4
$(deviceCppCore)DvAvOpenhomeOrgExakt5.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml
	echo DvAvOpenhomeOrgExakt5.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Exakt --version=5
$(deviceCppCore)DvAvOpenhomeOrgInfo1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Info1.xml
	echo DvAvOpenhomeOrgInfo1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Info1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Info --version=1
$(deviceCppCore)DvAvOpenhomeOrgTime1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Time1.xml
	echo DvAvOpenhomeOrgTime1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Time1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Time --version=1
$(deviceCppCore)DvAvOpenhomeOrgPlaylist1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml
	echo DvAvOpenhomeOrgPlaylist1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Playlist --version=1
$(deviceCppCore)DvAvOpenhomeOrgVolume1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml
	echo DvAvOpenhomeOrgVolume1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Volume --version=1
$(deviceCppCore)DvAvOpenhomeOrgVolume2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml
	echo DvAvOpenhomeOrgVolume2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Volume --version=2
$(deviceCppCore)DvAvOpenhomeOrgVolume3.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml
	echo DvAvOpenhomeOrgVolume3.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Volume --version=3
$(deviceCppCore)DvAvOpenhomeOrgVolume4.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml
	echo DvAvOpenhomeOrgVolume4.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Volume --version=4
$(deviceCppCore)DvAvOpenhomeOrgProduct1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product1.xml
	echo DvAvOpenhomeOrgProduct1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Product --version=1
$(deviceCppCore)DvAvOpenhomeOrgProduct2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product2.xml
	echo DvAvOpenhomeOrgProduct2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product2.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Product --version=2
$(deviceCppCore)DvAvOpenhomeOrgProduct3.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product3.xml
	echo DvAvOpenhomeOrgProduct3.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product3.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Product --version=3
$(deviceCppCore)DvAvOpenhomeOrgProduct4.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product4.xml
	echo DvAvOpenhomeOrgProduct4.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product4.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Product --version=4
$(deviceCppCore)DvAvOpenhomeOrgTransport1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml
	echo DvAvOpenhomeOrgTransport1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Transport --version=1
$(deviceCppCore)DvAvOpenhomeOrgRadio1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml
	echo DvAvOpenhomeOrgRadio1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Radio --version=1
$(deviceCppCore)DvAvOpenhomeOrgRadio2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml
	echo DvAvOpenhomeOrgRadio2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Radio --version=2
$(deviceCppCore)DvAvOpenhomeOrgReceiver1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml
	echo DvAvOpenhomeOrgReceiver1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Receiver --version=1
$(deviceCppCore)DvAvOpenhomeOrgSender1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml
	echo DvAvOpenhomeOrgSender1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Sender --version=1
$(deviceCppCore)DvAvOpenhomeOrgSender2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml
	echo DvAvOpenhomeOrgSender2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Sender --version=2
$(deviceCppCore)DvAvOpenhomeOrgDebug1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml
	echo DvAvOpenhomeOrgDebug1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Debug --version=1
$(deviceCppCore)DvAvOpenhomeOrgDebug2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml
	echo DvAvOpenhomeOrgDebug2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Debug --version=2
$(deviceCppCore)DvAvOpenhomeOrgPins1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml
	echo DvAvOpenhomeOrgPins1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Pins --version=1
$(deviceCppCore)DvAvOpenhomeOrgPlaylistManager1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml
	echo DvAvOpenhomeOrgPlaylistManager1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=PlaylistManager --version=1
$(deviceCppCore)DvAvOpenhomeOrgMediaServer1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml
	echo DvAvOpenhomeOrgMediaServer1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=MediaServer --version=1
$(deviceCppCore)DvAvOpenhomeOrgNetworkMonitor1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml
	echo DvAvOpenhomeOrgNetworkMonitor1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=NetworkMonitor --version=1
$(deviceCppCore)DvOpenhomeOrgTestBasic1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml
	echo DvOpenhomeOrgTestBasic1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml" --output=$(deviceCppCore) --domain=openhome.org --type=TestBasic --version=1
$(deviceCppCore)DvOpenhomeOrgTestLights1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml
	echo DvOpenhomeOrgTestLights1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml" --output=$(deviceCppCore) --domain=openhome.org --type=TestLights --version=1
$(deviceCppCore)DvOpenhomeOrgSubscriptionLongPoll1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml
	echo DvOpenhomeOrgSubscriptionLongPoll1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml" --output=$(deviceCppCore) --domain=openhome.org --type=SubscriptionLongPoll --version=1
$(deviceCppCore)DvAvOpenhomeOrgOAuth1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml
	echo DvAvOpenhomeOrgOAuth1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=OAuth --version=1
$(deviceCppCore)DvAvOpenhomeOrgReaction1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml
	echo DvAvOpenhomeOrgReaction1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml" --output=$(deviceCppCore) --domain=av.openhome.org --type=Reaction --version=1
$(deviceCppCore)DvLinnCoUkFlash1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Flash1.xml
	echo DvLinnCoUkFlash1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Flash1.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Flash --version=1
$(deviceCppCore)DvLinnCoUkVolkano1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Volkano1.xml
	echo DvLinnCoUkVolkano1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Volkano1.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Volkano --version=1
$(deviceCppCore)DvLinnCoUkPrivacy1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Privacy1.xml
	echo DvLinnCoUkPrivacy1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Privacy1.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Privacy --version=1
$(deviceCppCore)DvLinnCoUkExaktInputs1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml
	echo DvLinnCoUkExaktInputs1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=ExaktInputs --version=1
$(deviceCppCore)DvLinnCoUkCloud1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Cloud1.xml
	echo DvLinnCoUkCloud1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud1.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Cloud --version=1
$(deviceCppCore)DvLinnCoUkCloud2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Cloud2.xml
	echo DvLinnCoUkCloud2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud2.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Cloud --version=2
$(deviceCppCore)DvLinnCoUkUpdate1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Update1.xml
	echo DvLinnCoUkUpdate1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update1.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Update --version=1
$(deviceCppCore)DvLinnCoUkUpdate2.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Update2.xml
	echo DvLinnCoUkUpdate2.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update2.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Update --version=2
$(deviceCppCore)DvLinnCoUkUpdate3.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Update3.xml
	echo DvLinnCoUkUpdate3.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update3.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Update --version=3
$(deviceCppCore)DvLinnCoUkConfiguration1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Configuration1.xml
	echo DvLinnCoUkConfiguration1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Configuration1.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Configuration --version=1
$(deviceCppCore)DvLinnCoUkLipSync1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/LipSync1.xml
	echo DvLinnCoUkLipSync1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/LipSync1.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=LipSync --version=1
$(deviceCppCore)DvLinnCoUkExakt21.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Exakt21.xml
	echo DvLinnCoUkExakt21.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt21.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Exakt2 --version=1
$(deviceCppCore)DvLinnCoUkExakt22.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Exakt22.xml
	echo DvLinnCoUkExakt22.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt22.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Exakt2 --version=2
$(deviceCppCore)DvLinnCoUkWifi1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Wifi1.xml
	echo DvLinnCoUkWifi1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Wifi1.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Wifi --version=1
$(deviceCppCore)DvLinnCoUkZoneReceiver1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml
	echo DvLinnCoUkZoneReceiver1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=ZoneReceiver --version=1
$(deviceCppCore)DvLinnCoUkZones1.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppCoreSource.tt OpenHome/Net/T4/Templates/DvUpnpCppCoreHeader.tt OpenHome/Net/Service/Upnp/Linn/Zones1.xml
	echo DvLinnCoUkZones1.cpp
	$(ohNetGen) --language=cppcore --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Zones1.xml" --output=$(deviceCppCore) --domain=linn.co.uk --type=Zones --version=1

DvCppStd :   $(deviceCppStd)DvUpnpOrgAVTransport1Std.cpp $(deviceCppStd)DvUpnpOrgAVTransport2Std.cpp $(deviceCppStd)DvUpnpOrgConnectionManager1Std.cpp $(deviceCppStd)DvUpnpOrgConnectionManager2Std.cpp $(deviceCppStd)DvUpnpOrgContentDirectory1Std.cpp $(deviceCppStd)DvUpnpOrgContentDirectory2Std.cpp $(deviceCppStd)DvUpnpOrgContentDirectory3Std.cpp $(deviceCppStd)DvUpnpOrgRenderingControl1Std.cpp $(deviceCppStd)DvUpnpOrgRenderingControl2Std.cpp $(deviceCppStd)DvUpnpOrgScheduledRecording1Std.cpp $(deviceCppStd)DvUpnpOrgScheduledRecording2Std.cpp $(deviceCppStd)DvUpnpOrgSwitchPower1Std.cpp $(deviceCppStd)DvUpnpOrgDimming1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgConfigApp1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgCredentials1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgExakt1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgExakt2Std.cpp $(deviceCppStd)DvAvOpenhomeOrgExakt3Std.cpp $(deviceCppStd)DvAvOpenhomeOrgExakt4Std.cpp $(deviceCppStd)DvAvOpenhomeOrgExakt5Std.cpp $(deviceCppStd)DvAvOpenhomeOrgInfo1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgTime1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgPlaylist1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgVolume1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgVolume2Std.cpp $(deviceCppStd)DvAvOpenhomeOrgVolume3Std.cpp $(deviceCppStd)DvAvOpenhomeOrgVolume4Std.cpp $(deviceCppStd)DvAvOpenhomeOrgProduct1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgProduct2Std.cpp $(deviceCppStd)DvAvOpenhomeOrgProduct3Std.cpp $(deviceCppStd)DvAvOpenhomeOrgProduct4Std.cpp $(deviceCppStd)DvAvOpenhomeOrgTransport1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgRadio1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgRadio2Std.cpp $(deviceCppStd)DvAvOpenhomeOrgReceiver1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgSender1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgSender2Std.cpp $(deviceCppStd)DvAvOpenhomeOrgDebug1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgDebug2Std.cpp $(deviceCppStd)DvAvOpenhomeOrgPins1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgPlaylistManager1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgMediaServer1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgNetworkMonitor1Std.cpp $(deviceCppStd)DvOpenhomeOrgTestBasic1Std.cpp $(deviceCppStd)DvOpenhomeOrgTestLights1Std.cpp $(deviceCppStd)DvOpenhomeOrgSubscriptionLongPoll1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgOAuth1Std.cpp $(deviceCppStd)DvAvOpenhomeOrgReaction1Std.cpp $(deviceCppStd)DvLinnCoUkFlash1Std.cpp $(deviceCppStd)DvLinnCoUkVolkano1Std.cpp $(deviceCppStd)DvLinnCoUkPrivacy1Std.cpp $(deviceCppStd)DvLinnCoUkExaktInputs1Std.cpp $(deviceCppStd)DvLinnCoUkCloud1Std.cpp $(deviceCppStd)DvLinnCoUkCloud2Std.cpp $(deviceCppStd)DvLinnCoUkUpdate1Std.cpp $(deviceCppStd)DvLinnCoUkUpdate2Std.cpp $(deviceCppStd)DvLinnCoUkUpdate3Std.cpp $(deviceCppStd)DvLinnCoUkConfiguration1Std.cpp $(deviceCppStd)DvLinnCoUkLipSync1Std.cpp $(deviceCppStd)DvLinnCoUkExakt21Std.cpp $(deviceCppStd)DvLinnCoUkExakt22Std.cpp $(deviceCppStd)DvLinnCoUkWifi1Std.cpp $(deviceCppStd)DvLinnCoUkZoneReceiver1Std.cpp $(deviceCppStd)DvLinnCoUkZones1Std.cpp
$(deviceCppStd)DvUpnpOrgAVTransport1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml
	echo DvUpnpOrgAVTransport1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml" --output=$(deviceCppStd) --domain=upnp.org --type=AVTransport --version=1
$(deviceCppStd)DvUpnpOrgAVTransport2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml
	echo DvUpnpOrgAVTransport2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml" --output=$(deviceCppStd) --domain=upnp.org --type=AVTransport --version=2
$(deviceCppStd)DvUpnpOrgConnectionManager1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml
	echo DvUpnpOrgConnectionManager1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml" --output=$(deviceCppStd) --domain=upnp.org --type=ConnectionManager --version=1
$(deviceCppStd)DvUpnpOrgConnectionManager2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml
	echo DvUpnpOrgConnectionManager2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml" --output=$(deviceCppStd) --domain=upnp.org --type=ConnectionManager --version=2
$(deviceCppStd)DvUpnpOrgContentDirectory1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml
	echo DvUpnpOrgContentDirectory1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml" --output=$(deviceCppStd) --domain=upnp.org --type=ContentDirectory --version=1
$(deviceCppStd)DvUpnpOrgContentDirectory2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml
	echo DvUpnpOrgContentDirectory2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml" --output=$(deviceCppStd) --domain=upnp.org --type=ContentDirectory --version=2
$(deviceCppStd)DvUpnpOrgContentDirectory3Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml
	echo DvUpnpOrgContentDirectory3Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml" --output=$(deviceCppStd) --domain=upnp.org --type=ContentDirectory --version=3
$(deviceCppStd)DvUpnpOrgRenderingControl1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml
	echo DvUpnpOrgRenderingControl1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml" --output=$(deviceCppStd) --domain=upnp.org --type=RenderingControl --version=1
$(deviceCppStd)DvUpnpOrgRenderingControl2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml
	echo DvUpnpOrgRenderingControl2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml" --output=$(deviceCppStd) --domain=upnp.org --type=RenderingControl --version=2
$(deviceCppStd)DvUpnpOrgScheduledRecording1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml
	echo DvUpnpOrgScheduledRecording1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml" --output=$(deviceCppStd) --domain=upnp.org --type=ScheduledRecording --version=1
$(deviceCppStd)DvUpnpOrgScheduledRecording2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml
	echo DvUpnpOrgScheduledRecording2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml" --output=$(deviceCppStd) --domain=upnp.org --type=ScheduledRecording --version=2
$(deviceCppStd)DvUpnpOrgSwitchPower1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml
	echo DvUpnpOrgSwitchPower1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml" --output=$(deviceCppStd) --domain=upnp.org --type=SwitchPower --version=1
$(deviceCppStd)DvUpnpOrgDimming1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml
	echo DvUpnpOrgDimming1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml" --output=$(deviceCppStd) --domain=upnp.org --type=Dimming --version=1
$(deviceCppStd)DvAvOpenhomeOrgConfigApp1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml
	echo DvAvOpenhomeOrgConfigApp1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=ConfigApp --version=1
$(deviceCppStd)DvAvOpenhomeOrgCredentials1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml
	echo DvAvOpenhomeOrgCredentials1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Credentials --version=1
$(deviceCppStd)DvAvOpenhomeOrgExakt1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml
	echo DvAvOpenhomeOrgExakt1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Exakt --version=1
$(deviceCppStd)DvAvOpenhomeOrgExakt2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml
	echo DvAvOpenhomeOrgExakt2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Exakt --version=2
$(deviceCppStd)DvAvOpenhomeOrgExakt3Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml
	echo DvAvOpenhomeOrgExakt3Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Exakt --version=3
$(deviceCppStd)DvAvOpenhomeOrgExakt4Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml
	echo DvAvOpenhomeOrgExakt4Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Exakt --version=4
$(deviceCppStd)DvAvOpenhomeOrgExakt5Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml
	echo DvAvOpenhomeOrgExakt5Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Exakt --version=5
$(deviceCppStd)DvAvOpenhomeOrgInfo1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Info1.xml
	echo DvAvOpenhomeOrgInfo1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Info1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Info --version=1
$(deviceCppStd)DvAvOpenhomeOrgTime1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Time1.xml
	echo DvAvOpenhomeOrgTime1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Time1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Time --version=1
$(deviceCppStd)DvAvOpenhomeOrgPlaylist1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml
	echo DvAvOpenhomeOrgPlaylist1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Playlist --version=1
$(deviceCppStd)DvAvOpenhomeOrgVolume1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml
	echo DvAvOpenhomeOrgVolume1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Volume --version=1
$(deviceCppStd)DvAvOpenhomeOrgVolume2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml
	echo DvAvOpenhomeOrgVolume2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Volume --version=2
$(deviceCppStd)DvAvOpenhomeOrgVolume3Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml
	echo DvAvOpenhomeOrgVolume3Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Volume --version=3
$(deviceCppStd)DvAvOpenhomeOrgVolume4Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml
	echo DvAvOpenhomeOrgVolume4Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Volume --version=4
$(deviceCppStd)DvAvOpenhomeOrgProduct1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product1.xml
	echo DvAvOpenhomeOrgProduct1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Product --version=1
$(deviceCppStd)DvAvOpenhomeOrgProduct2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product2.xml
	echo DvAvOpenhomeOrgProduct2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product2.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Product --version=2
$(deviceCppStd)DvAvOpenhomeOrgProduct3Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product3.xml
	echo DvAvOpenhomeOrgProduct3Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product3.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Product --version=3
$(deviceCppStd)DvAvOpenhomeOrgProduct4Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product4.xml
	echo DvAvOpenhomeOrgProduct4Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product4.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Product --version=4
$(deviceCppStd)DvAvOpenhomeOrgTransport1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml
	echo DvAvOpenhomeOrgTransport1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Transport --version=1
$(deviceCppStd)DvAvOpenhomeOrgRadio1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml
	echo DvAvOpenhomeOrgRadio1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Radio --version=1
$(deviceCppStd)DvAvOpenhomeOrgRadio2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml
	echo DvAvOpenhomeOrgRadio2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Radio --version=2
$(deviceCppStd)DvAvOpenhomeOrgReceiver1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml
	echo DvAvOpenhomeOrgReceiver1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Receiver --version=1
$(deviceCppStd)DvAvOpenhomeOrgSender1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml
	echo DvAvOpenhomeOrgSender1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Sender --version=1
$(deviceCppStd)DvAvOpenhomeOrgSender2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml
	echo DvAvOpenhomeOrgSender2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Sender --version=2
$(deviceCppStd)DvAvOpenhomeOrgDebug1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml
	echo DvAvOpenhomeOrgDebug1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Debug --version=1
$(deviceCppStd)DvAvOpenhomeOrgDebug2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml
	echo DvAvOpenhomeOrgDebug2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Debug --version=2
$(deviceCppStd)DvAvOpenhomeOrgPins1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml
	echo DvAvOpenhomeOrgPins1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Pins --version=1
$(deviceCppStd)DvAvOpenhomeOrgPlaylistManager1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml
	echo DvAvOpenhomeOrgPlaylistManager1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=PlaylistManager --version=1
$(deviceCppStd)DvAvOpenhomeOrgMediaServer1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml
	echo DvAvOpenhomeOrgMediaServer1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=MediaServer --version=1
$(deviceCppStd)DvAvOpenhomeOrgNetworkMonitor1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml
	echo DvAvOpenhomeOrgNetworkMonitor1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=NetworkMonitor --version=1
$(deviceCppStd)DvOpenhomeOrgTestBasic1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml
	echo DvOpenhomeOrgTestBasic1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml" --output=$(deviceCppStd) --domain=openhome.org --type=TestBasic --version=1
$(deviceCppStd)DvOpenhomeOrgTestLights1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml
	echo DvOpenhomeOrgTestLights1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml" --output=$(deviceCppStd) --domain=openhome.org --type=TestLights --version=1
$(deviceCppStd)DvOpenhomeOrgSubscriptionLongPoll1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml
	echo DvOpenhomeOrgSubscriptionLongPoll1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml" --output=$(deviceCppStd) --domain=openhome.org --type=SubscriptionLongPoll --version=1
$(deviceCppStd)DvAvOpenhomeOrgOAuth1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml
	echo DvAvOpenhomeOrgOAuth1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=OAuth --version=1
$(deviceCppStd)DvAvOpenhomeOrgReaction1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml
	echo DvAvOpenhomeOrgReaction1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml" --output=$(deviceCppStd) --domain=av.openhome.org --type=Reaction --version=1
$(deviceCppStd)DvLinnCoUkFlash1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Flash1.xml
	echo DvLinnCoUkFlash1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Flash1.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Flash --version=1
$(deviceCppStd)DvLinnCoUkVolkano1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Volkano1.xml
	echo DvLinnCoUkVolkano1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Volkano1.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Volkano --version=1
$(deviceCppStd)DvLinnCoUkPrivacy1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Privacy1.xml
	echo DvLinnCoUkPrivacy1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Privacy1.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Privacy --version=1
$(deviceCppStd)DvLinnCoUkExaktInputs1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml
	echo DvLinnCoUkExaktInputs1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=ExaktInputs --version=1
$(deviceCppStd)DvLinnCoUkCloud1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Cloud1.xml
	echo DvLinnCoUkCloud1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud1.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Cloud --version=1
$(deviceCppStd)DvLinnCoUkCloud2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Cloud2.xml
	echo DvLinnCoUkCloud2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud2.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Cloud --version=2
$(deviceCppStd)DvLinnCoUkUpdate1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Update1.xml
	echo DvLinnCoUkUpdate1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update1.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Update --version=1
$(deviceCppStd)DvLinnCoUkUpdate2Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Update2.xml
	echo DvLinnCoUkUpdate2Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update2.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Update --version=2
$(deviceCppStd)DvLinnCoUkUpdate3Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Update3.xml
	echo DvLinnCoUkUpdate3Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update3.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Update --version=3
$(deviceCppStd)DvLinnCoUkConfiguration1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Configuration1.xml
	echo DvLinnCoUkConfiguration1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Configuration1.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Configuration --version=1
$(deviceCppStd)DvLinnCoUkLipSync1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/LipSync1.xml
	echo DvLinnCoUkLipSync1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/LipSync1.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=LipSync --version=1
$(deviceCppStd)DvLinnCoUkExakt21Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Exakt21.xml
	echo DvLinnCoUkExakt21Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt21.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Exakt2 --version=1
$(deviceCppStd)DvLinnCoUkExakt22Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Exakt22.xml
	echo DvLinnCoUkExakt22Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt22.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Exakt2 --version=2
$(deviceCppStd)DvLinnCoUkWifi1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Wifi1.xml
	echo DvLinnCoUkWifi1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Wifi1.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Wifi --version=1
$(deviceCppStd)DvLinnCoUkZoneReceiver1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml
	echo DvLinnCoUkZoneReceiver1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=ZoneReceiver --version=1
$(deviceCppStd)DvLinnCoUkZones1Std.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCppStdSource.tt OpenHome/Net/T4/Templates/DvUpnpCppStdHeader.tt OpenHome/Net/Service/Upnp/Linn/Zones1.xml
	echo DvLinnCoUkZones1Std.cpp
	$(ohNetGen) --language=cpp --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Zones1.xml" --output=$(deviceCppStd) --domain=linn.co.uk --type=Zones --version=1

DvC :   $(deviceC)DvUpnpOrgAVTransport1C.cpp $(deviceC)DvUpnpOrgAVTransport2C.cpp $(deviceC)DvUpnpOrgConnectionManager1C.cpp $(deviceC)DvUpnpOrgConnectionManager2C.cpp $(deviceC)DvUpnpOrgContentDirectory1C.cpp $(deviceC)DvUpnpOrgContentDirectory2C.cpp $(deviceC)DvUpnpOrgContentDirectory3C.cpp $(deviceC)DvUpnpOrgRenderingControl1C.cpp $(deviceC)DvUpnpOrgRenderingControl2C.cpp $(deviceC)DvUpnpOrgScheduledRecording1C.cpp $(deviceC)DvUpnpOrgScheduledRecording2C.cpp $(deviceC)DvUpnpOrgSwitchPower1C.cpp $(deviceC)DvUpnpOrgDimming1C.cpp $(deviceC)DvAvOpenhomeOrgConfigApp1C.cpp $(deviceC)DvAvOpenhomeOrgCredentials1C.cpp $(deviceC)DvAvOpenhomeOrgExakt1C.cpp $(deviceC)DvAvOpenhomeOrgExakt2C.cpp $(deviceC)DvAvOpenhomeOrgExakt3C.cpp $(deviceC)DvAvOpenhomeOrgExakt4C.cpp $(deviceC)DvAvOpenhomeOrgExakt5C.cpp $(deviceC)DvAvOpenhomeOrgInfo1C.cpp $(deviceC)DvAvOpenhomeOrgTime1C.cpp $(deviceC)DvAvOpenhomeOrgPlaylist1C.cpp $(deviceC)DvAvOpenhomeOrgVolume1C.cpp $(deviceC)DvAvOpenhomeOrgVolume2C.cpp $(deviceC)DvAvOpenhomeOrgVolume3C.cpp $(deviceC)DvAvOpenhomeOrgVolume4C.cpp $(deviceC)DvAvOpenhomeOrgProduct1C.cpp $(deviceC)DvAvOpenhomeOrgProduct2C.cpp $(deviceC)DvAvOpenhomeOrgProduct3C.cpp $(deviceC)DvAvOpenhomeOrgProduct4C.cpp $(deviceC)DvAvOpenhomeOrgTransport1C.cpp $(deviceC)DvAvOpenhomeOrgRadio1C.cpp $(deviceC)DvAvOpenhomeOrgRadio2C.cpp $(deviceC)DvAvOpenhomeOrgReceiver1C.cpp $(deviceC)DvAvOpenhomeOrgSender1C.cpp $(deviceC)DvAvOpenhomeOrgSender2C.cpp $(deviceC)DvAvOpenhomeOrgDebug1C.cpp $(deviceC)DvAvOpenhomeOrgDebug2C.cpp $(deviceC)DvAvOpenhomeOrgPins1C.cpp $(deviceC)DvAvOpenhomeOrgPlaylistManager1C.cpp $(deviceC)DvAvOpenhomeOrgMediaServer1C.cpp $(deviceC)DvAvOpenhomeOrgNetworkMonitor1C.cpp $(deviceC)DvOpenhomeOrgTestBasic1C.cpp $(deviceC)DvOpenhomeOrgTestLights1C.cpp $(deviceC)DvOpenhomeOrgSubscriptionLongPoll1C.cpp $(deviceC)DvAvOpenhomeOrgOAuth1C.cpp $(deviceC)DvAvOpenhomeOrgReaction1C.cpp $(deviceC)DvLinnCoUkFlash1C.cpp $(deviceC)DvLinnCoUkVolkano1C.cpp $(deviceC)DvLinnCoUkPrivacy1C.cpp $(deviceC)DvLinnCoUkExaktInputs1C.cpp $(deviceC)DvLinnCoUkCloud1C.cpp $(deviceC)DvLinnCoUkCloud2C.cpp $(deviceC)DvLinnCoUkUpdate1C.cpp $(deviceC)DvLinnCoUkUpdate2C.cpp $(deviceC)DvLinnCoUkUpdate3C.cpp $(deviceC)DvLinnCoUkConfiguration1C.cpp $(deviceC)DvLinnCoUkLipSync1C.cpp $(deviceC)DvLinnCoUkExakt21C.cpp $(deviceC)DvLinnCoUkExakt22C.cpp $(deviceC)DvLinnCoUkWifi1C.cpp $(deviceC)DvLinnCoUkZoneReceiver1C.cpp $(deviceC)DvLinnCoUkZones1C.cpp
$(deviceC)DvUpnpOrgAVTransport1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml
	echo DvUpnpOrgAVTransport1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml" --output=$(deviceC) --domain=upnp.org --type=AVTransport --version=1
$(deviceC)DvUpnpOrgAVTransport2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml
	echo DvUpnpOrgAVTransport2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml" --output=$(deviceC) --domain=upnp.org --type=AVTransport --version=2
$(deviceC)DvUpnpOrgConnectionManager1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml
	echo DvUpnpOrgConnectionManager1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml" --output=$(deviceC) --domain=upnp.org --type=ConnectionManager --version=1
$(deviceC)DvUpnpOrgConnectionManager2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml
	echo DvUpnpOrgConnectionManager2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml" --output=$(deviceC) --domain=upnp.org --type=ConnectionManager --version=2
$(deviceC)DvUpnpOrgContentDirectory1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml
	echo DvUpnpOrgContentDirectory1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml" --output=$(deviceC) --domain=upnp.org --type=ContentDirectory --version=1
$(deviceC)DvUpnpOrgContentDirectory2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml
	echo DvUpnpOrgContentDirectory2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml" --output=$(deviceC) --domain=upnp.org --type=ContentDirectory --version=2
$(deviceC)DvUpnpOrgContentDirectory3C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml
	echo DvUpnpOrgContentDirectory3C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml" --output=$(deviceC) --domain=upnp.org --type=ContentDirectory --version=3
$(deviceC)DvUpnpOrgRenderingControl1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml
	echo DvUpnpOrgRenderingControl1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml" --output=$(deviceC) --domain=upnp.org --type=RenderingControl --version=1
$(deviceC)DvUpnpOrgRenderingControl2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml
	echo DvUpnpOrgRenderingControl2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml" --output=$(deviceC) --domain=upnp.org --type=RenderingControl --version=2
$(deviceC)DvUpnpOrgScheduledRecording1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml
	echo DvUpnpOrgScheduledRecording1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml" --output=$(deviceC) --domain=upnp.org --type=ScheduledRecording --version=1
$(deviceC)DvUpnpOrgScheduledRecording2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml
	echo DvUpnpOrgScheduledRecording2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml" --output=$(deviceC) --domain=upnp.org --type=ScheduledRecording --version=2
$(deviceC)DvUpnpOrgSwitchPower1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml
	echo DvUpnpOrgSwitchPower1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml" --output=$(deviceC) --domain=upnp.org --type=SwitchPower --version=1
$(deviceC)DvUpnpOrgDimming1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml
	echo DvUpnpOrgDimming1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml" --output=$(deviceC) --domain=upnp.org --type=Dimming --version=1
$(deviceC)DvAvOpenhomeOrgConfigApp1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml
	echo DvAvOpenhomeOrgConfigApp1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml" --output=$(deviceC) --domain=av.openhome.org --type=ConfigApp --version=1
$(deviceC)DvAvOpenhomeOrgCredentials1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml
	echo DvAvOpenhomeOrgCredentials1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Credentials --version=1
$(deviceC)DvAvOpenhomeOrgExakt1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml
	echo DvAvOpenhomeOrgExakt1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Exakt --version=1
$(deviceC)DvAvOpenhomeOrgExakt2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml
	echo DvAvOpenhomeOrgExakt2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml" --output=$(deviceC) --domain=av.openhome.org --type=Exakt --version=2
$(deviceC)DvAvOpenhomeOrgExakt3C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml
	echo DvAvOpenhomeOrgExakt3C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml" --output=$(deviceC) --domain=av.openhome.org --type=Exakt --version=3
$(deviceC)DvAvOpenhomeOrgExakt4C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml
	echo DvAvOpenhomeOrgExakt4C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml" --output=$(deviceC) --domain=av.openhome.org --type=Exakt --version=4
$(deviceC)DvAvOpenhomeOrgExakt5C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml
	echo DvAvOpenhomeOrgExakt5C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml" --output=$(deviceC) --domain=av.openhome.org --type=Exakt --version=5
$(deviceC)DvAvOpenhomeOrgInfo1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Info1.xml
	echo DvAvOpenhomeOrgInfo1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Info1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Info --version=1
$(deviceC)DvAvOpenhomeOrgTime1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Time1.xml
	echo DvAvOpenhomeOrgTime1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Time1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Time --version=1
$(deviceC)DvAvOpenhomeOrgPlaylist1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml
	echo DvAvOpenhomeOrgPlaylist1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Playlist --version=1
$(deviceC)DvAvOpenhomeOrgVolume1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml
	echo DvAvOpenhomeOrgVolume1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Volume --version=1
$(deviceC)DvAvOpenhomeOrgVolume2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml
	echo DvAvOpenhomeOrgVolume2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml" --output=$(deviceC) --domain=av.openhome.org --type=Volume --version=2
$(deviceC)DvAvOpenhomeOrgVolume3C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml
	echo DvAvOpenhomeOrgVolume3C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml" --output=$(deviceC) --domain=av.openhome.org --type=Volume --version=3
$(deviceC)DvAvOpenhomeOrgVolume4C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml
	echo DvAvOpenhomeOrgVolume4C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml" --output=$(deviceC) --domain=av.openhome.org --type=Volume --version=4
$(deviceC)DvAvOpenhomeOrgProduct1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product1.xml
	echo DvAvOpenhomeOrgProduct1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Product --version=1
$(deviceC)DvAvOpenhomeOrgProduct2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product2.xml
	echo DvAvOpenhomeOrgProduct2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product2.xml" --output=$(deviceC) --domain=av.openhome.org --type=Product --version=2
$(deviceC)DvAvOpenhomeOrgProduct3C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product3.xml
	echo DvAvOpenhomeOrgProduct3C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product3.xml" --output=$(deviceC) --domain=av.openhome.org --type=Product --version=3
$(deviceC)DvAvOpenhomeOrgProduct4C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Product4.xml
	echo DvAvOpenhomeOrgProduct4C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product4.xml" --output=$(deviceC) --domain=av.openhome.org --type=Product --version=4
$(deviceC)DvAvOpenhomeOrgTransport1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml
	echo DvAvOpenhomeOrgTransport1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Transport --version=1
$(deviceC)DvAvOpenhomeOrgRadio1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml
	echo DvAvOpenhomeOrgRadio1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Radio --version=1
$(deviceC)DvAvOpenhomeOrgRadio2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml
	echo DvAvOpenhomeOrgRadio2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml" --output=$(deviceC) --domain=av.openhome.org --type=Radio --version=2
$(deviceC)DvAvOpenhomeOrgReceiver1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml
	echo DvAvOpenhomeOrgReceiver1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Receiver --version=1
$(deviceC)DvAvOpenhomeOrgSender1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml
	echo DvAvOpenhomeOrgSender1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Sender --version=1
$(deviceC)DvAvOpenhomeOrgSender2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml
	echo DvAvOpenhomeOrgSender2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml" --output=$(deviceC) --domain=av.openhome.org --type=Sender --version=2
$(deviceC)DvAvOpenhomeOrgDebug1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml
	echo DvAvOpenhomeOrgDebug1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Debug --version=1
$(deviceC)DvAvOpenhomeOrgDebug2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml
	echo DvAvOpenhomeOrgDebug2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml" --output=$(deviceC) --domain=av.openhome.org --type=Debug --version=2
$(deviceC)DvAvOpenhomeOrgPins1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml
	echo DvAvOpenhomeOrgPins1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Pins --version=1
$(deviceC)DvAvOpenhomeOrgPlaylistManager1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml
	echo DvAvOpenhomeOrgPlaylistManager1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml" --output=$(deviceC) --domain=av.openhome.org --type=PlaylistManager --version=1
$(deviceC)DvAvOpenhomeOrgMediaServer1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml
	echo DvAvOpenhomeOrgMediaServer1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml" --output=$(deviceC) --domain=av.openhome.org --type=MediaServer --version=1
$(deviceC)DvAvOpenhomeOrgNetworkMonitor1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml
	echo DvAvOpenhomeOrgNetworkMonitor1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml" --output=$(deviceC) --domain=av.openhome.org --type=NetworkMonitor --version=1
$(deviceC)DvOpenhomeOrgTestBasic1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml
	echo DvOpenhomeOrgTestBasic1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml" --output=$(deviceC) --domain=openhome.org --type=TestBasic --version=1
$(deviceC)DvOpenhomeOrgTestLights1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml
	echo DvOpenhomeOrgTestLights1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml" --output=$(deviceC) --domain=openhome.org --type=TestLights --version=1
$(deviceC)DvOpenhomeOrgSubscriptionLongPoll1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml
	echo DvOpenhomeOrgSubscriptionLongPoll1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml" --output=$(deviceC) --domain=openhome.org --type=SubscriptionLongPoll --version=1
$(deviceC)DvAvOpenhomeOrgOAuth1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml
	echo DvAvOpenhomeOrgOAuth1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml" --output=$(deviceC) --domain=av.openhome.org --type=OAuth --version=1
$(deviceC)DvAvOpenhomeOrgReaction1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml
	echo DvAvOpenhomeOrgReaction1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml" --output=$(deviceC) --domain=av.openhome.org --type=Reaction --version=1
$(deviceC)DvLinnCoUkFlash1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Flash1.xml
	echo DvLinnCoUkFlash1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Flash1.xml" --output=$(deviceC) --domain=linn.co.uk --type=Flash --version=1
$(deviceC)DvLinnCoUkVolkano1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Volkano1.xml
	echo DvLinnCoUkVolkano1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Volkano1.xml" --output=$(deviceC) --domain=linn.co.uk --type=Volkano --version=1
$(deviceC)DvLinnCoUkPrivacy1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Privacy1.xml
	echo DvLinnCoUkPrivacy1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Privacy1.xml" --output=$(deviceC) --domain=linn.co.uk --type=Privacy --version=1
$(deviceC)DvLinnCoUkExaktInputs1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml
	echo DvLinnCoUkExaktInputs1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml" --output=$(deviceC) --domain=linn.co.uk --type=ExaktInputs --version=1
$(deviceC)DvLinnCoUkCloud1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Cloud1.xml
	echo DvLinnCoUkCloud1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud1.xml" --output=$(deviceC) --domain=linn.co.uk --type=Cloud --version=1
$(deviceC)DvLinnCoUkCloud2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Cloud2.xml
	echo DvLinnCoUkCloud2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud2.xml" --output=$(deviceC) --domain=linn.co.uk --type=Cloud --version=2
$(deviceC)DvLinnCoUkUpdate1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Update1.xml
	echo DvLinnCoUkUpdate1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update1.xml" --output=$(deviceC) --domain=linn.co.uk --type=Update --version=1
$(deviceC)DvLinnCoUkUpdate2C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Update2.xml
	echo DvLinnCoUkUpdate2C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update2.xml" --output=$(deviceC) --domain=linn.co.uk --type=Update --version=2
$(deviceC)DvLinnCoUkUpdate3C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Update3.xml
	echo DvLinnCoUkUpdate3C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update3.xml" --output=$(deviceC) --domain=linn.co.uk --type=Update --version=3
$(deviceC)DvLinnCoUkConfiguration1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Configuration1.xml
	echo DvLinnCoUkConfiguration1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Configuration1.xml" --output=$(deviceC) --domain=linn.co.uk --type=Configuration --version=1
$(deviceC)DvLinnCoUkLipSync1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/LipSync1.xml
	echo DvLinnCoUkLipSync1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/LipSync1.xml" --output=$(deviceC) --domain=linn.co.uk --type=LipSync --version=1
$(deviceC)DvLinnCoUkExakt21C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Exakt21.xml
	echo DvLinnCoUkExakt21C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt21.xml" --output=$(deviceC) --domain=linn.co.uk --type=Exakt2 --version=1
$(deviceC)DvLinnCoUkExakt22C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Exakt22.xml
	echo DvLinnCoUkExakt22C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt22.xml" --output=$(deviceC) --domain=linn.co.uk --type=Exakt2 --version=2
$(deviceC)DvLinnCoUkWifi1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Wifi1.xml
	echo DvLinnCoUkWifi1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Wifi1.xml" --output=$(deviceC) --domain=linn.co.uk --type=Wifi --version=1
$(deviceC)DvLinnCoUkZoneReceiver1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml
	echo DvLinnCoUkZoneReceiver1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml" --output=$(deviceC) --domain=linn.co.uk --type=ZoneReceiver --version=1
$(deviceC)DvLinnCoUkZones1C.cpp : $(tt) OpenHome/Net/T4/Templates/DvUpnpCSource.tt OpenHome/Net/T4/Templates/DvUpnpCHeader.tt OpenHome/Net/Service/Upnp/Linn/Zones1.xml
	echo DvLinnCoUkZones1C.cpp
	$(ohNetGen) --language=c --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Zones1.xml" --output=$(deviceC) --domain=linn.co.uk --type=Zones --version=1

DvCs:   $(deviceCs)DvUpnpOrgAVTransport1.cs $(deviceCs)DvUpnpOrgAVTransport2.cs $(deviceCs)DvUpnpOrgConnectionManager1.cs $(deviceCs)DvUpnpOrgConnectionManager2.cs $(deviceCs)DvUpnpOrgContentDirectory1.cs $(deviceCs)DvUpnpOrgContentDirectory2.cs $(deviceCs)DvUpnpOrgContentDirectory3.cs $(deviceCs)DvUpnpOrgRenderingControl1.cs $(deviceCs)DvUpnpOrgRenderingControl2.cs $(deviceCs)DvUpnpOrgScheduledRecording1.cs $(deviceCs)DvUpnpOrgScheduledRecording2.cs $(deviceCs)DvUpnpOrgSwitchPower1.cs $(deviceCs)DvUpnpOrgDimming1.cs $(deviceCs)DvAvOpenhomeOrgConfigApp1.cs $(deviceCs)DvAvOpenhomeOrgCredentials1.cs $(deviceCs)DvAvOpenhomeOrgExakt1.cs $(deviceCs)DvAvOpenhomeOrgExakt2.cs $(deviceCs)DvAvOpenhomeOrgExakt3.cs $(deviceCs)DvAvOpenhomeOrgExakt4.cs $(deviceCs)DvAvOpenhomeOrgExakt5.cs $(deviceCs)DvAvOpenhomeOrgInfo1.cs $(deviceCs)DvAvOpenhomeOrgTime1.cs $(deviceCs)DvAvOpenhomeOrgPlaylist1.cs $(deviceCs)DvAvOpenhomeOrgVolume1.cs $(deviceCs)DvAvOpenhomeOrgVolume2.cs $(deviceCs)DvAvOpenhomeOrgVolume3.cs $(deviceCs)DvAvOpenhomeOrgVolume4.cs $(deviceCs)DvAvOpenhomeOrgProduct1.cs $(deviceCs)DvAvOpenhomeOrgProduct2.cs $(deviceCs)DvAvOpenhomeOrgProduct3.cs $(deviceCs)DvAvOpenhomeOrgProduct4.cs $(deviceCs)DvAvOpenhomeOrgTransport1.cs $(deviceCs)DvAvOpenhomeOrgRadio1.cs $(deviceCs)DvAvOpenhomeOrgRadio2.cs $(deviceCs)DvAvOpenhomeOrgReceiver1.cs $(deviceCs)DvAvOpenhomeOrgSender1.cs $(deviceCs)DvAvOpenhomeOrgSender2.cs $(deviceCs)DvAvOpenhomeOrgDebug1.cs $(deviceCs)DvAvOpenhomeOrgDebug2.cs $(deviceCs)DvAvOpenhomeOrgPins1.cs $(deviceCs)DvAvOpenhomeOrgPlaylistManager1.cs $(deviceCs)DvAvOpenhomeOrgMediaServer1.cs $(deviceCs)DvAvOpenhomeOrgNetworkMonitor1.cs $(deviceCs)DvOpenhomeOrgTestBasic1.cs $(deviceCs)DvOpenhomeOrgTestLights1.cs $(deviceCs)DvOpenhomeOrgSubscriptionLongPoll1.cs $(deviceCs)DvAvOpenhomeOrgOAuth1.cs $(deviceCs)DvAvOpenhomeOrgReaction1.cs $(deviceCs)DvLinnCoUkFlash1.cs $(deviceCs)DvLinnCoUkVolkano1.cs $(deviceCs)DvLinnCoUkPrivacy1.cs $(deviceCs)DvLinnCoUkExaktInputs1.cs $(deviceCs)DvLinnCoUkCloud1.cs $(deviceCs)DvLinnCoUkCloud2.cs $(deviceCs)DvLinnCoUkUpdate1.cs $(deviceCs)DvLinnCoUkUpdate2.cs $(deviceCs)DvLinnCoUkUpdate3.cs $(deviceCs)DvLinnCoUkConfiguration1.cs $(deviceCs)DvLinnCoUkLipSync1.cs $(deviceCs)DvLinnCoUkExakt21.cs $(deviceCs)DvLinnCoUkExakt22.cs $(deviceCs)DvLinnCoUkWifi1.cs $(deviceCs)DvLinnCoUkZoneReceiver1.cs $(deviceCs)DvLinnCoUkZones1.cs
$(deviceCs)DvUpnpOrgAVTransport1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml
	echo DvUpnpOrgAVTransport1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml" --output=$(deviceCs) --domain=upnp.org --type=AVTransport --version=1
$(deviceCs)DvUpnpOrgAVTransport2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml
	echo DvUpnpOrgAVTransport2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml" --output=$(deviceCs) --domain=upnp.org --type=AVTransport --version=2
$(deviceCs)DvUpnpOrgConnectionManager1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml
	echo DvUpnpOrgConnectionManager1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml" --output=$(deviceCs) --domain=upnp.org --type=ConnectionManager --version=1
$(deviceCs)DvUpnpOrgConnectionManager2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml
	echo DvUpnpOrgConnectionManager2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml" --output=$(deviceCs) --domain=upnp.org --type=ConnectionManager --version=2
$(deviceCs)DvUpnpOrgContentDirectory1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml
	echo DvUpnpOrgContentDirectory1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml" --output=$(deviceCs) --domain=upnp.org --type=ContentDirectory --version=1
$(deviceCs)DvUpnpOrgContentDirectory2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml
	echo DvUpnpOrgContentDirectory2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml" --output=$(deviceCs) --domain=upnp.org --type=ContentDirectory --version=2
$(deviceCs)DvUpnpOrgContentDirectory3.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml
	echo DvUpnpOrgContentDirectory3.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml" --output=$(deviceCs) --domain=upnp.org --type=ContentDirectory --version=3
$(deviceCs)DvUpnpOrgRenderingControl1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml
	echo DvUpnpOrgRenderingControl1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml" --output=$(deviceCs) --domain=upnp.org --type=RenderingControl --version=1
$(deviceCs)DvUpnpOrgRenderingControl2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml
	echo DvUpnpOrgRenderingControl2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml" --output=$(deviceCs) --domain=upnp.org --type=RenderingControl --version=2
$(deviceCs)DvUpnpOrgScheduledRecording1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml
	echo DvUpnpOrgScheduledRecording1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml" --output=$(deviceCs) --domain=upnp.org --type=ScheduledRecording --version=1
$(deviceCs)DvUpnpOrgScheduledRecording2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml
	echo DvUpnpOrgScheduledRecording2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml" --output=$(deviceCs) --domain=upnp.org --type=ScheduledRecording --version=2
$(deviceCs)DvUpnpOrgSwitchPower1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml
	echo DvUpnpOrgSwitchPower1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml" --output=$(deviceCs) --domain=upnp.org --type=SwitchPower --version=1
$(deviceCs)DvUpnpOrgDimming1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml
	echo DvUpnpOrgDimming1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml" --output=$(deviceCs) --domain=upnp.org --type=Dimming --version=1
$(deviceCs)DvAvOpenhomeOrgConfigApp1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml
	echo DvAvOpenhomeOrgConfigApp1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=ConfigApp --version=1
$(deviceCs)DvAvOpenhomeOrgCredentials1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml
	echo DvAvOpenhomeOrgCredentials1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Credentials --version=1
$(deviceCs)DvAvOpenhomeOrgExakt1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml
	echo DvAvOpenhomeOrgExakt1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Exakt --version=1
$(deviceCs)DvAvOpenhomeOrgExakt2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml
	echo DvAvOpenhomeOrgExakt2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Exakt --version=2
$(deviceCs)DvAvOpenhomeOrgExakt3.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml
	echo DvAvOpenhomeOrgExakt3.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Exakt --version=3
$(deviceCs)DvAvOpenhomeOrgExakt4.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml
	echo DvAvOpenhomeOrgExakt4.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Exakt --version=4
$(deviceCs)DvAvOpenhomeOrgExakt5.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml
	echo DvAvOpenhomeOrgExakt5.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Exakt --version=5
$(deviceCs)DvAvOpenhomeOrgInfo1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Info1.xml
	echo DvAvOpenhomeOrgInfo1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Info1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Info --version=1
$(deviceCs)DvAvOpenhomeOrgTime1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Time1.xml
	echo DvAvOpenhomeOrgTime1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Time1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Time --version=1
$(deviceCs)DvAvOpenhomeOrgPlaylist1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml
	echo DvAvOpenhomeOrgPlaylist1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Playlist --version=1
$(deviceCs)DvAvOpenhomeOrgVolume1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml
	echo DvAvOpenhomeOrgVolume1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Volume --version=1
$(deviceCs)DvAvOpenhomeOrgVolume2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml
	echo DvAvOpenhomeOrgVolume2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Volume --version=2
$(deviceCs)DvAvOpenhomeOrgVolume3.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml
	echo DvAvOpenhomeOrgVolume3.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Volume --version=3
$(deviceCs)DvAvOpenhomeOrgVolume4.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml
	echo DvAvOpenhomeOrgVolume4.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Volume --version=4
$(deviceCs)DvAvOpenhomeOrgProduct1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Product1.xml
	echo DvAvOpenhomeOrgProduct1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Product --version=1
$(deviceCs)DvAvOpenhomeOrgProduct2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Product2.xml
	echo DvAvOpenhomeOrgProduct2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product2.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Product --version=2
$(deviceCs)DvAvOpenhomeOrgProduct3.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Product3.xml
	echo DvAvOpenhomeOrgProduct3.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product3.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Product --version=3
$(deviceCs)DvAvOpenhomeOrgProduct4.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Product4.xml
	echo DvAvOpenhomeOrgProduct4.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product4.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Product --version=4
$(deviceCs)DvAvOpenhomeOrgTransport1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml
	echo DvAvOpenhomeOrgTransport1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Transport --version=1
$(deviceCs)DvAvOpenhomeOrgRadio1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml
	echo DvAvOpenhomeOrgRadio1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Radio --version=1
$(deviceCs)DvAvOpenhomeOrgRadio2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml
	echo DvAvOpenhomeOrgRadio2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Radio --version=2
$(deviceCs)DvAvOpenhomeOrgReceiver1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml
	echo DvAvOpenhomeOrgReceiver1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Receiver --version=1
$(deviceCs)DvAvOpenhomeOrgSender1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml
	echo DvAvOpenhomeOrgSender1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Sender --version=1
$(deviceCs)DvAvOpenhomeOrgSender2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml
	echo DvAvOpenhomeOrgSender2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Sender --version=2
$(deviceCs)DvAvOpenhomeOrgDebug1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml
	echo DvAvOpenhomeOrgDebug1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Debug --version=1
$(deviceCs)DvAvOpenhomeOrgDebug2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml
	echo DvAvOpenhomeOrgDebug2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Debug --version=2
$(deviceCs)DvAvOpenhomeOrgPins1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml
	echo DvAvOpenhomeOrgPins1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Pins --version=1
$(deviceCs)DvAvOpenhomeOrgPlaylistManager1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml
	echo DvAvOpenhomeOrgPlaylistManager1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=PlaylistManager --version=1
$(deviceCs)DvAvOpenhomeOrgMediaServer1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml
	echo DvAvOpenhomeOrgMediaServer1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=MediaServer --version=1
$(deviceCs)DvAvOpenhomeOrgNetworkMonitor1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml
	echo DvAvOpenhomeOrgNetworkMonitor1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=NetworkMonitor --version=1
$(deviceCs)DvOpenhomeOrgTestBasic1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml
	echo DvOpenhomeOrgTestBasic1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml" --output=$(deviceCs) --domain=openhome.org --type=TestBasic --version=1
$(deviceCs)DvOpenhomeOrgTestLights1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml
	echo DvOpenhomeOrgTestLights1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml" --output=$(deviceCs) --domain=openhome.org --type=TestLights --version=1
$(deviceCs)DvOpenhomeOrgSubscriptionLongPoll1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml
	echo DvOpenhomeOrgSubscriptionLongPoll1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml" --output=$(deviceCs) --domain=openhome.org --type=SubscriptionLongPoll --version=1
$(deviceCs)DvAvOpenhomeOrgOAuth1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml
	echo DvAvOpenhomeOrgOAuth1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=OAuth --version=1
$(deviceCs)DvAvOpenhomeOrgReaction1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml
	echo DvAvOpenhomeOrgReaction1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml" --output=$(deviceCs) --domain=av.openhome.org --type=Reaction --version=1
$(deviceCs)DvLinnCoUkFlash1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Flash1.xml
	echo DvLinnCoUkFlash1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Flash1.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Flash --version=1
$(deviceCs)DvLinnCoUkVolkano1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Volkano1.xml
	echo DvLinnCoUkVolkano1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Volkano1.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Volkano --version=1
$(deviceCs)DvLinnCoUkPrivacy1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Privacy1.xml
	echo DvLinnCoUkPrivacy1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Privacy1.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Privacy --version=1
$(deviceCs)DvLinnCoUkExaktInputs1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml
	echo DvLinnCoUkExaktInputs1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml" --output=$(deviceCs) --domain=linn.co.uk --type=ExaktInputs --version=1
$(deviceCs)DvLinnCoUkCloud1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Cloud1.xml
	echo DvLinnCoUkCloud1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud1.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Cloud --version=1
$(deviceCs)DvLinnCoUkCloud2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Cloud2.xml
	echo DvLinnCoUkCloud2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud2.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Cloud --version=2
$(deviceCs)DvLinnCoUkUpdate1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Update1.xml
	echo DvLinnCoUkUpdate1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update1.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Update --version=1
$(deviceCs)DvLinnCoUkUpdate2.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Update2.xml
	echo DvLinnCoUkUpdate2.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update2.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Update --version=2
$(deviceCs)DvLinnCoUkUpdate3.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Update3.xml
	echo DvLinnCoUkUpdate3.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update3.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Update --version=3
$(deviceCs)DvLinnCoUkConfiguration1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Configuration1.xml
	echo DvLinnCoUkConfiguration1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Configuration1.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Configuration --version=1
$(deviceCs)DvLinnCoUkLipSync1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/LipSync1.xml
	echo DvLinnCoUkLipSync1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/LipSync1.xml" --output=$(deviceCs) --domain=linn.co.uk --type=LipSync --version=1
$(deviceCs)DvLinnCoUkExakt21.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Exakt21.xml
	echo DvLinnCoUkExakt21.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt21.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Exakt2 --version=1
$(deviceCs)DvLinnCoUkExakt22.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Exakt22.xml
	echo DvLinnCoUkExakt22.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt22.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Exakt2 --version=2
$(deviceCs)DvLinnCoUkWifi1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Wifi1.xml
	echo DvLinnCoUkWifi1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Wifi1.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Wifi --version=1
$(deviceCs)DvLinnCoUkZoneReceiver1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml
	echo DvLinnCoUkZoneReceiver1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml" --output=$(deviceCs) --domain=linn.co.uk --type=ZoneReceiver --version=1
$(deviceCs)DvLinnCoUkZones1.cs : $(tt) OpenHome/Net/T4/Templates/DvUpnpCs.tt OpenHome/Net/Service/Upnp/Linn/Zones1.xml
	echo DvLinnCoUkZones1.cs
	$(ohNetGen) --language=cs --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Zones1.xml" --output=$(deviceCs) --domain=linn.co.uk --type=Zones --version=1

DvJava:   $(deviceJava)DvProviderUpnpOrgAVTransport1.java $(deviceJava)DvProviderUpnpOrgAVTransport2.java $(deviceJava)DvProviderUpnpOrgConnectionManager1.java $(deviceJava)DvProviderUpnpOrgConnectionManager2.java $(deviceJava)DvProviderUpnpOrgContentDirectory1.java $(deviceJava)DvProviderUpnpOrgContentDirectory2.java $(deviceJava)DvProviderUpnpOrgContentDirectory3.java $(deviceJava)DvProviderUpnpOrgRenderingControl1.java $(deviceJava)DvProviderUpnpOrgRenderingControl2.java $(deviceJava)DvProviderUpnpOrgScheduledRecording1.java $(deviceJava)DvProviderUpnpOrgScheduledRecording2.java $(deviceJava)DvProviderUpnpOrgSwitchPower1.java $(deviceJava)DvProviderUpnpOrgDimming1.java $(deviceJava)DvProviderAvOpenhomeOrgConfigApp1.java $(deviceJava)DvProviderAvOpenhomeOrgCredentials1.java $(deviceJava)DvProviderAvOpenhomeOrgExakt1.java $(deviceJava)DvProviderAvOpenhomeOrgExakt2.java $(deviceJava)DvProviderAvOpenhomeOrgExakt3.java $(deviceJava)DvProviderAvOpenhomeOrgExakt4.java $(deviceJava)DvProviderAvOpenhomeOrgExakt5.java $(deviceJava)DvProviderAvOpenhomeOrgInfo1.java $(deviceJava)DvProviderAvOpenhomeOrgTime1.java $(deviceJava)DvProviderAvOpenhomeOrgPlaylist1.java $(deviceJava)DvProviderAvOpenhomeOrgVolume1.java $(deviceJava)DvProviderAvOpenhomeOrgVolume2.java $(deviceJava)DvProviderAvOpenhomeOrgVolume3.java $(deviceJava)DvProviderAvOpenhomeOrgVolume4.java $(deviceJava)DvProviderAvOpenhomeOrgProduct1.java $(deviceJava)DvProviderAvOpenhomeOrgProduct2.java $(deviceJava)DvProviderAvOpenhomeOrgProduct3.java $(deviceJava)DvProviderAvOpenhomeOrgProduct4.java $(deviceJava)DvProviderAvOpenhomeOrgTransport1.java $(deviceJava)DvProviderAvOpenhomeOrgRadio1.java $(deviceJava)DvProviderAvOpenhomeOrgRadio2.java $(deviceJava)DvProviderAvOpenhomeOrgReceiver1.java $(deviceJava)DvProviderAvOpenhomeOrgSender1.java $(deviceJava)DvProviderAvOpenhomeOrgSender2.java $(deviceJava)DvProviderAvOpenhomeOrgDebug1.java $(deviceJava)DvProviderAvOpenhomeOrgDebug2.java $(deviceJava)DvProviderAvOpenhomeOrgPins1.java $(deviceJava)DvProviderAvOpenhomeOrgPlaylistManager1.java $(deviceJava)DvProviderAvOpenhomeOrgMediaServer1.java $(deviceJava)DvProviderAvOpenhomeOrgNetworkMonitor1.java $(deviceJava)DvProviderOpenhomeOrgTestBasic1.java $(deviceJava)DvProviderOpenhomeOrgTestLights1.java $(deviceJava)DvProviderOpenhomeOrgSubscriptionLongPoll1.java $(deviceJava)DvProviderAvOpenhomeOrgOAuth1.java $(deviceJava)DvProviderAvOpenhomeOrgReaction1.java $(deviceJava)DvProviderLinnCoUkFlash1.java $(deviceJava)DvProviderLinnCoUkVolkano1.java $(deviceJava)DvProviderLinnCoUkPrivacy1.java $(deviceJava)DvProviderLinnCoUkExaktInputs1.java $(deviceJava)DvProviderLinnCoUkCloud1.java $(deviceJava)DvProviderLinnCoUkCloud2.java $(deviceJava)DvProviderLinnCoUkUpdate1.java $(deviceJava)DvProviderLinnCoUkUpdate2.java $(deviceJava)DvProviderLinnCoUkUpdate3.java $(deviceJava)DvProviderLinnCoUkConfiguration1.java $(deviceJava)DvProviderLinnCoUkLipSync1.java $(deviceJava)DvProviderLinnCoUkExakt21.java $(deviceJava)DvProviderLinnCoUkExakt22.java $(deviceJava)DvProviderLinnCoUkWifi1.java $(deviceJava)DvProviderLinnCoUkZoneReceiver1.java $(deviceJava)DvProviderLinnCoUkZones1.java
$(deviceJava)DvProviderUpnpOrgAVTransport1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml
	echo DvProviderUpnpOrgAVTransport1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport1.xml" --output=$(deviceJava) --domain=upnp.org --type=AVTransport --version=1
$(deviceJava)DvProviderUpnpOrgAVTransport2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml
	echo DvProviderUpnpOrgAVTransport2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/AVTransport2.xml" --output=$(deviceJava) --domain=upnp.org --type=AVTransport --version=2
$(deviceJava)DvProviderUpnpOrgConnectionManager1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml
	echo DvProviderUpnpOrgConnectionManager1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager1.xml" --output=$(deviceJava) --domain=upnp.org --type=ConnectionManager --version=1
$(deviceJava)DvProviderUpnpOrgConnectionManager2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml
	echo DvProviderUpnpOrgConnectionManager2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ConnectionManager2.xml" --output=$(deviceJava) --domain=upnp.org --type=ConnectionManager --version=2
$(deviceJava)DvProviderUpnpOrgContentDirectory1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml
	echo DvProviderUpnpOrgContentDirectory1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory1.xml" --output=$(deviceJava) --domain=upnp.org --type=ContentDirectory --version=1
$(deviceJava)DvProviderUpnpOrgContentDirectory2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml
	echo DvProviderUpnpOrgContentDirectory2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory2.xml" --output=$(deviceJava) --domain=upnp.org --type=ContentDirectory --version=2
$(deviceJava)DvProviderUpnpOrgContentDirectory3.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml
	echo DvProviderUpnpOrgContentDirectory3.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ContentDirectory3.xml" --output=$(deviceJava) --domain=upnp.org --type=ContentDirectory --version=3
$(deviceJava)DvProviderUpnpOrgRenderingControl1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml
	echo DvProviderUpnpOrgRenderingControl1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl1.xml" --output=$(deviceJava) --domain=upnp.org --type=RenderingControl --version=1
$(deviceJava)DvProviderUpnpOrgRenderingControl2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml
	echo DvProviderUpnpOrgRenderingControl2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/RenderingControl2.xml" --output=$(deviceJava) --domain=upnp.org --type=RenderingControl --version=2
$(deviceJava)DvProviderUpnpOrgScheduledRecording1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml
	echo DvProviderUpnpOrgScheduledRecording1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording1.xml" --output=$(deviceJava) --domain=upnp.org --type=ScheduledRecording --version=1
$(deviceJava)DvProviderUpnpOrgScheduledRecording2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml
	echo DvProviderUpnpOrgScheduledRecording2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/MediaServer_3/ScheduledRecording2.xml" --output=$(deviceJava) --domain=upnp.org --type=ScheduledRecording --version=2
$(deviceJava)DvProviderUpnpOrgSwitchPower1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml
	echo DvProviderUpnpOrgSwitchPower1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/SwitchPower1.xml" --output=$(deviceJava) --domain=upnp.org --type=SwitchPower --version=1
$(deviceJava)DvProviderUpnpOrgDimming1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml
	echo DvProviderUpnpOrgDimming1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Upnp/LightingControls_1/Dimming1.xml" --output=$(deviceJava) --domain=upnp.org --type=Dimming --version=1
$(deviceJava)DvProviderAvOpenhomeOrgConfigApp1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml
	echo DvProviderAvOpenhomeOrgConfigApp1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/ConfigApp1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=ConfigApp --version=1
$(deviceJava)DvProviderAvOpenhomeOrgCredentials1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml
	echo DvProviderAvOpenhomeOrgCredentials1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Credentials1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Credentials --version=1
$(deviceJava)DvProviderAvOpenhomeOrgExakt1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml
	echo DvProviderAvOpenhomeOrgExakt1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Exakt --version=1
$(deviceJava)DvProviderAvOpenhomeOrgExakt2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml
	echo DvProviderAvOpenhomeOrgExakt2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt2.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Exakt --version=2
$(deviceJava)DvProviderAvOpenhomeOrgExakt3.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml
	echo DvProviderAvOpenhomeOrgExakt3.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt3.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Exakt --version=3
$(deviceJava)DvProviderAvOpenhomeOrgExakt4.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml
	echo DvProviderAvOpenhomeOrgExakt4.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt4.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Exakt --version=4
$(deviceJava)DvProviderAvOpenhomeOrgExakt5.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml
	echo DvProviderAvOpenhomeOrgExakt5.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Exakt5.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Exakt --version=5
$(deviceJava)DvProviderAvOpenhomeOrgInfo1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Info1.xml
	echo DvProviderAvOpenhomeOrgInfo1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Info1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Info --version=1
$(deviceJava)DvProviderAvOpenhomeOrgTime1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Time1.xml
	echo DvProviderAvOpenhomeOrgTime1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Time1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Time --version=1
$(deviceJava)DvProviderAvOpenhomeOrgPlaylist1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml
	echo DvProviderAvOpenhomeOrgPlaylist1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Playlist1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Playlist --version=1
$(deviceJava)DvProviderAvOpenhomeOrgVolume1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml
	echo DvProviderAvOpenhomeOrgVolume1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Volume --version=1
$(deviceJava)DvProviderAvOpenhomeOrgVolume2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml
	echo DvProviderAvOpenhomeOrgVolume2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume2.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Volume --version=2
$(deviceJava)DvProviderAvOpenhomeOrgVolume3.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml
	echo DvProviderAvOpenhomeOrgVolume3.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume3.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Volume --version=3
$(deviceJava)DvProviderAvOpenhomeOrgVolume4.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml
	echo DvProviderAvOpenhomeOrgVolume4.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Volume4.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Volume --version=4
$(deviceJava)DvProviderAvOpenhomeOrgProduct1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Product1.xml
	echo DvProviderAvOpenhomeOrgProduct1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Product --version=1
$(deviceJava)DvProviderAvOpenhomeOrgProduct2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Product2.xml
	echo DvProviderAvOpenhomeOrgProduct2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product2.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Product --version=2
$(deviceJava)DvProviderAvOpenhomeOrgProduct3.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Product3.xml
	echo DvProviderAvOpenhomeOrgProduct3.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product3.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Product --version=3
$(deviceJava)DvProviderAvOpenhomeOrgProduct4.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Product4.xml
	echo DvProviderAvOpenhomeOrgProduct4.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Product4.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Product --version=4
$(deviceJava)DvProviderAvOpenhomeOrgTransport1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml
	echo DvProviderAvOpenhomeOrgTransport1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Transport1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Transport --version=1
$(deviceJava)DvProviderAvOpenhomeOrgRadio1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml
	echo DvProviderAvOpenhomeOrgRadio1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Radio --version=1
$(deviceJava)DvProviderAvOpenhomeOrgRadio2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml
	echo DvProviderAvOpenhomeOrgRadio2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Radio2.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Radio --version=2
$(deviceJava)DvProviderAvOpenhomeOrgReceiver1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml
	echo DvProviderAvOpenhomeOrgReceiver1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Receiver1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Receiver --version=1
$(deviceJava)DvProviderAvOpenhomeOrgSender1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml
	echo DvProviderAvOpenhomeOrgSender1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Sender --version=1
$(deviceJava)DvProviderAvOpenhomeOrgSender2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml
	echo DvProviderAvOpenhomeOrgSender2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Sender2.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Sender --version=2
$(deviceJava)DvProviderAvOpenhomeOrgDebug1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml
	echo DvProviderAvOpenhomeOrgDebug1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Debug --version=1
$(deviceJava)DvProviderAvOpenhomeOrgDebug2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml
	echo DvProviderAvOpenhomeOrgDebug2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Debug2.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Debug --version=2
$(deviceJava)DvProviderAvOpenhomeOrgPins1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml
	echo DvProviderAvOpenhomeOrgPins1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Pins1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Pins --version=1
$(deviceJava)DvProviderAvOpenhomeOrgPlaylistManager1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml
	echo DvProviderAvOpenhomeOrgPlaylistManager1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/PlaylistManager1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=PlaylistManager --version=1
$(deviceJava)DvProviderAvOpenhomeOrgMediaServer1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml
	echo DvProviderAvOpenhomeOrgMediaServer1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/MediaServer1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=MediaServer --version=1
$(deviceJava)DvProviderAvOpenhomeOrgNetworkMonitor1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml
	echo DvProviderAvOpenhomeOrgNetworkMonitor1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/NetworkMonitor1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=NetworkMonitor --version=1
$(deviceJava)DvProviderOpenhomeOrgTestBasic1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml
	echo DvProviderOpenhomeOrgTestBasic1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestBasic1.xml" --output=$(deviceJava) --domain=openhome.org --type=TestBasic --version=1
$(deviceJava)DvProviderOpenhomeOrgTestLights1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml
	echo DvProviderOpenhomeOrgTestLights1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Test/TestLights1.xml" --output=$(deviceJava) --domain=openhome.org --type=TestLights --version=1
$(deviceJava)DvProviderOpenhomeOrgSubscriptionLongPoll1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml
	echo DvProviderOpenhomeOrgSubscriptionLongPoll1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/SubscriptionLongPoll1.xml" --output=$(deviceJava) --domain=openhome.org --type=SubscriptionLongPoll --version=1
$(deviceJava)DvProviderAvOpenhomeOrgOAuth1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml
	echo DvProviderAvOpenhomeOrgOAuth1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/OAuth1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=OAuth --version=1
$(deviceJava)DvProviderAvOpenhomeOrgReaction1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml
	echo DvProviderAvOpenhomeOrgReaction1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/OpenHome/Reaction1.xml" --output=$(deviceJava) --domain=av.openhome.org --type=Reaction --version=1
$(deviceJava)DvProviderLinnCoUkFlash1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Flash1.xml
	echo DvProviderLinnCoUkFlash1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Flash1.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Flash --version=1
$(deviceJava)DvProviderLinnCoUkVolkano1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Volkano1.xml
	echo DvProviderLinnCoUkVolkano1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Volkano1.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Volkano --version=1
$(deviceJava)DvProviderLinnCoUkPrivacy1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Privacy1.xml
	echo DvProviderLinnCoUkPrivacy1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Privacy1.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Privacy --version=1
$(deviceJava)DvProviderLinnCoUkExaktInputs1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml
	echo DvProviderLinnCoUkExaktInputs1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/ExaktInputs1.xml" --output=$(deviceJava) --domain=linn.co.uk --type=ExaktInputs --version=1
$(deviceJava)DvProviderLinnCoUkCloud1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Cloud1.xml
	echo DvProviderLinnCoUkCloud1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud1.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Cloud --version=1
$(deviceJava)DvProviderLinnCoUkCloud2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Cloud2.xml
	echo DvProviderLinnCoUkCloud2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Cloud2.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Cloud --version=2
$(deviceJava)DvProviderLinnCoUkUpdate1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Update1.xml
	echo DvProviderLinnCoUkUpdate1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update1.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Update --version=1
$(deviceJava)DvProviderLinnCoUkUpdate2.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Update2.xml
	echo DvProviderLinnCoUkUpdate2.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update2.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Update --version=2
$(deviceJava)DvProviderLinnCoUkUpdate3.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Update3.xml
	echo DvProviderLinnCoUkUpdate3.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Update3.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Update --version=3
$(deviceJava)DvProviderLinnCoUkConfiguration1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Configuration1.xml
	echo DvProviderLinnCoUkConfiguration1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Configuration1.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Configuration --version=1
$(deviceJava)DvProviderLinnCoUkLipSync1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/LipSync1.xml
	echo DvProviderLinnCoUkLipSync1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/LipSync1.xml" --output=$(deviceJava) --domain=linn.co.uk --type=LipSync --version=1
$(deviceJava)DvProviderLinnCoUkExakt21.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Exakt21.xml
	echo DvProviderLinnCoUkExakt21.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt21.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Exakt2 --version=1
$(deviceJava)DvProviderLinnCoUkExakt22.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Exakt22.xml
	echo DvProviderLinnCoUkExakt22.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Exakt22.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Exakt2 --version=2
$(deviceJava)DvProviderLinnCoUkWifi1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Wifi1.xml
	echo DvProviderLinnCoUkWifi1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Wifi1.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Wifi --version=1
$(deviceJava)DvProviderLinnCoUkZoneReceiver1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml
	echo DvProviderLinnCoUkZoneReceiver1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/ZoneReceiver1.xml" --output=$(deviceJava) --domain=linn.co.uk --type=ZoneReceiver --version=1
$(deviceJava)DvProviderLinnCoUkZones1.java : $(tt) OpenHome/Net/T4/Templates/DvUpnpJava.tt OpenHome/Net/Service/Upnp/Linn/Zones1.xml
	echo DvProviderLinnCoUkZones1.java
	$(ohNetGen) --language=java --stack=dv "--xml=OpenHome/Net/Service/Upnp/Linn/Zones1.xml" --output=$(deviceJava) --domain=linn.co.uk --type=Zones --version=1

