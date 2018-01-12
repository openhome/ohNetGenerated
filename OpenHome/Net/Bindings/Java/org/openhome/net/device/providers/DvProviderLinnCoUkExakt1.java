package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkExakt1
{

    /**
     * Set the value of the DeviceList property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyDeviceList(String aValue);

    /**
     * Get a copy of the value of the DeviceList property
     *
     * @return value of the DeviceList property.
     */
    public String getPropertyDeviceList();

    /**
     * Set the value of the SettingsAvailable property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertySettingsAvailable(boolean aValue);

    /**
     * Get a copy of the value of the SettingsAvailable property
     *
     * @return value of the SettingsAvailable property.
     */
    public boolean getPropertySettingsAvailable();

    /**
     * Set the value of the SettingsChangedCount property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertySettingsChangedCount(long aValue);

    /**
     * Get a copy of the value of the SettingsChangedCount property
     *
     * @return value of the SettingsChangedCount property.
     */
    public long getPropertySettingsChangedCount();

    /**
     * Set the value of the UpdateStatus property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyUpdateStatus(String aValue);

    /**
     * Get a copy of the value of the UpdateStatus property
     *
     * @return value of the UpdateStatus property.
     */
    public String getPropertyUpdateStatus();

    /**
     * Set the value of the UpdateTotalPercentage property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyUpdateTotalPercentage(long aValue);

    /**
     * Get a copy of the value of the UpdateTotalPercentage property
     *
     * @return value of the UpdateTotalPercentage property.
     */
    public long getPropertyUpdateTotalPercentage();

    /**
     * Set the value of the UpdateTotalJobs property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyUpdateTotalJobs(long aValue);

    /**
     * Get a copy of the value of the UpdateTotalJobs property
     *
     * @return value of the UpdateTotalJobs property.
     */
    public long getPropertyUpdateTotalJobs();

    /**
     * Set the value of the UpdateJob property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyUpdateJob(long aValue);

    /**
     * Get a copy of the value of the UpdateJob property
     *
     * @return value of the UpdateJob property.
     */
    public long getPropertyUpdateJob();

    /**
     * Set the value of the UpdateJobPercentage property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyUpdateJobPercentage(long aValue);

    /**
     * Get a copy of the value of the UpdateJobPercentage property
     *
     * @return value of the UpdateJobPercentage property.
     */
    public long getPropertyUpdateJobPercentage();

    /**
     * Set the value of the UpdateJobDescription property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyUpdateJobDescription(String aValue);

    /**
     * Get a copy of the value of the UpdateJobDescription property
     *
     * @return value of the UpdateJobDescription property.
     */
    public String getPropertyUpdateJobDescription();

    /**
     * Set the value of the ChannelMap property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyChannelMap(String aValue);

    /**
     * Get a copy of the value of the ChannelMap property
     *
     * @return value of the ChannelMap property.
     */
    public String getPropertyChannelMap();

    /**
     * Set the value of the AudioChannels property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyAudioChannels(String aValue);

    /**
     * Get a copy of the value of the AudioChannels property
     *
     * @return value of the AudioChannels property.
     */
    public String getPropertyAudioChannels();

    /**
     * Set the value of the Version property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyVersion(long aValue);

    /**
     * Get a copy of the value of the Version property
     *
     * @return value of the Version property.
     */
    public long getPropertyVersion();
        
}

/**
 * Provider for the linn.co.uk:Exakt:1 UPnP service.
 */
public class DvProviderLinnCoUkExakt1 extends DvProvider implements IDvProviderLinnCoUkExakt1
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

    private IDvInvocationListener iDelegateDeviceList;
    private IDvInvocationListener iDelegateDeviceSettings;
    private IDvInvocationListener iDelegateSettingsAvailable;
    private IDvInvocationListener iDelegateSettingsChangedCount;
    private IDvInvocationListener iDelegateUpdate;
    private IDvInvocationListener iDelegateUpdateBlocking;
    private IDvInvocationListener iDelegateGetUpdateStatus;
    private IDvInvocationListener iDelegateChannelMap;
    private IDvInvocationListener iDelegateSetChannelMap;
    private IDvInvocationListener iDelegateAudioChannels;
    private IDvInvocationListener iDelegateSetAudioChannels;
    private IDvInvocationListener iDelegateVersion;
    private PropertyString iPropertyDeviceList;
    private PropertyBool iPropertySettingsAvailable;
    private PropertyUint iPropertySettingsChangedCount;
    private PropertyString iPropertyUpdateStatus;
    private PropertyUint iPropertyUpdateTotalPercentage;
    private PropertyUint iPropertyUpdateTotalJobs;
    private PropertyUint iPropertyUpdateJob;
    private PropertyUint iPropertyUpdateJobPercentage;
    private PropertyString iPropertyUpdateJobDescription;
    private PropertyString iPropertyChannelMap;
    private PropertyString iPropertyAudioChannels;
    private PropertyUint iPropertyVersion;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkExakt1(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "Exakt", 1);
    }

    /**
     * Enable the DeviceList property.
     */
    public void enablePropertyDeviceList()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList", allowedValues));
        addProperty(iPropertyDeviceList);
    }

    /**
     * Enable the SettingsAvailable property.
     */
    public void enablePropertySettingsAvailable()
    {
        iPropertySettingsAvailable = new PropertyBool(new ParameterBool("SettingsAvailable"));
        addProperty(iPropertySettingsAvailable);
    }

    /**
     * Enable the SettingsChangedCount property.
     */
    public void enablePropertySettingsChangedCount()
    {
        iPropertySettingsChangedCount = new PropertyUint(new ParameterUint("SettingsChangedCount"));
        addProperty(iPropertySettingsChangedCount);
    }

    /**
     * Enable the UpdateStatus property.
     */
    public void enablePropertyUpdateStatus()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyUpdateStatus = new PropertyString(new ParameterString("UpdateStatus", allowedValues));
        addProperty(iPropertyUpdateStatus);
    }

    /**
     * Enable the UpdateTotalPercentage property.
     */
    public void enablePropertyUpdateTotalPercentage()
    {
        iPropertyUpdateTotalPercentage = new PropertyUint(new ParameterUint("UpdateTotalPercentage"));
        addProperty(iPropertyUpdateTotalPercentage);
    }

    /**
     * Enable the UpdateTotalJobs property.
     */
    public void enablePropertyUpdateTotalJobs()
    {
        iPropertyUpdateTotalJobs = new PropertyUint(new ParameterUint("UpdateTotalJobs"));
        addProperty(iPropertyUpdateTotalJobs);
    }

    /**
     * Enable the UpdateJob property.
     */
    public void enablePropertyUpdateJob()
    {
        iPropertyUpdateJob = new PropertyUint(new ParameterUint("UpdateJob"));
        addProperty(iPropertyUpdateJob);
    }

    /**
     * Enable the UpdateJobPercentage property.
     */
    public void enablePropertyUpdateJobPercentage()
    {
        iPropertyUpdateJobPercentage = new PropertyUint(new ParameterUint("UpdateJobPercentage"));
        addProperty(iPropertyUpdateJobPercentage);
    }

    /**
     * Enable the UpdateJobDescription property.
     */
    public void enablePropertyUpdateJobDescription()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyUpdateJobDescription = new PropertyString(new ParameterString("UpdateJobDescription", allowedValues));
        addProperty(iPropertyUpdateJobDescription);
    }

    /**
     * Enable the ChannelMap property.
     */
    public void enablePropertyChannelMap()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap", allowedValues));
        addProperty(iPropertyChannelMap);
    }

    /**
     * Enable the AudioChannels property.
     */
    public void enablePropertyAudioChannels()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels", allowedValues));
        addProperty(iPropertyAudioChannels);
    }

    /**
     * Enable the Version property.
     */
    public void enablePropertyVersion()
    {
        iPropertyVersion = new PropertyUint(new ParameterUint("Version"));
        addProperty(iPropertyVersion);
    }

    /**
     * Set the value of the DeviceList property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyDeviceList(String aValue)
    {
        return setPropertyString(iPropertyDeviceList, aValue);
    }

    /**
     * Get a copy of the value of the DeviceList property
     *
     * @return  value of the DeviceList property.
     */
    public String getPropertyDeviceList()
    {
        return iPropertyDeviceList.getValue();
    }

    /**
     * Set the value of the SettingsAvailable property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertySettingsAvailable(boolean aValue)
    {
        return setPropertyBool(iPropertySettingsAvailable, aValue);
    }

    /**
     * Get a copy of the value of the SettingsAvailable property
     *
     * @return  value of the SettingsAvailable property.
     */
    public boolean getPropertySettingsAvailable()
    {
        return iPropertySettingsAvailable.getValue();
    }

    /**
     * Set the value of the SettingsChangedCount property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertySettingsChangedCount(long aValue)
    {
        return setPropertyUint(iPropertySettingsChangedCount, aValue);
    }

    /**
     * Get a copy of the value of the SettingsChangedCount property
     *
     * @return  value of the SettingsChangedCount property.
     */
    public long getPropertySettingsChangedCount()
    {
        return iPropertySettingsChangedCount.getValue();
    }

    /**
     * Set the value of the UpdateStatus property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyUpdateStatus(String aValue)
    {
        return setPropertyString(iPropertyUpdateStatus, aValue);
    }

    /**
     * Get a copy of the value of the UpdateStatus property
     *
     * @return  value of the UpdateStatus property.
     */
    public String getPropertyUpdateStatus()
    {
        return iPropertyUpdateStatus.getValue();
    }

    /**
     * Set the value of the UpdateTotalPercentage property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyUpdateTotalPercentage(long aValue)
    {
        return setPropertyUint(iPropertyUpdateTotalPercentage, aValue);
    }

    /**
     * Get a copy of the value of the UpdateTotalPercentage property
     *
     * @return  value of the UpdateTotalPercentage property.
     */
    public long getPropertyUpdateTotalPercentage()
    {
        return iPropertyUpdateTotalPercentage.getValue();
    }

    /**
     * Set the value of the UpdateTotalJobs property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyUpdateTotalJobs(long aValue)
    {
        return setPropertyUint(iPropertyUpdateTotalJobs, aValue);
    }

    /**
     * Get a copy of the value of the UpdateTotalJobs property
     *
     * @return  value of the UpdateTotalJobs property.
     */
    public long getPropertyUpdateTotalJobs()
    {
        return iPropertyUpdateTotalJobs.getValue();
    }

    /**
     * Set the value of the UpdateJob property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyUpdateJob(long aValue)
    {
        return setPropertyUint(iPropertyUpdateJob, aValue);
    }

    /**
     * Get a copy of the value of the UpdateJob property
     *
     * @return  value of the UpdateJob property.
     */
    public long getPropertyUpdateJob()
    {
        return iPropertyUpdateJob.getValue();
    }

    /**
     * Set the value of the UpdateJobPercentage property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyUpdateJobPercentage(long aValue)
    {
        return setPropertyUint(iPropertyUpdateJobPercentage, aValue);
    }

    /**
     * Get a copy of the value of the UpdateJobPercentage property
     *
     * @return  value of the UpdateJobPercentage property.
     */
    public long getPropertyUpdateJobPercentage()
    {
        return iPropertyUpdateJobPercentage.getValue();
    }

    /**
     * Set the value of the UpdateJobDescription property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyUpdateJobDescription(String aValue)
    {
        return setPropertyString(iPropertyUpdateJobDescription, aValue);
    }

    /**
     * Get a copy of the value of the UpdateJobDescription property
     *
     * @return  value of the UpdateJobDescription property.
     */
    public String getPropertyUpdateJobDescription()
    {
        return iPropertyUpdateJobDescription.getValue();
    }

    /**
     * Set the value of the ChannelMap property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyChannelMap(String aValue)
    {
        return setPropertyString(iPropertyChannelMap, aValue);
    }

    /**
     * Get a copy of the value of the ChannelMap property
     *
     * @return  value of the ChannelMap property.
     */
    public String getPropertyChannelMap()
    {
        return iPropertyChannelMap.getValue();
    }

    /**
     * Set the value of the AudioChannels property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyAudioChannels(String aValue)
    {
        return setPropertyString(iPropertyAudioChannels, aValue);
    }

    /**
     * Get a copy of the value of the AudioChannels property
     *
     * @return  value of the AudioChannels property.
     */
    public String getPropertyAudioChannels()
    {
        return iPropertyAudioChannels.getValue();
    }

    /**
     * Set the value of the Version property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyVersion(long aValue)
    {
        return setPropertyUint(iPropertyVersion, aValue);
    }

    /**
     * Get a copy of the value of the Version property
     *
     * @return  value of the Version property.
     */
    public long getPropertyVersion()
    {
        return iPropertyVersion.getValue();
    }

    /**
     * Signal that the action DeviceList is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * DeviceList must be overridden if this is called.
     */      
    protected void enableActionDeviceList()
    {
        Action action = new Action("DeviceList");
        action.addOutputParameter(new ParameterRelated("List", iPropertyDeviceList));
        iDelegateDeviceList = new DoDeviceList();
        enableAction(action, iDelegateDeviceList);
    }

    /**
     * Signal that the action DeviceSettings is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * DeviceSettings must be overridden if this is called.
     */      
    protected void enableActionDeviceSettings()
    {
        Action action = new Action("DeviceSettings");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("DeviceId", allowedValues));
        action.addOutputParameter(new ParameterString("Settings", allowedValues));
        iDelegateDeviceSettings = new DoDeviceSettings();
        enableAction(action, iDelegateDeviceSettings);
    }

    /**
     * Signal that the action SettingsAvailable is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SettingsAvailable must be overridden if this is called.
     */      
    protected void enableActionSettingsAvailable()
    {
        Action action = new Action("SettingsAvailable");
        action.addOutputParameter(new ParameterRelated("SettingsAvailable", iPropertySettingsAvailable));
        iDelegateSettingsAvailable = new DoSettingsAvailable();
        enableAction(action, iDelegateSettingsAvailable);
    }

    /**
     * Signal that the action SettingsChangedCount is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SettingsChangedCount must be overridden if this is called.
     */      
    protected void enableActionSettingsChangedCount()
    {
        Action action = new Action("SettingsChangedCount");
        action.addOutputParameter(new ParameterRelated("SettingsChangedCount", iPropertySettingsChangedCount));
        iDelegateSettingsChangedCount = new DoSettingsChangedCount();
        enableAction(action, iDelegateSettingsChangedCount);
    }

    /**
     * Signal that the action Update is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Update must be overridden if this is called.
     */      
    protected void enableActionUpdate()
    {
        Action action = new Action("Update");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ManifestUri", allowedValues));
        iDelegateUpdate = new DoUpdate();
        enableAction(action, iDelegateUpdate);
    }

    /**
     * Signal that the action UpdateBlocking is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * UpdateBlocking must be overridden if this is called.
     */      
    protected void enableActionUpdateBlocking()
    {
        Action action = new Action("UpdateBlocking");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ManifestUri", allowedValues));
        iDelegateUpdateBlocking = new DoUpdateBlocking();
        enableAction(action, iDelegateUpdateBlocking);
    }

    /**
     * Signal that the action GetUpdateStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetUpdateStatus must be overridden if this is called.
     */      
    protected void enableActionGetUpdateStatus()
    {
        Action action = new Action("GetUpdateStatus");
        action.addOutputParameter(new ParameterRelated("UpdateStatus", iPropertyUpdateStatus));
        action.addOutputParameter(new ParameterRelated("UpdateTotalPercentage", iPropertyUpdateTotalPercentage));
        action.addOutputParameter(new ParameterRelated("UpdateTotalJobs", iPropertyUpdateTotalJobs));
        action.addOutputParameter(new ParameterRelated("UpdateJob", iPropertyUpdateJob));
        action.addOutputParameter(new ParameterRelated("UpdateJobPercentage", iPropertyUpdateJobPercentage));
        action.addOutputParameter(new ParameterRelated("UpdateJobDescription", iPropertyUpdateJobDescription));
        iDelegateGetUpdateStatus = new DoGetUpdateStatus();
        enableAction(action, iDelegateGetUpdateStatus);
    }

    /**
     * Signal that the action ChannelMap is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ChannelMap must be overridden if this is called.
     */      
    protected void enableActionChannelMap()
    {
        Action action = new Action("ChannelMap");
        action.addOutputParameter(new ParameterRelated("ChannelMap", iPropertyChannelMap));
        iDelegateChannelMap = new DoChannelMap();
        enableAction(action, iDelegateChannelMap);
    }

    /**
     * Signal that the action SetChannelMap is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetChannelMap must be overridden if this is called.
     */      
    protected void enableActionSetChannelMap()
    {
        Action action = new Action("SetChannelMap");
        action.addInputParameter(new ParameterRelated("ChannelMap", iPropertyChannelMap));
        iDelegateSetChannelMap = new DoSetChannelMap();
        enableAction(action, iDelegateSetChannelMap);
    }

    /**
     * Signal that the action AudioChannels is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * AudioChannels must be overridden if this is called.
     */      
    protected void enableActionAudioChannels()
    {
        Action action = new Action("AudioChannels");
        action.addOutputParameter(new ParameterRelated("AudioChannels", iPropertyAudioChannels));
        iDelegateAudioChannels = new DoAudioChannels();
        enableAction(action, iDelegateAudioChannels);
    }

    /**
     * Signal that the action SetAudioChannels is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetAudioChannels must be overridden if this is called.
     */      
    protected void enableActionSetAudioChannels()
    {
        Action action = new Action("SetAudioChannels");
        action.addInputParameter(new ParameterRelated("AudioChannels", iPropertyAudioChannels));
        iDelegateSetAudioChannels = new DoSetAudioChannels();
        enableAction(action, iDelegateSetAudioChannels);
    }

    /**
     * Signal that the action Version is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Version must be overridden if this is called.
     */      
    protected void enableActionVersion()
    {
        Action action = new Action("Version");
        action.addOutputParameter(new ParameterRelated("Version", iPropertyVersion));
        iDelegateVersion = new DoVersion();
        enableAction(action, iDelegateVersion);
    }

    /**
     * DeviceList action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * DeviceList action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionDeviceList} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String deviceList(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * DeviceSettings action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * DeviceSettings action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionDeviceSettings} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aDeviceId
     */
    protected String deviceSettings(IDvInvocation aInvocation, String aDeviceId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SettingsAvailable action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SettingsAvailable action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSettingsAvailable} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean settingsAvailable(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SettingsChangedCount action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SettingsChangedCount action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSettingsChangedCount} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long settingsChangedCount(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Update action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Update action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionUpdate} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aManifestUri
     */
    protected void update(IDvInvocation aInvocation, String aManifestUri)
    {
        throw (new ActionDisabledError());
    }

    /**
     * UpdateBlocking action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * UpdateBlocking action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionUpdateBlocking} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aManifestUri
     */
    protected void updateBlocking(IDvInvocation aInvocation, String aManifestUri)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetUpdateStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetUpdateStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetUpdateStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetUpdateStatus getUpdateStatus(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ChannelMap action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ChannelMap action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionChannelMap} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String channelMap(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetChannelMap action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetChannelMap action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetChannelMap} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aChannelMap
     */
    protected void setChannelMap(IDvInvocation aInvocation, String aChannelMap)
    {
        throw (new ActionDisabledError());
    }

    /**
     * AudioChannels action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * AudioChannels action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionAudioChannels} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String audioChannels(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetAudioChannels action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetAudioChannels action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetAudioChannels} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aAudioChannels
     */
    protected void setAudioChannels(IDvInvocation aInvocation, String aAudioChannels)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Version action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Version action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionVersion} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long version(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Must be called for each class instance.  Must be called before Core.Library.Close().
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            super.dispose();
            iHandle = 0;
        }
    }


    private class DoDeviceList implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String list;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 list = deviceList(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "DeviceList");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("List", list);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoDeviceSettings implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String deviceId;
            String settings;
            try
            {
                invocation.readStart();
                deviceId = invocation.readString("DeviceId");
                invocation.readEnd();
                 settings = deviceSettings(invocation, deviceId);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "DeviceSettings");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("Settings", settings);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSettingsAvailable implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean settingsAvailable;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 settingsAvailable = settingsAvailable(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SettingsAvailable");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeBool("SettingsAvailable", settingsAvailable);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSettingsChangedCount implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long settingsChangedCount;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 settingsChangedCount = settingsChangedCount(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SettingsChangedCount");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("SettingsChangedCount", settingsChangedCount);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoUpdate implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String manifestUri;
            try
            {
                invocation.readStart();
                manifestUri = invocation.readString("ManifestUri");
                invocation.readEnd();
                update(invocation, manifestUri);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Update");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoUpdateBlocking implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String manifestUri;
            try
            {
                invocation.readStart();
                manifestUri = invocation.readString("ManifestUri");
                invocation.readEnd();
                updateBlocking(invocation, manifestUri);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "UpdateBlocking");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetUpdateStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String updateStatus;
            long updateTotalPercentage;
            long updateTotalJobs;
            long updateJob;
            long updateJobPercentage;
            String updateJobDescription;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetUpdateStatus outArgs = getUpdateStatus(invocation);
            updateStatus = outArgs.getUpdateStatus();
            updateTotalPercentage = outArgs.getUpdateTotalPercentage();
            updateTotalJobs = outArgs.getUpdateTotalJobs();
            updateJob = outArgs.getUpdateJob();
            updateJobPercentage = outArgs.getUpdateJobPercentage();
            updateJobDescription = outArgs.getUpdateJobDescription();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetUpdateStatus");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("UpdateStatus", updateStatus);
                invocation.writeUint("UpdateTotalPercentage", updateTotalPercentage);
                invocation.writeUint("UpdateTotalJobs", updateTotalJobs);
                invocation.writeUint("UpdateJob", updateJob);
                invocation.writeUint("UpdateJobPercentage", updateJobPercentage);
                invocation.writeString("UpdateJobDescription", updateJobDescription);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoChannelMap implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String channelMap;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 channelMap = channelMap(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ChannelMap");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("ChannelMap", channelMap);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetChannelMap implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String channelMap;
            try
            {
                invocation.readStart();
                channelMap = invocation.readString("ChannelMap");
                invocation.readEnd();
                setChannelMap(invocation, channelMap);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetChannelMap");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoAudioChannels implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String audioChannels;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 audioChannels = audioChannels(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "AudioChannels");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("AudioChannels", audioChannels);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetAudioChannels implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String audioChannels;
            try
            {
                invocation.readStart();
                audioChannels = invocation.readString("AudioChannels");
                invocation.readEnd();
                setAudioChannels(invocation, audioChannels);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetAudioChannels");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoVersion implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long version;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 version = version(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Version");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("Version", version);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }
}

