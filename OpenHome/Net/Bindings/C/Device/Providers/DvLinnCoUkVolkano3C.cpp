#include "DvLinnCoUkVolkano3.h"
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

class DvProviderLinnCoUkVolkano3C : public DvProvider
{
public:
    DvProviderLinnCoUkVolkano3C(DvDeviceC aDevice);
    TBool SetPropertyDeviceInfo(const Brx& aValue);
    void GetPropertyDeviceInfo(Brhz& aValue);
    TBool SetPropertyIpAddress(const Brx& aValue);
    void GetPropertyIpAddress(Brhz& aValue);
    TBool SetPropertyIpAddressList(const Brx& aValue);
    void GetPropertyIpAddressList(Brhz& aValue);
    TBool SetPropertyMacAddressList(const Brx& aValue);
    void GetPropertyMacAddressList(Brhz& aValue);
    TBool SetPropertyCoreBoardId(const Brx& aValue);
    void GetPropertyCoreBoardId(Brhz& aValue);
    void EnablePropertyDeviceInfo();
    void EnablePropertyIpAddress();
    void EnablePropertyIpAddressList();
    void EnablePropertyMacAddressList();
    void EnablePropertyCoreBoardId();
    void EnableActionReboot(CallbackVolkano3Reboot aCallback, void* aPtr);
    void EnableActionBootMode(CallbackVolkano3BootMode aCallback, void* aPtr);
    void EnableActionSetBootMode(CallbackVolkano3SetBootMode aCallback, void* aPtr);
    void EnableActionBspType(CallbackVolkano3BspType aCallback, void* aPtr);
    void EnableActionUglyName(CallbackVolkano3UglyName aCallback, void* aPtr);
    void EnableActionIpAddress(CallbackVolkano3IpAddress aCallback, void* aPtr);
    void EnableActionIpAddressList(CallbackVolkano3IpAddressList aCallback, void* aPtr);
    void EnableActionMacAddress(CallbackVolkano3MacAddress aCallback, void* aPtr);
    void EnableActionMacAddressList(CallbackVolkano3MacAddressList aCallback, void* aPtr);
    void EnableActionProductId(CallbackVolkano3ProductId aCallback, void* aPtr);
    void EnableActionBoardId(CallbackVolkano3BoardId aCallback, void* aPtr);
    void EnableActionBoardType(CallbackVolkano3BoardType aCallback, void* aPtr);
    void EnableActionMaxBoards(CallbackVolkano3MaxBoards aCallback, void* aPtr);
    void EnableActionSoftwareVersion(CallbackVolkano3SoftwareVersion aCallback, void* aPtr);
    void EnableActionSoftwareUpdate(CallbackVolkano3SoftwareUpdate aCallback, void* aPtr);
    void EnableActionDeviceInfo(CallbackVolkano3DeviceInfo aCallback, void* aPtr);
    void EnableActionCoreBoardId(CallbackVolkano3CoreBoardId aCallback, void* aPtr);
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
    CallbackVolkano3Reboot iCallbackReboot;
    void* iPtrReboot;
    CallbackVolkano3BootMode iCallbackBootMode;
    void* iPtrBootMode;
    CallbackVolkano3SetBootMode iCallbackSetBootMode;
    void* iPtrSetBootMode;
    CallbackVolkano3BspType iCallbackBspType;
    void* iPtrBspType;
    CallbackVolkano3UglyName iCallbackUglyName;
    void* iPtrUglyName;
    CallbackVolkano3IpAddress iCallbackIpAddress;
    void* iPtrIpAddress;
    CallbackVolkano3IpAddressList iCallbackIpAddressList;
    void* iPtrIpAddressList;
    CallbackVolkano3MacAddress iCallbackMacAddress;
    void* iPtrMacAddress;
    CallbackVolkano3MacAddressList iCallbackMacAddressList;
    void* iPtrMacAddressList;
    CallbackVolkano3ProductId iCallbackProductId;
    void* iPtrProductId;
    CallbackVolkano3BoardId iCallbackBoardId;
    void* iPtrBoardId;
    CallbackVolkano3BoardType iCallbackBoardType;
    void* iPtrBoardType;
    CallbackVolkano3MaxBoards iCallbackMaxBoards;
    void* iPtrMaxBoards;
    CallbackVolkano3SoftwareVersion iCallbackSoftwareVersion;
    void* iPtrSoftwareVersion;
    CallbackVolkano3SoftwareUpdate iCallbackSoftwareUpdate;
    void* iPtrSoftwareUpdate;
    CallbackVolkano3DeviceInfo iCallbackDeviceInfo;
    void* iPtrDeviceInfo;
    CallbackVolkano3CoreBoardId iCallbackCoreBoardId;
    void* iPtrCoreBoardId;
    PropertyString* iPropertyDeviceInfo;
    PropertyString* iPropertyIpAddress;
    PropertyString* iPropertyIpAddressList;
    PropertyString* iPropertyMacAddressList;
    PropertyString* iPropertyCoreBoardId;
};

DvProviderLinnCoUkVolkano3C::DvProviderLinnCoUkVolkano3C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Volkano", 3)
{
    iPropertyDeviceInfo = NULL;
    iPropertyIpAddress = NULL;
    iPropertyIpAddressList = NULL;
    iPropertyMacAddressList = NULL;
    iPropertyCoreBoardId = NULL;
}

TBool DvProviderLinnCoUkVolkano3C::SetPropertyDeviceInfo(const Brx& aValue)
{
    ASSERT(iPropertyDeviceInfo != NULL);
    return SetPropertyString(*iPropertyDeviceInfo, aValue);
}

void DvProviderLinnCoUkVolkano3C::GetPropertyDeviceInfo(Brhz& aValue)
{
    ASSERT(iPropertyDeviceInfo != NULL);
    aValue.Set(iPropertyDeviceInfo->Value());
}

TBool DvProviderLinnCoUkVolkano3C::SetPropertyIpAddress(const Brx& aValue)
{
    ASSERT(iPropertyIpAddress != NULL);
    return SetPropertyString(*iPropertyIpAddress, aValue);
}

void DvProviderLinnCoUkVolkano3C::GetPropertyIpAddress(Brhz& aValue)
{
    ASSERT(iPropertyIpAddress != NULL);
    aValue.Set(iPropertyIpAddress->Value());
}

TBool DvProviderLinnCoUkVolkano3C::SetPropertyIpAddressList(const Brx& aValue)
{
    ASSERT(iPropertyIpAddressList != NULL);
    return SetPropertyString(*iPropertyIpAddressList, aValue);
}

void DvProviderLinnCoUkVolkano3C::GetPropertyIpAddressList(Brhz& aValue)
{
    ASSERT(iPropertyIpAddressList != NULL);
    aValue.Set(iPropertyIpAddressList->Value());
}

TBool DvProviderLinnCoUkVolkano3C::SetPropertyMacAddressList(const Brx& aValue)
{
    ASSERT(iPropertyMacAddressList != NULL);
    return SetPropertyString(*iPropertyMacAddressList, aValue);
}

void DvProviderLinnCoUkVolkano3C::GetPropertyMacAddressList(Brhz& aValue)
{
    ASSERT(iPropertyMacAddressList != NULL);
    aValue.Set(iPropertyMacAddressList->Value());
}

TBool DvProviderLinnCoUkVolkano3C::SetPropertyCoreBoardId(const Brx& aValue)
{
    ASSERT(iPropertyCoreBoardId != NULL);
    return SetPropertyString(*iPropertyCoreBoardId, aValue);
}

void DvProviderLinnCoUkVolkano3C::GetPropertyCoreBoardId(Brhz& aValue)
{
    ASSERT(iPropertyCoreBoardId != NULL);
    aValue.Set(iPropertyCoreBoardId->Value());
}

void DvProviderLinnCoUkVolkano3C::EnablePropertyDeviceInfo()
{
    iPropertyDeviceInfo = new PropertyString(new ParameterString("DeviceInfo"));
    iService->AddProperty(iPropertyDeviceInfo); // passes ownership
}

void DvProviderLinnCoUkVolkano3C::EnablePropertyIpAddress()
{
    iPropertyIpAddress = new PropertyString(new ParameterString("IpAddress"));
    iService->AddProperty(iPropertyIpAddress); // passes ownership
}

void DvProviderLinnCoUkVolkano3C::EnablePropertyIpAddressList()
{
    iPropertyIpAddressList = new PropertyString(new ParameterString("IpAddressList"));
    iService->AddProperty(iPropertyIpAddressList); // passes ownership
}

void DvProviderLinnCoUkVolkano3C::EnablePropertyMacAddressList()
{
    iPropertyMacAddressList = new PropertyString(new ParameterString("MacAddressList"));
    iService->AddProperty(iPropertyMacAddressList); // passes ownership
}

void DvProviderLinnCoUkVolkano3C::EnablePropertyCoreBoardId()
{
    iPropertyCoreBoardId = new PropertyString(new ParameterString("CoreBoardId"));
    iService->AddProperty(iPropertyCoreBoardId); // passes ownership
}

void DvProviderLinnCoUkVolkano3C::EnableActionReboot(CallbackVolkano3Reboot aCallback, void* aPtr)
{
    iCallbackReboot = aCallback;
    iPtrReboot = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reboot");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoReboot);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionBootMode(CallbackVolkano3BootMode aCallback, void* aPtr)
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionSetBootMode(CallbackVolkano3SetBootMode aCallback, void* aPtr)
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoSetBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionBspType(CallbackVolkano3BspType aCallback, void* aPtr)
{
    iCallbackBspType = aCallback;
    iPtrBspType = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BspType");
    action->AddOutputParameter(new ParameterString("aBspType"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoBspType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionUglyName(CallbackVolkano3UglyName aCallback, void* aPtr)
{
    iCallbackUglyName = aCallback;
    iPtrUglyName = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UglyName");
    action->AddOutputParameter(new ParameterString("aUglyName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoUglyName);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionIpAddress(CallbackVolkano3IpAddress aCallback, void* aPtr)
{
    iCallbackIpAddress = aCallback;
    iPtrIpAddress = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IpAddress");
    action->AddOutputParameter(new ParameterRelated("aIpAddress", *iPropertyIpAddress));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoIpAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionIpAddressList(CallbackVolkano3IpAddressList aCallback, void* aPtr)
{
    iCallbackIpAddressList = aCallback;
    iPtrIpAddressList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IpAddressList");
    action->AddOutputParameter(new ParameterRelated("aIpAddressList", *iPropertyIpAddressList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoIpAddressList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionMacAddress(CallbackVolkano3MacAddress aCallback, void* aPtr)
{
    iCallbackMacAddress = aCallback;
    iPtrMacAddress = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddress");
    action->AddOutputParameter(new ParameterString("aMacAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoMacAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionMacAddressList(CallbackVolkano3MacAddressList aCallback, void* aPtr)
{
    iCallbackMacAddressList = aCallback;
    iPtrMacAddressList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddressList");
    action->AddOutputParameter(new ParameterRelated("aMacAddressList", *iPropertyMacAddressList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoMacAddressList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionProductId(CallbackVolkano3ProductId aCallback, void* aPtr)
{
    iCallbackProductId = aCallback;
    iPtrProductId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ProductId");
    action->AddOutputParameter(new ParameterString("aProductNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoProductId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionBoardId(CallbackVolkano3BoardId aCallback, void* aPtr)
{
    iCallbackBoardId = aCallback;
    iPtrBoardId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardId");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionBoardType(CallbackVolkano3BoardType aCallback, void* aPtr)
{
    iCallbackBoardType = aCallback;
    iPtrBoardType = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardType");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoBoardType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionMaxBoards(CallbackVolkano3MaxBoards aCallback, void* aPtr)
{
    iCallbackMaxBoards = aCallback;
    iPtrMaxBoards = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MaxBoards");
    action->AddOutputParameter(new ParameterUint("aMaxBoards"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoMaxBoards);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionSoftwareVersion(CallbackVolkano3SoftwareVersion aCallback, void* aPtr)
{
    iCallbackSoftwareVersion = aCallback;
    iPtrSoftwareVersion = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareVersion");
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoSoftwareVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionSoftwareUpdate(CallbackVolkano3SoftwareUpdate aCallback, void* aPtr)
{
    iCallbackSoftwareUpdate = aCallback;
    iPtrSoftwareUpdate = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareUpdate");
    action->AddOutputParameter(new ParameterBool("aAvailable"));
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoSoftwareUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionDeviceInfo(CallbackVolkano3DeviceInfo aCallback, void* aPtr)
{
    iCallbackDeviceInfo = aCallback;
    iPtrDeviceInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceInfo");
    action->AddOutputParameter(new ParameterRelated("aDeviceInfoXml", *iPropertyDeviceInfo));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoDeviceInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::EnableActionCoreBoardId(CallbackVolkano3CoreBoardId aCallback, void* aPtr)
{
    iCallbackCoreBoardId = aCallback;
    iPtrCoreBoardId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CoreBoardId");
    action->AddOutputParameter(new ParameterRelated("aCoreBoardId", *iPropertyCoreBoardId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3C::DoCoreBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3C::DoReboot(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoBootMode(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoSetBootMode(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoBspType(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoUglyName(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoIpAddress(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoIpAddressList(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoMacAddress(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoMacAddressList(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoProductId(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoBoardId(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoBoardType(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoMaxBoards(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoSoftwareVersion(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoSoftwareUpdate(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoDeviceInfo(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano3C::DoCoreBoardId(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderLinnCoUkVolkano3Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkVolkano3C(aDevice);
}

void STDCALL DvProviderLinnCoUkVolkano3Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionReboot(THandle aProvider, CallbackVolkano3Reboot aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionReboot(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionBootMode(THandle aProvider, CallbackVolkano3BootMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionBootMode(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionSetBootMode(THandle aProvider, CallbackVolkano3SetBootMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionSetBootMode(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionBspType(THandle aProvider, CallbackVolkano3BspType aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionBspType(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionUglyName(THandle aProvider, CallbackVolkano3UglyName aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionUglyName(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionIpAddress(THandle aProvider, CallbackVolkano3IpAddress aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionIpAddress(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionIpAddressList(THandle aProvider, CallbackVolkano3IpAddressList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionIpAddressList(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionMacAddress(THandle aProvider, CallbackVolkano3MacAddress aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionMacAddress(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionMacAddressList(THandle aProvider, CallbackVolkano3MacAddressList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionMacAddressList(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionProductId(THandle aProvider, CallbackVolkano3ProductId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionProductId(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionBoardId(THandle aProvider, CallbackVolkano3BoardId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionBoardId(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionBoardType(THandle aProvider, CallbackVolkano3BoardType aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionBoardType(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionMaxBoards(THandle aProvider, CallbackVolkano3MaxBoards aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionMaxBoards(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionSoftwareVersion(THandle aProvider, CallbackVolkano3SoftwareVersion aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionSoftwareVersion(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionSoftwareUpdate(THandle aProvider, CallbackVolkano3SoftwareUpdate aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionSoftwareUpdate(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionDeviceInfo(THandle aProvider, CallbackVolkano3DeviceInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionDeviceInfo(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano3EnableActionCoreBoardId(THandle aProvider, CallbackVolkano3CoreBoardId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnableActionCoreBoardId(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkVolkano3SetPropertyDeviceInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->SetPropertyDeviceInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkVolkano3GetPropertyDeviceInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->GetPropertyDeviceInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkVolkano3SetPropertyIpAddress(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->SetPropertyIpAddress(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkVolkano3GetPropertyIpAddress(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->GetPropertyIpAddress(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkVolkano3SetPropertyIpAddressList(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->SetPropertyIpAddressList(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkVolkano3GetPropertyIpAddressList(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->GetPropertyIpAddressList(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkVolkano3SetPropertyMacAddressList(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->SetPropertyMacAddressList(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkVolkano3GetPropertyMacAddressList(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->GetPropertyMacAddressList(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkVolkano3SetPropertyCoreBoardId(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->SetPropertyCoreBoardId(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkVolkano3GetPropertyCoreBoardId(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->GetPropertyCoreBoardId(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderLinnCoUkVolkano3EnablePropertyDeviceInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnablePropertyDeviceInfo();
}

void STDCALL DvProviderLinnCoUkVolkano3EnablePropertyIpAddress(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnablePropertyIpAddress();
}

void STDCALL DvProviderLinnCoUkVolkano3EnablePropertyIpAddressList(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnablePropertyIpAddressList();
}

void STDCALL DvProviderLinnCoUkVolkano3EnablePropertyMacAddressList(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnablePropertyMacAddressList();
}

void STDCALL DvProviderLinnCoUkVolkano3EnablePropertyCoreBoardId(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano3C*>(aProvider)->EnablePropertyCoreBoardId();
}

