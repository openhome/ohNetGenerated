#include "DvLinnCoUkConfiguration1.h"
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

class DvProviderLinnCoUkConfiguration1C : public DvProvider
{
public:
    DvProviderLinnCoUkConfiguration1C(DvDeviceC aDevice);
    TBool SetPropertyConfigurationXml(const Brx& aValue);
    void GetPropertyConfigurationXml(Brhz& aValue);
    TBool SetPropertyParameterXml(const Brx& aValue);
    void GetPropertyParameterXml(Brhz& aValue);
    void EnablePropertyConfigurationXml();
    void EnablePropertyParameterXml();
    void EnableActionConfigurationXml(CallbackConfiguration1ConfigurationXml aCallback, void* aPtr);
    void EnableActionParameterXml(CallbackConfiguration1ParameterXml aCallback, void* aPtr);
    void EnableActionSetParameter(CallbackConfiguration1SetParameter aCallback, void* aPtr);
private:
    void DoConfigurationXml(IDviInvocation& aInvocation);
    void DoParameterXml(IDviInvocation& aInvocation);
    void DoSetParameter(IDviInvocation& aInvocation);
private:
    CallbackConfiguration1ConfigurationXml iCallbackConfigurationXml;
    void* iPtrConfigurationXml;
    CallbackConfiguration1ParameterXml iCallbackParameterXml;
    void* iPtrParameterXml;
    CallbackConfiguration1SetParameter iCallbackSetParameter;
    void* iPtrSetParameter;
    PropertyString* iPropertyConfigurationXml;
    PropertyString* iPropertyParameterXml;
};

DvProviderLinnCoUkConfiguration1C::DvProviderLinnCoUkConfiguration1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Configuration", 1)
{
    iPropertyConfigurationXml = NULL;
    iPropertyParameterXml = NULL;
}

TBool DvProviderLinnCoUkConfiguration1C::SetPropertyConfigurationXml(const Brx& aValue)
{
    ASSERT(iPropertyConfigurationXml != NULL);
    return SetPropertyString(*iPropertyConfigurationXml, aValue);
}

void DvProviderLinnCoUkConfiguration1C::GetPropertyConfigurationXml(Brhz& aValue)
{
    ASSERT(iPropertyConfigurationXml != NULL);
    aValue.Set(iPropertyConfigurationXml->Value());
}

TBool DvProviderLinnCoUkConfiguration1C::SetPropertyParameterXml(const Brx& aValue)
{
    ASSERT(iPropertyParameterXml != NULL);
    return SetPropertyString(*iPropertyParameterXml, aValue);
}

void DvProviderLinnCoUkConfiguration1C::GetPropertyParameterXml(Brhz& aValue)
{
    ASSERT(iPropertyParameterXml != NULL);
    aValue.Set(iPropertyParameterXml->Value());
}

void DvProviderLinnCoUkConfiguration1C::EnablePropertyConfigurationXml()
{
    iPropertyConfigurationXml = new PropertyString(new ParameterString("ConfigurationXml"));
    iService->AddProperty(iPropertyConfigurationXml); // passes ownership
}

void DvProviderLinnCoUkConfiguration1C::EnablePropertyParameterXml()
{
    iPropertyParameterXml = new PropertyString(new ParameterString("ParameterXml"));
    iService->AddProperty(iPropertyParameterXml); // passes ownership
}

void DvProviderLinnCoUkConfiguration1C::EnableActionConfigurationXml(CallbackConfiguration1ConfigurationXml aCallback, void* aPtr)
{
    iCallbackConfigurationXml = aCallback;
    iPtrConfigurationXml = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConfigurationXml");
    action->AddOutputParameter(new ParameterRelated("aConfigurationXml", *iPropertyConfigurationXml));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkConfiguration1C::DoConfigurationXml);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkConfiguration1C::EnableActionParameterXml(CallbackConfiguration1ParameterXml aCallback, void* aPtr)
{
    iCallbackParameterXml = aCallback;
    iPtrParameterXml = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ParameterXml");
    action->AddOutputParameter(new ParameterRelated("aParameterXml", *iPropertyParameterXml));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkConfiguration1C::DoParameterXml);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkConfiguration1C::EnableActionSetParameter(CallbackConfiguration1SetParameter aCallback, void* aPtr)
{
    iCallbackSetParameter = aCallback;
    iPtrSetParameter = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetParameter");
    action->AddInputParameter(new ParameterString("aTarget"));
    action->AddInputParameter(new ParameterString("aName"));
    action->AddInputParameter(new ParameterString("aValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkConfiguration1C::DoSetParameter);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkConfiguration1C::DoConfigurationXml(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aConfigurationXml;
    ASSERT(iCallbackConfigurationXml != NULL);
    if (0 != iCallbackConfigurationXml(iPtrConfigurationXml, invocationC, invocationCPtr, &aConfigurationXml)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaConfigurationXml(aInvocation, "aConfigurationXml");
    invocation.StartResponse();
    Brhz bufaConfigurationXml((const TChar*)aConfigurationXml);
    OhNetFreeExternal(aConfigurationXml);
    respaConfigurationXml.Write(bufaConfigurationXml);
    respaConfigurationXml.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkConfiguration1C::DoParameterXml(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aParameterXml;
    ASSERT(iCallbackParameterXml != NULL);
    if (0 != iCallbackParameterXml(iPtrParameterXml, invocationC, invocationCPtr, &aParameterXml)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respaParameterXml(aInvocation, "aParameterXml");
    invocation.StartResponse();
    Brhz bufaParameterXml((const TChar*)aParameterXml);
    OhNetFreeExternal(aParameterXml);
    respaParameterXml.Write(bufaParameterXml);
    respaParameterXml.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkConfiguration1C::DoSetParameter(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz aTarget;
    aInvocation.InvocationReadString("aTarget", aTarget);
    Brhz aName;
    aInvocation.InvocationReadString("aName", aName);
    Brhz aValue;
    aInvocation.InvocationReadString("aValue", aValue);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetParameter != NULL);
    if (0 != iCallbackSetParameter(iPtrSetParameter, invocationC, invocationCPtr, (const char*)aTarget.Ptr(), (const char*)aName.Ptr(), (const char*)aValue.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkConfiguration1Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkConfiguration1C(aDevice);
}

void STDCALL DvProviderLinnCoUkConfiguration1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkConfiguration1C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkConfiguration1EnableActionConfigurationXml(THandle aProvider, CallbackConfiguration1ConfigurationXml aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkConfiguration1C*>(aProvider)->EnableActionConfigurationXml(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkConfiguration1EnableActionParameterXml(THandle aProvider, CallbackConfiguration1ParameterXml aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkConfiguration1C*>(aProvider)->EnableActionParameterXml(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkConfiguration1EnableActionSetParameter(THandle aProvider, CallbackConfiguration1SetParameter aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkConfiguration1C*>(aProvider)->EnableActionSetParameter(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkConfiguration1SetPropertyConfigurationXml(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkConfiguration1C*>(aProvider)->SetPropertyConfigurationXml(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkConfiguration1GetPropertyConfigurationXml(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkConfiguration1C*>(aProvider)->GetPropertyConfigurationXml(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkConfiguration1SetPropertyParameterXml(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkConfiguration1C*>(aProvider)->SetPropertyParameterXml(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkConfiguration1GetPropertyParameterXml(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkConfiguration1C*>(aProvider)->GetPropertyParameterXml(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderLinnCoUkConfiguration1EnablePropertyConfigurationXml(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkConfiguration1C*>(aProvider)->EnablePropertyConfigurationXml();
}

void STDCALL DvProviderLinnCoUkConfiguration1EnablePropertyParameterXml(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkConfiguration1C*>(aProvider)->EnablePropertyParameterXml();
}

