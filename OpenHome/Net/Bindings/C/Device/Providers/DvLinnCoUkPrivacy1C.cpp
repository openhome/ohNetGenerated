#include "DvLinnCoUkPrivacy1.h"
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

class DvProviderLinnCoUkPrivacy1C : public DvProvider
{
public:
    DvProviderLinnCoUkPrivacy1C(DvDeviceC aDevice);
    TBool SetPropertyPolicyVersion(TUint aValue);
    void GetPropertyPolicyVersion(TUint& aValue);
    TBool SetPropertyPolicyAgreed(TUint aValue);
    void GetPropertyPolicyAgreed(TUint& aValue);
    TBool SetPropertyPolicyDetails(const Brx& aValue);
    void GetPropertyPolicyDetails(Brhz& aValue);
    void EnablePropertyPolicyVersion();
    void EnablePropertyPolicyAgreed();
    void EnablePropertyPolicyDetails();
    void EnableActionGetPolicyVersion(CallbackPrivacy1GetPolicyVersion aCallback, void* aPtr);
    void EnableActionGetPolicyAgreed(CallbackPrivacy1GetPolicyAgreed aCallback, void* aPtr);
    void EnableActionSetPolicyAgreed(CallbackPrivacy1SetPolicyAgreed aCallback, void* aPtr);
    void EnableActionGetPolicyDetails(CallbackPrivacy1GetPolicyDetails aCallback, void* aPtr);
    void EnableActionSetPolicyDetails(CallbackPrivacy1SetPolicyDetails aCallback, void* aPtr);
private:
    void DoGetPolicyVersion(IDviInvocation& aInvocation);
    void DoGetPolicyAgreed(IDviInvocation& aInvocation);
    void DoSetPolicyAgreed(IDviInvocation& aInvocation);
    void DoGetPolicyDetails(IDviInvocation& aInvocation);
    void DoSetPolicyDetails(IDviInvocation& aInvocation);
private:
    CallbackPrivacy1GetPolicyVersion iCallbackGetPolicyVersion;
    void* iPtrGetPolicyVersion;
    CallbackPrivacy1GetPolicyAgreed iCallbackGetPolicyAgreed;
    void* iPtrGetPolicyAgreed;
    CallbackPrivacy1SetPolicyAgreed iCallbackSetPolicyAgreed;
    void* iPtrSetPolicyAgreed;
    CallbackPrivacy1GetPolicyDetails iCallbackGetPolicyDetails;
    void* iPtrGetPolicyDetails;
    CallbackPrivacy1SetPolicyDetails iCallbackSetPolicyDetails;
    void* iPtrSetPolicyDetails;
    PropertyUint* iPropertyPolicyVersion;
    PropertyUint* iPropertyPolicyAgreed;
    PropertyString* iPropertyPolicyDetails;
};

DvProviderLinnCoUkPrivacy1C::DvProviderLinnCoUkPrivacy1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Privacy", 1)
{
    iPropertyPolicyVersion = NULL;
    iPropertyPolicyAgreed = NULL;
    iPropertyPolicyDetails = NULL;
}

TBool DvProviderLinnCoUkPrivacy1C::SetPropertyPolicyVersion(TUint aValue)
{
    ASSERT(iPropertyPolicyVersion != NULL);
    return SetPropertyUint(*iPropertyPolicyVersion, aValue);
}

void DvProviderLinnCoUkPrivacy1C::GetPropertyPolicyVersion(TUint& aValue)
{
    ASSERT(iPropertyPolicyVersion != NULL);
    aValue = iPropertyPolicyVersion->Value();
}

TBool DvProviderLinnCoUkPrivacy1C::SetPropertyPolicyAgreed(TUint aValue)
{
    ASSERT(iPropertyPolicyAgreed != NULL);
    return SetPropertyUint(*iPropertyPolicyAgreed, aValue);
}

void DvProviderLinnCoUkPrivacy1C::GetPropertyPolicyAgreed(TUint& aValue)
{
    ASSERT(iPropertyPolicyAgreed != NULL);
    aValue = iPropertyPolicyAgreed->Value();
}

TBool DvProviderLinnCoUkPrivacy1C::SetPropertyPolicyDetails(const Brx& aValue)
{
    ASSERT(iPropertyPolicyDetails != NULL);
    return SetPropertyString(*iPropertyPolicyDetails, aValue);
}

void DvProviderLinnCoUkPrivacy1C::GetPropertyPolicyDetails(Brhz& aValue)
{
    ASSERT(iPropertyPolicyDetails != NULL);
    aValue.Set(iPropertyPolicyDetails->Value());
}

void DvProviderLinnCoUkPrivacy1C::EnablePropertyPolicyVersion()
{
    iPropertyPolicyVersion = new PropertyUint(new ParameterUint("PolicyVersion"));
    iService->AddProperty(iPropertyPolicyVersion); // passes ownership
}

void DvProviderLinnCoUkPrivacy1C::EnablePropertyPolicyAgreed()
{
    iPropertyPolicyAgreed = new PropertyUint(new ParameterUint("PolicyAgreed"));
    iService->AddProperty(iPropertyPolicyAgreed); // passes ownership
}

void DvProviderLinnCoUkPrivacy1C::EnablePropertyPolicyDetails()
{
    iPropertyPolicyDetails = new PropertyString(new ParameterString("PolicyDetails"));
    iService->AddProperty(iPropertyPolicyDetails); // passes ownership
}

void DvProviderLinnCoUkPrivacy1C::EnableActionGetPolicyVersion(CallbackPrivacy1GetPolicyVersion aCallback, void* aPtr)
{
    iCallbackGetPolicyVersion = aCallback;
    iPtrGetPolicyVersion = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPolicyVersion");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyPolicyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1C::DoGetPolicyVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1C::EnableActionGetPolicyAgreed(CallbackPrivacy1GetPolicyAgreed aCallback, void* aPtr)
{
    iCallbackGetPolicyAgreed = aCallback;
    iPtrGetPolicyAgreed = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPolicyAgreed");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyPolicyAgreed));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1C::DoGetPolicyAgreed);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1C::EnableActionSetPolicyAgreed(CallbackPrivacy1SetPolicyAgreed aCallback, void* aPtr)
{
    iCallbackSetPolicyAgreed = aCallback;
    iPtrSetPolicyAgreed = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPolicyAgreed");
    action->AddInputParameter(new ParameterRelated("Agreed", *iPropertyPolicyAgreed));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1C::DoSetPolicyAgreed);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1C::EnableActionGetPolicyDetails(CallbackPrivacy1GetPolicyDetails aCallback, void* aPtr)
{
    iCallbackGetPolicyDetails = aCallback;
    iPtrGetPolicyDetails = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPolicyDetails");
    action->AddOutputParameter(new ParameterRelated("Details", *iPropertyPolicyDetails));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1C::DoGetPolicyDetails);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1C::EnableActionSetPolicyDetails(CallbackPrivacy1SetPolicyDetails aCallback, void* aPtr)
{
    iCallbackSetPolicyDetails = aCallback;
    iPtrSetPolicyDetails = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPolicyDetails");
    action->AddInputParameter(new ParameterRelated("Details", *iPropertyPolicyDetails));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1C::DoSetPolicyDetails);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1C::DoGetPolicyVersion(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Version;
    ASSERT(iCallbackGetPolicyVersion != NULL);
    if (0 != iCallbackGetPolicyVersion(iPtrGetPolicyVersion, invocationC, invocationCPtr, &Version)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respVersion(aInvocation, "Version");
    invocation.StartResponse();
    respVersion.Write(Version);
    invocation.EndResponse();
}

void DvProviderLinnCoUkPrivacy1C::DoGetPolicyAgreed(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Version;
    ASSERT(iCallbackGetPolicyAgreed != NULL);
    if (0 != iCallbackGetPolicyAgreed(iPtrGetPolicyAgreed, invocationC, invocationCPtr, &Version)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respVersion(aInvocation, "Version");
    invocation.StartResponse();
    respVersion.Write(Version);
    invocation.EndResponse();
}

void DvProviderLinnCoUkPrivacy1C::DoSetPolicyAgreed(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Agreed = aInvocation.InvocationReadUint("Agreed");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetPolicyAgreed != NULL);
    if (0 != iCallbackSetPolicyAgreed(iPtrSetPolicyAgreed, invocationC, invocationCPtr, Agreed)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkPrivacy1C::DoGetPolicyDetails(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Details;
    ASSERT(iCallbackGetPolicyDetails != NULL);
    if (0 != iCallbackGetPolicyDetails(iPtrGetPolicyDetails, invocationC, invocationCPtr, &Details)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respDetails(aInvocation, "Details");
    invocation.StartResponse();
    Brhz bufDetails((const TChar*)Details);
    OhNetFreeExternal(Details);
    respDetails.Write(bufDetails);
    respDetails.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkPrivacy1C::DoSetPolicyDetails(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Details;
    aInvocation.InvocationReadString("Details", Details);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetPolicyDetails != NULL);
    if (0 != iCallbackSetPolicyDetails(iPtrSetPolicyDetails, invocationC, invocationCPtr, (const char*)Details.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkPrivacy1Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkPrivacy1C(aDevice);
}

void STDCALL DvProviderLinnCoUkPrivacy1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkPrivacy1EnableActionGetPolicyVersion(THandle aProvider, CallbackPrivacy1GetPolicyVersion aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->EnableActionGetPolicyVersion(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkPrivacy1EnableActionGetPolicyAgreed(THandle aProvider, CallbackPrivacy1GetPolicyAgreed aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->EnableActionGetPolicyAgreed(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkPrivacy1EnableActionSetPolicyAgreed(THandle aProvider, CallbackPrivacy1SetPolicyAgreed aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->EnableActionSetPolicyAgreed(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkPrivacy1EnableActionGetPolicyDetails(THandle aProvider, CallbackPrivacy1GetPolicyDetails aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->EnableActionGetPolicyDetails(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkPrivacy1EnableActionSetPolicyDetails(THandle aProvider, CallbackPrivacy1SetPolicyDetails aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->EnableActionSetPolicyDetails(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkPrivacy1SetPropertyPolicyVersion(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->SetPropertyPolicyVersion(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkPrivacy1GetPropertyPolicyVersion(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->GetPropertyPolicyVersion(val);
    *aValue = val;
}

int32_t STDCALL DvProviderLinnCoUkPrivacy1SetPropertyPolicyAgreed(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->SetPropertyPolicyAgreed(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkPrivacy1GetPropertyPolicyAgreed(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->GetPropertyPolicyAgreed(val);
    *aValue = val;
}

int32_t STDCALL DvProviderLinnCoUkPrivacy1SetPropertyPolicyDetails(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->SetPropertyPolicyDetails(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkPrivacy1GetPropertyPolicyDetails(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->GetPropertyPolicyDetails(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderLinnCoUkPrivacy1EnablePropertyPolicyVersion(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->EnablePropertyPolicyVersion();
}

void STDCALL DvProviderLinnCoUkPrivacy1EnablePropertyPolicyAgreed(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->EnablePropertyPolicyAgreed();
}

void STDCALL DvProviderLinnCoUkPrivacy1EnablePropertyPolicyDetails(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkPrivacy1C*>(aProvider)->EnablePropertyPolicyDetails();
}

