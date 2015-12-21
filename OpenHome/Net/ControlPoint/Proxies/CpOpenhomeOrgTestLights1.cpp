#include "CpOpenhomeOrgTestLights1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetCountOpenhomeOrgTestLights1 : public SyncProxyAction
{
public:
    SyncGetCountOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy, TUint& aCount);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgTestLights1& iService;
    TUint& iCount;
};

class SyncGetRoomOpenhomeOrgTestLights1 : public SyncProxyAction
{
public:
    SyncGetRoomOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy, Brh& aRoomName);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgTestLights1& iService;
    Brh& iRoomName;
};

class SyncGetNameOpenhomeOrgTestLights1 : public SyncProxyAction
{
public:
    SyncGetNameOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy, Brh& aFriendlyName);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgTestLights1& iService;
    Brh& iFriendlyName;
};

class SyncGetPositionOpenhomeOrgTestLights1 : public SyncProxyAction
{
public:
    SyncGetPositionOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy, TUint& aX, TUint& aY, TUint& aZ);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgTestLights1& iService;
    TUint& iX;
    TUint& iY;
    TUint& iZ;
};

class SyncSetColorOpenhomeOrgTestLights1 : public SyncProxyAction
{
public:
    SyncSetColorOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgTestLights1& iService;
};

class SyncGetColorOpenhomeOrgTestLights1 : public SyncProxyAction
{
public:
    SyncGetColorOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy, TUint& aColor);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgTestLights1& iService;
    TUint& iColor;
};

class SyncGetColorComponentsOpenhomeOrgTestLights1 : public SyncProxyAction
{
public:
    SyncGetColorComponentsOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy, TUint& aBrightness, TUint& aRed, TUint& aGreen, TUint& aBlue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgTestLights1& iService;
    TUint& iBrightness;
    TUint& iRed;
    TUint& iGreen;
    TUint& iBlue;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetCountOpenhomeOrgTestLights1

SyncGetCountOpenhomeOrgTestLights1::SyncGetCountOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy, TUint& aCount)
    : iService(aProxy)
    , iCount(aCount)
{
}

void SyncGetCountOpenhomeOrgTestLights1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetCount(aAsync, iCount);
}

// SyncGetRoomOpenhomeOrgTestLights1

SyncGetRoomOpenhomeOrgTestLights1::SyncGetRoomOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy, Brh& aRoomName)
    : iService(aProxy)
    , iRoomName(aRoomName)
{
}

void SyncGetRoomOpenhomeOrgTestLights1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRoom(aAsync, iRoomName);
}

// SyncGetNameOpenhomeOrgTestLights1

SyncGetNameOpenhomeOrgTestLights1::SyncGetNameOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy, Brh& aFriendlyName)
    : iService(aProxy)
    , iFriendlyName(aFriendlyName)
{
}

void SyncGetNameOpenhomeOrgTestLights1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetName(aAsync, iFriendlyName);
}

// SyncGetPositionOpenhomeOrgTestLights1

SyncGetPositionOpenhomeOrgTestLights1::SyncGetPositionOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy, TUint& aX, TUint& aY, TUint& aZ)
    : iService(aProxy)
    , iX(aX)
    , iY(aY)
    , iZ(aZ)
{
}

void SyncGetPositionOpenhomeOrgTestLights1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPosition(aAsync, iX, iY, iZ);
}

// SyncSetColorOpenhomeOrgTestLights1

SyncSetColorOpenhomeOrgTestLights1::SyncSetColorOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy)
    : iService(aProxy)
{
}

void SyncSetColorOpenhomeOrgTestLights1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetColor(aAsync);
}

// SyncGetColorOpenhomeOrgTestLights1

SyncGetColorOpenhomeOrgTestLights1::SyncGetColorOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy, TUint& aColor)
    : iService(aProxy)
    , iColor(aColor)
{
}

void SyncGetColorOpenhomeOrgTestLights1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetColor(aAsync, iColor);
}

// SyncGetColorComponentsOpenhomeOrgTestLights1

SyncGetColorComponentsOpenhomeOrgTestLights1::SyncGetColorComponentsOpenhomeOrgTestLights1(CpProxyOpenhomeOrgTestLights1& aProxy, TUint& aBrightness, TUint& aRed, TUint& aGreen, TUint& aBlue)
    : iService(aProxy)
    , iBrightness(aBrightness)
    , iRed(aRed)
    , iGreen(aGreen)
    , iBlue(aBlue)
{
}

void SyncGetColorComponentsOpenhomeOrgTestLights1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetColorComponents(aAsync, iBrightness, iRed, iGreen, iBlue);
}


// CpProxyOpenhomeOrgTestLights1

CpProxyOpenhomeOrgTestLights1::CpProxyOpenhomeOrgTestLights1(CpDevice& aDevice)
    : iCpProxy("openhome-org", "TestLights", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetCount = new Action("GetCount");
    param = new OpenHome::Net::ParameterUint("Count");
    iActionGetCount->AddOutputParameter(param);

    iActionGetRoom = new Action("GetRoom");
    param = new OpenHome::Net::ParameterUint("Index");
    iActionGetRoom->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("RoomName");
    iActionGetRoom->AddOutputParameter(param);

    iActionGetName = new Action("GetName");
    param = new OpenHome::Net::ParameterUint("Index");
    iActionGetName->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("FriendlyName");
    iActionGetName->AddOutputParameter(param);

    iActionGetPosition = new Action("GetPosition");
    param = new OpenHome::Net::ParameterUint("Index");
    iActionGetPosition->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("X");
    iActionGetPosition->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("Y");
    iActionGetPosition->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("Z");
    iActionGetPosition->AddOutputParameter(param);

    iActionSetColor = new Action("SetColor");
    param = new OpenHome::Net::ParameterUint("Index");
    iActionSetColor->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("Color");
    iActionSetColor->AddInputParameter(param);

    iActionGetColor = new Action("GetColor");
    param = new OpenHome::Net::ParameterUint("Index");
    iActionGetColor->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("Color");
    iActionGetColor->AddOutputParameter(param);

    iActionGetColorComponents = new Action("GetColorComponents");
    param = new OpenHome::Net::ParameterUint("Color");
    iActionGetColorComponents->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("Brightness");
    iActionGetColorComponents->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("Red");
    iActionGetColorComponents->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("Green");
    iActionGetColorComponents->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("Blue");
    iActionGetColorComponents->AddOutputParameter(param);
}

CpProxyOpenhomeOrgTestLights1::~CpProxyOpenhomeOrgTestLights1()
{
    DestroyService();
    delete iActionGetCount;
    delete iActionGetRoom;
    delete iActionGetName;
    delete iActionGetPosition;
    delete iActionSetColor;
    delete iActionGetColor;
    delete iActionGetColorComponents;
}

void CpProxyOpenhomeOrgTestLights1::SyncGetCount(TUint& aCount)
{
    SyncGetCountOpenhomeOrgTestLights1 sync(*this, aCount);
    BeginGetCount(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgTestLights1::BeginGetCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgTestLights1::EndGetCount(IAsync& aAsync, TUint& aCount)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetCount"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aCount = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyOpenhomeOrgTestLights1::SyncGetRoom(TUint aIndex, Brh& aRoomName)
{
    SyncGetRoomOpenhomeOrgTestLights1 sync(*this, aRoomName);
    BeginGetRoom(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgTestLights1::BeginGetRoom(TUint aIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetRoom, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetRoom->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRoom->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgTestLights1::EndGetRoom(IAsync& aAsync, Brh& aRoomName)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetRoom"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aRoomName);
}

void CpProxyOpenhomeOrgTestLights1::SyncGetName(TUint aIndex, Brh& aFriendlyName)
{
    SyncGetNameOpenhomeOrgTestLights1 sync(*this, aFriendlyName);
    BeginGetName(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgTestLights1::BeginGetName(TUint aIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetName->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetName->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgTestLights1::EndGetName(IAsync& aAsync, Brh& aFriendlyName)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetName"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aFriendlyName);
}

void CpProxyOpenhomeOrgTestLights1::SyncGetPosition(TUint aIndex, TUint& aX, TUint& aY, TUint& aZ)
{
    SyncGetPositionOpenhomeOrgTestLights1 sync(*this, aX, aY, aZ);
    BeginGetPosition(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgTestLights1::BeginGetPosition(TUint aIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPosition, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetPosition->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPosition->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgTestLights1::EndGetPosition(IAsync& aAsync, TUint& aX, TUint& aY, TUint& aZ)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPosition"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aX = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aY = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aZ = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyOpenhomeOrgTestLights1::SyncSetColor(TUint aIndex, TUint aColor)
{
    SyncSetColorOpenhomeOrgTestLights1 sync(*this);
    BeginSetColor(aIndex, aColor, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgTestLights1::BeginSetColor(TUint aIndex, TUint aColor, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetColor, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetColor->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aColor));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgTestLights1::EndSetColor(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetColor"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyOpenhomeOrgTestLights1::SyncGetColor(TUint aIndex, TUint& aColor)
{
    SyncGetColorOpenhomeOrgTestLights1 sync(*this, aColor);
    BeginGetColor(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgTestLights1::BeginGetColor(TUint aIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetColor, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetColor->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetColor->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgTestLights1::EndGetColor(IAsync& aAsync, TUint& aColor)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetColor"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aColor = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyOpenhomeOrgTestLights1::SyncGetColorComponents(TUint aColor, TUint& aBrightness, TUint& aRed, TUint& aGreen, TUint& aBlue)
{
    SyncGetColorComponentsOpenhomeOrgTestLights1 sync(*this, aBrightness, aRed, aGreen, aBlue);
    BeginGetColorComponents(aColor, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgTestLights1::BeginGetColorComponents(TUint aColor, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetColorComponents, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetColorComponents->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aColor));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetColorComponents->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgTestLights1::EndGetColorComponents(IAsync& aAsync, TUint& aBrightness, TUint& aRed, TUint& aGreen, TUint& aBlue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetColorComponents"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aBrightness = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aRed = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aGreen = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aBlue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}


void CpProxyOpenhomeOrgTestLights1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyOpenhomeOrgTestLights1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyOpenhomeOrgTestLights1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyOpenhomeOrgTestLights1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyOpenhomeOrgTestLights1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyOpenhomeOrgTestLights1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyOpenhomeOrgTestLights1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyOpenhomeOrgTestLights1::Version() const
{
  return iCpProxy.Version();
}


