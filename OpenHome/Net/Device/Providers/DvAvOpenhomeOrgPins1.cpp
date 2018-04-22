#include "DvAvOpenhomeOrgPins1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgPins1::SetPropertyDeviceMax(TUint aValue)
{
    ASSERT(iPropertyDeviceMax != NULL);
    return SetPropertyUint(*iPropertyDeviceMax, aValue);
}

void DvProviderAvOpenhomeOrgPins1::GetPropertyDeviceMax(TUint& aValue)
{
    ASSERT(iPropertyDeviceMax != NULL);
    aValue = iPropertyDeviceMax->Value();
}

TBool DvProviderAvOpenhomeOrgPins1::SetPropertyAccountMax(TUint aValue)
{
    ASSERT(iPropertyAccountMax != NULL);
    return SetPropertyUint(*iPropertyAccountMax, aValue);
}

void DvProviderAvOpenhomeOrgPins1::GetPropertyAccountMax(TUint& aValue)
{
    ASSERT(iPropertyAccountMax != NULL);
    aValue = iPropertyAccountMax->Value();
}

TBool DvProviderAvOpenhomeOrgPins1::SetPropertyModes(const Brx& aValue)
{
    ASSERT(iPropertyModes != NULL);
    return SetPropertyString(*iPropertyModes, aValue);
}

void DvProviderAvOpenhomeOrgPins1::GetPropertyModes(Brhz& aValue)
{
    ASSERT(iPropertyModes != NULL);
    aValue.Set(iPropertyModes->Value());
}

TBool DvProviderAvOpenhomeOrgPins1::SetPropertyIdArray(const Brx& aValue)
{
    ASSERT(iPropertyIdArray != NULL);
    return SetPropertyString(*iPropertyIdArray, aValue);
}

void DvProviderAvOpenhomeOrgPins1::GetPropertyIdArray(Brhz& aValue)
{
    ASSERT(iPropertyIdArray != NULL);
    aValue.Set(iPropertyIdArray->Value());
}

DvProviderAvOpenhomeOrgPins1::DvProviderAvOpenhomeOrgPins1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Pins", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgPins1::DvProviderAvOpenhomeOrgPins1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Pins", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgPins1::Construct()
{
    iPropertyDeviceMax = NULL;
    iPropertyAccountMax = NULL;
    iPropertyModes = NULL;
    iPropertyIdArray = NULL;
}

void DvProviderAvOpenhomeOrgPins1::EnablePropertyDeviceMax()
{
    iPropertyDeviceMax = new PropertyUint(new ParameterUint("DeviceMax"));
    iService->AddProperty(iPropertyDeviceMax); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1::EnablePropertyAccountMax()
{
    iPropertyAccountMax = new PropertyUint(new ParameterUint("AccountMax"));
    iService->AddProperty(iPropertyAccountMax); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1::EnablePropertyModes()
{
    iPropertyModes = new PropertyString(new ParameterString("Modes"));
    iService->AddProperty(iPropertyModes); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1::EnablePropertyIdArray()
{
    iPropertyIdArray = new PropertyString(new ParameterString("IdArray"));
    iService->AddProperty(iPropertyIdArray); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1::EnableActionGetDeviceAccountMax()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceAccountMax");
    action->AddOutputParameter(new ParameterRelated("DeviceMax", *iPropertyDeviceMax));
    action->AddOutputParameter(new ParameterRelated("AccountMax", *iPropertyAccountMax));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1::DoGetDeviceAccountMax);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1::EnableActionGetModes()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetModes");
    action->AddOutputParameter(new ParameterRelated("Modes", *iPropertyModes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1::DoGetModes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1::EnableActionGetIdArray()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIdArray");
    action->AddOutputParameter(new ParameterRelated("IdArray", *iPropertyIdArray));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1::DoGetIdArray);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1::EnableActionReadList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReadList");
    action->AddInputParameter(new ParameterString("Ids"));
    action->AddOutputParameter(new ParameterString("List"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1::DoReadList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1::EnableActionInvokeId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InvokeId");
    action->AddInputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1::DoInvokeId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1::EnableActionInvokeIndex()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InvokeIndex");
    action->AddInputParameter(new ParameterUint("Index"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1::DoInvokeIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1::EnableActionSetDevice()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDevice");
    action->AddInputParameter(new ParameterUint("Index"));
    action->AddInputParameter(new ParameterString("Mode"));
    action->AddInputParameter(new ParameterString("Type"));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterString("Title"));
    action->AddInputParameter(new ParameterString("Description"));
    action->AddInputParameter(new ParameterString("ArtworkUri"));
    action->AddInputParameter(new ParameterBool("Shuffle"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1::DoSetDevice);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1::EnableActionSetAccount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAccount");
    action->AddInputParameter(new ParameterUint("Index"));
    action->AddInputParameter(new ParameterString("Mode"));
    action->AddInputParameter(new ParameterString("Type"));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterString("Title"));
    action->AddInputParameter(new ParameterString("Description"));
    action->AddInputParameter(new ParameterString("ArtworkUri"));
    action->AddInputParameter(new ParameterBool("Shuffle"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1::DoSetAccount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1::EnableActionClear()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Clear");
    action->AddInputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1::DoClear);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1::EnableActionSwap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Swap");
    action->AddInputParameter(new ParameterUint("Index1"));
    action->AddInputParameter(new ParameterUint("Index2"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1::DoSwap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1::DoGetDeviceAccountMax(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respDeviceMax(aInvocation, "DeviceMax");
    DviInvocationResponseUint respAccountMax(aInvocation, "AccountMax");
    GetDeviceAccountMax(invocation, respDeviceMax, respAccountMax);
}

void DvProviderAvOpenhomeOrgPins1::DoGetModes(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respModes(aInvocation, "Modes");
    GetModes(invocation, respModes);
}

void DvProviderAvOpenhomeOrgPins1::DoGetIdArray(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respIdArray(aInvocation, "IdArray");
    GetIdArray(invocation, respIdArray);
}

void DvProviderAvOpenhomeOrgPins1::DoReadList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Ids;
    aInvocation.InvocationReadString("Ids", Ids);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respList(aInvocation, "List");
    ReadList(invocation, Ids, respList);
}

void DvProviderAvOpenhomeOrgPins1::DoInvokeId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Id = aInvocation.InvocationReadUint("Id");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    InvokeId(invocation, Id);
}

void DvProviderAvOpenhomeOrgPins1::DoInvokeIndex(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Index = aInvocation.InvocationReadUint("Index");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    InvokeIndex(invocation, Index);
}

void DvProviderAvOpenhomeOrgPins1::DoSetDevice(IDviInvocation& aInvocation)
{
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
    SetDevice(invocation, Index, Mode, Type, Uri, Title, Description, ArtworkUri, Shuffle);
}

void DvProviderAvOpenhomeOrgPins1::DoSetAccount(IDviInvocation& aInvocation)
{
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
    SetAccount(invocation, Index, Mode, Type, Uri, Title, Description, ArtworkUri, Shuffle);
}

void DvProviderAvOpenhomeOrgPins1::DoClear(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Id = aInvocation.InvocationReadUint("Id");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Clear(invocation, Id);
}

void DvProviderAvOpenhomeOrgPins1::DoSwap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Index1 = aInvocation.InvocationReadUint("Index1");
    TUint Index2 = aInvocation.InvocationReadUint("Index2");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Swap(invocation, Index1, Index2);
}

void DvProviderAvOpenhomeOrgPins1::GetDeviceAccountMax(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aDeviceMax*/, IDvInvocationResponseUint& /*aAccountMax*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1::GetModes(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aModes*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1::GetIdArray(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aIdArray*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1::ReadList(IDvInvocation& /*aResponse*/, const Brx& /*aIds*/, IDvInvocationResponseString& /*aList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1::InvokeId(IDvInvocation& /*aResponse*/, TUint /*aId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1::InvokeIndex(IDvInvocation& /*aResponse*/, TUint /*aIndex*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1::SetDevice(IDvInvocation& /*aResponse*/, TUint /*aIndex*/, const Brx& /*aMode*/, const Brx& /*aType*/, const Brx& /*aUri*/, const Brx& /*aTitle*/, const Brx& /*aDescription*/, const Brx& /*aArtworkUri*/, TBool /*aShuffle*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1::SetAccount(IDvInvocation& /*aResponse*/, TUint /*aIndex*/, const Brx& /*aMode*/, const Brx& /*aType*/, const Brx& /*aUri*/, const Brx& /*aTitle*/, const Brx& /*aDescription*/, const Brx& /*aArtworkUri*/, TBool /*aShuffle*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1::Clear(IDvInvocation& /*aResponse*/, TUint /*aId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1::Swap(IDvInvocation& /*aResponse*/, TUint /*aIndex1*/, TUint /*aIndex2*/)
{
    ASSERTS();
}

