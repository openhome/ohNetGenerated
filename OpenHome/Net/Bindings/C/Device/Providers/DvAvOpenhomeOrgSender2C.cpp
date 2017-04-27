#include "DvAvOpenhomeOrgSender2.h"
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

class DvProviderAvOpenhomeOrgSender2C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgSender2C(DvDeviceC aDevice);
    TBool SetPropertyPresentationUrl(const Brx& aValue);
    void GetPropertyPresentationUrl(Brhz& aValue);
    TBool SetPropertyMetadata(const Brx& aValue);
    void GetPropertyMetadata(Brhz& aValue);
    TBool SetPropertyAudio(TBool aValue);
    void GetPropertyAudio(TBool& aValue);
    TBool SetPropertyStatus(const Brx& aValue);
    void GetPropertyStatus(Brhz& aValue);
    TBool SetPropertyStatus2(const Brx& aValue);
    void GetPropertyStatus2(Brhz& aValue);
    TBool SetPropertyEnabled(TBool aValue);
    void GetPropertyEnabled(TBool& aValue);
    TBool SetPropertyAttributes(const Brx& aValue);
    void GetPropertyAttributes(Brhz& aValue);
    void EnablePropertyPresentationUrl();
    void EnablePropertyMetadata();
    void EnablePropertyAudio();
    void EnablePropertyStatus();
    void EnablePropertyStatus2();
    void EnablePropertyEnabled();
    void EnablePropertyAttributes();
    void EnableActionPresentationUrl(CallbackSender2PresentationUrl aCallback, void* aPtr);
    void EnableActionMetadata(CallbackSender2Metadata aCallback, void* aPtr);
    void EnableActionAudio(CallbackSender2Audio aCallback, void* aPtr);
    void EnableActionStatus(CallbackSender2Status aCallback, void* aPtr);
    void EnableActionStatus2(CallbackSender2Status2 aCallback, void* aPtr);
    void EnableActionEnabled(CallbackSender2Enabled aCallback, void* aPtr);
    void EnableActionAttributes(CallbackSender2Attributes aCallback, void* aPtr);
private:
    void DoPresentationUrl(IDviInvocation& aInvocation);
    void DoMetadata(IDviInvocation& aInvocation);
    void DoAudio(IDviInvocation& aInvocation);
    void DoStatus(IDviInvocation& aInvocation);
    void DoStatus2(IDviInvocation& aInvocation);
    void DoEnabled(IDviInvocation& aInvocation);
    void DoAttributes(IDviInvocation& aInvocation);
private:
    CallbackSender2PresentationUrl iCallbackPresentationUrl;
    void* iPtrPresentationUrl;
    CallbackSender2Metadata iCallbackMetadata;
    void* iPtrMetadata;
    CallbackSender2Audio iCallbackAudio;
    void* iPtrAudio;
    CallbackSender2Status iCallbackStatus;
    void* iPtrStatus;
    CallbackSender2Status2 iCallbackStatus2;
    void* iPtrStatus2;
    CallbackSender2Enabled iCallbackEnabled;
    void* iPtrEnabled;
    CallbackSender2Attributes iCallbackAttributes;
    void* iPtrAttributes;
    PropertyString* iPropertyPresentationUrl;
    PropertyString* iPropertyMetadata;
    PropertyBool* iPropertyAudio;
    PropertyString* iPropertyStatus;
    PropertyString* iPropertyStatus2;
    PropertyBool* iPropertyEnabled;
    PropertyString* iPropertyAttributes;
};

DvProviderAvOpenhomeOrgSender2C::DvProviderAvOpenhomeOrgSender2C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Sender", 2)
{
    iPropertyPresentationUrl = NULL;
    iPropertyMetadata = NULL;
    iPropertyAudio = NULL;
    iPropertyStatus = NULL;
    iPropertyStatus2 = NULL;
    iPropertyEnabled = NULL;
    iPropertyAttributes = NULL;
}

TBool DvProviderAvOpenhomeOrgSender2C::SetPropertyPresentationUrl(const Brx& aValue)
{
    ASSERT(iPropertyPresentationUrl != NULL);
    return SetPropertyString(*iPropertyPresentationUrl, aValue);
}

void DvProviderAvOpenhomeOrgSender2C::GetPropertyPresentationUrl(Brhz& aValue)
{
    ASSERT(iPropertyPresentationUrl != NULL);
    aValue.Set(iPropertyPresentationUrl->Value());
}

TBool DvProviderAvOpenhomeOrgSender2C::SetPropertyMetadata(const Brx& aValue)
{
    ASSERT(iPropertyMetadata != NULL);
    return SetPropertyString(*iPropertyMetadata, aValue);
}

void DvProviderAvOpenhomeOrgSender2C::GetPropertyMetadata(Brhz& aValue)
{
    ASSERT(iPropertyMetadata != NULL);
    aValue.Set(iPropertyMetadata->Value());
}

TBool DvProviderAvOpenhomeOrgSender2C::SetPropertyAudio(TBool aValue)
{
    ASSERT(iPropertyAudio != NULL);
    return SetPropertyBool(*iPropertyAudio, aValue);
}

void DvProviderAvOpenhomeOrgSender2C::GetPropertyAudio(TBool& aValue)
{
    ASSERT(iPropertyAudio != NULL);
    aValue = iPropertyAudio->Value();
}

TBool DvProviderAvOpenhomeOrgSender2C::SetPropertyStatus(const Brx& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    return SetPropertyString(*iPropertyStatus, aValue);
}

void DvProviderAvOpenhomeOrgSender2C::GetPropertyStatus(Brhz& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    aValue.Set(iPropertyStatus->Value());
}

TBool DvProviderAvOpenhomeOrgSender2C::SetPropertyStatus2(const Brx& aValue)
{
    ASSERT(iPropertyStatus2 != NULL);
    return SetPropertyString(*iPropertyStatus2, aValue);
}

void DvProviderAvOpenhomeOrgSender2C::GetPropertyStatus2(Brhz& aValue)
{
    ASSERT(iPropertyStatus2 != NULL);
    aValue.Set(iPropertyStatus2->Value());
}

TBool DvProviderAvOpenhomeOrgSender2C::SetPropertyEnabled(TBool aValue)
{
    ASSERT(iPropertyEnabled != NULL);
    return SetPropertyBool(*iPropertyEnabled, aValue);
}

void DvProviderAvOpenhomeOrgSender2C::GetPropertyEnabled(TBool& aValue)
{
    ASSERT(iPropertyEnabled != NULL);
    aValue = iPropertyEnabled->Value();
}

TBool DvProviderAvOpenhomeOrgSender2C::SetPropertyAttributes(const Brx& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    return SetPropertyString(*iPropertyAttributes, aValue);
}

void DvProviderAvOpenhomeOrgSender2C::GetPropertyAttributes(Brhz& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    aValue.Set(iPropertyAttributes->Value());
}

void DvProviderAvOpenhomeOrgSender2C::EnablePropertyPresentationUrl()
{
    iPropertyPresentationUrl = new PropertyString(new ParameterString("PresentationUrl"));
    iService->AddProperty(iPropertyPresentationUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2C::EnablePropertyMetadata()
{
    iPropertyMetadata = new PropertyString(new ParameterString("Metadata"));
    iService->AddProperty(iPropertyMetadata); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2C::EnablePropertyAudio()
{
    iPropertyAudio = new PropertyBool(new ParameterBool("Audio"));
    iService->AddProperty(iPropertyAudio); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2C::EnablePropertyStatus()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Enabled";
    allowedValues[index++] = (TChar*)"Disabled";
    allowedValues[index++] = (TChar*)"Blocked";
    iPropertyStatus = new PropertyString(new ParameterString("Status", allowedValues, 3));
    delete[] allowedValues;
    iService->AddProperty(iPropertyStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2C::EnablePropertyStatus2()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[5];
    allowedValues[index++] = (TChar*)"Sending";
    allowedValues[index++] = (TChar*)"Ready";
    allowedValues[index++] = (TChar*)"Blocked";
    allowedValues[index++] = (TChar*)"Inactive";
    allowedValues[index++] = (TChar*)"Disabled";
    iPropertyStatus2 = new PropertyString(new ParameterString("Status2", allowedValues, 5));
    delete[] allowedValues;
    iService->AddProperty(iPropertyStatus2); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2C::EnablePropertyEnabled()
{
    iPropertyEnabled = new PropertyBool(new ParameterBool("Enabled"));
    iService->AddProperty(iPropertyEnabled); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2C::EnablePropertyAttributes()
{
    iPropertyAttributes = new PropertyString(new ParameterString("Attributes"));
    iService->AddProperty(iPropertyAttributes); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2C::EnableActionPresentationUrl(CallbackSender2PresentationUrl aCallback, void* aPtr)
{
    iCallbackPresentationUrl = aCallback;
    iPtrPresentationUrl = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PresentationUrl");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyPresentationUrl));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2C::DoPresentationUrl);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2C::EnableActionMetadata(CallbackSender2Metadata aCallback, void* aPtr)
{
    iCallbackMetadata = aCallback;
    iPtrMetadata = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Metadata");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyMetadata));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2C::DoMetadata);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2C::EnableActionAudio(CallbackSender2Audio aCallback, void* aPtr)
{
    iCallbackAudio = aCallback;
    iPtrAudio = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Audio");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyAudio));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2C::DoAudio);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2C::EnableActionStatus(CallbackSender2Status aCallback, void* aPtr)
{
    iCallbackStatus = aCallback;
    iPtrStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Status");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2C::DoStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2C::EnableActionStatus2(CallbackSender2Status2 aCallback, void* aPtr)
{
    iCallbackStatus2 = aCallback;
    iPtrStatus2 = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Status2");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStatus2));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2C::DoStatus2);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2C::EnableActionEnabled(CallbackSender2Enabled aCallback, void* aPtr)
{
    iCallbackEnabled = aCallback;
    iPtrEnabled = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Enabled");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyEnabled));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2C::DoEnabled);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2C::EnableActionAttributes(CallbackSender2Attributes aCallback, void* aPtr)
{
    iCallbackAttributes = aCallback;
    iPtrAttributes = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Attributes");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyAttributes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2C::DoAttributes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2C::DoPresentationUrl(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Value;
    ASSERT(iCallbackPresentationUrl != NULL);
    if (0 != iCallbackPresentationUrl(iPtrPresentationUrl, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respValue(aInvocation, "Value");
    invocation.StartResponse();
    Brhz bufValue((const TChar*)Value);
    OhNetFreeExternal(Value);
    respValue.Write(bufValue);
    respValue.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgSender2C::DoMetadata(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Value;
    ASSERT(iCallbackMetadata != NULL);
    if (0 != iCallbackMetadata(iPtrMetadata, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respValue(aInvocation, "Value");
    invocation.StartResponse();
    Brhz bufValue((const TChar*)Value);
    OhNetFreeExternal(Value);
    respValue.Write(bufValue);
    respValue.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgSender2C::DoAudio(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackAudio != NULL);
    if (0 != iCallbackAudio(iPtrAudio, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write((Value!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgSender2C::DoStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Value;
    ASSERT(iCallbackStatus != NULL);
    if (0 != iCallbackStatus(iPtrStatus, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respValue(aInvocation, "Value");
    invocation.StartResponse();
    Brhz bufValue((const TChar*)Value);
    OhNetFreeExternal(Value);
    respValue.Write(bufValue);
    respValue.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgSender2C::DoStatus2(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Value;
    ASSERT(iCallbackStatus2 != NULL);
    if (0 != iCallbackStatus2(iPtrStatus2, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respValue(aInvocation, "Value");
    invocation.StartResponse();
    Brhz bufValue((const TChar*)Value);
    OhNetFreeExternal(Value);
    respValue.Write(bufValue);
    respValue.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgSender2C::DoEnabled(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackEnabled != NULL);
    if (0 != iCallbackEnabled(iPtrEnabled, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write((Value!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgSender2C::DoAttributes(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Value;
    ASSERT(iCallbackAttributes != NULL);
    if (0 != iCallbackAttributes(iPtrAttributes, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respValue(aInvocation, "Value");
    invocation.StartResponse();
    Brhz bufValue((const TChar*)Value);
    OhNetFreeExternal(Value);
    respValue.Write(bufValue);
    respValue.WriteFlush();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgSender2Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgSender2C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgSender2Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionPresentationUrl(THandle aProvider, CallbackSender2PresentationUrl aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnableActionPresentationUrl(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionMetadata(THandle aProvider, CallbackSender2Metadata aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnableActionMetadata(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionAudio(THandle aProvider, CallbackSender2Audio aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnableActionAudio(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionStatus(THandle aProvider, CallbackSender2Status aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnableActionStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionStatus2(THandle aProvider, CallbackSender2Status2 aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnableActionStatus2(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionEnabled(THandle aProvider, CallbackSender2Enabled aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnableActionEnabled(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionAttributes(THandle aProvider, CallbackSender2Attributes aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnableActionAttributes(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyPresentationUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->SetPropertyPresentationUrl(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyPresentationUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->GetPropertyPresentationUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyMetadata(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->SetPropertyMetadata(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyMetadata(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->GetPropertyMetadata(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyAudio(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->SetPropertyAudio((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyAudio(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->GetPropertyAudio(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->SetPropertyStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->GetPropertyStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyStatus2(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->SetPropertyStatus2(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyStatus2(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->GetPropertyStatus2(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyEnabled(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->SetPropertyEnabled((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyEnabled(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->GetPropertyEnabled(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyAttributes(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->SetPropertyAttributes(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyAttributes(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->GetPropertyAttributes(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyPresentationUrl(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnablePropertyPresentationUrl();
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyMetadata(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnablePropertyMetadata();
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyAudio(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnablePropertyAudio();
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnablePropertyStatus();
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyStatus2(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnablePropertyStatus2();
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyEnabled(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnablePropertyEnabled();
}

void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyAttributes(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSender2C*>(aProvider)->EnablePropertyAttributes();
}

