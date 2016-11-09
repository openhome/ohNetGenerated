#include "CpUpnpOrgContentDirectory2.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetSearchCapabilitiesUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncGetSearchCapabilitiesUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aSearchCaps);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    Brh& iSearchCaps;
};

class SyncGetSortCapabilitiesUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncGetSortCapabilitiesUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aSortCaps);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    Brh& iSortCaps;
};

class SyncGetSortExtensionCapabilitiesUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncGetSortExtensionCapabilitiesUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aSortExtensionCaps);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    Brh& iSortExtensionCaps;
};

class SyncGetFeatureListUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncGetFeatureListUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aFeatureList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    Brh& iFeatureList;
};

class SyncGetSystemUpdateIDUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncGetSystemUpdateIDUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    TUint& iId;
};

class SyncBrowseUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncBrowseUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    Brh& iResult;
    TUint& iNumberReturned;
    TUint& iTotalMatches;
    TUint& iUpdateID;
};

class SyncSearchUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncSearchUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    Brh& iResult;
    TUint& iNumberReturned;
    TUint& iTotalMatches;
    TUint& iUpdateID;
};

class SyncCreateObjectUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncCreateObjectUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aObjectID, Brh& aResult);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    Brh& iObjectID;
    Brh& iResult;
};

class SyncDestroyObjectUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncDestroyObjectUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
};

class SyncUpdateObjectUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncUpdateObjectUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
};

class SyncMoveObjectUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncMoveObjectUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aNewObjectID);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    Brh& iNewObjectID;
};

class SyncImportResourceUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncImportResourceUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, TUint& aTransferID);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    TUint& iTransferID;
};

class SyncExportResourceUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncExportResourceUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, TUint& aTransferID);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    TUint& iTransferID;
};

class SyncDeleteResourceUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncDeleteResourceUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
};

class SyncStopTransferResourceUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncStopTransferResourceUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
};

class SyncGetTransferProgressUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncGetTransferProgressUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aTransferStatus, Brh& aTransferLength, Brh& aTransferTotal);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    Brh& iTransferStatus;
    Brh& iTransferLength;
    Brh& iTransferTotal;
};

class SyncCreateReferenceUpnpOrgContentDirectory2 : public SyncProxyAction
{
public:
    SyncCreateReferenceUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aNewID);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgContentDirectory2& iService;
    Brh& iNewID;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetSearchCapabilitiesUpnpOrgContentDirectory2

SyncGetSearchCapabilitiesUpnpOrgContentDirectory2::SyncGetSearchCapabilitiesUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aSearchCaps)
    : iService(aProxy)
    , iSearchCaps(aSearchCaps)
{
}

void SyncGetSearchCapabilitiesUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSearchCapabilities(aAsync, iSearchCaps);
}

// SyncGetSortCapabilitiesUpnpOrgContentDirectory2

SyncGetSortCapabilitiesUpnpOrgContentDirectory2::SyncGetSortCapabilitiesUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aSortCaps)
    : iService(aProxy)
    , iSortCaps(aSortCaps)
{
}

void SyncGetSortCapabilitiesUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSortCapabilities(aAsync, iSortCaps);
}

// SyncGetSortExtensionCapabilitiesUpnpOrgContentDirectory2

SyncGetSortExtensionCapabilitiesUpnpOrgContentDirectory2::SyncGetSortExtensionCapabilitiesUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aSortExtensionCaps)
    : iService(aProxy)
    , iSortExtensionCaps(aSortExtensionCaps)
{
}

void SyncGetSortExtensionCapabilitiesUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSortExtensionCapabilities(aAsync, iSortExtensionCaps);
}

// SyncGetFeatureListUpnpOrgContentDirectory2

SyncGetFeatureListUpnpOrgContentDirectory2::SyncGetFeatureListUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aFeatureList)
    : iService(aProxy)
    , iFeatureList(aFeatureList)
{
}

void SyncGetFeatureListUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetFeatureList(aAsync, iFeatureList);
}

// SyncGetSystemUpdateIDUpnpOrgContentDirectory2

SyncGetSystemUpdateIDUpnpOrgContentDirectory2::SyncGetSystemUpdateIDUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncGetSystemUpdateIDUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSystemUpdateID(aAsync, iId);
}

// SyncBrowseUpnpOrgContentDirectory2

SyncBrowseUpnpOrgContentDirectory2::SyncBrowseUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID)
    : iService(aProxy)
    , iResult(aResult)
    , iNumberReturned(aNumberReturned)
    , iTotalMatches(aTotalMatches)
    , iUpdateID(aUpdateID)
{
}

void SyncBrowseUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndBrowse(aAsync, iResult, iNumberReturned, iTotalMatches, iUpdateID);
}

// SyncSearchUpnpOrgContentDirectory2

SyncSearchUpnpOrgContentDirectory2::SyncSearchUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID)
    : iService(aProxy)
    , iResult(aResult)
    , iNumberReturned(aNumberReturned)
    , iTotalMatches(aTotalMatches)
    , iUpdateID(aUpdateID)
{
}

void SyncSearchUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndSearch(aAsync, iResult, iNumberReturned, iTotalMatches, iUpdateID);
}

// SyncCreateObjectUpnpOrgContentDirectory2

SyncCreateObjectUpnpOrgContentDirectory2::SyncCreateObjectUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aObjectID, Brh& aResult)
    : iService(aProxy)
    , iObjectID(aObjectID)
    , iResult(aResult)
{
}

void SyncCreateObjectUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndCreateObject(aAsync, iObjectID, iResult);
}

// SyncDestroyObjectUpnpOrgContentDirectory2

SyncDestroyObjectUpnpOrgContentDirectory2::SyncDestroyObjectUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy)
    : iService(aProxy)
{
}

void SyncDestroyObjectUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndDestroyObject(aAsync);
}

// SyncUpdateObjectUpnpOrgContentDirectory2

SyncUpdateObjectUpnpOrgContentDirectory2::SyncUpdateObjectUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateObjectUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateObject(aAsync);
}

// SyncMoveObjectUpnpOrgContentDirectory2

SyncMoveObjectUpnpOrgContentDirectory2::SyncMoveObjectUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aNewObjectID)
    : iService(aProxy)
    , iNewObjectID(aNewObjectID)
{
}

void SyncMoveObjectUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndMoveObject(aAsync, iNewObjectID);
}

// SyncImportResourceUpnpOrgContentDirectory2

SyncImportResourceUpnpOrgContentDirectory2::SyncImportResourceUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, TUint& aTransferID)
    : iService(aProxy)
    , iTransferID(aTransferID)
{
}

void SyncImportResourceUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndImportResource(aAsync, iTransferID);
}

// SyncExportResourceUpnpOrgContentDirectory2

SyncExportResourceUpnpOrgContentDirectory2::SyncExportResourceUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, TUint& aTransferID)
    : iService(aProxy)
    , iTransferID(aTransferID)
{
}

void SyncExportResourceUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndExportResource(aAsync, iTransferID);
}

// SyncDeleteResourceUpnpOrgContentDirectory2

SyncDeleteResourceUpnpOrgContentDirectory2::SyncDeleteResourceUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy)
    : iService(aProxy)
{
}

void SyncDeleteResourceUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeleteResource(aAsync);
}

// SyncStopTransferResourceUpnpOrgContentDirectory2

SyncStopTransferResourceUpnpOrgContentDirectory2::SyncStopTransferResourceUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy)
    : iService(aProxy)
{
}

void SyncStopTransferResourceUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndStopTransferResource(aAsync);
}

// SyncGetTransferProgressUpnpOrgContentDirectory2

SyncGetTransferProgressUpnpOrgContentDirectory2::SyncGetTransferProgressUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aTransferStatus, Brh& aTransferLength, Brh& aTransferTotal)
    : iService(aProxy)
    , iTransferStatus(aTransferStatus)
    , iTransferLength(aTransferLength)
    , iTransferTotal(aTransferTotal)
{
}

void SyncGetTransferProgressUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetTransferProgress(aAsync, iTransferStatus, iTransferLength, iTransferTotal);
}

// SyncCreateReferenceUpnpOrgContentDirectory2

SyncCreateReferenceUpnpOrgContentDirectory2::SyncCreateReferenceUpnpOrgContentDirectory2(CpProxyUpnpOrgContentDirectory2& aProxy, Brh& aNewID)
    : iService(aProxy)
    , iNewID(aNewID)
{
}

void SyncCreateReferenceUpnpOrgContentDirectory2::CompleteRequest(IAsync& aAsync)
{
    iService.EndCreateReference(aAsync, iNewID);
}


// CpProxyUpnpOrgContentDirectory2

CpProxyUpnpOrgContentDirectory2::CpProxyUpnpOrgContentDirectory2(CpDevice& aDevice)
    : iCpProxy("schemas-upnp-org", "ContentDirectory", 2, aDevice.Device())
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionGetSearchCapabilities = new Action("GetSearchCapabilities");
    param = new OpenHome::Net::ParameterString("SearchCaps");
    iActionGetSearchCapabilities->AddOutputParameter(param);

    iActionGetSortCapabilities = new Action("GetSortCapabilities");
    param = new OpenHome::Net::ParameterString("SortCaps");
    iActionGetSortCapabilities->AddOutputParameter(param);

    iActionGetSortExtensionCapabilities = new Action("GetSortExtensionCapabilities");
    param = new OpenHome::Net::ParameterString("SortExtensionCaps");
    iActionGetSortExtensionCapabilities->AddOutputParameter(param);

    iActionGetFeatureList = new Action("GetFeatureList");
    param = new OpenHome::Net::ParameterString("FeatureList");
    iActionGetFeatureList->AddOutputParameter(param);

    iActionGetSystemUpdateID = new Action("GetSystemUpdateID");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionGetSystemUpdateID->AddOutputParameter(param);

    iActionBrowse = new Action("Browse");
    param = new OpenHome::Net::ParameterString("ObjectID");
    iActionBrowse->AddInputParameter(param);
    index = 0;
    allowedValues = new TChar*[2];
    allowedValues[index++] = (TChar*)"BrowseMetadata";
    allowedValues[index++] = (TChar*)"BrowseDirectChildren";
    param = new OpenHome::Net::ParameterString("BrowseFlag", allowedValues, 2);
    iActionBrowse->AddInputParameter(param);
    delete[] allowedValues;
    param = new OpenHome::Net::ParameterString("Filter");
    iActionBrowse->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("StartingIndex");
    iActionBrowse->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("RequestedCount");
    iActionBrowse->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("SortCriteria");
    iActionBrowse->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Result");
    iActionBrowse->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("NumberReturned");
    iActionBrowse->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("TotalMatches");
    iActionBrowse->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("UpdateID");
    iActionBrowse->AddOutputParameter(param);

    iActionSearch = new Action("Search");
    param = new OpenHome::Net::ParameterString("ContainerID");
    iActionSearch->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("SearchCriteria");
    iActionSearch->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Filter");
    iActionSearch->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("StartingIndex");
    iActionSearch->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("RequestedCount");
    iActionSearch->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("SortCriteria");
    iActionSearch->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Result");
    iActionSearch->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("NumberReturned");
    iActionSearch->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("TotalMatches");
    iActionSearch->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("UpdateID");
    iActionSearch->AddOutputParameter(param);

    iActionCreateObject = new Action("CreateObject");
    param = new OpenHome::Net::ParameterString("ContainerID");
    iActionCreateObject->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Elements");
    iActionCreateObject->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("ObjectID");
    iActionCreateObject->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Result");
    iActionCreateObject->AddOutputParameter(param);

    iActionDestroyObject = new Action("DestroyObject");
    param = new OpenHome::Net::ParameterString("ObjectID");
    iActionDestroyObject->AddInputParameter(param);

    iActionUpdateObject = new Action("UpdateObject");
    param = new OpenHome::Net::ParameterString("ObjectID");
    iActionUpdateObject->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("CurrentTagValue");
    iActionUpdateObject->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("NewTagValue");
    iActionUpdateObject->AddInputParameter(param);

    iActionMoveObject = new Action("MoveObject");
    param = new OpenHome::Net::ParameterString("ObjectID");
    iActionMoveObject->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("NewParentID");
    iActionMoveObject->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("NewObjectID");
    iActionMoveObject->AddOutputParameter(param);

    iActionImportResource = new Action("ImportResource");
    param = new OpenHome::Net::ParameterString("SourceURI");
    iActionImportResource->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("DestinationURI");
    iActionImportResource->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("TransferID");
    iActionImportResource->AddOutputParameter(param);

    iActionExportResource = new Action("ExportResource");
    param = new OpenHome::Net::ParameterString("SourceURI");
    iActionExportResource->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("DestinationURI");
    iActionExportResource->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("TransferID");
    iActionExportResource->AddOutputParameter(param);

    iActionDeleteResource = new Action("DeleteResource");
    param = new OpenHome::Net::ParameterString("ResourceURI");
    iActionDeleteResource->AddInputParameter(param);

    iActionStopTransferResource = new Action("StopTransferResource");
    param = new OpenHome::Net::ParameterUint("TransferID");
    iActionStopTransferResource->AddInputParameter(param);

    iActionGetTransferProgress = new Action("GetTransferProgress");
    param = new OpenHome::Net::ParameterUint("TransferID");
    iActionGetTransferProgress->AddInputParameter(param);
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"COMPLETED";
    allowedValues[index++] = (TChar*)"ERROR";
    allowedValues[index++] = (TChar*)"IN_PROGRESS";
    allowedValues[index++] = (TChar*)"STOPPED";
    param = new OpenHome::Net::ParameterString("TransferStatus", allowedValues, 4);
    iActionGetTransferProgress->AddOutputParameter(param);
    delete[] allowedValues;
    param = new OpenHome::Net::ParameterString("TransferLength");
    iActionGetTransferProgress->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("TransferTotal");
    iActionGetTransferProgress->AddOutputParameter(param);

    iActionCreateReference = new Action("CreateReference");
    param = new OpenHome::Net::ParameterString("ContainerID");
    iActionCreateReference->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("ObjectID");
    iActionCreateReference->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("NewID");
    iActionCreateReference->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyUpnpOrgContentDirectory2::SystemUpdateIDPropertyChanged);
    iSystemUpdateID = new PropertyUint("SystemUpdateID", functor);
    AddProperty(iSystemUpdateID);
    functor = MakeFunctor(*this, &CpProxyUpnpOrgContentDirectory2::ContainerUpdateIDsPropertyChanged);
    iContainerUpdateIDs = new PropertyString("ContainerUpdateIDs", functor);
    AddProperty(iContainerUpdateIDs);
    functor = MakeFunctor(*this, &CpProxyUpnpOrgContentDirectory2::TransferIDsPropertyChanged);
    iTransferIDs = new PropertyString("TransferIDs", functor);
    AddProperty(iTransferIDs);
}

CpProxyUpnpOrgContentDirectory2::~CpProxyUpnpOrgContentDirectory2()
{
    DestroyService();
    delete iActionGetSearchCapabilities;
    delete iActionGetSortCapabilities;
    delete iActionGetSortExtensionCapabilities;
    delete iActionGetFeatureList;
    delete iActionGetSystemUpdateID;
    delete iActionBrowse;
    delete iActionSearch;
    delete iActionCreateObject;
    delete iActionDestroyObject;
    delete iActionUpdateObject;
    delete iActionMoveObject;
    delete iActionImportResource;
    delete iActionExportResource;
    delete iActionDeleteResource;
    delete iActionStopTransferResource;
    delete iActionGetTransferProgress;
    delete iActionCreateReference;
}

void CpProxyUpnpOrgContentDirectory2::SyncGetSearchCapabilities(Brh& aSearchCaps)
{
    SyncGetSearchCapabilitiesUpnpOrgContentDirectory2 sync(*this, aSearchCaps);
    BeginGetSearchCapabilities(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginGetSearchCapabilities(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSearchCapabilities, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSearchCapabilities->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndGetSearchCapabilities(IAsync& aAsync, Brh& aSearchCaps)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSearchCapabilities"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSearchCaps);
}

void CpProxyUpnpOrgContentDirectory2::SyncGetSortCapabilities(Brh& aSortCaps)
{
    SyncGetSortCapabilitiesUpnpOrgContentDirectory2 sync(*this, aSortCaps);
    BeginGetSortCapabilities(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginGetSortCapabilities(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSortCapabilities, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSortCapabilities->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndGetSortCapabilities(IAsync& aAsync, Brh& aSortCaps)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSortCapabilities"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSortCaps);
}

void CpProxyUpnpOrgContentDirectory2::SyncGetSortExtensionCapabilities(Brh& aSortExtensionCaps)
{
    SyncGetSortExtensionCapabilitiesUpnpOrgContentDirectory2 sync(*this, aSortExtensionCaps);
    BeginGetSortExtensionCapabilities(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginGetSortExtensionCapabilities(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSortExtensionCapabilities, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSortExtensionCapabilities->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndGetSortExtensionCapabilities(IAsync& aAsync, Brh& aSortExtensionCaps)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSortExtensionCapabilities"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSortExtensionCaps);
}

void CpProxyUpnpOrgContentDirectory2::SyncGetFeatureList(Brh& aFeatureList)
{
    SyncGetFeatureListUpnpOrgContentDirectory2 sync(*this, aFeatureList);
    BeginGetFeatureList(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginGetFeatureList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetFeatureList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetFeatureList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndGetFeatureList(IAsync& aAsync, Brh& aFeatureList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetFeatureList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aFeatureList);
}

void CpProxyUpnpOrgContentDirectory2::SyncGetSystemUpdateID(TUint& aId)
{
    SyncGetSystemUpdateIDUpnpOrgContentDirectory2 sync(*this, aId);
    BeginGetSystemUpdateID(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginGetSystemUpdateID(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSystemUpdateID, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSystemUpdateID->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndGetSystemUpdateID(IAsync& aAsync, TUint& aId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSystemUpdateID"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgContentDirectory2::SyncBrowse(const Brx& aObjectID, const Brx& aBrowseFlag, const Brx& aFilter, TUint aStartingIndex, TUint aRequestedCount, const Brx& aSortCriteria, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID)
{
    SyncBrowseUpnpOrgContentDirectory2 sync(*this, aResult, aNumberReturned, aTotalMatches, aUpdateID);
    BeginBrowse(aObjectID, aBrowseFlag, aFilter, aStartingIndex, aRequestedCount, aSortCriteria, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginBrowse(const Brx& aObjectID, const Brx& aBrowseFlag, const Brx& aFilter, TUint aStartingIndex, TUint aRequestedCount, const Brx& aSortCriteria, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBrowse, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionBrowse->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aObjectID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aBrowseFlag));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFilter));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStartingIndex));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aRequestedCount));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSortCriteria));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBrowse->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndBrowse(IAsync& aAsync, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Browse"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aResult);
    aNumberReturned = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aTotalMatches = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aUpdateID = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgContentDirectory2::SyncSearch(const Brx& aContainerID, const Brx& aSearchCriteria, const Brx& aFilter, TUint aStartingIndex, TUint aRequestedCount, const Brx& aSortCriteria, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID)
{
    SyncSearchUpnpOrgContentDirectory2 sync(*this, aResult, aNumberReturned, aTotalMatches, aUpdateID);
    BeginSearch(aContainerID, aSearchCriteria, aFilter, aStartingIndex, aRequestedCount, aSortCriteria, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginSearch(const Brx& aContainerID, const Brx& aSearchCriteria, const Brx& aFilter, TUint aStartingIndex, TUint aRequestedCount, const Brx& aSortCriteria, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSearch, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSearch->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aContainerID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSearchCriteria));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFilter));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStartingIndex));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aRequestedCount));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSortCriteria));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSearch->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndSearch(IAsync& aAsync, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Search"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aResult);
    aNumberReturned = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aTotalMatches = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aUpdateID = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgContentDirectory2::SyncCreateObject(const Brx& aContainerID, const Brx& aElements, Brh& aObjectID, Brh& aResult)
{
    SyncCreateObjectUpnpOrgContentDirectory2 sync(*this, aObjectID, aResult);
    BeginCreateObject(aContainerID, aElements, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginCreateObject(const Brx& aContainerID, const Brx& aElements, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCreateObject, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionCreateObject->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aContainerID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aElements));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionCreateObject->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndCreateObject(IAsync& aAsync, Brh& aObjectID, Brh& aResult)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("CreateObject"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aObjectID);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aResult);
}

void CpProxyUpnpOrgContentDirectory2::SyncDestroyObject(const Brx& aObjectID)
{
    SyncDestroyObjectUpnpOrgContentDirectory2 sync(*this);
    BeginDestroyObject(aObjectID, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginDestroyObject(const Brx& aObjectID, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDestroyObject, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionDestroyObject->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aObjectID));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndDestroyObject(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DestroyObject"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgContentDirectory2::SyncUpdateObject(const Brx& aObjectID, const Brx& aCurrentTagValue, const Brx& aNewTagValue)
{
    SyncUpdateObjectUpnpOrgContentDirectory2 sync(*this);
    BeginUpdateObject(aObjectID, aCurrentTagValue, aNewTagValue, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginUpdateObject(const Brx& aObjectID, const Brx& aCurrentTagValue, const Brx& aNewTagValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdateObject, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdateObject->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aObjectID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aCurrentTagValue));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aNewTagValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndUpdateObject(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("UpdateObject"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgContentDirectory2::SyncMoveObject(const Brx& aObjectID, const Brx& aNewParentID, Brh& aNewObjectID)
{
    SyncMoveObjectUpnpOrgContentDirectory2 sync(*this, aNewObjectID);
    BeginMoveObject(aObjectID, aNewParentID, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginMoveObject(const Brx& aObjectID, const Brx& aNewParentID, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMoveObject, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionMoveObject->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aObjectID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aNewParentID));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMoveObject->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndMoveObject(IAsync& aAsync, Brh& aNewObjectID)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("MoveObject"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aNewObjectID);
}

void CpProxyUpnpOrgContentDirectory2::SyncImportResource(const Brx& aSourceURI, const Brx& aDestinationURI, TUint& aTransferID)
{
    SyncImportResourceUpnpOrgContentDirectory2 sync(*this, aTransferID);
    BeginImportResource(aSourceURI, aDestinationURI, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginImportResource(const Brx& aSourceURI, const Brx& aDestinationURI, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionImportResource, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionImportResource->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSourceURI));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDestinationURI));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionImportResource->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndImportResource(IAsync& aAsync, TUint& aTransferID)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ImportResource"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aTransferID = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgContentDirectory2::SyncExportResource(const Brx& aSourceURI, const Brx& aDestinationURI, TUint& aTransferID)
{
    SyncExportResourceUpnpOrgContentDirectory2 sync(*this, aTransferID);
    BeginExportResource(aSourceURI, aDestinationURI, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginExportResource(const Brx& aSourceURI, const Brx& aDestinationURI, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionExportResource, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionExportResource->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSourceURI));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDestinationURI));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionExportResource->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndExportResource(IAsync& aAsync, TUint& aTransferID)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ExportResource"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aTransferID = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgContentDirectory2::SyncDeleteResource(const Brx& aResourceURI)
{
    SyncDeleteResourceUpnpOrgContentDirectory2 sync(*this);
    BeginDeleteResource(aResourceURI, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginDeleteResource(const Brx& aResourceURI, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeleteResource, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionDeleteResource->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aResourceURI));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndDeleteResource(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DeleteResource"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgContentDirectory2::SyncStopTransferResource(TUint aTransferID)
{
    SyncStopTransferResourceUpnpOrgContentDirectory2 sync(*this);
    BeginStopTransferResource(aTransferID, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginStopTransferResource(TUint aTransferID, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStopTransferResource, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionStopTransferResource->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aTransferID));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndStopTransferResource(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("StopTransferResource"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgContentDirectory2::SyncGetTransferProgress(TUint aTransferID, Brh& aTransferStatus, Brh& aTransferLength, Brh& aTransferTotal)
{
    SyncGetTransferProgressUpnpOrgContentDirectory2 sync(*this, aTransferStatus, aTransferLength, aTransferTotal);
    BeginGetTransferProgress(aTransferID, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginGetTransferProgress(TUint aTransferID, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetTransferProgress, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetTransferProgress->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aTransferID));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetTransferProgress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndGetTransferProgress(IAsync& aAsync, Brh& aTransferStatus, Brh& aTransferLength, Brh& aTransferTotal)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetTransferProgress"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aTransferStatus);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aTransferLength);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aTransferTotal);
}

void CpProxyUpnpOrgContentDirectory2::SyncCreateReference(const Brx& aContainerID, const Brx& aObjectID, Brh& aNewID)
{
    SyncCreateReferenceUpnpOrgContentDirectory2 sync(*this, aNewID);
    BeginCreateReference(aContainerID, aObjectID, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgContentDirectory2::BeginCreateReference(const Brx& aContainerID, const Brx& aObjectID, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCreateReference, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionCreateReference->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aContainerID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aObjectID));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionCreateReference->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgContentDirectory2::EndCreateReference(IAsync& aAsync, Brh& aNewID)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("CreateReference"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aNewID);
}

void CpProxyUpnpOrgContentDirectory2::SetPropertySystemUpdateIDChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSystemUpdateIDChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyUpnpOrgContentDirectory2::SetPropertyContainerUpdateIDsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iContainerUpdateIDsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyUpnpOrgContentDirectory2::SetPropertyTransferIDsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransferIDsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyUpnpOrgContentDirectory2::PropertySystemUpdateID(TUint& aSystemUpdateID) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSystemUpdateID = iSystemUpdateID->Value();
}

void CpProxyUpnpOrgContentDirectory2::PropertyContainerUpdateIDs(Brhz& aContainerUpdateIDs) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aContainerUpdateIDs.Set(iContainerUpdateIDs->Value());
}

void CpProxyUpnpOrgContentDirectory2::PropertyTransferIDs(Brhz& aTransferIDs) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransferIDs.Set(iTransferIDs->Value());
}

void CpProxyUpnpOrgContentDirectory2::SystemUpdateIDPropertyChanged()
{
    ReportEvent(iSystemUpdateIDChanged);
}

void CpProxyUpnpOrgContentDirectory2::ContainerUpdateIDsPropertyChanged()
{
    ReportEvent(iContainerUpdateIDsChanged);
}

void CpProxyUpnpOrgContentDirectory2::TransferIDsPropertyChanged()
{
    ReportEvent(iTransferIDsChanged);
}


void CpProxyUpnpOrgContentDirectory2::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyUpnpOrgContentDirectory2::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyUpnpOrgContentDirectory2::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyUpnpOrgContentDirectory2::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyUpnpOrgContentDirectory2::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyUpnpOrgContentDirectory2::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyUpnpOrgContentDirectory2::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyUpnpOrgContentDirectory2::Version() const
{
  return iCpProxy.Version();
}


