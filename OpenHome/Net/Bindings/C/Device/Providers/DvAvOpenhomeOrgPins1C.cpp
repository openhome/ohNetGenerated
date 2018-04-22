#include "DvAvOpenhomeOrgPins1.h"
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

class DvProviderAvOpenhomeOrgPins1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgPins1C(DvDeviceC aDevice);
    TBool SetPropertyDeviceMax(TUint aValue);
    void GetPropertyDeviceMax(TUint& aValue);
    TBool SetPropertyAccountMax(TUint aValue);
    void GetPropertyAccountMax(TUint& aValue);
    TBool SetPropertyModes(const Brx& aValue);
    void GetPropertyModes(Brhz& aValue);
    TBool SetPropertyIdArray(const Brx& aValue);
    void GetPropertyIdArray(Brhz& aValue);
    void EnablePropertyDeviceMax();
    void EnablePropertyAccountMax();
    void EnablePropertyModes();
    void EnablePropertyIdArray();
    void EnableActionGetDeviceAccountMax(CallbackPins1GetDeviceAccountMax aCallback, void* aPtr);
    void EnableActionGetModes(CallbackPins1GetModes aCallback, void* aPtr);
    void EnableActionGetIdArray(CallbackPins1GetIdArray aCallback, void* aPtr);
    void EnableActionReadList(CallbackPins1ReadList aCallback, void* aPtr);
    void EnableActionInvokeId(CallbackPins1InvokeId aCallback, void* aPtr);
    void EnableActionInvokeIndex(CallbackPins1InvokeIndex aCallback, void* aPtr);
    void EnableActionSetDevice(CallbackPins1SetDevice aCallback, void* aPtr);
    void EnableActionSetAccount(CallbackPins1SetAccount aCallback, void* aPtr);
    void EnableActionClear(CallbackPins1Clear aCallback, void* aPtr);
    void EnableActionSwap(CallbackPins1Swap aCallback, void* aPtr);
private:
    void DoGetDeviceAccountMax(IDviInvocation& aInvocation);
    void DoGetModes(IDviInvocation& aInvocation);
    void DoGetIdArray(IDviInvocation& aInvocation);
    void DoReadList(IDviInvocation& aInvocation);
    void DoInvokeId(IDviInvocation& aInvocation);
    void DoInvokeIndex(IDviInvocation& aInvocation);
    void DoSetDevice(IDviInvocation& aInvocation);
    void DoSetAccount(IDviInvocation& aInvocation);
    void DoClear(IDviInvocation& aInvocation);
    void DoSwap(IDviInvocation& aInvocation);
private:
    CallbackPins1GetDeviceAccountMax iCallbackGetDeviceAccountMax;
    void* iPtrGetDeviceAccountMax;
    CallbackPins1GetModes iCallbackGetModes;
    void* iPtrGetModes;
    CallbackPins1GetIdArray iCallbackGetIdArray;
    void* iPtrGetIdArray;
    CallbackPins1ReadList iCallbackReadList;
    void* iPtrReadList;
    CallbackPins1InvokeId iCallbackInvokeId;
    void* iPtrInvokeId;
    CallbackPins1InvokeIndex iCallbackInvokeIndex;
    void* iPtrInvokeIndex;
    CallbackPins1SetDevice iCallbackSetDevice;
    void* iPtrSetDevice;
    CallbackPins1SetAccount iCallbackSetAccount;
    void* iPtrSetAccount;
    CallbackPins1Clear iCallbackClear;
    void* iPtrClear;
    CallbackPins1Swap iCallbackSwap;
    void* iPtrSwap;
    PropertyUint* iPropertyDeviceMax;
    PropertyUint* iPropertyAccountMax;
    PropertyString* iPropertyModes;
    PropertyString* iPropertyIdArray;
};

DvProviderAvOpenhomeOrgPins1C::DvProviderAvOpenhomeOrgPins1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Pins", 1)
{
    iPropertyDeviceMax = NULL;
    iPropertyAccountMax = NULL;
    iPropertyModes = NULL;
    iPropertyIdArray = NULL;
}

TBool DvProviderAvOpenhomeOrgPins1C::SetPropertyDeviceMax(TUint aValue)
{
    ASSERT(iPropertyDeviceMax != NULL);
    return SetPropertyUint(*iPropertyDeviceMax, aValue);
}

void DvProviderAvOpenhomeOrgPins1C::GetPropertyDeviceMax(TUint& aValue)
{
    ASSERT(iPropertyDeviceMax != NULL);
    aValue = iPropertyDeviceMax->Value();
}

TBool DvProviderAvOpenhomeOrgPins1C::SetPropertyAccountMax(TUint aValue)
{
    ASSERT(iPropertyAccountMax != NULL);
    return SetPropertyUint(*iPropertyAccountMax, aValue);
}

void DvProviderAvOpenhomeOrgPins1C::GetPropertyAccountMax(TUint& aValue)
{
    ASSERT(iPropertyAccountMax != NULL);
    aValue = iPropertyAccountMax->Value();
}

TBool DvProviderAvOpenhomeOrgPins1C::SetPropertyModes(const Brx& aValue)
{
    ASSERT(iPropertyModes != NULL);
    return SetPropertyString(*iPropertyModes, aValue);
}

void DvProviderAvOpenhomeOrgPins1C::GetPropertyModes(Brhz& aValue)
{
    ASSERT(iPropertyModes != NULL);
    aValue.Set(iPropertyModes->Value());
}

TBool DvProviderAvOpenhomeOrgPins1C::SetPropertyIdArray(const Brx& aValue)
{
    ASSERT(iPropertyIdArray != NULL);
    return SetPropertyString(*iPropertyIdArray, aValue);
}

void DvProviderAvOpenhomeOrgPins1C::GetPropertyIdArray(Brhz& aValue)
{
    ASSERT(iPropertyIdArray != NULL);
    aValue.Set(iPropertyIdArray->Value());
}

void DvProviderAvOpenhomeOrgPins1C::EnablePropertyDeviceMax()
{
    iPropertyDeviceMax = new PropertyUint(new ParameterUint("DeviceMax"));
    iService->AddProperty(iPropertyDeviceMax); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1C::EnablePropertyAccountMax()
{
    iPropertyAccountMax = new PropertyUint(new ParameterUint("AccountMax"));
    iService->AddProperty(iPropertyAccountMax); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1C::EnablePropertyModes()
{
    iPropertyModes = new PropertyString(new ParameterString("Modes"));
    iService->AddProperty(iPropertyModes); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1C::EnablePropertyIdArray()
{
    iPropertyIdArray = new PropertyString(new ParameterString("IdArray"));
    iService->AddProperty(iPropertyIdArray); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1C::EnableActionGetDeviceAccountMax(CallbackPins1GetDeviceAccountMax aCallback, void* aPtr)
{
    iCallbackGetDeviceAccountMax = aCallback;
    iPtrGetDeviceAccountMax = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceAccountMax");
    action->AddOutputParameter(new ParameterRelated("DeviceMax", *iPropertyDeviceMax));
    action->AddOutputParameter(new ParameterRelated("AccountMax", *iPropertyAccountMax));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1C::DoGetDeviceAccountMax);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1C::EnableActionGetModes(CallbackPins1GetModes aCallback, void* aPtr)
{
    iCallbackGetModes = aCallback;
    iPtrGetModes = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetModes");
    action->AddOutputParameter(new ParameterRelated("Modes", *iPropertyModes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1C::DoGetModes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1C::EnableActionGetIdArray(CallbackPins1GetIdArray aCallback, void* aPtr)
{
    iCallbackGetIdArray = aCallback;
    iPtrGetIdArray = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIdArray");
    action->AddOutputParameter(new ParameterRelated("IdArray", *iPropertyIdArray));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1C::DoGetIdArray);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1C::EnableActionReadList(CallbackPins1ReadList aCallback, void* aPtr)
{
    iCallbackReadList = aCallback;
    iPtrReadList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReadList");
    action->AddInputParameter(new ParameterString("Ids"));
    action->AddOutputParameter(new ParameterString("List"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1C::DoReadList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1C::EnableActionInvokeId(CallbackPins1InvokeId aCallback, void* aPtr)
{
    iCallbackInvokeId = aCallback;
    iPtrInvokeId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InvokeId");
    action->AddInputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1C::DoInvokeId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1C::EnableActionInvokeIndex(CallbackPins1InvokeIndex aCallback, void* aPtr)
{
    iCallbackInvokeIndex = aCallback;
    iPtrInvokeIndex = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InvokeIndex");
    action->AddInputParameter(new ParameterUint("Index"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1C::DoInvokeIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1C::EnableActionSetDevice(CallbackPins1SetDevice aCallback, void* aPtr)
{
    iCallbackSetDevice = aCallback;
    iPtrSetDevice = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDevice");
    action->AddInputParameter(new ParameterUint("Index"));
    action->AddInputParameter(new ParameterString("Mode"));
    action->AddInputParameter(new ParameterString("Type"));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterString("Title"));
    action->AddInputParameter(new ParameterString("Description"));
    action->AddInputParameter(new ParameterString("ArtworkUri"));
    action->AddInputParameter(new ParameterBool("Shuffle"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1C::DoSetDevice);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1C::EnableActionSetAccount(CallbackPins1SetAccount aCallback, void* aPtr)
{
    iCallbackSetAccount = aCallback;
    iPtrSetAccount = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAccount");
    action->AddInputParameter(new ParameterUint("Index"));
    action->AddInputParameter(new ParameterString("Mode"));
    action->AddInputParameter(new ParameterString("Type"));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterString("Title"));
    action->AddInputParameter(new ParameterString("Description"));
    action->AddInputParameter(new ParameterString("ArtworkUri"));
    action->AddInputParameter(new ParameterBool("Shuffle"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1C::DoSetAccount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1C::EnableActionClear(CallbackPins1Clear aCallback, void* aPtr)
{
    iCallbackClear = aCallback;
    iPtrClear = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Clear");
    action->AddInputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1C::DoClear);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1C::EnableActionSwap(CallbackPins1Swap aCallback, void* aPtr)
{
    iCallbackSwap = aCallback;
    iPtrSwap = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Swap");
    action->AddInputParameter(new ParameterUint("Index1"));
    action->AddInputParameter(new ParameterUint("Index2"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1C::DoSwap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1C::DoGetDeviceAccountMax(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t DeviceMax;
    uint32_t AccountMax;
    ASSERT(iCallbackGetDeviceAccountMax != NULL);
    if (0 != iCallbackGetDeviceAccountMax(iPtrGetDeviceAccountMax, invocationC, invocationCPtr, &DeviceMax, &AccountMax)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respDeviceMax(aInvocation, "DeviceMax");
    DviInvocationResponseUint respAccountMax(aInvocation, "AccountMax");
    invocation.StartResponse();
    respDeviceMax.Write(DeviceMax);
    respAccountMax.Write(AccountMax);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgPins1C::DoGetModes(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Modes;
    ASSERT(iCallbackGetModes != NULL);
    if (0 != iCallbackGetModes(iPtrGetModes, invocationC, invocationCPtr, &Modes)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respModes(aInvocation, "Modes");
    invocation.StartResponse();
    Brhz bufModes((const TChar*)Modes);
    OhNetFreeExternal(Modes);
    respModes.Write(bufModes);
    respModes.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgPins1C::DoGetIdArray(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* IdArray;
    ASSERT(iCallbackGetIdArray != NULL);
    if (0 != iCallbackGetIdArray(iPtrGetIdArray, invocationC, invocationCPtr, &IdArray)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respIdArray(aInvocation, "IdArray");
    invocation.StartResponse();
    Brhz bufIdArray((const TChar*)IdArray);
    OhNetFreeExternal(IdArray);
    respIdArray.Write(bufIdArray);
    respIdArray.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgPins1C::DoReadList(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Ids;
    aInvocation.InvocationReadString("Ids", Ids);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* List;
    ASSERT(iCallbackReadList != NULL);
    if (0 != iCallbackReadList(iPtrReadList, invocationC, invocationCPtr, (const char*)Ids.Ptr(), &List)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respList(aInvocation, "List");
    invocation.StartResponse();
    Brhz bufList((const TChar*)List);
    OhNetFreeExternal(List);
    respList.Write(bufList);
    respList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgPins1C::DoInvokeId(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Id = aInvocation.InvocationReadUint("Id");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackInvokeId != NULL);
    if (0 != iCallbackInvokeId(iPtrInvokeId, invocationC, invocationCPtr, Id)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgPins1C::DoInvokeIndex(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Index = aInvocation.InvocationReadUint("Index");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackInvokeIndex != NULL);
    if (0 != iCallbackInvokeIndex(iPtrInvokeIndex, invocationC, invocationCPtr, Index)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgPins1C::DoSetDevice(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Index = aInvocation.InvocationReadUint("Index");
    Brhz Mode;
    aInvocation.InvocationReadString("Mode", Mode);
    Brhz Type;
    aInvocation.InvocationReadString("Type", Type);
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    Brhz Title;
    aInvocation.InvocationReadString("Title", Title);
    Brhz Description;
    aInvocation.InvocationReadString("Description", Description);
    Brhz ArtworkUri;
    aInvocation.InvocationReadString("ArtworkUri", ArtworkUri);
    TBool Shuffle = aInvocation.InvocationReadBool("Shuffle");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetDevice != NULL);
    if (0 != iCallbackSetDevice(iPtrSetDevice, invocationC, invocationCPtr, Index, (const char*)Mode.Ptr(), (const char*)Type.Ptr(), (const char*)Uri.Ptr(), (const char*)Title.Ptr(), (const char*)Description.Ptr(), (const char*)ArtworkUri.Ptr(), Shuffle)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgPins1C::DoSetAccount(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Index = aInvocation.InvocationReadUint("Index");
    Brhz Mode;
    aInvocation.InvocationReadString("Mode", Mode);
    Brhz Type;
    aInvocation.InvocationReadString("Type", Type);
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    Brhz Title;
    aInvocation.InvocationReadString("Title", Title);
    Brhz Description;
    aInvocation.InvocationReadString("Description", Description);
    Brhz ArtworkUri;
    aInvocation.InvocationReadString("ArtworkUri", ArtworkUri);
    TBool Shuffle = aInvocation.InvocationReadBool("Shuffle");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetAccount != NULL);
    if (0 != iCallbackSetAccount(iPtrSetAccount, invocationC, invocationCPtr, Index, (const char*)Mode.Ptr(), (const char*)Type.Ptr(), (const char*)Uri.Ptr(), (const char*)Title.Ptr(), (const char*)Description.Ptr(), (const char*)ArtworkUri.Ptr(), Shuffle)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgPins1C::DoClear(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Id = aInvocation.InvocationReadUint("Id");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackClear != NULL);
    if (0 != iCallbackClear(iPtrClear, invocationC, invocationCPtr, Id)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgPins1C::DoSwap(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Index1 = aInvocation.InvocationReadUint("Index1");
    TUint Index2 = aInvocation.InvocationReadUint("Index2");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSwap != NULL);
    if (0 != iCallbackSwap(iPtrSwap, invocationC, invocationCPtr, Index1, Index2)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgPins1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgPins1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgPins1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionGetDeviceAccountMax(THandle aProvider, CallbackPins1GetDeviceAccountMax aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnableActionGetDeviceAccountMax(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionGetModes(THandle aProvider, CallbackPins1GetModes aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnableActionGetModes(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionGetIdArray(THandle aProvider, CallbackPins1GetIdArray aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnableActionGetIdArray(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionReadList(THandle aProvider, CallbackPins1ReadList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnableActionReadList(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionInvokeId(THandle aProvider, CallbackPins1InvokeId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnableActionInvokeId(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionInvokeIndex(THandle aProvider, CallbackPins1InvokeIndex aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnableActionInvokeIndex(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionSetDevice(THandle aProvider, CallbackPins1SetDevice aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnableActionSetDevice(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionSetAccount(THandle aProvider, CallbackPins1SetAccount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnableActionSetAccount(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionClear(THandle aProvider, CallbackPins1Clear aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnableActionClear(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionSwap(THandle aProvider, CallbackPins1Swap aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnableActionSwap(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgPins1SetPropertyDeviceMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->SetPropertyDeviceMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgPins1GetPropertyDeviceMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->GetPropertyDeviceMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgPins1SetPropertyAccountMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->SetPropertyAccountMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgPins1GetPropertyAccountMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->GetPropertyAccountMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgPins1SetPropertyModes(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->SetPropertyModes(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgPins1GetPropertyModes(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->GetPropertyModes(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgPins1SetPropertyIdArray(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->SetPropertyIdArray(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgPins1GetPropertyIdArray(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->GetPropertyIdArray(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnablePropertyDeviceMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnablePropertyDeviceMax();
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnablePropertyAccountMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnablePropertyAccountMax();
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnablePropertyModes(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnablePropertyModes();
}

void STDCALL DvProviderAvOpenhomeOrgPins1EnablePropertyIdArray(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgPins1C*>(aProvider)->EnablePropertyIdArray();
}

