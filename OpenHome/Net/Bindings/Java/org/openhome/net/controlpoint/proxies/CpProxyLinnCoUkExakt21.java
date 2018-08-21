package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkExakt21.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkExakt21 extends ICpProxy
{
    public String syncGetDeviceList();
    public void beginGetDeviceList(ICpProxyListener aCallback);
    public String endGetDeviceList(long aAsyncHandle);
    public String syncGetDeviceSettings(String aDeviceId);
    public void beginGetDeviceSettings(String aDeviceId, ICpProxyListener aCallback);
    public String endGetDeviceSettings(long aAsyncHandle);
    public boolean syncGetSettingsAvailable();
    public void beginGetSettingsAvailable(ICpProxyListener aCallback);
    public boolean endGetSettingsAvailable(long aAsyncHandle);
    public String syncGetSettingsChangedSeq();
    public void beginGetSettingsChangedSeq(ICpProxyListener aCallback);
    public String endGetSettingsChangedSeq(long aAsyncHandle);
    public void syncUpdate(String aManifest);
    public void beginUpdate(String aManifest, ICpProxyListener aCallback);
    public void endUpdate(long aAsyncHandle);
    public void syncUpdateBlocking(String aManifest);
    public void beginUpdateBlocking(String aManifest, ICpProxyListener aCallback);
    public void endUpdateBlocking(long aAsyncHandle);
    public String syncGetUpdateStatus();
    public void beginGetUpdateStatus(ICpProxyListener aCallback);
    public String endGetUpdateStatus(long aAsyncHandle);
    public String syncGetChannelMap();
    public void beginGetChannelMap(ICpProxyListener aCallback);
    public String endGetChannelMap(long aAsyncHandle);
    public String syncGetAudioChannels();
    public void beginGetAudioChannels(ICpProxyListener aCallback);
    public String endGetAudioChannels(long aAsyncHandle);
    public long syncGetVersion();
    public void beginGetVersion(ICpProxyListener aCallback);
    public long endGetVersion(long aAsyncHandle);
    public void syncApplyUpdate();
    public void beginApplyUpdate(ICpProxyListener aCallback);
    public void endApplyUpdate(long aAsyncHandle);
    public void syncPlayTestTrack(String aChannelMap, String aUri, String aMetadata);
    public void beginPlayTestTrack(String aChannelMap, String aUri, String aMetadata, ICpProxyListener aCallback);
    public void endPlayTestTrack(long aAsyncHandle);
    public void syncClearTestTrack();
    public void beginClearTestTrack(ICpProxyListener aCallback);
    public void endClearTestTrack(long aAsyncHandle);
    public boolean syncGetIntegratedDevicesPresent();
    public void beginGetIntegratedDevicesPresent(ICpProxyListener aCallback);
    public boolean endGetIntegratedDevicesPresent(long aAsyncHandle);
    public void syncBootIntegratedDevicesToFallback();
    public void beginBootIntegratedDevicesToFallback(ICpProxyListener aCallback);
    public void endBootIntegratedDevicesToFallback(long aAsyncHandle);
    public void setPropertyDeviceListChanged(IPropertyChangeListener aDeviceListChanged);
    public String getPropertyDeviceList();
    public void setPropertySettingsAvailableChanged(IPropertyChangeListener aSettingsAvailableChanged);
    public boolean getPropertySettingsAvailable();
    public void setPropertySettingsChangedSeqChanged(IPropertyChangeListener aSettingsChangedSeqChanged);
    public String getPropertySettingsChangedSeq();
    public void setPropertyUpdateStatusChanged(IPropertyChangeListener aUpdateStatusChanged);
    public String getPropertyUpdateStatus();
    public void setPropertyChannelMapChanged(IPropertyChangeListener aChannelMapChanged);
    public String getPropertyChannelMap();
    public void setPropertyAudioChannelsChanged(IPropertyChangeListener aAudioChannelsChanged);
    public String getPropertyAudioChannels();
    public void setPropertyVersionChanged(IPropertyChangeListener aVersionChanged);
    public long getPropertyVersion();
    public void setPropertyIntegratedDevicesPresentChanged(IPropertyChangeListener aIntegratedDevicesPresentChanged);
    public boolean getPropertyIntegratedDevicesPresent();
}

class SyncGetDeviceListLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;
    private String iList;

    public SyncGetDeviceListLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    public String getList()
    {
        return iList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetDeviceList(aAsyncHandle);
        
        iList = result;
    }
}

class SyncGetDeviceSettingsLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;
    private String iSettings;

    public SyncGetDeviceSettingsLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    public String getSettings()
    {
        return iSettings;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetDeviceSettings(aAsyncHandle);
        
        iSettings = result;
    }
}

class SyncGetSettingsAvailableLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;
    private boolean iSettingsAvailable;

    public SyncGetSettingsAvailableLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    public boolean getSettingsAvailable()
    {
        return iSettingsAvailable;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetSettingsAvailable(aAsyncHandle);
        
        iSettingsAvailable = result;
    }
}

class SyncGetSettingsChangedSeqLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;
    private String iSettingsChangedSeq;

    public SyncGetSettingsChangedSeqLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    public String getSettingsChangedSeq()
    {
        return iSettingsChangedSeq;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetSettingsChangedSeq(aAsyncHandle);
        
        iSettingsChangedSeq = result;
    }
}

class SyncUpdateLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;

    public SyncUpdateLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endUpdate(aAsyncHandle);
        
    }
}

class SyncUpdateBlockingLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;

    public SyncUpdateBlockingLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endUpdateBlocking(aAsyncHandle);
        
    }
}

class SyncGetUpdateStatusLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;
    private String iUpdateStatus;

    public SyncGetUpdateStatusLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    public String getUpdateStatus()
    {
        return iUpdateStatus;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetUpdateStatus(aAsyncHandle);
        
        iUpdateStatus = result;
    }
}

class SyncGetChannelMapLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;
    private String iChannelMap;

    public SyncGetChannelMapLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    public String getChannelMap()
    {
        return iChannelMap;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetChannelMap(aAsyncHandle);
        
        iChannelMap = result;
    }
}

class SyncGetAudioChannelsLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;
    private String iAudioChannels;

    public SyncGetAudioChannelsLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    public String getAudioChannels()
    {
        return iAudioChannels;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetAudioChannels(aAsyncHandle);
        
        iAudioChannels = result;
    }
}

class SyncGetVersionLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;
    private long iVersion;

    public SyncGetVersionLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    public long getVersion()
    {
        return iVersion;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetVersion(aAsyncHandle);
        
        iVersion = result;
    }
}

class SyncApplyUpdateLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;

    public SyncApplyUpdateLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endApplyUpdate(aAsyncHandle);
        
    }
}

class SyncPlayTestTrackLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;

    public SyncPlayTestTrackLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPlayTestTrack(aAsyncHandle);
        
    }
}

class SyncClearTestTrackLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;

    public SyncClearTestTrackLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endClearTestTrack(aAsyncHandle);
        
    }
}

class SyncGetIntegratedDevicesPresentLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;
    private boolean iIntegratedDevicesPresent;

    public SyncGetIntegratedDevicesPresentLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    public boolean getIntegratedDevicesPresent()
    {
        return iIntegratedDevicesPresent;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetIntegratedDevicesPresent(aAsyncHandle);
        
        iIntegratedDevicesPresent = result;
    }
}

class SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt21 iService;

    public SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endBootIntegratedDevicesToFallback(aAsyncHandle);
        
    }
}

/**
 * Proxy for the linn.co.uk:Exakt2:1 UPnP service
 */
public class CpProxyLinnCoUkExakt21 extends CpProxy implements ICpProxyLinnCoUkExakt21
{

    private Action iActionGetDeviceList;
    private Action iActionGetDeviceSettings;
    private Action iActionGetSettingsAvailable;
    private Action iActionGetSettingsChangedSeq;
    private Action iActionUpdate;
    private Action iActionUpdateBlocking;
    private Action iActionGetUpdateStatus;
    private Action iActionGetChannelMap;
    private Action iActionGetAudioChannels;
    private Action iActionGetVersion;
    private Action iActionApplyUpdate;
    private Action iActionPlayTestTrack;
    private Action iActionClearTestTrack;
    private Action iActionGetIntegratedDevicesPresent;
    private Action iActionBootIntegratedDevicesToFallback;
    private PropertyString iDeviceList;
    private PropertyBool iSettingsAvailable;
    private PropertyString iSettingsChangedSeq;
    private PropertyString iUpdateStatus;
    private PropertyString iChannelMap;
    private PropertyString iAudioChannels;
    private PropertyUint iVersion;
    private PropertyBool iIntegratedDevicesPresent;
    private IPropertyChangeListener iDeviceListChanged;
    private IPropertyChangeListener iSettingsAvailableChanged;
    private IPropertyChangeListener iSettingsChangedSeqChanged;
    private IPropertyChangeListener iUpdateStatusChanged;
    private IPropertyChangeListener iChannelMapChanged;
    private IPropertyChangeListener iAudioChannelsChanged;
    private IPropertyChangeListener iVersionChanged;
    private IPropertyChangeListener iIntegratedDevicesPresentChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkExakt21(CpDevice aDevice)
    {
        super("linn-co-uk", "Exakt2", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetDeviceList = new Action("GetDeviceList");
        param = new ParameterString("List", allowedValues);
        iActionGetDeviceList.addOutputParameter(param);

        iActionGetDeviceSettings = new Action("GetDeviceSettings");
        param = new ParameterString("DeviceId", allowedValues);
        iActionGetDeviceSettings.addInputParameter(param);
        param = new ParameterString("Settings", allowedValues);
        iActionGetDeviceSettings.addOutputParameter(param);

        iActionGetSettingsAvailable = new Action("GetSettingsAvailable");
        param = new ParameterBool("SettingsAvailable");
        iActionGetSettingsAvailable.addOutputParameter(param);

        iActionGetSettingsChangedSeq = new Action("GetSettingsChangedSeq");
        param = new ParameterString("SettingsChangedSeq", allowedValues);
        iActionGetSettingsChangedSeq.addOutputParameter(param);

        iActionUpdate = new Action("Update");
        param = new ParameterString("Manifest", allowedValues);
        iActionUpdate.addInputParameter(param);

        iActionUpdateBlocking = new Action("UpdateBlocking");
        param = new ParameterString("Manifest", allowedValues);
        iActionUpdateBlocking.addInputParameter(param);

        iActionGetUpdateStatus = new Action("GetUpdateStatus");
        param = new ParameterString("UpdateStatus", allowedValues);
        iActionGetUpdateStatus.addOutputParameter(param);

        iActionGetChannelMap = new Action("GetChannelMap");
        param = new ParameterString("ChannelMap", allowedValues);
        iActionGetChannelMap.addOutputParameter(param);

        iActionGetAudioChannels = new Action("GetAudioChannels");
        param = new ParameterString("AudioChannels", allowedValues);
        iActionGetAudioChannels.addOutputParameter(param);

        iActionGetVersion = new Action("GetVersion");
        param = new ParameterUint("Version");
        iActionGetVersion.addOutputParameter(param);

        iActionApplyUpdate = new Action("ApplyUpdate");

        iActionPlayTestTrack = new Action("PlayTestTrack");
        param = new ParameterString("ChannelMap", allowedValues);
        iActionPlayTestTrack.addInputParameter(param);
        param = new ParameterString("Uri", allowedValues);
        iActionPlayTestTrack.addInputParameter(param);
        param = new ParameterString("Metadata", allowedValues);
        iActionPlayTestTrack.addInputParameter(param);

        iActionClearTestTrack = new Action("ClearTestTrack");

        iActionGetIntegratedDevicesPresent = new Action("GetIntegratedDevicesPresent");
        param = new ParameterBool("IntegratedDevicesPresent");
        iActionGetIntegratedDevicesPresent.addOutputParameter(param);

        iActionBootIntegratedDevicesToFallback = new Action("BootIntegratedDevicesToFallback");

        iDeviceListChanged = new PropertyChangeListener();
        iDeviceList = new PropertyString("DeviceList",
            new PropertyChangeListener() {
                public void notifyChange() {
                    deviceListPropertyChanged();
                }
            }
        );
        addProperty(iDeviceList);
        iSettingsAvailableChanged = new PropertyChangeListener();
        iSettingsAvailable = new PropertyBool("SettingsAvailable",
            new PropertyChangeListener() {
                public void notifyChange() {
                    settingsAvailablePropertyChanged();
                }
            }
        );
        addProperty(iSettingsAvailable);
        iSettingsChangedSeqChanged = new PropertyChangeListener();
        iSettingsChangedSeq = new PropertyString("SettingsChangedSeq",
            new PropertyChangeListener() {
                public void notifyChange() {
                    settingsChangedSeqPropertyChanged();
                }
            }
        );
        addProperty(iSettingsChangedSeq);
        iUpdateStatusChanged = new PropertyChangeListener();
        iUpdateStatus = new PropertyString("UpdateStatus",
            new PropertyChangeListener() {
                public void notifyChange() {
                    updateStatusPropertyChanged();
                }
            }
        );
        addProperty(iUpdateStatus);
        iChannelMapChanged = new PropertyChangeListener();
        iChannelMap = new PropertyString("ChannelMap",
            new PropertyChangeListener() {
                public void notifyChange() {
                    channelMapPropertyChanged();
                }
            }
        );
        addProperty(iChannelMap);
        iAudioChannelsChanged = new PropertyChangeListener();
        iAudioChannels = new PropertyString("AudioChannels",
            new PropertyChangeListener() {
                public void notifyChange() {
                    audioChannelsPropertyChanged();
                }
            }
        );
        addProperty(iAudioChannels);
        iVersionChanged = new PropertyChangeListener();
        iVersion = new PropertyUint("Version",
            new PropertyChangeListener() {
                public void notifyChange() {
                    versionPropertyChanged();
                }
            }
        );
        addProperty(iVersion);
        iIntegratedDevicesPresentChanged = new PropertyChangeListener();
        iIntegratedDevicesPresent = new PropertyBool("IntegratedDevicesPresent",
            new PropertyChangeListener() {
                public void notifyChange() {
                    integratedDevicesPresentPropertyChanged();
                }
            }
        );
        addProperty(iIntegratedDevicesPresent);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetDeviceList()
    {
        SyncGetDeviceListLinnCoUkExakt21 sync = new SyncGetDeviceListLinnCoUkExakt21(this);
        beginGetDeviceList(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getList();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDeviceList}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDeviceList(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDeviceList, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetDeviceList.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDeviceList} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDeviceList} method.
     * @return the result of the previously invoked action.
     */
    public String endGetDeviceList(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String list = Invocation.getOutputString(aAsyncHandle, index++);
        return list;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetDeviceSettings(String aDeviceId)
    {
        SyncGetDeviceSettingsLinnCoUkExakt21 sync = new SyncGetDeviceSettingsLinnCoUkExakt21(this);
        beginGetDeviceSettings(aDeviceId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSettings();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDeviceSettings}.
     * 
     * @param aDeviceId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDeviceSettings(String aDeviceId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDeviceSettings, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionGetDeviceSettings.getInputParameter(inIndex++), aDeviceId));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetDeviceSettings.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDeviceSettings} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDeviceSettings} method.
     * @return the result of the previously invoked action.
     */
    public String endGetDeviceSettings(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String settings = Invocation.getOutputString(aAsyncHandle, index++);
        return settings;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncGetSettingsAvailable()
    {
        SyncGetSettingsAvailableLinnCoUkExakt21 sync = new SyncGetSettingsAvailableLinnCoUkExakt21(this);
        beginGetSettingsAvailable(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSettingsAvailable();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetSettingsAvailable}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetSettingsAvailable(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetSettingsAvailable, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetSettingsAvailable.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetSettingsAvailable} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetSettingsAvailable} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetSettingsAvailable(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean settingsAvailable = Invocation.getOutputBool(aAsyncHandle, index++);
        return settingsAvailable;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetSettingsChangedSeq()
    {
        SyncGetSettingsChangedSeqLinnCoUkExakt21 sync = new SyncGetSettingsChangedSeqLinnCoUkExakt21(this);
        beginGetSettingsChangedSeq(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSettingsChangedSeq();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetSettingsChangedSeq}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetSettingsChangedSeq(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetSettingsChangedSeq, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetSettingsChangedSeq.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetSettingsChangedSeq} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetSettingsChangedSeq} method.
     * @return the result of the previously invoked action.
     */
    public String endGetSettingsChangedSeq(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String settingsChangedSeq = Invocation.getOutputString(aAsyncHandle, index++);
        return settingsChangedSeq;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncUpdate(String aManifest)
    {
        SyncUpdateLinnCoUkExakt21 sync = new SyncUpdateLinnCoUkExakt21(this);
        beginUpdate(aManifest, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endUpdate}.
     * 
     * @param aManifest
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginUpdate(String aManifest, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionUpdate, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionUpdate.getInputParameter(inIndex++), aManifest));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginUpdate} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginUpdate} method.
     */
    public void endUpdate(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncUpdateBlocking(String aManifest)
    {
        SyncUpdateBlockingLinnCoUkExakt21 sync = new SyncUpdateBlockingLinnCoUkExakt21(this);
        beginUpdateBlocking(aManifest, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endUpdateBlocking}.
     * 
     * @param aManifest
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginUpdateBlocking(String aManifest, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionUpdateBlocking, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionUpdateBlocking.getInputParameter(inIndex++), aManifest));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginUpdateBlocking} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginUpdateBlocking} method.
     */
    public void endUpdateBlocking(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetUpdateStatus()
    {
        SyncGetUpdateStatusLinnCoUkExakt21 sync = new SyncGetUpdateStatusLinnCoUkExakt21(this);
        beginGetUpdateStatus(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getUpdateStatus();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetUpdateStatus}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetUpdateStatus(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetUpdateStatus, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetUpdateStatus.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetUpdateStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetUpdateStatus} method.
     * @return the result of the previously invoked action.
     */
    public String endGetUpdateStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String updateStatus = Invocation.getOutputString(aAsyncHandle, index++);
        return updateStatus;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetChannelMap()
    {
        SyncGetChannelMapLinnCoUkExakt21 sync = new SyncGetChannelMapLinnCoUkExakt21(this);
        beginGetChannelMap(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getChannelMap();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetChannelMap}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetChannelMap(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetChannelMap, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetChannelMap.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetChannelMap} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetChannelMap} method.
     * @return the result of the previously invoked action.
     */
    public String endGetChannelMap(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String channelMap = Invocation.getOutputString(aAsyncHandle, index++);
        return channelMap;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetAudioChannels()
    {
        SyncGetAudioChannelsLinnCoUkExakt21 sync = new SyncGetAudioChannelsLinnCoUkExakt21(this);
        beginGetAudioChannels(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getAudioChannels();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetAudioChannels}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetAudioChannels(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetAudioChannels, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetAudioChannels.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetAudioChannels} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetAudioChannels} method.
     * @return the result of the previously invoked action.
     */
    public String endGetAudioChannels(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String audioChannels = Invocation.getOutputString(aAsyncHandle, index++);
        return audioChannels;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncGetVersion()
    {
        SyncGetVersionLinnCoUkExakt21 sync = new SyncGetVersionLinnCoUkExakt21(this);
        beginGetVersion(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getVersion();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetVersion}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetVersion(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetVersion, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetVersion.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetVersion} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetVersion} method.
     * @return the result of the previously invoked action.
     */
    public long endGetVersion(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long version = Invocation.getOutputUint(aAsyncHandle, index++);
        return version;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncApplyUpdate()
    {
        SyncApplyUpdateLinnCoUkExakt21 sync = new SyncApplyUpdateLinnCoUkExakt21(this);
        beginApplyUpdate(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endApplyUpdate}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginApplyUpdate(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionApplyUpdate, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginApplyUpdate} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginApplyUpdate} method.
     */
    public void endApplyUpdate(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncPlayTestTrack(String aChannelMap, String aUri, String aMetadata)
    {
        SyncPlayTestTrackLinnCoUkExakt21 sync = new SyncPlayTestTrackLinnCoUkExakt21(this);
        beginPlayTestTrack(aChannelMap, aUri, aMetadata, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endPlayTestTrack}.
     * 
     * @param aChannelMap
     * @param aUri
     * @param aMetadata
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginPlayTestTrack(String aChannelMap, String aUri, String aMetadata, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionPlayTestTrack, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionPlayTestTrack.getInputParameter(inIndex++), aChannelMap));
        invocation.addInput(new ArgumentString((ParameterString)iActionPlayTestTrack.getInputParameter(inIndex++), aUri));
        invocation.addInput(new ArgumentString((ParameterString)iActionPlayTestTrack.getInputParameter(inIndex++), aMetadata));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginPlayTestTrack} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginPlayTestTrack} method.
     */
    public void endPlayTestTrack(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncClearTestTrack()
    {
        SyncClearTestTrackLinnCoUkExakt21 sync = new SyncClearTestTrackLinnCoUkExakt21(this);
        beginClearTestTrack(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endClearTestTrack}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginClearTestTrack(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionClearTestTrack, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginClearTestTrack} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginClearTestTrack} method.
     */
    public void endClearTestTrack(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncGetIntegratedDevicesPresent()
    {
        SyncGetIntegratedDevicesPresentLinnCoUkExakt21 sync = new SyncGetIntegratedDevicesPresentLinnCoUkExakt21(this);
        beginGetIntegratedDevicesPresent(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getIntegratedDevicesPresent();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetIntegratedDevicesPresent}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetIntegratedDevicesPresent(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetIntegratedDevicesPresent, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetIntegratedDevicesPresent.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetIntegratedDevicesPresent} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetIntegratedDevicesPresent} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetIntegratedDevicesPresent(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean integratedDevicesPresent = Invocation.getOutputBool(aAsyncHandle, index++);
        return integratedDevicesPresent;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncBootIntegratedDevicesToFallback()
    {
        SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21 sync = new SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21(this);
        beginBootIntegratedDevicesToFallback(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endBootIntegratedDevicesToFallback}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginBootIntegratedDevicesToFallback(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionBootIntegratedDevicesToFallback, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginBootIntegratedDevicesToFallback} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginBootIntegratedDevicesToFallback} method.
     */
    public void endBootIntegratedDevicesToFallback(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the DeviceList state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21 instance will not overlap.
     *
     * @param aDeviceListChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyDeviceListChanged(IPropertyChangeListener aDeviceListChanged)
    {
        synchronized (iPropertyLock)
        {
            iDeviceListChanged = aDeviceListChanged;
        }
    }

    private void deviceListPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iDeviceListChanged);
        }
    }
    /**
     * Set a delegate to be run when the SettingsAvailable state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21 instance will not overlap.
     *
     * @param aSettingsAvailableChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertySettingsAvailableChanged(IPropertyChangeListener aSettingsAvailableChanged)
    {
        synchronized (iPropertyLock)
        {
            iSettingsAvailableChanged = aSettingsAvailableChanged;
        }
    }

    private void settingsAvailablePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iSettingsAvailableChanged);
        }
    }
    /**
     * Set a delegate to be run when the SettingsChangedSeq state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21 instance will not overlap.
     *
     * @param aSettingsChangedSeqChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertySettingsChangedSeqChanged(IPropertyChangeListener aSettingsChangedSeqChanged)
    {
        synchronized (iPropertyLock)
        {
            iSettingsChangedSeqChanged = aSettingsChangedSeqChanged;
        }
    }

    private void settingsChangedSeqPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iSettingsChangedSeqChanged);
        }
    }
    /**
     * Set a delegate to be run when the UpdateStatus state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21 instance will not overlap.
     *
     * @param aUpdateStatusChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyUpdateStatusChanged(IPropertyChangeListener aUpdateStatusChanged)
    {
        synchronized (iPropertyLock)
        {
            iUpdateStatusChanged = aUpdateStatusChanged;
        }
    }

    private void updateStatusPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iUpdateStatusChanged);
        }
    }
    /**
     * Set a delegate to be run when the ChannelMap state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21 instance will not overlap.
     *
     * @param aChannelMapChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyChannelMapChanged(IPropertyChangeListener aChannelMapChanged)
    {
        synchronized (iPropertyLock)
        {
            iChannelMapChanged = aChannelMapChanged;
        }
    }

    private void channelMapPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iChannelMapChanged);
        }
    }
    /**
     * Set a delegate to be run when the AudioChannels state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21 instance will not overlap.
     *
     * @param aAudioChannelsChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyAudioChannelsChanged(IPropertyChangeListener aAudioChannelsChanged)
    {
        synchronized (iPropertyLock)
        {
            iAudioChannelsChanged = aAudioChannelsChanged;
        }
    }

    private void audioChannelsPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iAudioChannelsChanged);
        }
    }
    /**
     * Set a delegate to be run when the Version state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21 instance will not overlap.
     *
     * @param aVersionChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyVersionChanged(IPropertyChangeListener aVersionChanged)
    {
        synchronized (iPropertyLock)
        {
            iVersionChanged = aVersionChanged;
        }
    }

    private void versionPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iVersionChanged);
        }
    }
    /**
     * Set a delegate to be run when the IntegratedDevicesPresent state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21 instance will not overlap.
     *
     * @param aIntegratedDevicesPresentChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyIntegratedDevicesPresentChanged(IPropertyChangeListener aIntegratedDevicesPresentChanged)
    {
        synchronized (iPropertyLock)
        {
            iIntegratedDevicesPresentChanged = aIntegratedDevicesPresentChanged;
        }
    }

    private void integratedDevicesPresentPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iIntegratedDevicesPresentChanged);
        }
    }

    /**
     * Query the value of the DeviceList property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the DeviceList property.
     */
    public String getPropertyDeviceList()
    {
        propertyReadLock();
        String val = iDeviceList.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the SettingsAvailable property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the SettingsAvailable property.
     */
    public boolean getPropertySettingsAvailable()
    {
        propertyReadLock();
        boolean val = iSettingsAvailable.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the SettingsChangedSeq property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the SettingsChangedSeq property.
     */
    public String getPropertySettingsChangedSeq()
    {
        propertyReadLock();
        String val = iSettingsChangedSeq.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the UpdateStatus property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the UpdateStatus property.
     */
    public String getPropertyUpdateStatus()
    {
        propertyReadLock();
        String val = iUpdateStatus.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the ChannelMap property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ChannelMap property.
     */
    public String getPropertyChannelMap()
    {
        propertyReadLock();
        String val = iChannelMap.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the AudioChannels property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the AudioChannels property.
     */
    public String getPropertyAudioChannels()
    {
        propertyReadLock();
        String val = iAudioChannels.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Version property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Version property.
     */
    public long getPropertyVersion()
    {
        propertyReadLock();
        long val = iVersion.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the IntegratedDevicesPresent property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the IntegratedDevicesPresent property.
     */
    public boolean getPropertyIntegratedDevicesPresent()
    {
        propertyReadLock();
        boolean val = iIntegratedDevicesPresent.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Dispose of this control point proxy.
     * Must be called for each class instance.
     * Must be called before <tt>Library.close()</tt>.
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            disposeProxy();
            iHandle = 0;
            iActionGetDeviceList.destroy();
            iActionGetDeviceSettings.destroy();
            iActionGetSettingsAvailable.destroy();
            iActionGetSettingsChangedSeq.destroy();
            iActionUpdate.destroy();
            iActionUpdateBlocking.destroy();
            iActionGetUpdateStatus.destroy();
            iActionGetChannelMap.destroy();
            iActionGetAudioChannels.destroy();
            iActionGetVersion.destroy();
            iActionApplyUpdate.destroy();
            iActionPlayTestTrack.destroy();
            iActionClearTestTrack.destroy();
            iActionGetIntegratedDevicesPresent.destroy();
            iActionBootIntegratedDevicesToFallback.destroy();
            iDeviceList.destroy();
            iSettingsAvailable.destroy();
            iSettingsChangedSeq.destroy();
            iUpdateStatus.destroy();
            iChannelMap.destroy();
            iAudioChannels.destroy();
            iVersion.destroy();
            iIntegratedDevicesPresent.destroy();
        }
    }
}

