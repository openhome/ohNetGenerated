package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkExakt21
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
     * Set the value of the SettingsChangedSeq property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertySettingsChangedSeq(String aValue);

    /**
     * Get a copy of the value of the SettingsChangedSeq property
     *
     * @return value of the SettingsChangedSeq property.
     */
    public String getPropertySettingsChangedSeq();

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

    /**
     * Set the value of the IntegratedDevicesPresent property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyIntegratedDevicesPresent(boolean aValue);

    /**
     * Get a copy of the value of the IntegratedDevicesPresent property
     *
     * @return value of the IntegratedDevicesPresent property.
     */
    public boolean getPropertyIntegratedDevicesPresent();
        
}

/**
 * Provider for the linn.co.uk:Exakt2:1 UPnP service.
 */
public class DvProviderLinnCoUkExakt21 extends DvProvider implements IDvProviderLinnCoUkExakt21
{

    private IDvInvocationListener iDelegateGetDeviceList;
    private IDvInvocationListener iDelegateGetDeviceSettings;
    private IDvInvocationListener iDelegateGetSettingsAvailable;
    private IDvInvocationListener iDelegateGetSettingsChangedSeq;
    private IDvInvocationListener iDelegateUpdate;
    private IDvInvocationListener iDelegateUpdateBlocking;
    private IDvInvocationListener iDelegateGetUpdateStatus;
    private IDvInvocationListener iDelegateGetChannelMap;
    private IDvInvocationListener iDelegateGetAudioChannels;
    private IDvInvocationListener iDelegateGetVersion;
    private IDvInvocationListener iDelegateApplyUpdate;
    private IDvInvocationListener iDelegatePlayTestTrack;
    private IDvInvocationListener iDelegateClearTestTrack;
    private IDvInvocationListener iDelegateGetIntegratedDevicesPresent;
    private IDvInvocationListener iDelegateBootIntegratedDevicesToFallback;
    private PropertyString iPropertyDeviceList;
    private PropertyBool iPropertySettingsAvailable;
    private PropertyString iPropertySettingsChangedSeq;
    private PropertyString iPropertyUpdateStatus;
    private PropertyString iPropertyChannelMap;
    private PropertyString iPropertyAudioChannels;
    private PropertyUint iPropertyVersion;
    private PropertyBool iPropertyIntegratedDevicesPresent;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkExakt21(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "Exakt2", 1);
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
     * Enable the SettingsChangedSeq property.
     */
    public void enablePropertySettingsChangedSeq()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertySettingsChangedSeq = new PropertyString(new ParameterString("SettingsChangedSeq", allowedValues));
        addProperty(iPropertySettingsChangedSeq);
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
     * Enable the IntegratedDevicesPresent property.
     */
    public void enablePropertyIntegratedDevicesPresent()
    {
        iPropertyIntegratedDevicesPresent = new PropertyBool(new ParameterBool("IntegratedDevicesPresent"));
        addProperty(iPropertyIntegratedDevicesPresent);
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
     * Set the value of the SettingsChangedSeq property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertySettingsChangedSeq(String aValue)
    {
        return setPropertyString(iPropertySettingsChangedSeq, aValue);
    }

    /**
     * Get a copy of the value of the SettingsChangedSeq property
     *
     * @return  value of the SettingsChangedSeq property.
     */
    public String getPropertySettingsChangedSeq()
    {
        return iPropertySettingsChangedSeq.getValue();
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
     * Set the value of the IntegratedDevicesPresent property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyIntegratedDevicesPresent(boolean aValue)
    {
        return setPropertyBool(iPropertyIntegratedDevicesPresent, aValue);
    }

    /**
     * Get a copy of the value of the IntegratedDevicesPresent property
     *
     * @return  value of the IntegratedDevicesPresent property.
     */
    public boolean getPropertyIntegratedDevicesPresent()
    {
        return iPropertyIntegratedDevicesPresent.getValue();
    }

    /**
     * Signal that the action GetDeviceList is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetDeviceList must be overridden if this is called.
     */      
    protected void enableActionGetDeviceList()
    {
        Action action = new Action("GetDeviceList");
        action.addOutputParameter(new ParameterRelated("List", iPropertyDeviceList));
        iDelegateGetDeviceList = new DoGetDeviceList();
        enableAction(action, iDelegateGetDeviceList);
    }

    /**
     * Signal that the action GetDeviceSettings is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetDeviceSettings must be overridden if this is called.
     */      
    protected void enableActionGetDeviceSettings()
    {
        Action action = new Action("GetDeviceSettings");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("DeviceId", allowedValues));
        action.addOutputParameter(new ParameterString("Settings", allowedValues));
        iDelegateGetDeviceSettings = new DoGetDeviceSettings();
        enableAction(action, iDelegateGetDeviceSettings);
    }

    /**
     * Signal that the action GetSettingsAvailable is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetSettingsAvailable must be overridden if this is called.
     */      
    protected void enableActionGetSettingsAvailable()
    {
        Action action = new Action("GetSettingsAvailable");
        action.addOutputParameter(new ParameterRelated("SettingsAvailable", iPropertySettingsAvailable));
        iDelegateGetSettingsAvailable = new DoGetSettingsAvailable();
        enableAction(action, iDelegateGetSettingsAvailable);
    }

    /**
     * Signal that the action GetSettingsChangedSeq is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetSettingsChangedSeq must be overridden if this is called.
     */      
    protected void enableActionGetSettingsChangedSeq()
    {
        Action action = new Action("GetSettingsChangedSeq");
        action.addOutputParameter(new ParameterRelated("SettingsChangedSeq", iPropertySettingsChangedSeq));
        iDelegateGetSettingsChangedSeq = new DoGetSettingsChangedSeq();
        enableAction(action, iDelegateGetSettingsChangedSeq);
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
        action.addInputParameter(new ParameterString("Manifest", allowedValues));
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
        action.addInputParameter(new ParameterString("Manifest", allowedValues));
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
        iDelegateGetUpdateStatus = new DoGetUpdateStatus();
        enableAction(action, iDelegateGetUpdateStatus);
    }

    /**
     * Signal that the action GetChannelMap is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetChannelMap must be overridden if this is called.
     */      
    protected void enableActionGetChannelMap()
    {
        Action action = new Action("GetChannelMap");
        action.addOutputParameter(new ParameterRelated("ChannelMap", iPropertyChannelMap));
        iDelegateGetChannelMap = new DoGetChannelMap();
        enableAction(action, iDelegateGetChannelMap);
    }

    /**
     * Signal that the action GetAudioChannels is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetAudioChannels must be overridden if this is called.
     */      
    protected void enableActionGetAudioChannels()
    {
        Action action = new Action("GetAudioChannels");
        action.addOutputParameter(new ParameterRelated("AudioChannels", iPropertyAudioChannels));
        iDelegateGetAudioChannels = new DoGetAudioChannels();
        enableAction(action, iDelegateGetAudioChannels);
    }

    /**
     * Signal that the action GetVersion is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetVersion must be overridden if this is called.
     */      
    protected void enableActionGetVersion()
    {
        Action action = new Action("GetVersion");
        action.addOutputParameter(new ParameterRelated("Version", iPropertyVersion));
        iDelegateGetVersion = new DoGetVersion();
        enableAction(action, iDelegateGetVersion);
    }

    /**
     * Signal that the action ApplyUpdate is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ApplyUpdate must be overridden if this is called.
     */      
    protected void enableActionApplyUpdate()
    {
        Action action = new Action("ApplyUpdate");
        iDelegateApplyUpdate = new DoApplyUpdate();
        enableAction(action, iDelegateApplyUpdate);
    }

    /**
     * Signal that the action PlayTestTrack is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * PlayTestTrack must be overridden if this is called.
     */      
    protected void enableActionPlayTestTrack()
    {
        Action action = new Action("PlayTestTrack");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ChannelMap", allowedValues));
        action.addInputParameter(new ParameterString("Uri", allowedValues));
        action.addInputParameter(new ParameterString("Metadata", allowedValues));
        iDelegatePlayTestTrack = new DoPlayTestTrack();
        enableAction(action, iDelegatePlayTestTrack);
    }

    /**
     * Signal that the action ClearTestTrack is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ClearTestTrack must be overridden if this is called.
     */      
    protected void enableActionClearTestTrack()
    {
        Action action = new Action("ClearTestTrack");
        iDelegateClearTestTrack = new DoClearTestTrack();
        enableAction(action, iDelegateClearTestTrack);
    }

    /**
     * Signal that the action GetIntegratedDevicesPresent is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetIntegratedDevicesPresent must be overridden if this is called.
     */      
    protected void enableActionGetIntegratedDevicesPresent()
    {
        Action action = new Action("GetIntegratedDevicesPresent");
        action.addOutputParameter(new ParameterRelated("IntegratedDevicesPresent", iPropertyIntegratedDevicesPresent));
        iDelegateGetIntegratedDevicesPresent = new DoGetIntegratedDevicesPresent();
        enableAction(action, iDelegateGetIntegratedDevicesPresent);
    }

    /**
     * Signal that the action BootIntegratedDevicesToFallback is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * BootIntegratedDevicesToFallback must be overridden if this is called.
     */      
    protected void enableActionBootIntegratedDevicesToFallback()
    {
        Action action = new Action("BootIntegratedDevicesToFallback");
        iDelegateBootIntegratedDevicesToFallback = new DoBootIntegratedDevicesToFallback();
        enableAction(action, iDelegateBootIntegratedDevicesToFallback);
    }

    /**
     * GetDeviceList action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetDeviceList action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetDeviceList} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getDeviceList(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetDeviceSettings action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetDeviceSettings action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetDeviceSettings} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aDeviceId
     */
    protected String getDeviceSettings(IDvInvocation aInvocation, String aDeviceId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetSettingsAvailable action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetSettingsAvailable action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetSettingsAvailable} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getSettingsAvailable(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetSettingsChangedSeq action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetSettingsChangedSeq action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetSettingsChangedSeq} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getSettingsChangedSeq(IDvInvocation aInvocation)
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
     * @param aManifest
     */
    protected void update(IDvInvocation aInvocation, String aManifest)
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
     * @param aManifest
     */
    protected void updateBlocking(IDvInvocation aInvocation, String aManifest)
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
    protected String getUpdateStatus(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetChannelMap action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetChannelMap action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetChannelMap} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getChannelMap(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetAudioChannels action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetAudioChannels action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetAudioChannels} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getAudioChannels(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetVersion action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetVersion action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetVersion} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long getVersion(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ApplyUpdate action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ApplyUpdate action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionApplyUpdate} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void applyUpdate(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * PlayTestTrack action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * PlayTestTrack action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionPlayTestTrack} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aChannelMap
     * @param aUri
     * @param aMetadata
     */
    protected void playTestTrack(IDvInvocation aInvocation, String aChannelMap, String aUri, String aMetadata)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ClearTestTrack action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ClearTestTrack action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionClearTestTrack} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void clearTestTrack(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetIntegratedDevicesPresent action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetIntegratedDevicesPresent action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetIntegratedDevicesPresent} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getIntegratedDevicesPresent(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * BootIntegratedDevicesToFallback action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * BootIntegratedDevicesToFallback action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionBootIntegratedDevicesToFallback} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void bootIntegratedDevicesToFallback(IDvInvocation aInvocation)
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


    private class DoGetDeviceList implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String list;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 list = getDeviceList(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetDeviceList");
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

    private class DoGetDeviceSettings implements IDvInvocationListener
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
                 settings = getDeviceSettings(invocation, deviceId);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetDeviceSettings");
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

    private class DoGetSettingsAvailable implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean settingsAvailable;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 settingsAvailable = getSettingsAvailable(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetSettingsAvailable");
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

    private class DoGetSettingsChangedSeq implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String settingsChangedSeq;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 settingsChangedSeq = getSettingsChangedSeq(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetSettingsChangedSeq");
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
                invocation.writeString("SettingsChangedSeq", settingsChangedSeq);
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
            String manifest;
            try
            {
                invocation.readStart();
                manifest = invocation.readString("Manifest");
                invocation.readEnd();
                update(invocation, manifest);
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
            String manifest;
            try
            {
                invocation.readStart();
                manifest = invocation.readString("Manifest");
                invocation.readEnd();
                updateBlocking(invocation, manifest);
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
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 updateStatus = getUpdateStatus(invocation);
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

    private class DoGetChannelMap implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String channelMap;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 channelMap = getChannelMap(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetChannelMap");
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

    private class DoGetAudioChannels implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String audioChannels;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 audioChannels = getAudioChannels(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetAudioChannels");
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

    private class DoGetVersion implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long version;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 version = getVersion(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetVersion");
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

    private class DoApplyUpdate implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                applyUpdate(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ApplyUpdate");
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

    private class DoPlayTestTrack implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String channelMap;
            String uri;
            String metadata;
            try
            {
                invocation.readStart();
                channelMap = invocation.readString("ChannelMap");
                uri = invocation.readString("Uri");
                metadata = invocation.readString("Metadata");
                invocation.readEnd();
                playTestTrack(invocation, channelMap, uri, metadata);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "PlayTestTrack");
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

    private class DoClearTestTrack implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                clearTestTrack(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ClearTestTrack");
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

    private class DoGetIntegratedDevicesPresent implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean integratedDevicesPresent;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 integratedDevicesPresent = getIntegratedDevicesPresent(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetIntegratedDevicesPresent");
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
                invocation.writeBool("IntegratedDevicesPresent", integratedDevicesPresent);
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

    private class DoBootIntegratedDevicesToFallback implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                bootIntegratedDevicesToFallback(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "BootIntegratedDevicesToFallback");
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
}

