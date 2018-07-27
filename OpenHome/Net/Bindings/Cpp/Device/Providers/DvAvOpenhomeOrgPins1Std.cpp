#include "DvAvOpenhomeOrgPins1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgPins1Cpp::SetPropertyDeviceMax(uint32_t aValue)
{
    ASSERT(iPropertyDeviceMax != NULL);
    return SetPropertyUint(*iPropertyDeviceMax, aValue);
}

void DvProviderAvOpenhomeOrgPins1Cpp::GetPropertyDeviceMax(uint32_t& aValue)
{
    ASSERT(iPropertyDeviceMax != NULL);
    aValue = iPropertyDeviceMax->Value();
}

bool DvProviderAvOpenhomeOrgPins1Cpp::SetPropertyAccountMax(uint32_t aValue)
{
    ASSERT(iPropertyAccountMax != NULL);
    return SetPropertyUint(*iPropertyAccountMax, aValue);
}

void DvProviderAvOpenhomeOrgPins1Cpp::GetPropertyAccountMax(uint32_t& aValue)
{
    ASSERT(iPropertyAccountMax != NULL);
    aValue = iPropertyAccountMax->Value();
}

bool DvProviderAvOpenhomeOrgPins1Cpp::SetPropertyModes(const std::string& aValue)
{
    ASSERT(iPropertyModes != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyModes, buf);
}

void DvProviderAvOpenhomeOrgPins1Cpp::GetPropertyModes(std::string& aValue)
{
    ASSERT(iPropertyModes != NULL);
    const Brx& val = iPropertyModes->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgPins1Cpp::SetPropertyIdArray(const std::string& aValue)
{
    ASSERT(iPropertyIdArray != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyIdArray, buf);
}

void DvProviderAvOpenhomeOrgPins1Cpp::GetPropertyIdArray(std::string& aValue)
{
    ASSERT(iPropertyIdArray != NULL);
    const Brx& val = iPropertyIdArray->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgPins1Cpp::SetPropertyCloudConnected(bool aValue)
{
    ASSERT(iPropertyCloudConnected != NULL);
    return SetPropertyBool(*iPropertyCloudConnected, aValue);
}

void DvProviderAvOpenhomeOrgPins1Cpp::GetPropertyCloudConnected(bool& aValue)
{
    ASSERT(iPropertyCloudConnected != NULL);
    aValue = iPropertyCloudConnected->Value();
}

DvProviderAvOpenhomeOrgPins1Cpp::DvProviderAvOpenhomeOrgPins1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Pins", 1)
{
    iPropertyDeviceMax = NULL;
    iPropertyAccountMax = NULL;
    iPropertyModes = NULL;
    iPropertyIdArray = NULL;
    iPropertyCloudConnected = NULL;
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnablePropertyDeviceMax()
{
    iPropertyDeviceMax = new PropertyUint(new ParameterUint("DeviceMax"));
    iService->AddProperty(iPropertyDeviceMax); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnablePropertyAccountMax()
{
    iPropertyAccountMax = new PropertyUint(new ParameterUint("AccountMax"));
    iService->AddProperty(iPropertyAccountMax); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnablePropertyModes()
{
    iPropertyModes = new PropertyString(new ParameterString("Modes"));
    iService->AddProperty(iPropertyModes); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnablePropertyIdArray()
{
    iPropertyIdArray = new PropertyString(new ParameterString("IdArray"));
    iService->AddProperty(iPropertyIdArray); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnablePropertyCloudConnected()
{
    iPropertyCloudConnected = new PropertyBool(new ParameterBool("CloudConnected"));
    iService->AddProperty(iPropertyCloudConnected); // passes ownership
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionGetDeviceMax()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceMax");
    action->AddOutputParameter(new ParameterRelated("DeviceMax", *iPropertyDeviceMax));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoGetDeviceMax);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionGetAccountMax()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAccountMax");
    action->AddOutputParameter(new ParameterRelated("AccountMax", *iPropertyAccountMax));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoGetAccountMax);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionGetModes()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetModes");
    action->AddOutputParameter(new ParameterRelated("Modes", *iPropertyModes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoGetModes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionGetIdArray()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIdArray");
    action->AddOutputParameter(new ParameterRelated("IdArray", *iPropertyIdArray));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoGetIdArray);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionGetCloudConnected()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetCloudConnected");
    action->AddOutputParameter(new ParameterRelated("CloudConnected", *iPropertyCloudConnected));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoGetCloudConnected);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionReadList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReadList");
    action->AddInputParameter(new ParameterString("Ids"));
    action->AddOutputParameter(new ParameterString("List"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoReadList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionInvokeId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InvokeId");
    action->AddInputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoInvokeId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionInvokeIndex()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InvokeIndex");
    action->AddInputParameter(new ParameterUint("Index"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoInvokeIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionInvokeUri()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InvokeUri");
    action->AddInputParameter(new ParameterString("Mode"));
    action->AddInputParameter(new ParameterString("Type"));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterBool("Shuffle"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoInvokeUri);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionSetDevice()
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoSetDevice);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionSetAccount()
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoSetAccount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionClear()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Clear");
    action->AddInputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoClear);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::EnableActionSwap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Swap");
    action->AddInputParameter(new ParameterUint("Index1"));
    action->AddInputParameter(new ParameterUint("Index2"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgPins1Cpp::DoSwap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoGetDeviceMax(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respDeviceMax;
    DvInvocationStd invocation(aInvocation);
    GetDeviceMax(invocation, respDeviceMax);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterDeviceMax(aInvocation, "DeviceMax");
    respWriterDeviceMax.Write(respDeviceMax);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoGetAccountMax(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respAccountMax;
    DvInvocationStd invocation(aInvocation);
    GetAccountMax(invocation, respAccountMax);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterAccountMax(aInvocation, "AccountMax");
    respWriterAccountMax.Write(respAccountMax);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoGetModes(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respModes;
    DvInvocationStd invocation(aInvocation);
    GetModes(invocation, respModes);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterModes(aInvocation, "Modes");
    Brn buf_Modes((const TByte*)respModes.c_str(), (TUint)respModes.length());
    respWriterModes.Write(buf_Modes);
    aInvocation.InvocationWriteStringEnd("Modes");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoGetIdArray(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respIdArray;
    DvInvocationStd invocation(aInvocation);
    GetIdArray(invocation, respIdArray);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterIdArray(aInvocation, "IdArray");
    Brn buf_IdArray((const TByte*)respIdArray.c_str(), (TUint)respIdArray.length());
    respWriterIdArray.Write(buf_IdArray);
    aInvocation.InvocationWriteStringEnd("IdArray");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoGetCloudConnected(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respCloudConnected;
    DvInvocationStd invocation(aInvocation);
    GetCloudConnected(invocation, respCloudConnected);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterCloudConnected(aInvocation, "CloudConnected");
    respWriterCloudConnected.Write(respCloudConnected);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoReadList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Ids;
    aInvocation.InvocationReadString("Ids", buf_Ids);
    std::string Ids((const char*)buf_Ids.Ptr(), buf_Ids.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respList;
    DvInvocationStd invocation(aInvocation);
    ReadList(invocation, Ids, respList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterList(aInvocation, "List");
    Brn buf_List((const TByte*)respList.c_str(), (TUint)respList.length());
    respWriterList.Write(buf_List);
    aInvocation.InvocationWriteStringEnd("List");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoInvokeId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Id = aInvocation.InvocationReadUint("Id");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    InvokeId(invocation, Id);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoInvokeIndex(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Index = aInvocation.InvocationReadUint("Index");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    InvokeIndex(invocation, Index);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoInvokeUri(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Mode;
    aInvocation.InvocationReadString("Mode", buf_Mode);
    std::string Mode((const char*)buf_Mode.Ptr(), buf_Mode.Bytes());
    Brhz buf_Type;
    aInvocation.InvocationReadString("Type", buf_Type);
    std::string Type((const char*)buf_Type.Ptr(), buf_Type.Bytes());
    Brhz buf_Uri;
    aInvocation.InvocationReadString("Uri", buf_Uri);
    std::string Uri((const char*)buf_Uri.Ptr(), buf_Uri.Bytes());
    bool Shuffle = aInvocation.InvocationReadBool("Shuffle");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    InvokeUri(invocation, Mode, Type, Uri, Shuffle);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoSetDevice(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Index = aInvocation.InvocationReadUint("Index");
    Brhz buf_Mode;
    aInvocation.InvocationReadString("Mode", buf_Mode);
    std::string Mode((const char*)buf_Mode.Ptr(), buf_Mode.Bytes());
    Brhz buf_Type;
    aInvocation.InvocationReadString("Type", buf_Type);
    std::string Type((const char*)buf_Type.Ptr(), buf_Type.Bytes());
    Brhz buf_Uri;
    aInvocation.InvocationReadString("Uri", buf_Uri);
    std::string Uri((const char*)buf_Uri.Ptr(), buf_Uri.Bytes());
    Brhz buf_Title;
    aInvocation.InvocationReadString("Title", buf_Title);
    std::string Title((const char*)buf_Title.Ptr(), buf_Title.Bytes());
    Brhz buf_Description;
    aInvocation.InvocationReadString("Description", buf_Description);
    std::string Description((const char*)buf_Description.Ptr(), buf_Description.Bytes());
    Brhz buf_ArtworkUri;
    aInvocation.InvocationReadString("ArtworkUri", buf_ArtworkUri);
    std::string ArtworkUri((const char*)buf_ArtworkUri.Ptr(), buf_ArtworkUri.Bytes());
    bool Shuffle = aInvocation.InvocationReadBool("Shuffle");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetDevice(invocation, Index, Mode, Type, Uri, Title, Description, ArtworkUri, Shuffle);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoSetAccount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Index = aInvocation.InvocationReadUint("Index");
    Brhz buf_Mode;
    aInvocation.InvocationReadString("Mode", buf_Mode);
    std::string Mode((const char*)buf_Mode.Ptr(), buf_Mode.Bytes());
    Brhz buf_Type;
    aInvocation.InvocationReadString("Type", buf_Type);
    std::string Type((const char*)buf_Type.Ptr(), buf_Type.Bytes());
    Brhz buf_Uri;
    aInvocation.InvocationReadString("Uri", buf_Uri);
    std::string Uri((const char*)buf_Uri.Ptr(), buf_Uri.Bytes());
    Brhz buf_Title;
    aInvocation.InvocationReadString("Title", buf_Title);
    std::string Title((const char*)buf_Title.Ptr(), buf_Title.Bytes());
    Brhz buf_Description;
    aInvocation.InvocationReadString("Description", buf_Description);
    std::string Description((const char*)buf_Description.Ptr(), buf_Description.Bytes());
    Brhz buf_ArtworkUri;
    aInvocation.InvocationReadString("ArtworkUri", buf_ArtworkUri);
    std::string ArtworkUri((const char*)buf_ArtworkUri.Ptr(), buf_ArtworkUri.Bytes());
    bool Shuffle = aInvocation.InvocationReadBool("Shuffle");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetAccount(invocation, Index, Mode, Type, Uri, Title, Description, ArtworkUri, Shuffle);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoClear(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Id = aInvocation.InvocationReadUint("Id");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Clear(invocation, Id);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::DoSwap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Index1 = aInvocation.InvocationReadUint("Index1");
    uint32_t Index2 = aInvocation.InvocationReadUint("Index2");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Swap(invocation, Index1, Index2);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgPins1Cpp::GetDeviceMax(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aDeviceMax*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1Cpp::GetAccountMax(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aAccountMax*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1Cpp::GetModes(IDvInvocationStd& /*aInvocation*/, std::string& /*aModes*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1Cpp::GetIdArray(IDvInvocationStd& /*aInvocation*/, std::string& /*aIdArray*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1Cpp::GetCloudConnected(IDvInvocationStd& /*aInvocation*/, bool& /*aCloudConnected*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1Cpp::ReadList(IDvInvocationStd& /*aInvocation*/, const std::string& /*aIds*/, std::string& /*aList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1Cpp::InvokeId(IDvInvocationStd& /*aInvocation*/, uint32_t /*aId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1Cpp::InvokeIndex(IDvInvocationStd& /*aInvocation*/, uint32_t /*aIndex*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1Cpp::InvokeUri(IDvInvocationStd& /*aInvocation*/, const std::string& /*aMode*/, const std::string& /*aType*/, const std::string& /*aUri*/, bool /*aShuffle*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1Cpp::SetDevice(IDvInvocationStd& /*aInvocation*/, uint32_t /*aIndex*/, const std::string& /*aMode*/, const std::string& /*aType*/, const std::string& /*aUri*/, const std::string& /*aTitle*/, const std::string& /*aDescription*/, const std::string& /*aArtworkUri*/, bool /*aShuffle*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1Cpp::SetAccount(IDvInvocationStd& /*aInvocation*/, uint32_t /*aIndex*/, const std::string& /*aMode*/, const std::string& /*aType*/, const std::string& /*aUri*/, const std::string& /*aTitle*/, const std::string& /*aDescription*/, const std::string& /*aArtworkUri*/, bool /*aShuffle*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1Cpp::Clear(IDvInvocationStd& /*aInvocation*/, uint32_t /*aId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgPins1Cpp::Swap(IDvInvocationStd& /*aInvocation*/, uint32_t /*aIndex1*/, uint32_t /*aIndex2*/)
{
    ASSERTS();
}

