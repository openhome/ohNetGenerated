#include "DvLinnCoUkVolkano2.h"
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/C/DviDeviceC.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/C/DvInvocation.h>
#include <OpenHome/Net/C/DvInvocationPrivate.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class DvProviderLinnCoUkVolkano2C : public DvProvider
{
public:
    DvProviderLinnCoUkVolkano2C(DvDeviceC aDevice);
    TBool SetPropertyDeviceInfo(const Brx& aValue);
    void GetPropertyDeviceInfo(Brhz& aValue);
    TBool SetPropertyIpAddressList(const Brx& aValue);
    void GetPropertyIpAddressList(Brhz& aValue);
    TBool SetPropertyMacAddressList(const Brx& aValue);
    void GetPropertyMacAddressList(Brhz& aValue);
    TBool SetPropertyCoreBoardId(const Brx& aValue);
    void GetPropertyCoreBoardId(Brhz& aValue);
    void EnablePropertyDeviceInfo();
    void EnablePropertyIpAddressList();
    void EnablePropertyMacAddressList();
    void EnablePropertyCoreBoardId();
    void EnableActionReboot(CallbackVolkano2Reboot aCallback, void* aPtr);
    void EnableActionBootMode(CallbackVolkano2BootMode aCallback, void* aPtr);
    void EnableActionSetBootMode(CallbackVolkano2SetBootMode aCallback, void* aPtr);
    void EnableActionBspType(CallbackVolkano2BspType aCallback, void* aPtr);
    void EnableActionUglyName(CallbackVolkano2UglyName aCallback, void* aPtr);
    void EnableActionIpAddress(CallbackVolkano2IpAddress aCallback, void* aPtr);
    void EnableActionIpAddressList(CallbackVolkano2IpAddressList aCallback, void* aPtr);
    void EnableActionMacAddress(CallbackVolkano2MacAddress aCallback, void* aPtr);
    void EnableActionMacAddressList(CallbackVolkano2MacAddressList aCallback, void* aPtr);
    void EnableActionProductId(CallbackVolkano2ProductId aCallback, void* aPtr);
    void EnableActionBoardId(CallbackVolkano2BoardId aCallback, void* aPtr);
    void EnableActionBoardType(CallbackVolkano2BoardType aCallback, void* aPtr);
    void EnableActionMaxBoards(CallbackVolkano2MaxBoards aCallback, void* aPtr);
    void EnableActionSoftwareVersion(CallbackVolkano2SoftwareVersion aCallback, void* aPtr);
    void EnableActionSoftwareUpdate(CallbackVolkano2SoftwareUpdate aCallback, void* aPtr);
    void EnableActionDeviceInfo(CallbackVolkano2DeviceInfo aCallback, void* aPtr);
    void EnableActionCoreBoardId(CallbackVolkano2CoreBoardId aCallback, void* aPtr);
private:
    void DoReboot(IDviInvocation& aInvocation);
    void DoBootMode(IDviInvocation& aInvocation);
    void DoSetBootMode(IDviInvocation& aInvocation);
    void DoBspType(IDviInvocation& aInvocation);
    void DoUglyName(IDviInvocation& aInvocation);
    void DoIpAddress(IDviInvocation& aInvocation);
    void DoIpAddressList(IDviInvocation& aInvocation);
    void DoMacAddress(IDviInvocation& aInvocation);
    void DoMacAddressList(IDviInvocation& aInvocation);
    void DoProductId(IDviInvocation& aInvocation);
    void DoBoardId(IDviInvocation& aInvocation);
    void DoBoardType(IDviInvocation& aInvocation);
    void DoMaxBoards(IDviInvocation& aInvocation);
    void DoSoftwareVersion(IDviInvocation& aInvocation);
    void DoSoftwareUpdate(IDviInvocation& aInvocation);
    void DoDeviceInfo(IDviInvocation& aInvocation);
    void DoCoreBoardId(IDviInvocation& aInvocation);
private:
    CallbackVolkano2Reboot iCallbackReboot;
    void* iPtrReboot;
    CallbackVolkano2BootMode iCallbackBootMode;
    void* iPtrBootMode;
    CallbackVolkano2SetBootMode iCallbackSetBootMode;
    void* iPtrSetBootMode;
    CallbackVolkano2BspType iCallbackBspType;
    void* iPtrBspType;
    CallbackVolkano2UglyName iCallbackUglyName;
    void* iPtrUglyName;
    CallbackVolkano2IpAddress iCallbackIpAddress;
    void* iPtrIpAddress;
    CallbackVolkano2IpAddressList iCallbackIpAddressList;
    void* iPtrIpAddressList;
    CallbackVolkano2MacAddress iCallbackMacAddress;
    void* iPtrMacAddress;
    CallbackVolkano2MacAddressList iCallbackMacAddressList;
    void* iPtrMacAddressList;
    CallbackVolkano2ProductId iCallbackProductId;
    void* iPtrProductId;
    CallbackVolkano2BoardId iCallbackBoardId;
    void* iPtrBoardId;
    CallbackVolkano2BoardType iCallbackBoardType;
    void* iPtrBoardType;
    CallbackVolkano2MaxBoards iCallbackMaxBoards;
    void* iPtrMaxBoards;
    CallbackVolkano2SoftwareVersion iCallbackSoftwareVersion;
    void* iPtrSoftwareVersion;
    CallbackVolkano2SoftwareUpdate iCallbackSoftwareUpdate;
    void* iPtrSoftwareUpdate;
    CallbackVolkano2DeviceInfo iCallbackDeviceInfo;
    void* iPtrDeviceInfo;
    CallbackVolkano2CoreBoardId iCallbackCoreBoardId;
    void* iPtrCoreBoardId;
    PropertyString* iPropertyDeviceInfo;
    PropertyString* iPropertyIpAddressList;
    PropertyString* iPropertyMacAddressList;
    PropertyString* iPropertyCoreBoardId;
};

DvProviderLinnCoUkVolkano2C::DvProviderLinnCoUkVolkano2C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Volkano", 2)
{
    iPropertyDeviceInfo = NULL;
    iPropertyIpAddressList = NULL;
    iPropertyMacAddressList = NULL;
    iPropertyCoreBoardId = NULL;
}

TBool DvProviderLinnCoUkVolkano2C::SetPropertyDeviceInfo(const Brx& aValue)
{
    ASSERT(iPropertyDeviceInfo != NULL);
    return SetPropertyString(*iPropertyDeviceInfo, aValue);
}

void DvProviderLinnCoUkVolkano2C::GetPropertyDeviceInfo(Brhz& aValue)
{
    ASSERT(iPropertyDeviceInfo != NULL);
    aValue.Set(iPropertyDeviceInfo->Value());
}

TBool DvProviderLinnCoUkVolkano2C::SetPropertyIpAddressList(const Brx& aValue)
{
    ASSERT(iPropertyIpAddressList != NULL);
    return SetPropertyString(*iPropertyIpAddressList, aValue);
}

void DvProviderLinnCoUkVolkano2C::GetPropertyIpAddressList(Brhz& aValue)
{
    ASSERT(iPropertyIpAddressList != NULL);
    aValue.Set(iPropertyIpAddressList->Value());
}

TBool DvProviderLinnCoUkVolkano2C::SetPropertyMacAddressList(const Brx& aValue)
{
    ASSERT(iPropertyMacAddressList != NULL);
    return SetPropertyString(*iPropertyMacAddressList, aValue);
}

void DvProviderLinnCoUkVolkano2C::GetPropertyMacAddressList(Brhz& aValue)
{
    ASSERT(iPropertyMacAddressList != NULL);
    aValue.Set(iPropertyMacAddressList->Value());
}

TBool DvProviderLinnCoUkVolkano2C::SetPropertyCoreBoardId(const Brx& aValue)
{
    ASSERT(iPropertyCoreBoardId != NULL);
    return SetPropertyString(*iPropertyCoreBoardId, aValue);
}

void DvProviderLinnCoUkVolkano2C::GetPropertyCoreBoardId(Brhz& aValue)
{
    ASSERT(iPropertyCoreBoardId != NULL);
    aValue.Set(iPropertyCoreBoardId->Value());
}

void DvProviderLinnCoUkVolkano2C::EnablePropertyDeviceInfo()
{
    iPropertyDeviceInfo = new PropertyString(new ParameterString("DeviceInfo"));
    iService->AddProperty(iPropertyDeviceInfo); // passes ownership
}

void DvProviderLinnCoUkVolkano2C::EnablePropertyIpAddressList()
{
    iPropertyIpAddressList = new PropertyString(new ParameterString("IpAddressList"));
    iService->AddProperty(iPropertyIpAddressList); // passes ownership
}

void DvProviderLinnCoUkVolkano2C::EnablePropertyMacAddressList()
{
    iPropertyMacAddressList = new PropertyString(new ParameterString("MacAddressList"));
    iService->AddProperty(iPropertyMacAddressList); // passes ownership
}

void DvProviderLinnCoUkVolkano2C::EnablePropertyCoreBoardId()
{
    iPropertyCoreBoardId = new PropertyString(new ParameterString("CoreBoardId"));
    iService->AddProperty(iPropertyCoreBoardId); // passes ownership
}

void DvProviderLinnCoUkVolkano2C::EnableActionReboot(CallbackVolkano2Reboot aCallback, void* aPtr)
{
    iCallbackReboot = aCallback;
    iPtrReboot = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reboot");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoReboot);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionBootMode(CallbackVolkano2BootMode aCallback, void* aPtr)
{
    iCallbackBootMode = aCallback;
    iPtrBootMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BootMode");
    TChar** allowedValues;
    TUint index;
    index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Main";
    allowedValues[index++] = (TChar*)"Fallback";
    allowedValues[index++] = (TChar*)"Ram";
    action->AddOutputParameter(new ParameterString("aMode", allowedValues, 3));
    delete[] allowedValues;
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionSetBootMode(CallbackVolkano2SetBootMode aCallback, void* aPtr)
{
    iCallbackSetBootMode = aCallback;
    iPtrSetBootMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetBootMode");
    TChar** allowedValues;
    TUint index;
    index = 0;
    allowedValues = new TChar*[2];
    allowedValues[index++] = (TChar*)"Main";
    allowedValues[index++] = (TChar*)"Fallback";
    action->AddInputParameter(new ParameterString("aMode", allowedValues, 2));
    delete[] allowedValues;
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoSetBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionBspType(CallbackVolkano2BspType aCallback, void* aPtr)
{
    iCallbackBspType = aCallback;
    iPtrBspType = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BspType");
    action->AddOutputParameter(new ParameterString("aBspType"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoBspType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionUglyName(CallbackVolkano2UglyName aCallback, void* aPtr)
{
    iCallbackUglyName = aCallback;
    iPtrUglyName = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UglyName");
    action->AddOutputParameter(new ParameterString("aUglyName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoUglyName);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionIpAddress(CallbackVolkano2IpAddress aCallback, void* aPtr)
{
    iCallbackIpAddress = aCallback;
    iPtrIpAddress = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IpAddress");
    action->AddOutputParameter(new ParameterString("aIpAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoIpAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionIpAddressList(CallbackVolkano2IpAddressList aCallback, void* aPtr)
{
    iCallbackIpAddressList = aCallback;
    iPtrIpAddressList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IpAddressList");
    action->AddOutputParameter(new ParameterRelated("aIpAddressList", *iPropertyIpAddressList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoIpAddressList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionMacAddress(CallbackVolkano2MacAddress aCallback, void* aPtr)
{
    iCallbackMacAddress = aCallback;
    iPtrMacAddress = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddress");
    action->AddOutputParameter(new ParameterString("aMacAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoMacAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionMacAddressList(CallbackVolkano2MacAddressList aCallback, void* aPtr)
{
    iCallbackMacAddressList = aCallback;
    iPtrMacAddressList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddressList");
    action->AddOutputParameter(new ParameterRelated("aMacAddressList", *iPropertyMacAddressList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoMacAddressList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionProductId(CallbackVolkano2ProductId aCallback, void* aPtr)
{
    iCallbackProductId = aCallback;
    iPtrProductId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ProductId");
    action->AddOutputParameter(new ParameterString("aProductNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoProductId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionBoardId(CallbackVolkano2BoardId aCallback, void* aPtr)
{
    iCallbackBoardId = aCallback;
    iPtrBoardId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardId");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionBoardType(CallbackVolkano2BoardType aCallback, void* aPtr)
{
    iCallbackBoardType = aCallback;
    iPtrBoardType = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardType");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoBoardType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionMaxBoards(CallbackVolkano2MaxBoards aCallback, void* aPtr)
{
    iCallbackMaxBoards = aCallback;
    iPtrMaxBoards = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MaxBoards");
    action->AddOutputParameter(new ParameterUint("aMaxBoards"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoMaxBoards);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionSoftwareVersion(CallbackVolkano2SoftwareVersion aCallback, void* aPtr)
{
    iCallbackSoftwareVersion = aCallback;
    iPtrSoftwareVersion = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareVersion");
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoSoftwareVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionSoftwareUpdate(CallbackVolkano2SoftwareUpdate aCallback, void* aPtr)
{
    iCallbackSoftwareUpdate = aCallback;
    iPtrSoftwareUpdate = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareUpdate");
    action->AddOutputParameter(new ParameterBool("aAvailable"));
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoSoftwareUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionDeviceInfo(CallbackVolkano2DeviceInfo aCallback, void* aPtr)
{
    iCallbackDeviceInfo = aCallback;
    iPtrDeviceInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceInfo");
    action->AddOutputParameter(new ParameterRelated("aDeviceInfoXml", *iPropertyDeviceInfo));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoDeviceInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::EnableActionCoreBoardId(CallbackVolkano2CoreBoardId aCallback, void* aPtr)
{
    iCallbackCoreBoardId = aCallback;
    iPtrCoreBoardId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CoreBoardId");
    action->AddOutputParameter(new ParameterRelated("aCoreBoardId", *iPropertyCoreBoardId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2C::DoCoreBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2C::DoReboot(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackReboot != NULL);
    if (0 != iCallbackReboot(iPtrReboot, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoBootMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aMode;
    ASSERT(iCallbackBootMode != NULL);
    if (0 != iCallbackBootMode(iPtrBootMode, invocationC, invocationCPtr, &aMode)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaMode(aInvocation, "aMode");
    invocation.StartResponse();
    Brhz bufaMode((const TChar*)aMode);
    OhNetFreeExternal(aMode);
    respaMode.Write(bufaMode);
    respaMode.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoSetBootMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz aMode;
    aInvocation.InvocationReadString("aMode", aMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetBootMode != NULL);
    if (0 != iCallbackSetBootMode(iPtrSetBootMode, invocationC, invocationCPtr, (const char*)aMode.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoBspType(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aBspType;
    ASSERT(iCallbackBspType != NULL);
    if (0 != iCallbackBspType(iPtrBspType, invocationC, invocationCPtr, &aBspType)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaBspType(aInvocation, "aBspType");
    invocation.StartResponse();
    Brhz bufaBspType((const TChar*)aBspType);
    OhNetFreeExternal(aBspType);
    respaBspType.Write(bufaBspType);
    respaBspType.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoUglyName(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aUglyName;
    ASSERT(iCallbackUglyName != NULL);
    if (0 != iCallbackUglyName(iPtrUglyName, invocationC, invocationCPtr, &aUglyName)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaUglyName(aInvocation, "aUglyName");
    invocation.StartResponse();
    Brhz bufaUglyName((const TChar*)aUglyName);
    OhNetFreeExternal(aUglyName);
    respaUglyName.Write(bufaUglyName);
    respaUglyName.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoIpAddress(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aIpAddress;
    ASSERT(iCallbackIpAddress != NULL);
    if (0 != iCallbackIpAddress(iPtrIpAddress, invocationC, invocationCPtr, &aIpAddress)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaIpAddress(aInvocation, "aIpAddress");
    invocation.StartResponse();
    Brhz bufaIpAddress((const TChar*)aIpAddress);
    OhNetFreeExternal(aIpAddress);
    respaIpAddress.Write(bufaIpAddress);
    respaIpAddress.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoIpAddressList(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aIpAddressList;
    ASSERT(iCallbackIpAddressList != NULL);
    if (0 != iCallbackIpAddressList(iPtrIpAddressList, invocationC, invocationCPtr, &aIpAddressList)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaIpAddressList(aInvocation, "aIpAddressList");
    invocation.StartResponse();
    Brhz bufaIpAddressList((const TChar*)aIpAddressList);
    OhNetFreeExternal(aIpAddressList);
    respaIpAddressList.Write(bufaIpAddressList);
    respaIpAddressList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoMacAddress(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aMacAddress;
    ASSERT(iCallbackMacAddress != NULL);
    if (0 != iCallbackMacAddress(iPtrMacAddress, invocationC, invocationCPtr, &aMacAddress)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaMacAddress(aInvocation, "aMacAddress");
    invocation.StartResponse();
    Brhz bufaMacAddress((const TChar*)aMacAddress);
    OhNetFreeExternal(aMacAddress);
    respaMacAddress.Write(bufaMacAddress);
    respaMacAddress.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoMacAddressList(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aMacAddressList;
    ASSERT(iCallbackMacAddressList != NULL);
    if (0 != iCallbackMacAddressList(iPtrMacAddressList, invocationC, invocationCPtr, &aMacAddressList)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaMacAddressList(aInvocation, "aMacAddressList");
    invocation.StartResponse();
    Brhz bufaMacAddressList((const TChar*)aMacAddressList);
    OhNetFreeExternal(aMacAddressList);
    respaMacAddressList.Write(bufaMacAddressList);
    respaMacAddressList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoProductId(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aProductNumber;
    ASSERT(iCallbackProductId != NULL);
    if (0 != iCallbackProductId(iPtrProductId, invocationC, invocationCPtr, &aProductNumber)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaProductNumber(aInvocation, "aProductNumber");
    invocation.StartResponse();
    Brhz bufaProductNumber((const TChar*)aProductNumber);
    OhNetFreeExternal(aProductNumber);
    respaProductNumber.Write(bufaProductNumber);
    respaProductNumber.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoBoardId(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint aIndex = aInvocation.InvocationReadUint("aIndex");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aBoardNumber;
    ASSERT(iCallbackBoardId != NULL);
    if (0 != iCallbackBoardId(iPtrBoardId, invocationC, invocationCPtr, aIndex, &aBoardNumber)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaBoardNumber(aInvocation, "aBoardNumber");
    invocation.StartResponse();
    Brhz bufaBoardNumber((const TChar*)aBoardNumber);
    OhNetFreeExternal(aBoardNumber);
    respaBoardNumber.Write(bufaBoardNumber);
    respaBoardNumber.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoBoardType(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint aIndex = aInvocation.InvocationReadUint("aIndex");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aBoardNumber;
    ASSERT(iCallbackBoardType != NULL);
    if (0 != iCallbackBoardType(iPtrBoardType, invocationC, invocationCPtr, aIndex, &aBoardNumber)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaBoardNumber(aInvocation, "aBoardNumber");
    invocation.StartResponse();
    Brhz bufaBoardNumber((const TChar*)aBoardNumber);
    OhNetFreeExternal(aBoardNumber);
    respaBoardNumber.Write(bufaBoardNumber);
    respaBoardNumber.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoMaxBoards(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t aMaxBoards;
    ASSERT(iCallbackMaxBoards != NULL);
    if (0 != iCallbackMaxBoards(iPtrMaxBoards, invocationC, invocationCPtr, &aMaxBoards)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respaMaxBoards(aInvocation, "aMaxBoards");
    invocation.StartResponse();
    respaMaxBoards.Write(aMaxBoards);
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoSoftwareVersion(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aSoftwareVersion;
    ASSERT(iCallbackSoftwareVersion != NULL);
    if (0 != iCallbackSoftwareVersion(iPtrSoftwareVersion, invocationC, invocationCPtr, &aSoftwareVersion)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaSoftwareVersion(aInvocation, "aSoftwareVersion");
    invocation.StartResponse();
    Brhz bufaSoftwareVersion((const TChar*)aSoftwareVersion);
    OhNetFreeExternal(aSoftwareVersion);
    respaSoftwareVersion.Write(bufaSoftwareVersion);
    respaSoftwareVersion.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoSoftwareUpdate(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t aAvailable;
    char* aSoftwareVersion;
    ASSERT(iCallbackSoftwareUpdate != NULL);
    if (0 != iCallbackSoftwareUpdate(iPtrSoftwareUpdate, invocationC, invocationCPtr, &aAvailable, &aSoftwareVersion)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respaAvailable(aInvocation, "aAvailable");
    DviInvocationResponseString respaSoftwareVersion(aInvocation, "aSoftwareVersion");
    invocation.StartResponse();
    respaAvailable.Write((aAvailable!=0));
    Brhz bufaSoftwareVersion((const TChar*)aSoftwareVersion);
    OhNetFreeExternal(aSoftwareVersion);
    respaSoftwareVersion.Write(bufaSoftwareVersion);
    respaSoftwareVersion.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoDeviceInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aDeviceInfoXml;
    ASSERT(iCallbackDeviceInfo != NULL);
    if (0 != iCallbackDeviceInfo(iPtrDeviceInfo, invocationC, invocationCPtr, &aDeviceInfoXml)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaDeviceInfoXml(aInvocation, "aDeviceInfoXml");
    invocation.StartResponse();
    Brhz bufaDeviceInfoXml((const TChar*)aDeviceInfoXml);
    OhNetFreeExternal(aDeviceInfoXml);
    respaDeviceInfoXml.Write(bufaDeviceInfoXml);
    respaDeviceInfoXml.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkVolkano2C::DoCoreBoardId(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aCoreBoardId;
    ASSERT(iCallbackCoreBoardId != NULL);
    if (0 != iCallbackCoreBoardId(iPtrCoreBoardId, invocationC, invocationCPtr, &aCoreBoardId)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaCoreBoardId(aInvocation, "aCoreBoardId");
    invocation.StartResponse();
    Brhz bufaCoreBoardId((const TChar*)aCoreBoardId);
    OhNetFreeExternal(aCoreBoardId);
    respaCoreBoardId.Write(bufaCoreBoardId);
    respaCoreBoardId.WriteFlush();
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkVolkano2Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkVolkano2C(aDevice);
}

void STDCALL DvProviderLinnCoUkVolkano2Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionReboot(THandle aProvider, CallbackVolkano2Reboot aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionReboot(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionBootMode(THandle aProvider, CallbackVolkano2BootMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionBootMode(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionSetBootMode(THandle aProvider, CallbackVolkano2SetBootMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionSetBootMode(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionBspType(THandle aProvider, CallbackVolkano2BspType aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionBspType(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionUglyName(THandle aProvider, CallbackVolkano2UglyName aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionUglyName(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionIpAddress(THandle aProvider, CallbackVolkano2IpAddress aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionIpAddress(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionIpAddressList(THandle aProvider, CallbackVolkano2IpAddressList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionIpAddressList(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionMacAddress(THandle aProvider, CallbackVolkano2MacAddress aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionMacAddress(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionMacAddressList(THandle aProvider, CallbackVolkano2MacAddressList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionMacAddressList(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionProductId(THandle aProvider, CallbackVolkano2ProductId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionProductId(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionBoardId(THandle aProvider, CallbackVolkano2BoardId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionBoardId(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionBoardType(THandle aProvider, CallbackVolkano2BoardType aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionBoardType(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionMaxBoards(THandle aProvider, CallbackVolkano2MaxBoards aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionMaxBoards(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionSoftwareVersion(THandle aProvider, CallbackVolkano2SoftwareVersion aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionSoftwareVersion(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionSoftwareUpdate(THandle aProvider, CallbackVolkano2SoftwareUpdate aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionSoftwareUpdate(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionDeviceInfo(THandle aProvider, CallbackVolkano2DeviceInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionDeviceInfo(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano2EnableActionCoreBoardId(THandle aProvider, CallbackVolkano2CoreBoardId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnableActionCoreBoardId(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkVolkano2SetPropertyDeviceInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->SetPropertyDeviceInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkVolkano2GetPropertyDeviceInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->GetPropertyDeviceInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkVolkano2SetPropertyIpAddressList(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->SetPropertyIpAddressList(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkVolkano2GetPropertyIpAddressList(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->GetPropertyIpAddressList(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkVolkano2SetPropertyMacAddressList(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->SetPropertyMacAddressList(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkVolkano2GetPropertyMacAddressList(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->GetPropertyMacAddressList(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkVolkano2SetPropertyCoreBoardId(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->SetPropertyCoreBoardId(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkVolkano2GetPropertyCoreBoardId(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->GetPropertyCoreBoardId(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderLinnCoUkVolkano2EnablePropertyDeviceInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnablePropertyDeviceInfo();
}

void STDCALL DvProviderLinnCoUkVolkano2EnablePropertyIpAddressList(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnablePropertyIpAddressList();
}

void STDCALL DvProviderLinnCoUkVolkano2EnablePropertyMacAddressList(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnablePropertyMacAddressList();
}

void STDCALL DvProviderLinnCoUkVolkano2EnablePropertyCoreBoardId(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano2C*>(aProvider)->EnablePropertyCoreBoardId();
}

