#include "CpAvOpenhomeOrgPlaylistManager1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncMetadataAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncMetadataAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    Brh& iMetadata;
};

class SyncImagesXmlAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncImagesXmlAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aImagesXml);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    Brh& iImagesXml;
};

class SyncPlaylistReadArrayAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncPlaylistReadArrayAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aArray);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    Brh& iArray;
};

class SyncPlaylistReadListAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncPlaylistReadListAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aPlaylistList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    Brh& iPlaylistList;
};

class SyncPlaylistReadAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncPlaylistReadAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aName, Brh& aDescription, TUint& aImageId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    Brh& iName;
    Brh& iDescription;
    TUint& iImageId;
};

class SyncPlaylistSetNameAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncPlaylistSetNameAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
};

class SyncPlaylistSetDescriptionAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncPlaylistSetDescriptionAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
};

class SyncPlaylistSetImageIdAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncPlaylistSetImageIdAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
};

class SyncPlaylistInsertAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncPlaylistInsertAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, TUint& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    TUint& iNewId;
};

class SyncPlaylistDeleteIdAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncPlaylistDeleteIdAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
};

class SyncPlaylistMoveAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncPlaylistMoveAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
};

class SyncPlaylistsMaxAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncPlaylistsMaxAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    TUint& iValue;
};

class SyncTracksMaxAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncTracksMaxAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    TUint& iValue;
};

class SyncPlaylistArraysAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncPlaylistArraysAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, TUint& aToken, Brh& aIdArray, Brh& aTokenArray);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    TUint& iToken;
    Brh& iIdArray;
    Brh& iTokenArray;
};

class SyncPlaylistArraysChangedAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncPlaylistArraysChangedAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    TBool& iValue;
};

class SyncReadAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncReadAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    Brh& iMetadata;
};

class SyncReadListAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncReadListAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aTrackList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    Brh& iTrackList;
};

class SyncInsertAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncInsertAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, TUint& aNewTrackId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
    TUint& iNewTrackId;
};

class SyncDeleteIdAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncDeleteIdAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
};

class SyncDeleteAllAvOpenhomeOrgPlaylistManager1 : public SyncProxyAction
{
public:
    SyncDeleteAllAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylistManager1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncMetadataAvOpenhomeOrgPlaylistManager1

SyncMetadataAvOpenhomeOrgPlaylistManager1::SyncMetadataAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aMetadata)
    : iService(aProxy)
    , iMetadata(aMetadata)
{
}

void SyncMetadataAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndMetadata(aAsync, iMetadata);
}

// SyncImagesXmlAvOpenhomeOrgPlaylistManager1

SyncImagesXmlAvOpenhomeOrgPlaylistManager1::SyncImagesXmlAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aImagesXml)
    : iService(aProxy)
    , iImagesXml(aImagesXml)
{
}

void SyncImagesXmlAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndImagesXml(aAsync, iImagesXml);
}

// SyncPlaylistReadArrayAvOpenhomeOrgPlaylistManager1

SyncPlaylistReadArrayAvOpenhomeOrgPlaylistManager1::SyncPlaylistReadArrayAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aArray)
    : iService(aProxy)
    , iArray(aArray)
{
}

void SyncPlaylistReadArrayAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlaylistReadArray(aAsync, iArray);
}

// SyncPlaylistReadListAvOpenhomeOrgPlaylistManager1

SyncPlaylistReadListAvOpenhomeOrgPlaylistManager1::SyncPlaylistReadListAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aPlaylistList)
    : iService(aProxy)
    , iPlaylistList(aPlaylistList)
{
}

void SyncPlaylistReadListAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlaylistReadList(aAsync, iPlaylistList);
}

// SyncPlaylistReadAvOpenhomeOrgPlaylistManager1

SyncPlaylistReadAvOpenhomeOrgPlaylistManager1::SyncPlaylistReadAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aName, Brh& aDescription, TUint& aImageId)
    : iService(aProxy)
    , iName(aName)
    , iDescription(aDescription)
    , iImageId(aImageId)
{
}

void SyncPlaylistReadAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlaylistRead(aAsync, iName, iDescription, iImageId);
}

// SyncPlaylistSetNameAvOpenhomeOrgPlaylistManager1

SyncPlaylistSetNameAvOpenhomeOrgPlaylistManager1::SyncPlaylistSetNameAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy)
    : iService(aProxy)
{
}

void SyncPlaylistSetNameAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlaylistSetName(aAsync);
}

// SyncPlaylistSetDescriptionAvOpenhomeOrgPlaylistManager1

SyncPlaylistSetDescriptionAvOpenhomeOrgPlaylistManager1::SyncPlaylistSetDescriptionAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy)
    : iService(aProxy)
{
}

void SyncPlaylistSetDescriptionAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlaylistSetDescription(aAsync);
}

// SyncPlaylistSetImageIdAvOpenhomeOrgPlaylistManager1

SyncPlaylistSetImageIdAvOpenhomeOrgPlaylistManager1::SyncPlaylistSetImageIdAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy)
    : iService(aProxy)
{
}

void SyncPlaylistSetImageIdAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlaylistSetImageId(aAsync);
}

// SyncPlaylistInsertAvOpenhomeOrgPlaylistManager1

SyncPlaylistInsertAvOpenhomeOrgPlaylistManager1::SyncPlaylistInsertAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, TUint& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncPlaylistInsertAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlaylistInsert(aAsync, iNewId);
}

// SyncPlaylistDeleteIdAvOpenhomeOrgPlaylistManager1

SyncPlaylistDeleteIdAvOpenhomeOrgPlaylistManager1::SyncPlaylistDeleteIdAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy)
    : iService(aProxy)
{
}

void SyncPlaylistDeleteIdAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlaylistDeleteId(aAsync);
}

// SyncPlaylistMoveAvOpenhomeOrgPlaylistManager1

SyncPlaylistMoveAvOpenhomeOrgPlaylistManager1::SyncPlaylistMoveAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy)
    : iService(aProxy)
{
}

void SyncPlaylistMoveAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlaylistMove(aAsync);
}

// SyncPlaylistsMaxAvOpenhomeOrgPlaylistManager1

SyncPlaylistsMaxAvOpenhomeOrgPlaylistManager1::SyncPlaylistsMaxAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncPlaylistsMaxAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlaylistsMax(aAsync, iValue);
}

// SyncTracksMaxAvOpenhomeOrgPlaylistManager1

SyncTracksMaxAvOpenhomeOrgPlaylistManager1::SyncTracksMaxAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTracksMaxAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTracksMax(aAsync, iValue);
}

// SyncPlaylistArraysAvOpenhomeOrgPlaylistManager1

SyncPlaylistArraysAvOpenhomeOrgPlaylistManager1::SyncPlaylistArraysAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, TUint& aToken, Brh& aIdArray, Brh& aTokenArray)
    : iService(aProxy)
    , iToken(aToken)
    , iIdArray(aIdArray)
    , iTokenArray(aTokenArray)
{
}

void SyncPlaylistArraysAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlaylistArrays(aAsync, iToken, iIdArray, iTokenArray);
}

// SyncPlaylistArraysChangedAvOpenhomeOrgPlaylistManager1

SyncPlaylistArraysChangedAvOpenhomeOrgPlaylistManager1::SyncPlaylistArraysChangedAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncPlaylistArraysChangedAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlaylistArraysChanged(aAsync, iValue);
}

// SyncReadAvOpenhomeOrgPlaylistManager1

SyncReadAvOpenhomeOrgPlaylistManager1::SyncReadAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aMetadata)
    : iService(aProxy)
    , iMetadata(aMetadata)
{
}

void SyncReadAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRead(aAsync, iMetadata);
}

// SyncReadListAvOpenhomeOrgPlaylistManager1

SyncReadListAvOpenhomeOrgPlaylistManager1::SyncReadListAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, Brh& aTrackList)
    : iService(aProxy)
    , iTrackList(aTrackList)
{
}

void SyncReadListAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndReadList(aAsync, iTrackList);
}

// SyncInsertAvOpenhomeOrgPlaylistManager1

SyncInsertAvOpenhomeOrgPlaylistManager1::SyncInsertAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy, TUint& aNewTrackId)
    : iService(aProxy)
    , iNewTrackId(aNewTrackId)
{
}

void SyncInsertAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsert(aAsync, iNewTrackId);
}

// SyncDeleteIdAvOpenhomeOrgPlaylistManager1

SyncDeleteIdAvOpenhomeOrgPlaylistManager1::SyncDeleteIdAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy)
    : iService(aProxy)
{
}

void SyncDeleteIdAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeleteId(aAsync);
}

// SyncDeleteAllAvOpenhomeOrgPlaylistManager1

SyncDeleteAllAvOpenhomeOrgPlaylistManager1::SyncDeleteAllAvOpenhomeOrgPlaylistManager1(CpProxyAvOpenhomeOrgPlaylistManager1& aProxy)
    : iService(aProxy)
{
}

void SyncDeleteAllAvOpenhomeOrgPlaylistManager1::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeleteAll(aAsync);
}


// CpProxyAvOpenhomeOrgPlaylistManager1

CpProxyAvOpenhomeOrgPlaylistManager1::CpProxyAvOpenhomeOrgPlaylistManager1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "PlaylistManager", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionMetadata = new Action("Metadata");
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionMetadata->AddOutputParameter(param);

    iActionImagesXml = new Action("ImagesXml");
    param = new OpenHome::Net::ParameterString("ImagesXml");
    iActionImagesXml->AddOutputParameter(param);

    iActionPlaylistReadArray = new Action("PlaylistReadArray");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionPlaylistReadArray->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBinary("Array");
    iActionPlaylistReadArray->AddOutputParameter(param);

    iActionPlaylistReadList = new Action("PlaylistReadList");
    param = new OpenHome::Net::ParameterString("IdList");
    iActionPlaylistReadList->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("PlaylistList");
    iActionPlaylistReadList->AddOutputParameter(param);

    iActionPlaylistRead = new Action("PlaylistRead");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionPlaylistRead->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Name");
    iActionPlaylistRead->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Description");
    iActionPlaylistRead->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("ImageId");
    iActionPlaylistRead->AddOutputParameter(param);

    iActionPlaylistSetName = new Action("PlaylistSetName");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionPlaylistSetName->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Name");
    iActionPlaylistSetName->AddInputParameter(param);

    iActionPlaylistSetDescription = new Action("PlaylistSetDescription");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionPlaylistSetDescription->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Description");
    iActionPlaylistSetDescription->AddInputParameter(param);

    iActionPlaylistSetImageId = new Action("PlaylistSetImageId");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionPlaylistSetImageId->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("ImageId");
    iActionPlaylistSetImageId->AddInputParameter(param);

    iActionPlaylistInsert = new Action("PlaylistInsert");
    param = new OpenHome::Net::ParameterUint("AfterId");
    iActionPlaylistInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Name");
    iActionPlaylistInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Description");
    iActionPlaylistInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("ImageId");
    iActionPlaylistInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("NewId");
    iActionPlaylistInsert->AddOutputParameter(param);

    iActionPlaylistDeleteId = new Action("PlaylistDeleteId");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionPlaylistDeleteId->AddInputParameter(param);

    iActionPlaylistMove = new Action("PlaylistMove");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionPlaylistMove->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("AfterId");
    iActionPlaylistMove->AddInputParameter(param);

    iActionPlaylistsMax = new Action("PlaylistsMax");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionPlaylistsMax->AddOutputParameter(param);

    iActionTracksMax = new Action("TracksMax");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionTracksMax->AddOutputParameter(param);

    iActionPlaylistArrays = new Action("PlaylistArrays");
    param = new OpenHome::Net::ParameterUint("Token");
    iActionPlaylistArrays->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBinary("IdArray");
    iActionPlaylistArrays->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBinary("TokenArray");
    iActionPlaylistArrays->AddOutputParameter(param);

    iActionPlaylistArraysChanged = new Action("PlaylistArraysChanged");
    param = new OpenHome::Net::ParameterUint("Token");
    iActionPlaylistArraysChanged->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Value");
    iActionPlaylistArraysChanged->AddOutputParameter(param);

    iActionRead = new Action("Read");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionRead->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("TrackId");
    iActionRead->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionRead->AddOutputParameter(param);

    iActionReadList = new Action("ReadList");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionReadList->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("TrackIdList");
    iActionReadList->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("TrackList");
    iActionReadList->AddOutputParameter(param);

    iActionInsert = new Action("Insert");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("AfterTrackId");
    iActionInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("NewTrackId");
    iActionInsert->AddOutputParameter(param);

    iActionDeleteId = new Action("DeleteId");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionDeleteId->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("TrackId");
    iActionDeleteId->AddInputParameter(param);

    iActionDeleteAll = new Action("DeleteAll");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionDeleteAll->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylistManager1::MetadataPropertyChanged);
    iMetadata = new PropertyString("Metadata", functor);
    AddProperty(iMetadata);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylistManager1::ImagesXmlPropertyChanged);
    iImagesXml = new PropertyString("ImagesXml", functor);
    AddProperty(iImagesXml);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylistManager1::IdArrayPropertyChanged);
    iIdArray = new PropertyBinary("IdArray", functor);
    AddProperty(iIdArray);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylistManager1::TokenArrayPropertyChanged);
    iTokenArray = new PropertyBinary("TokenArray", functor);
    AddProperty(iTokenArray);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylistManager1::PlaylistsMaxPropertyChanged);
    iPlaylistsMax = new PropertyUint("PlaylistsMax", functor);
    AddProperty(iPlaylistsMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylistManager1::TracksMaxPropertyChanged);
    iTracksMax = new PropertyUint("TracksMax", functor);
    AddProperty(iTracksMax);
}

CpProxyAvOpenhomeOrgPlaylistManager1::~CpProxyAvOpenhomeOrgPlaylistManager1()
{
    DestroyService();
    delete iActionMetadata;
    delete iActionImagesXml;
    delete iActionPlaylistReadArray;
    delete iActionPlaylistReadList;
    delete iActionPlaylistRead;
    delete iActionPlaylistSetName;
    delete iActionPlaylistSetDescription;
    delete iActionPlaylistSetImageId;
    delete iActionPlaylistInsert;
    delete iActionPlaylistDeleteId;
    delete iActionPlaylistMove;
    delete iActionPlaylistsMax;
    delete iActionTracksMax;
    delete iActionPlaylistArrays;
    delete iActionPlaylistArraysChanged;
    delete iActionRead;
    delete iActionReadList;
    delete iActionInsert;
    delete iActionDeleteId;
    delete iActionDeleteAll;
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncMetadata(Brh& aMetadata)
{
    SyncMetadataAvOpenhomeOrgPlaylistManager1 sync(*this, aMetadata);
    BeginMetadata(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginMetadata(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMetadata, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMetadata->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndMetadata(IAsync& aAsync, Brh& aMetadata)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Metadata"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMetadata);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncImagesXml(Brh& aImagesXml)
{
    SyncImagesXmlAvOpenhomeOrgPlaylistManager1 sync(*this, aImagesXml);
    BeginImagesXml(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginImagesXml(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionImagesXml, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionImagesXml->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndImagesXml(IAsync& aAsync, Brh& aImagesXml)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ImagesXml"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aImagesXml);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncPlaylistReadArray(TUint aId, Brh& aArray)
{
    SyncPlaylistReadArrayAvOpenhomeOrgPlaylistManager1 sync(*this, aArray);
    BeginPlaylistReadArray(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginPlaylistReadArray(TUint aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlaylistReadArray, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlaylistReadArray->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPlaylistReadArray->OutputParameters();
    invocation->AddOutput(new ArgumentBinary(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndPlaylistReadArray(IAsync& aAsync, Brh& aArray)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlaylistReadArray"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentBinary*)invocation.OutputArguments()[index++])->TransferTo(aArray);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncPlaylistReadList(const Brx& aIdList, Brh& aPlaylistList)
{
    SyncPlaylistReadListAvOpenhomeOrgPlaylistManager1 sync(*this, aPlaylistList);
    BeginPlaylistReadList(aIdList, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginPlaylistReadList(const Brx& aIdList, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlaylistReadList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlaylistReadList->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aIdList));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPlaylistReadList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndPlaylistReadList(IAsync& aAsync, Brh& aPlaylistList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlaylistReadList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aPlaylistList);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncPlaylistRead(TUint aId, Brh& aName, Brh& aDescription, TUint& aImageId)
{
    SyncPlaylistReadAvOpenhomeOrgPlaylistManager1 sync(*this, aName, aDescription, aImageId);
    BeginPlaylistRead(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginPlaylistRead(TUint aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlaylistRead, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlaylistRead->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPlaylistRead->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndPlaylistRead(IAsync& aAsync, Brh& aName, Brh& aDescription, TUint& aImageId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlaylistRead"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aName);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDescription);
    aImageId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncPlaylistSetName(TUint aId, const Brx& aName)
{
    SyncPlaylistSetNameAvOpenhomeOrgPlaylistManager1 sync(*this);
    BeginPlaylistSetName(aId, aName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginPlaylistSetName(TUint aId, const Brx& aName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlaylistSetName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlaylistSetName->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aName));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndPlaylistSetName(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlaylistSetName"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncPlaylistSetDescription(TUint aId, const Brx& aDescription)
{
    SyncPlaylistSetDescriptionAvOpenhomeOrgPlaylistManager1 sync(*this);
    BeginPlaylistSetDescription(aId, aDescription, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginPlaylistSetDescription(TUint aId, const Brx& aDescription, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlaylistSetDescription, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlaylistSetDescription->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDescription));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndPlaylistSetDescription(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlaylistSetDescription"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncPlaylistSetImageId(TUint aId, TUint aImageId)
{
    SyncPlaylistSetImageIdAvOpenhomeOrgPlaylistManager1 sync(*this);
    BeginPlaylistSetImageId(aId, aImageId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginPlaylistSetImageId(TUint aId, TUint aImageId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlaylistSetImageId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlaylistSetImageId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aImageId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndPlaylistSetImageId(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlaylistSetImageId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncPlaylistInsert(TUint aAfterId, const Brx& aName, const Brx& aDescription, TUint aImageId, TUint& aNewId)
{
    SyncPlaylistInsertAvOpenhomeOrgPlaylistManager1 sync(*this, aNewId);
    BeginPlaylistInsert(aAfterId, aName, aDescription, aImageId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginPlaylistInsert(TUint aAfterId, const Brx& aName, const Brx& aDescription, TUint aImageId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlaylistInsert, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlaylistInsert->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aAfterId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aName));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDescription));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aImageId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPlaylistInsert->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndPlaylistInsert(IAsync& aAsync, TUint& aNewId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlaylistInsert"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aNewId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncPlaylistDeleteId(TUint aValue)
{
    SyncPlaylistDeleteIdAvOpenhomeOrgPlaylistManager1 sync(*this);
    BeginPlaylistDeleteId(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginPlaylistDeleteId(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlaylistDeleteId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlaylistDeleteId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndPlaylistDeleteId(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlaylistDeleteId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncPlaylistMove(TUint aId, TUint aAfterId)
{
    SyncPlaylistMoveAvOpenhomeOrgPlaylistManager1 sync(*this);
    BeginPlaylistMove(aId, aAfterId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginPlaylistMove(TUint aId, TUint aAfterId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlaylistMove, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlaylistMove->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aAfterId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndPlaylistMove(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlaylistMove"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncPlaylistsMax(TUint& aValue)
{
    SyncPlaylistsMaxAvOpenhomeOrgPlaylistManager1 sync(*this, aValue);
    BeginPlaylistsMax(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginPlaylistsMax(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlaylistsMax, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPlaylistsMax->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndPlaylistsMax(IAsync& aAsync, TUint& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlaylistsMax"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncTracksMax(TUint& aValue)
{
    SyncTracksMaxAvOpenhomeOrgPlaylistManager1 sync(*this, aValue);
    BeginTracksMax(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginTracksMax(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTracksMax, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTracksMax->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndTracksMax(IAsync& aAsync, TUint& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("TracksMax"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncPlaylistArrays(TUint& aToken, Brh& aIdArray, Brh& aTokenArray)
{
    SyncPlaylistArraysAvOpenhomeOrgPlaylistManager1 sync(*this, aToken, aIdArray, aTokenArray);
    BeginPlaylistArrays(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginPlaylistArrays(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlaylistArrays, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPlaylistArrays->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBinary(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBinary(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndPlaylistArrays(IAsync& aAsync, TUint& aToken, Brh& aIdArray, Brh& aTokenArray)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlaylistArrays"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aToken = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentBinary*)invocation.OutputArguments()[index++])->TransferTo(aIdArray);
    ((ArgumentBinary*)invocation.OutputArguments()[index++])->TransferTo(aTokenArray);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncPlaylistArraysChanged(TUint aToken, TBool& aValue)
{
    SyncPlaylistArraysChangedAvOpenhomeOrgPlaylistManager1 sync(*this, aValue);
    BeginPlaylistArraysChanged(aToken, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginPlaylistArraysChanged(TUint aToken, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlaylistArraysChanged, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlaylistArraysChanged->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aToken));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPlaylistArraysChanged->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndPlaylistArraysChanged(IAsync& aAsync, TBool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlaylistArraysChanged"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncRead(TUint aId, TUint aTrackId, Brh& aMetadata)
{
    SyncReadAvOpenhomeOrgPlaylistManager1 sync(*this, aMetadata);
    BeginRead(aId, aTrackId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginRead(TUint aId, TUint aTrackId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRead, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionRead->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aTrackId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRead->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndRead(IAsync& aAsync, Brh& aMetadata)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Read"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMetadata);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncReadList(TUint aId, const Brx& aTrackIdList, Brh& aTrackList)
{
    SyncReadListAvOpenhomeOrgPlaylistManager1 sync(*this, aTrackList);
    BeginReadList(aId, aTrackIdList, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginReadList(TUint aId, const Brx& aTrackIdList, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReadList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReadList->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTrackIdList));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionReadList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndReadList(IAsync& aAsync, Brh& aTrackList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ReadList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aTrackList);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncInsert(TUint aId, TUint aAfterTrackId, const Brx& aMetadata, TUint& aNewTrackId)
{
    SyncInsertAvOpenhomeOrgPlaylistManager1 sync(*this, aNewTrackId);
    BeginInsert(aId, aAfterTrackId, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginInsert(TUint aId, TUint aAfterTrackId, const Brx& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInsert, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInsert->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aAfterTrackId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMetadata));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInsert->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndInsert(IAsync& aAsync, TUint& aNewTrackId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Insert"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aNewTrackId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncDeleteId(TUint aId, TUint aTrackId)
{
    SyncDeleteIdAvOpenhomeOrgPlaylistManager1 sync(*this);
    BeginDeleteId(aId, aTrackId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginDeleteId(TUint aId, TUint aTrackId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeleteId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionDeleteId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aTrackId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndDeleteId(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DeleteId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SyncDeleteAll(TUint aId)
{
    SyncDeleteAllAvOpenhomeOrgPlaylistManager1 sync(*this);
    BeginDeleteAll(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::BeginDeleteAll(TUint aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeleteAll, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionDeleteAll->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::EndDeleteAll(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DeleteAll"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SetPropertyMetadataChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMetadataChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SetPropertyImagesXmlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iImagesXmlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SetPropertyIdArrayChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdArrayChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SetPropertyTokenArrayChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTokenArrayChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SetPropertyPlaylistsMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPlaylistsMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SetPropertyTracksMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTracksMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::PropertyMetadata(Brhz& aMetadata) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMetadata.Set(iMetadata->Value());
}

void CpProxyAvOpenhomeOrgPlaylistManager1::PropertyImagesXml(Brhz& aImagesXml) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aImagesXml.Set(iImagesXml->Value());
}

void CpProxyAvOpenhomeOrgPlaylistManager1::PropertyIdArray(Brh& aIdArray) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIdArray.Set(iIdArray->Value());
}

void CpProxyAvOpenhomeOrgPlaylistManager1::PropertyTokenArray(Brh& aTokenArray) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTokenArray.Set(iTokenArray->Value());
}

void CpProxyAvOpenhomeOrgPlaylistManager1::PropertyPlaylistsMax(TUint& aPlaylistsMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPlaylistsMax = iPlaylistsMax->Value();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::PropertyTracksMax(TUint& aTracksMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTracksMax = iTracksMax->Value();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::MetadataPropertyChanged()
{
    ReportEvent(iMetadataChanged);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::ImagesXmlPropertyChanged()
{
    ReportEvent(iImagesXmlChanged);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::IdArrayPropertyChanged()
{
    ReportEvent(iIdArrayChanged);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::TokenArrayPropertyChanged()
{
    ReportEvent(iTokenArrayChanged);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::PlaylistsMaxPropertyChanged()
{
    ReportEvent(iPlaylistsMaxChanged);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::TracksMaxPropertyChanged()
{
    ReportEvent(iTracksMaxChanged);
}


void CpProxyAvOpenhomeOrgPlaylistManager1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgPlaylistManager1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgPlaylistManager1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgPlaylistManager1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgPlaylistManager1::Version() const
{
  return iCpProxy.Version();
}


