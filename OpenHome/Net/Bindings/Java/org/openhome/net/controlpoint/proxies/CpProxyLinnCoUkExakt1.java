package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkExakt1.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkExakt1 extends ICpProxy
{
    public String syncDeviceList();
    public void beginDeviceList(ICpProxyListener aCallback);
    public String endDeviceList(long aAsyncHandle);
    public String syncDeviceSettings(String aDeviceId);
    public void beginDeviceSettings(String aDeviceId, ICpProxyListener aCallback);
    public String endDeviceSettings(long aAsyncHandle);
    public boolean syncSettingsAvailable();
    public void beginSettingsAvailable(ICpProxyListener aCallback);
    public boolean endSettingsAvailable(long aAsyncHandle);
    public long syncSettingsChangedCount();
    public void beginSettingsChangedCount(ICpProxyListener aCallback);
    public long endSettingsChangedCount(long aAsyncHandle);
    public void syncUpdate(String aManifestUri);
    public void beginUpdate(String aManifestUri, ICpProxyListener aCallback);
    public void endUpdate(long aAsyncHandle);
    public void syncUpdateBlocking(String aManifestUri);
    public void beginUpdateBlocking(String aManifestUri, ICpProxyListener aCallback);
    public void endUpdateBlocking(long aAsyncHandle);
    public GetUpdateStatus syncGetUpdateStatus();
    public void beginGetUpdateStatus(ICpProxyListener aCallback);
    public GetUpdateStatus endGetUpdateStatus(long aAsyncHandle);
    public String syncChannelMap();
    public void beginChannelMap(ICpProxyListener aCallback);
    public String endChannelMap(long aAsyncHandle);
    public void syncSetChannelMap(String aChannelMap);
    public void beginSetChannelMap(String aChannelMap, ICpProxyListener aCallback);
    public void endSetChannelMap(long aAsyncHandle);
    public String syncAudioChannels();
    public void beginAudioChannels(ICpProxyListener aCallback);
    public String endAudioChannels(long aAsyncHandle);
    public void syncSetAudioChannels(String aAudioChannels);
    public void beginSetAudioChannels(String aAudioChannels, ICpProxyListener aCallback);
    public void endSetAudioChannels(long aAsyncHandle);
    public long syncVersion();
    public void beginVersion(ICpProxyListener aCallback);
    public long endVersion(long aAsyncHandle);
    public void setPropertyDeviceListChanged(IPropertyChangeListener aDeviceListChanged);
    public String getPropertyDeviceList();
    public void setPropertySettingsAvailableChanged(IPropertyChangeListener aSettingsAvailableChanged);
    public boolean getPropertySettingsAvailable();
    public void setPropertySettingsChangedCountChanged(IPropertyChangeListener aSettingsChangedCountChanged);
    public long getPropertySettingsChangedCount();
    public void setPropertyUpdateStatusChanged(IPropertyChangeListener aUpdateStatusChanged);
    public String getPropertyUpdateStatus();
    public void setPropertyUpdateTotalPercentageChanged(IPropertyChangeListener aUpdateTotalPercentageChanged);
    public long getPropertyUpdateTotalPercentage();
    public void setPropertyUpdateTotalJobsChanged(IPropertyChangeListener aUpdateTotalJobsChanged);
    public long getPropertyUpdateTotalJobs();
    public void setPropertyUpdateJobChanged(IPropertyChangeListener aUpdateJobChanged);
    public long getPropertyUpdateJob();
    public void setPropertyUpdateJobPercentageChanged(IPropertyChangeListener aUpdateJobPercentageChanged);
    public long getPropertyUpdateJobPercentage();
    public void setPropertyUpdateJobDescriptionChanged(IPropertyChangeListener aUpdateJobDescriptionChanged);
    public String getPropertyUpdateJobDescription();
    public void setPropertyChannelMapChanged(IPropertyChangeListener aChannelMapChanged);
    public String getPropertyChannelMap();
    public void setPropertyAudioChannelsChanged(IPropertyChangeListener aAudioChannelsChanged);
    public String getPropertyAudioChannels();
    public void setPropertyVersionChanged(IPropertyChangeListener aVersionChanged);
    public long getPropertyVersion();
}

class SyncDeviceListLinnCoUkExakt1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt1 iService;
    private String iList;

    public SyncDeviceListLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
    {
        iService = aProxy;
    }
    public String getList()
    {
        return iList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endDeviceList(aAsyncHandle);
        
        iList = result;
    }
}

class SyncDeviceSettingsLinnCoUkExakt1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt1 iService;
    private String iSettings;

    public SyncDeviceSettingsLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
    {
        iService = aProxy;
    }
    public String getSettings()
    {
        return iSettings;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endDeviceSettings(aAsyncHandle);
        
        iSettings = result;
    }
}

class SyncSettingsAvailableLinnCoUkExakt1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt1 iService;
    private boolean iSettingsAvailable;

    public SyncSettingsAvailableLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getSettingsAvailable()
    {
        return iSettingsAvailable;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endSettingsAvailable(aAsyncHandle);
        
        iSettingsAvailable = result;
    }
}

class SyncSettingsChangedCountLinnCoUkExakt1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt1 iService;
    private long iSettingsChangedCount;

    public SyncSettingsChangedCountLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
    {
        iService = aProxy;
    }
    public long getSettingsChangedCount()
    {
        return iSettingsChangedCount;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endSettingsChangedCount(aAsyncHandle);
        
        iSettingsChangedCount = result;
    }
}

class SyncUpdateLinnCoUkExakt1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt1 iService;

    public SyncUpdateLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endUpdate(aAsyncHandle);
        
    }
}

class SyncUpdateBlockingLinnCoUkExakt1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt1 iService;

    public SyncUpdateBlockingLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endUpdateBlocking(aAsyncHandle);
        
    }
}

class SyncGetUpdateStatusLinnCoUkExakt1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt1 iService;
    private String iUpdateStatus;
    private long iUpdateTotalPercentage;
    private long iUpdateTotalJobs;
    private long iUpdateJob;
    private long iUpdateJobPercentage;
    private String iUpdateJobDescription;

    public SyncGetUpdateStatusLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
    {
        iService = aProxy;
    }
    public String getUpdateStatus()
    {
        return iUpdateStatus;
    }
    public long getUpdateTotalPercentage()
    {
        return iUpdateTotalPercentage;
    }
    public long getUpdateTotalJobs()
    {
        return iUpdateTotalJobs;
    }
    public long getUpdateJob()
    {
        return iUpdateJob;
    }
    public long getUpdateJobPercentage()
    {
        return iUpdateJobPercentage;
    }
    public String getUpdateJobDescription()
    {
        return iUpdateJobDescription;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetUpdateStatus result = iService.endGetUpdateStatus(aAsyncHandle);
        
        iUpdateStatus = result.getUpdateStatus();
        iUpdateTotalPercentage = result.getUpdateTotalPercentage();
        iUpdateTotalJobs = result.getUpdateTotalJobs();
        iUpdateJob = result.getUpdateJob();
        iUpdateJobPercentage = result.getUpdateJobPercentage();
        iUpdateJobDescription = result.getUpdateJobDescription();
    }
}

class SyncChannelMapLinnCoUkExakt1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt1 iService;
    private String iChannelMap;

    public SyncChannelMapLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
    {
        iService = aProxy;
    }
    public String getChannelMap()
    {
        return iChannelMap;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endChannelMap(aAsyncHandle);
        
        iChannelMap = result;
    }
}

class SyncSetChannelMapLinnCoUkExakt1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt1 iService;

    public SyncSetChannelMapLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetChannelMap(aAsyncHandle);
        
    }
}

class SyncAudioChannelsLinnCoUkExakt1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt1 iService;
    private String iAudioChannels;

    public SyncAudioChannelsLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
    {
        iService = aProxy;
    }
    public String getAudioChannels()
    {
        return iAudioChannels;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endAudioChannels(aAsyncHandle);
        
        iAudioChannels = result;
    }
}

class SyncSetAudioChannelsLinnCoUkExakt1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt1 iService;

    public SyncSetAudioChannelsLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetAudioChannels(aAsyncHandle);
        
    }
}

class SyncVersionLinnCoUkExakt1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExakt1 iService;
    private long iVersion;

    public SyncVersionLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
    {
        iService = aProxy;
    }
    public long getVersion()
    {
        return iVersion;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endVersion(aAsyncHandle);
        
        iVersion = result;
    }
}

/**
 * Proxy for the linn.co.uk:Exakt:1 UPnP service
 */
public class CpProxyLinnCoUkExakt1 extends CpProxy implements ICpProxyLinnCoUkExakt1
{

    public class GetUpdateStatus
    {
        private String iUpdateStatus;
        private long iUpdateTotalPercentage;
        private long iUpdateTotalJobs;
        private long iUpdateJob;
        private long iUpdateJobPercentage;
        private String iUpdateJobDescription;

        public GetUpdateStatus(
            String aUpdateStatus,
            long aUpdateTotalPercentage,
            long aUpdateTotalJobs,
            long aUpdateJob,
            long aUpdateJobPercentage,
            String aUpdateJobDescription
        )
        {
            iUpdateStatus = aUpdateStatus;
            iUpdateTotalPercentage = aUpdateTotalPercentage;
            iUpdateTotalJobs = aUpdateTotalJobs;
            iUpdateJob = aUpdateJob;
            iUpdateJobPercentage = aUpdateJobPercentage;
            iUpdateJobDescription = aUpdateJobDescription;
        }
        public String getUpdateStatus()
        {
            return iUpdateStatus;
        }
        public long getUpdateTotalPercentage()
        {
            return iUpdateTotalPercentage;
        }
        public long getUpdateTotalJobs()
        {
            return iUpdateTotalJobs;
        }
        public long getUpdateJob()
        {
            return iUpdateJob;
        }
        public long getUpdateJobPercentage()
        {
            return iUpdateJobPercentage;
        }
        public String getUpdateJobDescription()
        {
            return iUpdateJobDescription;
        }
    }

    private Action iActionDeviceList;
    private Action iActionDeviceSettings;
    private Action iActionSettingsAvailable;
    private Action iActionSettingsChangedCount;
    private Action iActionUpdate;
    private Action iActionUpdateBlocking;
    private Action iActionGetUpdateStatus;
    private Action iActionChannelMap;
    private Action iActionSetChannelMap;
    private Action iActionAudioChannels;
    private Action iActionSetAudioChannels;
    private Action iActionVersion;
    private PropertyString iDeviceList;
    private PropertyBool iSettingsAvailable;
    private PropertyUint iSettingsChangedCount;
    private PropertyString iUpdateStatus;
    private PropertyUint iUpdateTotalPercentage;
    private PropertyUint iUpdateTotalJobs;
    private PropertyUint iUpdateJob;
    private PropertyUint iUpdateJobPercentage;
    private PropertyString iUpdateJobDescription;
    private PropertyString iChannelMap;
    private PropertyString iAudioChannels;
    private PropertyUint iVersion;
    private IPropertyChangeListener iDeviceListChanged;
    private IPropertyChangeListener iSettingsAvailableChanged;
    private IPropertyChangeListener iSettingsChangedCountChanged;
    private IPropertyChangeListener iUpdateStatusChanged;
    private IPropertyChangeListener iUpdateTotalPercentageChanged;
    private IPropertyChangeListener iUpdateTotalJobsChanged;
    private IPropertyChangeListener iUpdateJobChanged;
    private IPropertyChangeListener iUpdateJobPercentageChanged;
    private IPropertyChangeListener iUpdateJobDescriptionChanged;
    private IPropertyChangeListener iChannelMapChanged;
    private IPropertyChangeListener iAudioChannelsChanged;
    private IPropertyChangeListener iVersionChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkExakt1(CpDevice aDevice)
    {
        super("linn-co-uk", "Exakt", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionDeviceList = new Action("DeviceList");
        param = new ParameterString("List", allowedValues);
        iActionDeviceList.addOutputParameter(param);

        iActionDeviceSettings = new Action("DeviceSettings");
        param = new ParameterString("DeviceId", allowedValues);
        iActionDeviceSettings.addInputParameter(param);
        param = new ParameterString("Settings", allowedValues);
        iActionDeviceSettings.addOutputParameter(param);

        iActionSettingsAvailable = new Action("SettingsAvailable");
        param = new ParameterBool("SettingsAvailable");
        iActionSettingsAvailable.addOutputParameter(param);

        iActionSettingsChangedCount = new Action("SettingsChangedCount");
        param = new ParameterUint("SettingsChangedCount");
        iActionSettingsChangedCount.addOutputParameter(param);

        iActionUpdate = new Action("Update");
        param = new ParameterString("ManifestUri", allowedValues);
        iActionUpdate.addInputParameter(param);

        iActionUpdateBlocking = new Action("UpdateBlocking");
        param = new ParameterString("ManifestUri", allowedValues);
        iActionUpdateBlocking.addInputParameter(param);

        iActionGetUpdateStatus = new Action("GetUpdateStatus");
        param = new ParameterString("UpdateStatus", allowedValues);
        iActionGetUpdateStatus.addOutputParameter(param);
        param = new ParameterUint("UpdateTotalPercentage");
        iActionGetUpdateStatus.addOutputParameter(param);
        param = new ParameterUint("UpdateTotalJobs");
        iActionGetUpdateStatus.addOutputParameter(param);
        param = new ParameterUint("UpdateJob");
        iActionGetUpdateStatus.addOutputParameter(param);
        param = new ParameterUint("UpdateJobPercentage");
        iActionGetUpdateStatus.addOutputParameter(param);
        param = new ParameterString("UpdateJobDescription", allowedValues);
        iActionGetUpdateStatus.addOutputParameter(param);

        iActionChannelMap = new Action("ChannelMap");
        param = new ParameterString("ChannelMap", allowedValues);
        iActionChannelMap.addOutputParameter(param);

        iActionSetChannelMap = new Action("SetChannelMap");
        param = new ParameterString("ChannelMap", allowedValues);
        iActionSetChannelMap.addInputParameter(param);

        iActionAudioChannels = new Action("AudioChannels");
        param = new ParameterString("AudioChannels", allowedValues);
        iActionAudioChannels.addOutputParameter(param);

        iActionSetAudioChannels = new Action("SetAudioChannels");
        param = new ParameterString("AudioChannels", allowedValues);
        iActionSetAudioChannels.addInputParameter(param);

        iActionVersion = new Action("Version");
        param = new ParameterUint("Version");
        iActionVersion.addOutputParameter(param);

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
        iSettingsChangedCountChanged = new PropertyChangeListener();
        iSettingsChangedCount = new PropertyUint("SettingsChangedCount",
            new PropertyChangeListener() {
                public void notifyChange() {
                    settingsChangedCountPropertyChanged();
                }
            }
        );
        addProperty(iSettingsChangedCount);
        iUpdateStatusChanged = new PropertyChangeListener();
        iUpdateStatus = new PropertyString("UpdateStatus",
            new PropertyChangeListener() {
                public void notifyChange() {
                    updateStatusPropertyChanged();
                }
            }
        );
        addProperty(iUpdateStatus);
        iUpdateTotalPercentageChanged = new PropertyChangeListener();
        iUpdateTotalPercentage = new PropertyUint("UpdateTotalPercentage",
            new PropertyChangeListener() {
                public void notifyChange() {
                    updateTotalPercentagePropertyChanged();
                }
            }
        );
        addProperty(iUpdateTotalPercentage);
        iUpdateTotalJobsChanged = new PropertyChangeListener();
        iUpdateTotalJobs = new PropertyUint("UpdateTotalJobs",
            new PropertyChangeListener() {
                public void notifyChange() {
                    updateTotalJobsPropertyChanged();
                }
            }
        );
        addProperty(iUpdateTotalJobs);
        iUpdateJobChanged = new PropertyChangeListener();
        iUpdateJob = new PropertyUint("UpdateJob",
            new PropertyChangeListener() {
                public void notifyChange() {
                    updateJobPropertyChanged();
                }
            }
        );
        addProperty(iUpdateJob);
        iUpdateJobPercentageChanged = new PropertyChangeListener();
        iUpdateJobPercentage = new PropertyUint("UpdateJobPercentage",
            new PropertyChangeListener() {
                public void notifyChange() {
                    updateJobPercentagePropertyChanged();
                }
            }
        );
        addProperty(iUpdateJobPercentage);
        iUpdateJobDescriptionChanged = new PropertyChangeListener();
        iUpdateJobDescription = new PropertyString("UpdateJobDescription",
            new PropertyChangeListener() {
                public void notifyChange() {
                    updateJobDescriptionPropertyChanged();
                }
            }
        );
        addProperty(iUpdateJobDescription);
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
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncDeviceList()
    {
        SyncDeviceListLinnCoUkExakt1 sync = new SyncDeviceListLinnCoUkExakt1(this);
        beginDeviceList(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getList();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endDeviceList}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginDeviceList(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionDeviceList, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionDeviceList.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginDeviceList} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginDeviceList} method.
     * @return the result of the previously invoked action.
     */
    public String endDeviceList(long aAsyncHandle)
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
    public String syncDeviceSettings(String aDeviceId)
    {
        SyncDeviceSettingsLinnCoUkExakt1 sync = new SyncDeviceSettingsLinnCoUkExakt1(this);
        beginDeviceSettings(aDeviceId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSettings();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endDeviceSettings}.
     * 
     * @param aDeviceId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginDeviceSettings(String aDeviceId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionDeviceSettings, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionDeviceSettings.getInputParameter(inIndex++), aDeviceId));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionDeviceSettings.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginDeviceSettings} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginDeviceSettings} method.
     * @return the result of the previously invoked action.
     */
    public String endDeviceSettings(long aAsyncHandle)
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
    public boolean syncSettingsAvailable()
    {
        SyncSettingsAvailableLinnCoUkExakt1 sync = new SyncSettingsAvailableLinnCoUkExakt1(this);
        beginSettingsAvailable(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSettingsAvailable();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSettingsAvailable}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSettingsAvailable(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSettingsAvailable, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionSettingsAvailable.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSettingsAvailable} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSettingsAvailable} method.
     * @return the result of the previously invoked action.
     */
    public boolean endSettingsAvailable(long aAsyncHandle)
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
    public long syncSettingsChangedCount()
    {
        SyncSettingsChangedCountLinnCoUkExakt1 sync = new SyncSettingsChangedCountLinnCoUkExakt1(this);
        beginSettingsChangedCount(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSettingsChangedCount();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSettingsChangedCount}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSettingsChangedCount(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSettingsChangedCount, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionSettingsChangedCount.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSettingsChangedCount} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSettingsChangedCount} method.
     * @return the result of the previously invoked action.
     */
    public long endSettingsChangedCount(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long settingsChangedCount = Invocation.getOutputUint(aAsyncHandle, index++);
        return settingsChangedCount;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncUpdate(String aManifestUri)
    {
        SyncUpdateLinnCoUkExakt1 sync = new SyncUpdateLinnCoUkExakt1(this);
        beginUpdate(aManifestUri, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endUpdate}.
     * 
     * @param aManifestUri
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginUpdate(String aManifestUri, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionUpdate, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionUpdate.getInputParameter(inIndex++), aManifestUri));
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
    public void syncUpdateBlocking(String aManifestUri)
    {
        SyncUpdateBlockingLinnCoUkExakt1 sync = new SyncUpdateBlockingLinnCoUkExakt1(this);
        beginUpdateBlocking(aManifestUri, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endUpdateBlocking}.
     * 
     * @param aManifestUri
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginUpdateBlocking(String aManifestUri, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionUpdateBlocking, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionUpdateBlocking.getInputParameter(inIndex++), aManifestUri));
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
    public GetUpdateStatus syncGetUpdateStatus()
    {
        SyncGetUpdateStatusLinnCoUkExakt1 sync = new SyncGetUpdateStatusLinnCoUkExakt1(this);
        beginGetUpdateStatus(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetUpdateStatus(
            sync.getUpdateStatus(),
            sync.getUpdateTotalPercentage(),
            sync.getUpdateTotalJobs(),
            sync.getUpdateJob(),
            sync.getUpdateJobPercentage(),
            sync.getUpdateJobDescription()
        );
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
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetUpdateStatus.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetUpdateStatus.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetUpdateStatus.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetUpdateStatus.getOutputParameter(outIndex++)));
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
    public GetUpdateStatus endGetUpdateStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String updateStatus = Invocation.getOutputString(aAsyncHandle, index++);
        long updateTotalPercentage = Invocation.getOutputUint(aAsyncHandle, index++);
        long updateTotalJobs = Invocation.getOutputUint(aAsyncHandle, index++);
        long updateJob = Invocation.getOutputUint(aAsyncHandle, index++);
        long updateJobPercentage = Invocation.getOutputUint(aAsyncHandle, index++);
        String updateJobDescription = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetUpdateStatus(
            updateStatus,
            updateTotalPercentage,
            updateTotalJobs,
            updateJob,
            updateJobPercentage,
            updateJobDescription
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncChannelMap()
    {
        SyncChannelMapLinnCoUkExakt1 sync = new SyncChannelMapLinnCoUkExakt1(this);
        beginChannelMap(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getChannelMap();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endChannelMap}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginChannelMap(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionChannelMap, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionChannelMap.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginChannelMap} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginChannelMap} method.
     * @return the result of the previously invoked action.
     */
    public String endChannelMap(long aAsyncHandle)
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
     */
    public void syncSetChannelMap(String aChannelMap)
    {
        SyncSetChannelMapLinnCoUkExakt1 sync = new SyncSetChannelMapLinnCoUkExakt1(this);
        beginSetChannelMap(aChannelMap, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetChannelMap}.
     * 
     * @param aChannelMap
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetChannelMap(String aChannelMap, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetChannelMap, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetChannelMap.getInputParameter(inIndex++), aChannelMap));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetChannelMap} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetChannelMap} method.
     */
    public void endSetChannelMap(long aAsyncHandle)
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
    public String syncAudioChannels()
    {
        SyncAudioChannelsLinnCoUkExakt1 sync = new SyncAudioChannelsLinnCoUkExakt1(this);
        beginAudioChannels(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getAudioChannels();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endAudioChannels}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginAudioChannels(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionAudioChannels, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionAudioChannels.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginAudioChannels} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginAudioChannels} method.
     * @return the result of the previously invoked action.
     */
    public String endAudioChannels(long aAsyncHandle)
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
     */
    public void syncSetAudioChannels(String aAudioChannels)
    {
        SyncSetAudioChannelsLinnCoUkExakt1 sync = new SyncSetAudioChannelsLinnCoUkExakt1(this);
        beginSetAudioChannels(aAudioChannels, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetAudioChannels}.
     * 
     * @param aAudioChannels
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetAudioChannels(String aAudioChannels, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetAudioChannels, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetAudioChannels.getInputParameter(inIndex++), aAudioChannels));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetAudioChannels} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetAudioChannels} method.
     */
    public void endSetAudioChannels(long aAsyncHandle)
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
    public long syncVersion()
    {
        SyncVersionLinnCoUkExakt1 sync = new SyncVersionLinnCoUkExakt1(this);
        beginVersion(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getVersion();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endVersion}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginVersion(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionVersion, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionVersion.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginVersion} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginVersion} method.
     * @return the result of the previously invoked action.
     */
    public long endVersion(long aAsyncHandle)
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
     * Set a delegate to be run when the DeviceList state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1 instance will not overlap.
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
     * CpProxyLinnCoUkExakt1 instance will not overlap.
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
     * Set a delegate to be run when the SettingsChangedCount state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1 instance will not overlap.
     *
     * @param aSettingsChangedCountChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertySettingsChangedCountChanged(IPropertyChangeListener aSettingsChangedCountChanged)
    {
        synchronized (iPropertyLock)
        {
            iSettingsChangedCountChanged = aSettingsChangedCountChanged;
        }
    }

    private void settingsChangedCountPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iSettingsChangedCountChanged);
        }
    }
    /**
     * Set a delegate to be run when the UpdateStatus state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1 instance will not overlap.
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
     * Set a delegate to be run when the UpdateTotalPercentage state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1 instance will not overlap.
     *
     * @param aUpdateTotalPercentageChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyUpdateTotalPercentageChanged(IPropertyChangeListener aUpdateTotalPercentageChanged)
    {
        synchronized (iPropertyLock)
        {
            iUpdateTotalPercentageChanged = aUpdateTotalPercentageChanged;
        }
    }

    private void updateTotalPercentagePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iUpdateTotalPercentageChanged);
        }
    }
    /**
     * Set a delegate to be run when the UpdateTotalJobs state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1 instance will not overlap.
     *
     * @param aUpdateTotalJobsChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyUpdateTotalJobsChanged(IPropertyChangeListener aUpdateTotalJobsChanged)
    {
        synchronized (iPropertyLock)
        {
            iUpdateTotalJobsChanged = aUpdateTotalJobsChanged;
        }
    }

    private void updateTotalJobsPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iUpdateTotalJobsChanged);
        }
    }
    /**
     * Set a delegate to be run when the UpdateJob state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1 instance will not overlap.
     *
     * @param aUpdateJobChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyUpdateJobChanged(IPropertyChangeListener aUpdateJobChanged)
    {
        synchronized (iPropertyLock)
        {
            iUpdateJobChanged = aUpdateJobChanged;
        }
    }

    private void updateJobPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iUpdateJobChanged);
        }
    }
    /**
     * Set a delegate to be run when the UpdateJobPercentage state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1 instance will not overlap.
     *
     * @param aUpdateJobPercentageChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyUpdateJobPercentageChanged(IPropertyChangeListener aUpdateJobPercentageChanged)
    {
        synchronized (iPropertyLock)
        {
            iUpdateJobPercentageChanged = aUpdateJobPercentageChanged;
        }
    }

    private void updateJobPercentagePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iUpdateJobPercentageChanged);
        }
    }
    /**
     * Set a delegate to be run when the UpdateJobDescription state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1 instance will not overlap.
     *
     * @param aUpdateJobDescriptionChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyUpdateJobDescriptionChanged(IPropertyChangeListener aUpdateJobDescriptionChanged)
    {
        synchronized (iPropertyLock)
        {
            iUpdateJobDescriptionChanged = aUpdateJobDescriptionChanged;
        }
    }

    private void updateJobDescriptionPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iUpdateJobDescriptionChanged);
        }
    }
    /**
     * Set a delegate to be run when the ChannelMap state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1 instance will not overlap.
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
     * CpProxyLinnCoUkExakt1 instance will not overlap.
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
     * CpProxyLinnCoUkExakt1 instance will not overlap.
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
     * Query the value of the SettingsChangedCount property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the SettingsChangedCount property.
     */
    public long getPropertySettingsChangedCount()
    {
        propertyReadLock();
        long val = iSettingsChangedCount.getValue();
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
     * Query the value of the UpdateTotalPercentage property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the UpdateTotalPercentage property.
     */
    public long getPropertyUpdateTotalPercentage()
    {
        propertyReadLock();
        long val = iUpdateTotalPercentage.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the UpdateTotalJobs property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the UpdateTotalJobs property.
     */
    public long getPropertyUpdateTotalJobs()
    {
        propertyReadLock();
        long val = iUpdateTotalJobs.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the UpdateJob property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the UpdateJob property.
     */
    public long getPropertyUpdateJob()
    {
        propertyReadLock();
        long val = iUpdateJob.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the UpdateJobPercentage property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the UpdateJobPercentage property.
     */
    public long getPropertyUpdateJobPercentage()
    {
        propertyReadLock();
        long val = iUpdateJobPercentage.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the UpdateJobDescription property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the UpdateJobDescription property.
     */
    public String getPropertyUpdateJobDescription()
    {
        propertyReadLock();
        String val = iUpdateJobDescription.getValue();
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
            iActionDeviceList.destroy();
            iActionDeviceSettings.destroy();
            iActionSettingsAvailable.destroy();
            iActionSettingsChangedCount.destroy();
            iActionUpdate.destroy();
            iActionUpdateBlocking.destroy();
            iActionGetUpdateStatus.destroy();
            iActionChannelMap.destroy();
            iActionSetChannelMap.destroy();
            iActionAudioChannels.destroy();
            iActionSetAudioChannels.destroy();
            iActionVersion.destroy();
            iDeviceList.destroy();
            iSettingsAvailable.destroy();
            iSettingsChangedCount.destroy();
            iUpdateStatus.destroy();
            iUpdateTotalPercentage.destroy();
            iUpdateTotalJobs.destroy();
            iUpdateJob.destroy();
            iUpdateJobPercentage.destroy();
            iUpdateJobDescription.destroy();
            iChannelMap.destroy();
            iAudioChannels.destroy();
            iVersion.destroy();
        }
    }
}

