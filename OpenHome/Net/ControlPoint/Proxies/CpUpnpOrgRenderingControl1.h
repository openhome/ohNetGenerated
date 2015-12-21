#ifndef HEADER_UPNPORGRENDERINGCONTROL1
#define HEADER_UPNPORGRENDERINGCONTROL1

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Net/Core/CpProxy.h>

namespace OpenHome {
namespace Net {

class CpDevice;
class Action;
class PropertyBinary;
class PropertyBool;
class PropertyInt;
class PropertyString;
class PropertyUint;
class CpProxy;
class ICpProxyUpnpOrgRenderingControl1 : public ICpProxy
{
public:
    virtual ~ICpProxyUpnpOrgRenderingControl1() {}
    virtual void SyncListPresets(TUint aInstanceID, Brh& aCurrentPresetNameList) = 0;
    virtual void BeginListPresets(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndListPresets(IAsync& aAsync, Brh& aCurrentPresetNameList) = 0;
    virtual void SyncSelectPreset(TUint aInstanceID, const Brx& aPresetName) = 0;
    virtual void BeginSelectPreset(TUint aInstanceID, const Brx& aPresetName, FunctorAsync& aFunctor) = 0;
    virtual void EndSelectPreset(IAsync& aAsync) = 0;
    virtual void SyncGetBrightness(TUint aInstanceID, TUint& aCurrentBrightness) = 0;
    virtual void BeginGetBrightness(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetBrightness(IAsync& aAsync, TUint& aCurrentBrightness) = 0;
    virtual void SyncSetBrightness(TUint aInstanceID, TUint aDesiredBrightness) = 0;
    virtual void BeginSetBrightness(TUint aInstanceID, TUint aDesiredBrightness, FunctorAsync& aFunctor) = 0;
    virtual void EndSetBrightness(IAsync& aAsync) = 0;
    virtual void SyncGetContrast(TUint aInstanceID, TUint& aCurrentContrast) = 0;
    virtual void BeginGetContrast(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetContrast(IAsync& aAsync, TUint& aCurrentContrast) = 0;
    virtual void SyncSetContrast(TUint aInstanceID, TUint aDesiredContrast) = 0;
    virtual void BeginSetContrast(TUint aInstanceID, TUint aDesiredContrast, FunctorAsync& aFunctor) = 0;
    virtual void EndSetContrast(IAsync& aAsync) = 0;
    virtual void SyncGetSharpness(TUint aInstanceID, TUint& aCurrentSharpness) = 0;
    virtual void BeginGetSharpness(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetSharpness(IAsync& aAsync, TUint& aCurrentSharpness) = 0;
    virtual void SyncSetSharpness(TUint aInstanceID, TUint aDesiredSharpness) = 0;
    virtual void BeginSetSharpness(TUint aInstanceID, TUint aDesiredSharpness, FunctorAsync& aFunctor) = 0;
    virtual void EndSetSharpness(IAsync& aAsync) = 0;
    virtual void SyncGetRedVideoGain(TUint aInstanceID, TUint& aCurrentRedVideoGain) = 0;
    virtual void BeginGetRedVideoGain(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetRedVideoGain(IAsync& aAsync, TUint& aCurrentRedVideoGain) = 0;
    virtual void SyncSetRedVideoGain(TUint aInstanceID, TUint aDesiredRedVideoGain) = 0;
    virtual void BeginSetRedVideoGain(TUint aInstanceID, TUint aDesiredRedVideoGain, FunctorAsync& aFunctor) = 0;
    virtual void EndSetRedVideoGain(IAsync& aAsync) = 0;
    virtual void SyncGetGreenVideoGain(TUint aInstanceID, TUint& aCurrentGreenVideoGain) = 0;
    virtual void BeginGetGreenVideoGain(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetGreenVideoGain(IAsync& aAsync, TUint& aCurrentGreenVideoGain) = 0;
    virtual void SyncSetGreenVideoGain(TUint aInstanceID, TUint aDesiredGreenVideoGain) = 0;
    virtual void BeginSetGreenVideoGain(TUint aInstanceID, TUint aDesiredGreenVideoGain, FunctorAsync& aFunctor) = 0;
    virtual void EndSetGreenVideoGain(IAsync& aAsync) = 0;
    virtual void SyncGetBlueVideoGain(TUint aInstanceID, TUint& aCurrentBlueVideoGain) = 0;
    virtual void BeginGetBlueVideoGain(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetBlueVideoGain(IAsync& aAsync, TUint& aCurrentBlueVideoGain) = 0;
    virtual void SyncSetBlueVideoGain(TUint aInstanceID, TUint aDesiredBlueVideoGain) = 0;
    virtual void BeginSetBlueVideoGain(TUint aInstanceID, TUint aDesiredBlueVideoGain, FunctorAsync& aFunctor) = 0;
    virtual void EndSetBlueVideoGain(IAsync& aAsync) = 0;
    virtual void SyncGetRedVideoBlackLevel(TUint aInstanceID, TUint& aCurrentRedVideoBlackLevel) = 0;
    virtual void BeginGetRedVideoBlackLevel(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetRedVideoBlackLevel(IAsync& aAsync, TUint& aCurrentRedVideoBlackLevel) = 0;
    virtual void SyncSetRedVideoBlackLevel(TUint aInstanceID, TUint aDesiredRedVideoBlackLevel) = 0;
    virtual void BeginSetRedVideoBlackLevel(TUint aInstanceID, TUint aDesiredRedVideoBlackLevel, FunctorAsync& aFunctor) = 0;
    virtual void EndSetRedVideoBlackLevel(IAsync& aAsync) = 0;
    virtual void SyncGetGreenVideoBlackLevel(TUint aInstanceID, TUint& aCurrentGreenVideoBlackLevel) = 0;
    virtual void BeginGetGreenVideoBlackLevel(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetGreenVideoBlackLevel(IAsync& aAsync, TUint& aCurrentGreenVideoBlackLevel) = 0;
    virtual void SyncSetGreenVideoBlackLevel(TUint aInstanceID, TUint aDesiredGreenVideoBlackLevel) = 0;
    virtual void BeginSetGreenVideoBlackLevel(TUint aInstanceID, TUint aDesiredGreenVideoBlackLevel, FunctorAsync& aFunctor) = 0;
    virtual void EndSetGreenVideoBlackLevel(IAsync& aAsync) = 0;
    virtual void SyncGetBlueVideoBlackLevel(TUint aInstanceID, TUint& aCurrentBlueVideoBlackLevel) = 0;
    virtual void BeginGetBlueVideoBlackLevel(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetBlueVideoBlackLevel(IAsync& aAsync, TUint& aCurrentBlueVideoBlackLevel) = 0;
    virtual void SyncSetBlueVideoBlackLevel(TUint aInstanceID, TUint aDesiredBlueVideoBlackLevel) = 0;
    virtual void BeginSetBlueVideoBlackLevel(TUint aInstanceID, TUint aDesiredBlueVideoBlackLevel, FunctorAsync& aFunctor) = 0;
    virtual void EndSetBlueVideoBlackLevel(IAsync& aAsync) = 0;
    virtual void SyncGetColorTemperature(TUint aInstanceID, TUint& aCurrentColorTemperature) = 0;
    virtual void BeginGetColorTemperature(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetColorTemperature(IAsync& aAsync, TUint& aCurrentColorTemperature) = 0;
    virtual void SyncSetColorTemperature(TUint aInstanceID, TUint aDesiredColorTemperature) = 0;
    virtual void BeginSetColorTemperature(TUint aInstanceID, TUint aDesiredColorTemperature, FunctorAsync& aFunctor) = 0;
    virtual void EndSetColorTemperature(IAsync& aAsync) = 0;
    virtual void SyncGetHorizontalKeystone(TUint aInstanceID, TInt& aCurrentHorizontalKeystone) = 0;
    virtual void BeginGetHorizontalKeystone(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetHorizontalKeystone(IAsync& aAsync, TInt& aCurrentHorizontalKeystone) = 0;
    virtual void SyncSetHorizontalKeystone(TUint aInstanceID, TInt aDesiredHorizontalKeystone) = 0;
    virtual void BeginSetHorizontalKeystone(TUint aInstanceID, TInt aDesiredHorizontalKeystone, FunctorAsync& aFunctor) = 0;
    virtual void EndSetHorizontalKeystone(IAsync& aAsync) = 0;
    virtual void SyncGetVerticalKeystone(TUint aInstanceID, TInt& aCurrentVerticalKeystone) = 0;
    virtual void BeginGetVerticalKeystone(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetVerticalKeystone(IAsync& aAsync, TInt& aCurrentVerticalKeystone) = 0;
    virtual void SyncSetVerticalKeystone(TUint aInstanceID, TInt aDesiredVerticalKeystone) = 0;
    virtual void BeginSetVerticalKeystone(TUint aInstanceID, TInt aDesiredVerticalKeystone, FunctorAsync& aFunctor) = 0;
    virtual void EndSetVerticalKeystone(IAsync& aAsync) = 0;
    virtual void SyncGetMute(TUint aInstanceID, const Brx& aChannel, TBool& aCurrentMute) = 0;
    virtual void BeginGetMute(TUint aInstanceID, const Brx& aChannel, FunctorAsync& aFunctor) = 0;
    virtual void EndGetMute(IAsync& aAsync, TBool& aCurrentMute) = 0;
    virtual void SyncSetMute(TUint aInstanceID, const Brx& aChannel, TBool aDesiredMute) = 0;
    virtual void BeginSetMute(TUint aInstanceID, const Brx& aChannel, TBool aDesiredMute, FunctorAsync& aFunctor) = 0;
    virtual void EndSetMute(IAsync& aAsync) = 0;
    virtual void SyncGetVolume(TUint aInstanceID, const Brx& aChannel, TUint& aCurrentVolume) = 0;
    virtual void BeginGetVolume(TUint aInstanceID, const Brx& aChannel, FunctorAsync& aFunctor) = 0;
    virtual void EndGetVolume(IAsync& aAsync, TUint& aCurrentVolume) = 0;
    virtual void SyncSetVolume(TUint aInstanceID, const Brx& aChannel, TUint aDesiredVolume) = 0;
    virtual void BeginSetVolume(TUint aInstanceID, const Brx& aChannel, TUint aDesiredVolume, FunctorAsync& aFunctor) = 0;
    virtual void EndSetVolume(IAsync& aAsync) = 0;
    virtual void SyncGetVolumeDB(TUint aInstanceID, const Brx& aChannel, TInt& aCurrentVolume) = 0;
    virtual void BeginGetVolumeDB(TUint aInstanceID, const Brx& aChannel, FunctorAsync& aFunctor) = 0;
    virtual void EndGetVolumeDB(IAsync& aAsync, TInt& aCurrentVolume) = 0;
    virtual void SyncSetVolumeDB(TUint aInstanceID, const Brx& aChannel, TInt aDesiredVolume) = 0;
    virtual void BeginSetVolumeDB(TUint aInstanceID, const Brx& aChannel, TInt aDesiredVolume, FunctorAsync& aFunctor) = 0;
    virtual void EndSetVolumeDB(IAsync& aAsync) = 0;
    virtual void SyncGetVolumeDBRange(TUint aInstanceID, const Brx& aChannel, TInt& aMinValue, TInt& aMaxValue) = 0;
    virtual void BeginGetVolumeDBRange(TUint aInstanceID, const Brx& aChannel, FunctorAsync& aFunctor) = 0;
    virtual void EndGetVolumeDBRange(IAsync& aAsync, TInt& aMinValue, TInt& aMaxValue) = 0;
    virtual void SyncGetLoudness(TUint aInstanceID, const Brx& aChannel, TBool& aCurrentLoudness) = 0;
    virtual void BeginGetLoudness(TUint aInstanceID, const Brx& aChannel, FunctorAsync& aFunctor) = 0;
    virtual void EndGetLoudness(IAsync& aAsync, TBool& aCurrentLoudness) = 0;
    virtual void SyncSetLoudness(TUint aInstanceID, const Brx& aChannel, TBool aDesiredLoudness) = 0;
    virtual void BeginSetLoudness(TUint aInstanceID, const Brx& aChannel, TBool aDesiredLoudness, FunctorAsync& aFunctor) = 0;
    virtual void EndSetLoudness(IAsync& aAsync) = 0;
    virtual void SetPropertyLastChangeChanged(Functor& aLastChangeChanged) = 0;
    virtual void PropertyLastChange(Brhz& aLastChange) const = 0;
};

/**
 * Proxy for upnp.org:RenderingControl:1
 * @ingroup Proxies
 */
class CpProxyUpnpOrgRenderingControl1 : public ICpProxyUpnpOrgRenderingControl1
{
public:
    /**
     * Constructor.
     *
     * Use iCpProxy::[Un]Subscribe() to enable/disable querying of state variable
     * and reporting of their changes.
     *
     * @param[in]  aDevice   The device to use
     */
    CpProxyUpnpOrgRenderingControl1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyUpnpOrgRenderingControl1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentPresetNameList
     */
    void SyncListPresets(TUint aInstanceID, Brh& aCurrentPresetNameList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndListPresets().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginListPresets(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentPresetNameList
     */
    void EndListPresets(IAsync& aAsync, Brh& aCurrentPresetNameList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aPresetName
     */
    void SyncSelectPreset(TUint aInstanceID, const Brx& aPresetName);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSelectPreset().
     *
     * @param[in] aInstanceID
     * @param[in] aPresetName
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSelectPreset(TUint aInstanceID, const Brx& aPresetName, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSelectPreset(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentBrightness
     */
    void SyncGetBrightness(TUint aInstanceID, TUint& aCurrentBrightness);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetBrightness().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetBrightness(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentBrightness
     */
    void EndGetBrightness(IAsync& aAsync, TUint& aCurrentBrightness);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aDesiredBrightness
     */
    void SyncSetBrightness(TUint aInstanceID, TUint aDesiredBrightness);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetBrightness().
     *
     * @param[in] aInstanceID
     * @param[in] aDesiredBrightness
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetBrightness(TUint aInstanceID, TUint aDesiredBrightness, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetBrightness(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentContrast
     */
    void SyncGetContrast(TUint aInstanceID, TUint& aCurrentContrast);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetContrast().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetContrast(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentContrast
     */
    void EndGetContrast(IAsync& aAsync, TUint& aCurrentContrast);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aDesiredContrast
     */
    void SyncSetContrast(TUint aInstanceID, TUint aDesiredContrast);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetContrast().
     *
     * @param[in] aInstanceID
     * @param[in] aDesiredContrast
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetContrast(TUint aInstanceID, TUint aDesiredContrast, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetContrast(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentSharpness
     */
    void SyncGetSharpness(TUint aInstanceID, TUint& aCurrentSharpness);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSharpness().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSharpness(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentSharpness
     */
    void EndGetSharpness(IAsync& aAsync, TUint& aCurrentSharpness);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aDesiredSharpness
     */
    void SyncSetSharpness(TUint aInstanceID, TUint aDesiredSharpness);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetSharpness().
     *
     * @param[in] aInstanceID
     * @param[in] aDesiredSharpness
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetSharpness(TUint aInstanceID, TUint aDesiredSharpness, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetSharpness(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentRedVideoGain
     */
    void SyncGetRedVideoGain(TUint aInstanceID, TUint& aCurrentRedVideoGain);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetRedVideoGain().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetRedVideoGain(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentRedVideoGain
     */
    void EndGetRedVideoGain(IAsync& aAsync, TUint& aCurrentRedVideoGain);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aDesiredRedVideoGain
     */
    void SyncSetRedVideoGain(TUint aInstanceID, TUint aDesiredRedVideoGain);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetRedVideoGain().
     *
     * @param[in] aInstanceID
     * @param[in] aDesiredRedVideoGain
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetRedVideoGain(TUint aInstanceID, TUint aDesiredRedVideoGain, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetRedVideoGain(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentGreenVideoGain
     */
    void SyncGetGreenVideoGain(TUint aInstanceID, TUint& aCurrentGreenVideoGain);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetGreenVideoGain().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetGreenVideoGain(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentGreenVideoGain
     */
    void EndGetGreenVideoGain(IAsync& aAsync, TUint& aCurrentGreenVideoGain);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aDesiredGreenVideoGain
     */
    void SyncSetGreenVideoGain(TUint aInstanceID, TUint aDesiredGreenVideoGain);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetGreenVideoGain().
     *
     * @param[in] aInstanceID
     * @param[in] aDesiredGreenVideoGain
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetGreenVideoGain(TUint aInstanceID, TUint aDesiredGreenVideoGain, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetGreenVideoGain(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentBlueVideoGain
     */
    void SyncGetBlueVideoGain(TUint aInstanceID, TUint& aCurrentBlueVideoGain);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetBlueVideoGain().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetBlueVideoGain(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentBlueVideoGain
     */
    void EndGetBlueVideoGain(IAsync& aAsync, TUint& aCurrentBlueVideoGain);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aDesiredBlueVideoGain
     */
    void SyncSetBlueVideoGain(TUint aInstanceID, TUint aDesiredBlueVideoGain);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetBlueVideoGain().
     *
     * @param[in] aInstanceID
     * @param[in] aDesiredBlueVideoGain
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetBlueVideoGain(TUint aInstanceID, TUint aDesiredBlueVideoGain, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetBlueVideoGain(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentRedVideoBlackLevel
     */
    void SyncGetRedVideoBlackLevel(TUint aInstanceID, TUint& aCurrentRedVideoBlackLevel);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetRedVideoBlackLevel().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetRedVideoBlackLevel(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentRedVideoBlackLevel
     */
    void EndGetRedVideoBlackLevel(IAsync& aAsync, TUint& aCurrentRedVideoBlackLevel);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aDesiredRedVideoBlackLevel
     */
    void SyncSetRedVideoBlackLevel(TUint aInstanceID, TUint aDesiredRedVideoBlackLevel);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetRedVideoBlackLevel().
     *
     * @param[in] aInstanceID
     * @param[in] aDesiredRedVideoBlackLevel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetRedVideoBlackLevel(TUint aInstanceID, TUint aDesiredRedVideoBlackLevel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetRedVideoBlackLevel(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentGreenVideoBlackLevel
     */
    void SyncGetGreenVideoBlackLevel(TUint aInstanceID, TUint& aCurrentGreenVideoBlackLevel);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetGreenVideoBlackLevel().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetGreenVideoBlackLevel(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentGreenVideoBlackLevel
     */
    void EndGetGreenVideoBlackLevel(IAsync& aAsync, TUint& aCurrentGreenVideoBlackLevel);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aDesiredGreenVideoBlackLevel
     */
    void SyncSetGreenVideoBlackLevel(TUint aInstanceID, TUint aDesiredGreenVideoBlackLevel);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetGreenVideoBlackLevel().
     *
     * @param[in] aInstanceID
     * @param[in] aDesiredGreenVideoBlackLevel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetGreenVideoBlackLevel(TUint aInstanceID, TUint aDesiredGreenVideoBlackLevel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetGreenVideoBlackLevel(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentBlueVideoBlackLevel
     */
    void SyncGetBlueVideoBlackLevel(TUint aInstanceID, TUint& aCurrentBlueVideoBlackLevel);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetBlueVideoBlackLevel().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetBlueVideoBlackLevel(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentBlueVideoBlackLevel
     */
    void EndGetBlueVideoBlackLevel(IAsync& aAsync, TUint& aCurrentBlueVideoBlackLevel);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aDesiredBlueVideoBlackLevel
     */
    void SyncSetBlueVideoBlackLevel(TUint aInstanceID, TUint aDesiredBlueVideoBlackLevel);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetBlueVideoBlackLevel().
     *
     * @param[in] aInstanceID
     * @param[in] aDesiredBlueVideoBlackLevel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetBlueVideoBlackLevel(TUint aInstanceID, TUint aDesiredBlueVideoBlackLevel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetBlueVideoBlackLevel(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentColorTemperature
     */
    void SyncGetColorTemperature(TUint aInstanceID, TUint& aCurrentColorTemperature);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetColorTemperature().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetColorTemperature(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentColorTemperature
     */
    void EndGetColorTemperature(IAsync& aAsync, TUint& aCurrentColorTemperature);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aDesiredColorTemperature
     */
    void SyncSetColorTemperature(TUint aInstanceID, TUint aDesiredColorTemperature);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetColorTemperature().
     *
     * @param[in] aInstanceID
     * @param[in] aDesiredColorTemperature
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetColorTemperature(TUint aInstanceID, TUint aDesiredColorTemperature, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetColorTemperature(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentHorizontalKeystone
     */
    void SyncGetHorizontalKeystone(TUint aInstanceID, TInt& aCurrentHorizontalKeystone);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetHorizontalKeystone().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetHorizontalKeystone(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentHorizontalKeystone
     */
    void EndGetHorizontalKeystone(IAsync& aAsync, TInt& aCurrentHorizontalKeystone);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aDesiredHorizontalKeystone
     */
    void SyncSetHorizontalKeystone(TUint aInstanceID, TInt aDesiredHorizontalKeystone);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetHorizontalKeystone().
     *
     * @param[in] aInstanceID
     * @param[in] aDesiredHorizontalKeystone
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetHorizontalKeystone(TUint aInstanceID, TInt aDesiredHorizontalKeystone, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetHorizontalKeystone(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentVerticalKeystone
     */
    void SyncGetVerticalKeystone(TUint aInstanceID, TInt& aCurrentVerticalKeystone);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetVerticalKeystone().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetVerticalKeystone(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentVerticalKeystone
     */
    void EndGetVerticalKeystone(IAsync& aAsync, TInt& aCurrentVerticalKeystone);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aDesiredVerticalKeystone
     */
    void SyncSetVerticalKeystone(TUint aInstanceID, TInt aDesiredVerticalKeystone);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetVerticalKeystone().
     *
     * @param[in] aInstanceID
     * @param[in] aDesiredVerticalKeystone
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetVerticalKeystone(TUint aInstanceID, TInt aDesiredVerticalKeystone, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetVerticalKeystone(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aChannel
     * @param[out] aCurrentMute
     */
    void SyncGetMute(TUint aInstanceID, const Brx& aChannel, TBool& aCurrentMute);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetMute().
     *
     * @param[in] aInstanceID
     * @param[in] aChannel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetMute(TUint aInstanceID, const Brx& aChannel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentMute
     */
    void EndGetMute(IAsync& aAsync, TBool& aCurrentMute);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aChannel
     * @param[in]  aDesiredMute
     */
    void SyncSetMute(TUint aInstanceID, const Brx& aChannel, TBool aDesiredMute);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetMute().
     *
     * @param[in] aInstanceID
     * @param[in] aChannel
     * @param[in] aDesiredMute
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetMute(TUint aInstanceID, const Brx& aChannel, TBool aDesiredMute, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetMute(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aChannel
     * @param[out] aCurrentVolume
     */
    void SyncGetVolume(TUint aInstanceID, const Brx& aChannel, TUint& aCurrentVolume);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetVolume().
     *
     * @param[in] aInstanceID
     * @param[in] aChannel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetVolume(TUint aInstanceID, const Brx& aChannel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentVolume
     */
    void EndGetVolume(IAsync& aAsync, TUint& aCurrentVolume);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aChannel
     * @param[in]  aDesiredVolume
     */
    void SyncSetVolume(TUint aInstanceID, const Brx& aChannel, TUint aDesiredVolume);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetVolume().
     *
     * @param[in] aInstanceID
     * @param[in] aChannel
     * @param[in] aDesiredVolume
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetVolume(TUint aInstanceID, const Brx& aChannel, TUint aDesiredVolume, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetVolume(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aChannel
     * @param[out] aCurrentVolume
     */
    void SyncGetVolumeDB(TUint aInstanceID, const Brx& aChannel, TInt& aCurrentVolume);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetVolumeDB().
     *
     * @param[in] aInstanceID
     * @param[in] aChannel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetVolumeDB(TUint aInstanceID, const Brx& aChannel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentVolume
     */
    void EndGetVolumeDB(IAsync& aAsync, TInt& aCurrentVolume);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aChannel
     * @param[in]  aDesiredVolume
     */
    void SyncSetVolumeDB(TUint aInstanceID, const Brx& aChannel, TInt aDesiredVolume);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetVolumeDB().
     *
     * @param[in] aInstanceID
     * @param[in] aChannel
     * @param[in] aDesiredVolume
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetVolumeDB(TUint aInstanceID, const Brx& aChannel, TInt aDesiredVolume, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetVolumeDB(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aChannel
     * @param[out] aMinValue
     * @param[out] aMaxValue
     */
    void SyncGetVolumeDBRange(TUint aInstanceID, const Brx& aChannel, TInt& aMinValue, TInt& aMaxValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetVolumeDBRange().
     *
     * @param[in] aInstanceID
     * @param[in] aChannel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetVolumeDBRange(TUint aInstanceID, const Brx& aChannel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aMinValue
     * @param[out] aMaxValue
     */
    void EndGetVolumeDBRange(IAsync& aAsync, TInt& aMinValue, TInt& aMaxValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aChannel
     * @param[out] aCurrentLoudness
     */
    void SyncGetLoudness(TUint aInstanceID, const Brx& aChannel, TBool& aCurrentLoudness);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetLoudness().
     *
     * @param[in] aInstanceID
     * @param[in] aChannel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetLoudness(TUint aInstanceID, const Brx& aChannel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentLoudness
     */
    void EndGetLoudness(IAsync& aAsync, TBool& aCurrentLoudness);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aChannel
     * @param[in]  aDesiredLoudness
     */
    void SyncSetLoudness(TUint aInstanceID, const Brx& aChannel, TBool aDesiredLoudness);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetLoudness().
     *
     * @param[in] aInstanceID
     * @param[in] aChannel
     * @param[in] aDesiredLoudness
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetLoudness(TUint aInstanceID, const Brx& aChannel, TBool aDesiredLoudness, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetLoudness(IAsync& aAsync);

    /**
     * Set a callback to be run when the LastChange state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgRenderingControl1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyLastChangeChanged(Functor& aFunctor);

    /**
     * Query the value of the LastChange property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aLastChange
     */
    void PropertyLastChange(Brhz& aLastChange) const;
    /**
    * This function exposes the Subscribe() function of the iCpProxy member variable
    */
    void Subscribe();
    /**
    * This function exposes the Unsubscribe() function of the iCpProxy member variable
    */
    void Unsubscribe();
    /**
    * This function exposes the SetPropertyChanged() function of the iCpProxy member variable
    */
    void SetPropertyChanged(Functor& aFunctor);
    /**
    * This function exposes the SetPropertyInitialEvent() function of the iCpProxy member variable
    */
    void SetPropertyInitialEvent(Functor& aFunctor);
    /**
    * This function exposes the AddProperty() function of the iCpProxy member variable
    */
    void AddProperty(Property* aProperty);
    /**
    * This function exposes DestroyService() function of the iCpProxy member variable
    */
    void DestroyService();
    /**
    * This function exposes the REportEvent() function of the iCpProxy member variable
    */
    void ReportEvent(Functor aFunctor);
    /**
    * This function exposes the Version() function of the iCpProxy member variable
    */
    TUint Version() const;
private:
    CpProxy iCpProxy;
    void LastChangePropertyChanged();
private:
    Action* iActionListPresets;
    Action* iActionSelectPreset;
    Action* iActionGetBrightness;
    Action* iActionSetBrightness;
    Action* iActionGetContrast;
    Action* iActionSetContrast;
    Action* iActionGetSharpness;
    Action* iActionSetSharpness;
    Action* iActionGetRedVideoGain;
    Action* iActionSetRedVideoGain;
    Action* iActionGetGreenVideoGain;
    Action* iActionSetGreenVideoGain;
    Action* iActionGetBlueVideoGain;
    Action* iActionSetBlueVideoGain;
    Action* iActionGetRedVideoBlackLevel;
    Action* iActionSetRedVideoBlackLevel;
    Action* iActionGetGreenVideoBlackLevel;
    Action* iActionSetGreenVideoBlackLevel;
    Action* iActionGetBlueVideoBlackLevel;
    Action* iActionSetBlueVideoBlackLevel;
    Action* iActionGetColorTemperature;
    Action* iActionSetColorTemperature;
    Action* iActionGetHorizontalKeystone;
    Action* iActionSetHorizontalKeystone;
    Action* iActionGetVerticalKeystone;
    Action* iActionSetVerticalKeystone;
    Action* iActionGetMute;
    Action* iActionSetMute;
    Action* iActionGetVolume;
    Action* iActionSetVolume;
    Action* iActionGetVolumeDB;
    Action* iActionSetVolumeDB;
    Action* iActionGetVolumeDBRange;
    Action* iActionGetLoudness;
    Action* iActionSetLoudness;
    PropertyString* iLastChange;
    Functor iLastChangeChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_UPNPORGRENDERINGCONTROL1

