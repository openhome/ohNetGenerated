#include "DvLinnCoUkVolkano1.h"
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

class DvProviderLinnCoUkVolkano1C : public DvProvider
{
public:
    DvProviderLinnCoUkVolkano1C(DvDeviceC aDevice);
    void EnableActionReboot(CallbackVolkano1Reboot aCallback, void* aPtr);
    void EnableActionBootMode(CallbackVolkano1BootMode aCallback, void* aPtr);
    void EnableActionSetBootMode(CallbackVolkano1SetBootMode aCallback, void* aPtr);
    void EnableActionBspType(CallbackVolkano1BspType aCallback, void* aPtr);
    void EnableActionUglyName(CallbackVolkano1UglyName aCallback, void* aPtr);
    void EnableActionMacAddress(CallbackVolkano1MacAddress aCallback, void* aPtr);
    void EnableActionProductId(CallbackVolkano1ProductId aCallback, void* aPtr);
    void EnableActionBoardId(CallbackVolkano1BoardId aCallback, void* aPtr);
    void EnableActionBoardType(CallbackVolkano1BoardType aCallback, void* aPtr);
    void EnableActionMaxBoards(CallbackVolkano1MaxBoards aCallback, void* aPtr);
    void EnableActionSoftwareVersion(CallbackVolkano1SoftwareVersion aCallback, void* aPtr);
    void EnableActionSoftwareUpdate(CallbackVolkano1SoftwareUpdate aCallback, void* aPtr);
    void EnableActionDeviceInfo(CallbackVolkano1DeviceInfo aCallback, void* aPtr);
private:
    void DoReboot(IDviInvocation& aInvocation);
    void DoBootMode(IDviInvocation& aInvocation);
    void DoSetBootMode(IDviInvocation& aInvocation);
    void DoBspType(IDviInvocation& aInvocation);
    void DoUglyName(IDviInvocation& aInvocation);
    void DoMacAddress(IDviInvocation& aInvocation);
    void DoProductId(IDviInvocation& aInvocation);
    void DoBoardId(IDviInvocation& aInvocation);
    void DoBoardType(IDviInvocation& aInvocation);
    void DoMaxBoards(IDviInvocation& aInvocation);
    void DoSoftwareVersion(IDviInvocation& aInvocation);
    void DoSoftwareUpdate(IDviInvocation& aInvocation);
    void DoDeviceInfo(IDviInvocation& aInvocation);
private:
    CallbackVolkano1Reboot iCallbackReboot;
    void* iPtrReboot;
    CallbackVolkano1BootMode iCallbackBootMode;
    void* iPtrBootMode;
    CallbackVolkano1SetBootMode iCallbackSetBootMode;
    void* iPtrSetBootMode;
    CallbackVolkano1BspType iCallbackBspType;
    void* iPtrBspType;
    CallbackVolkano1UglyName iCallbackUglyName;
    void* iPtrUglyName;
    CallbackVolkano1MacAddress iCallbackMacAddress;
    void* iPtrMacAddress;
    CallbackVolkano1ProductId iCallbackProductId;
    void* iPtrProductId;
    CallbackVolkano1BoardId iCallbackBoardId;
    void* iPtrBoardId;
    CallbackVolkano1BoardType iCallbackBoardType;
    void* iPtrBoardType;
    CallbackVolkano1MaxBoards iCallbackMaxBoards;
    void* iPtrMaxBoards;
    CallbackVolkano1SoftwareVersion iCallbackSoftwareVersion;
    void* iPtrSoftwareVersion;
    CallbackVolkano1SoftwareUpdate iCallbackSoftwareUpdate;
    void* iPtrSoftwareUpdate;
    CallbackVolkano1DeviceInfo iCallbackDeviceInfo;
    void* iPtrDeviceInfo;
};

DvProviderLinnCoUkVolkano1C::DvProviderLinnCoUkVolkano1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Volkano", 1)
{
}

void DvProviderLinnCoUkVolkano1C::EnableActionReboot(CallbackVolkano1Reboot aCallback, void* aPtr)
{
    iCallbackReboot = aCallback;
    iPtrReboot = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reboot");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoReboot);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::EnableActionBootMode(CallbackVolkano1BootMode aCallback, void* aPtr)
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::EnableActionSetBootMode(CallbackVolkano1SetBootMode aCallback, void* aPtr)
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoSetBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::EnableActionBspType(CallbackVolkano1BspType aCallback, void* aPtr)
{
    iCallbackBspType = aCallback;
    iPtrBspType = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BspType");
    action->AddOutputParameter(new ParameterString("aBspType"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoBspType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::EnableActionUglyName(CallbackVolkano1UglyName aCallback, void* aPtr)
{
    iCallbackUglyName = aCallback;
    iPtrUglyName = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UglyName");
    action->AddOutputParameter(new ParameterString("aUglyName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoUglyName);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::EnableActionMacAddress(CallbackVolkano1MacAddress aCallback, void* aPtr)
{
    iCallbackMacAddress = aCallback;
    iPtrMacAddress = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddress");
    action->AddOutputParameter(new ParameterString("aMacAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoMacAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::EnableActionProductId(CallbackVolkano1ProductId aCallback, void* aPtr)
{
    iCallbackProductId = aCallback;
    iPtrProductId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ProductId");
    action->AddOutputParameter(new ParameterString("aProductNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoProductId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::EnableActionBoardId(CallbackVolkano1BoardId aCallback, void* aPtr)
{
    iCallbackBoardId = aCallback;
    iPtrBoardId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardId");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::EnableActionBoardType(CallbackVolkano1BoardType aCallback, void* aPtr)
{
    iCallbackBoardType = aCallback;
    iPtrBoardType = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardType");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoBoardType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::EnableActionMaxBoards(CallbackVolkano1MaxBoards aCallback, void* aPtr)
{
    iCallbackMaxBoards = aCallback;
    iPtrMaxBoards = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MaxBoards");
    action->AddOutputParameter(new ParameterUint("aMaxBoards"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoMaxBoards);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::EnableActionSoftwareVersion(CallbackVolkano1SoftwareVersion aCallback, void* aPtr)
{
    iCallbackSoftwareVersion = aCallback;
    iPtrSoftwareVersion = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareVersion");
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoSoftwareVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::EnableActionSoftwareUpdate(CallbackVolkano1SoftwareUpdate aCallback, void* aPtr)
{
    iCallbackSoftwareUpdate = aCallback;
    iPtrSoftwareUpdate = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareUpdate");
    action->AddOutputParameter(new ParameterBool("aAvailable"));
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoSoftwareUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::EnableActionDeviceInfo(CallbackVolkano1DeviceInfo aCallback, void* aPtr)
{
    iCallbackDeviceInfo = aCallback;
    iPtrDeviceInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceInfo");
    action->AddOutputParameter(new ParameterString("aDeviceInfoXml"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1C::DoDeviceInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1C::DoReboot(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1C::DoBootMode(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1C::DoSetBootMode(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1C::DoBspType(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1C::DoUglyName(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1C::DoMacAddress(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1C::DoProductId(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1C::DoBoardId(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1C::DoBoardType(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1C::DoMaxBoards(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1C::DoSoftwareVersion(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1C::DoSoftwareUpdate(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1C::DoDeviceInfo(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderLinnCoUkVolkano1Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkVolkano1C(aDevice);
}

void STDCALL DvProviderLinnCoUkVolkano1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionReboot(THandle aProvider, CallbackVolkano1Reboot aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionReboot(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionBootMode(THandle aProvider, CallbackVolkano1BootMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionBootMode(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionSetBootMode(THandle aProvider, CallbackVolkano1SetBootMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionSetBootMode(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionBspType(THandle aProvider, CallbackVolkano1BspType aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionBspType(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionUglyName(THandle aProvider, CallbackVolkano1UglyName aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionUglyName(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionMacAddress(THandle aProvider, CallbackVolkano1MacAddress aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionMacAddress(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionProductId(THandle aProvider, CallbackVolkano1ProductId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionProductId(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionBoardId(THandle aProvider, CallbackVolkano1BoardId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionBoardId(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionBoardType(THandle aProvider, CallbackVolkano1BoardType aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionBoardType(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionMaxBoards(THandle aProvider, CallbackVolkano1MaxBoards aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionMaxBoards(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionSoftwareVersion(THandle aProvider, CallbackVolkano1SoftwareVersion aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionSoftwareVersion(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionSoftwareUpdate(THandle aProvider, CallbackVolkano1SoftwareUpdate aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionSoftwareUpdate(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkVolkano1EnableActionDeviceInfo(THandle aProvider, CallbackVolkano1DeviceInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkVolkano1C*>(aProvider)->EnableActionDeviceInfo(aCallback, aPtr);
}

