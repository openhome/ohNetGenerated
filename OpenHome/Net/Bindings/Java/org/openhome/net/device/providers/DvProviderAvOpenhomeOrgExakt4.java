package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgExakt4
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
     * Set the value of the ConnectionStatus property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyConnectionStatus(String aValue);

    /**
     * Get a copy of the value of the ConnectionStatus property
     *
     * @return value of the ConnectionStatus property.
     */
    public String getPropertyConnectionStatus();

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
    public boolean setPropertyVersion(String aValue);

    /**
     * Get a copy of the value of the Version property
     *
     * @return value of the Version property.
     */
    public String getPropertyVersion();

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
 * Provider for the av.openhome.org:Exakt:4 UPnP service.
 */
public class DvProviderAvOpenhomeOrgExakt4 extends DvProvider implements IDvProviderAvOpenhomeOrgExakt4
{

    private IDvInvocationListener iDelegateDeviceList;
    private IDvInvocationListener iDelegateDeviceSettings;
    private IDvInvocationListener iDelegateConnectionStatus;
    private IDvInvocationListener iDelegateSet;
    private IDvInvocationListener iDelegateReprogram;
    private IDvInvocationListener iDelegateReprogramFallback;
    private IDvInvocationListener iDelegateChannelMap;
    private IDvInvocationListener iDelegateSetChannelMap;
    private IDvInvocationListener iDelegateAudioChannels;
    private IDvInvocationListener iDelegateSetAudioChannels;
    private IDvInvocationListener iDelegateVersion;
    private IDvInvocationListener iDelegateGetIntegratedDevicesPresent;
    private IDvInvocationListener iDelegateBootIntegratedDevicesToFallback;
    private PropertyString iPropertyDeviceList;
    private PropertyString iPropertyConnectionStatus;
    private PropertyString iPropertyChannelMap;
    private PropertyString iPropertyAudioChannels;
    private PropertyString iPropertyVersion;
    private PropertyBool iPropertyIntegratedDevicesPresent;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgExakt4(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "Exakt", 4);
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
     * Enable the ConnectionStatus property.
     */
    public void enablePropertyConnectionStatus()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyConnectionStatus = new PropertyString(new ParameterString("ConnectionStatus", allowedValues));
        addProperty(iPropertyConnectionStatus);
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
        List<String> allowedValues = new LinkedList<String>();
        iPropertyVersion = new PropertyString(new ParameterString("Version", allowedValues));
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
     * Set the value of the ConnectionStatus property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyConnectionStatus(String aValue)
    {
        return setPropertyString(iPropertyConnectionStatus, aValue);
    }

    /**
     * Get a copy of the value of the ConnectionStatus property
     *
     * @return  value of the ConnectionStatus property.
     */
    public String getPropertyConnectionStatus()
    {
        return iPropertyConnectionStatus.getValue();
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
    public boolean setPropertyVersion(String aValue)
    {
        return setPropertyString(iPropertyVersion, aValue);
    }

    /**
     * Get a copy of the value of the Version property
     *
     * @return  value of the Version property.
     */
    public String getPropertyVersion()
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
     * Signal that the action ConnectionStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ConnectionStatus must be overridden if this is called.
     */      
    protected void enableActionConnectionStatus()
    {
        Action action = new Action("ConnectionStatus");
        action.addOutputParameter(new ParameterRelated("ConnectionStatus", iPropertyConnectionStatus));
        iDelegateConnectionStatus = new DoConnectionStatus();
        enableAction(action, iDelegateConnectionStatus);
    }

    /**
     * Signal that the action Set is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Set must be overridden if this is called.
     */      
    protected void enableActionSet()
    {
        Action action = new Action("Set");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("DeviceId", allowedValues));
        action.addInputParameter(new ParameterUint("BankId"));
        action.addInputParameter(new ParameterString("FileUri", allowedValues));
        action.addInputParameter(new ParameterBool("Mute"));
        action.addInputParameter(new ParameterBool("Persist"));
        iDelegateSet = new DoSet();
        enableAction(action, iDelegateSet);
    }

    /**
     * Signal that the action Reprogram is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Reprogram must be overridden if this is called.
     */      
    protected void enableActionReprogram()
    {
        Action action = new Action("Reprogram");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("DeviceId", allowedValues));
        action.addInputParameter(new ParameterString("FileUri", allowedValues));
        iDelegateReprogram = new DoReprogram();
        enableAction(action, iDelegateReprogram);
    }

    /**
     * Signal that the action ReprogramFallback is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ReprogramFallback must be overridden if this is called.
     */      
    protected void enableActionReprogramFallback()
    {
        Action action = new Action("ReprogramFallback");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("DeviceId", allowedValues));
        action.addInputParameter(new ParameterString("FileUri", allowedValues));
        iDelegateReprogramFallback = new DoReprogramFallback();
        enableAction(action, iDelegateReprogramFallback);
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
     * ConnectionStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ConnectionStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionConnectionStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String connectionStatus(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Set action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Set action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSet} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aDeviceId
     * @param aBankId
     * @param aFileUri
     * @param aMute
     * @param aPersist
     */
    protected void set(IDvInvocation aInvocation, String aDeviceId, long aBankId, String aFileUri, boolean aMute, boolean aPersist)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Reprogram action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Reprogram action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionReprogram} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aDeviceId
     * @param aFileUri
     */
    protected void reprogram(IDvInvocation aInvocation, String aDeviceId, String aFileUri)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ReprogramFallback action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ReprogramFallback action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionReprogramFallback} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aDeviceId
     * @param aFileUri
     */
    protected void reprogramFallback(IDvInvocation aInvocation, String aDeviceId, String aFileUri)
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
    protected String version(IDvInvocation aInvocation)
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

    private class DoConnectionStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String connectionStatus;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 connectionStatus = connectionStatus(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ConnectionStatus");
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
                invocation.writeString("ConnectionStatus", connectionStatus);
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

    private class DoSet implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String deviceId;
            long bankId;
            String fileUri;
            boolean mute;
            boolean persist;
            try
            {
                invocation.readStart();
                deviceId = invocation.readString("DeviceId");
                bankId = invocation.readUint("BankId");
                fileUri = invocation.readString("FileUri");
                mute = invocation.readBool("Mute");
                persist = invocation.readBool("Persist");
                invocation.readEnd();
                set(invocation, deviceId, bankId, fileUri, mute, persist);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Set");
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

    private class DoReprogram implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String deviceId;
            String fileUri;
            try
            {
                invocation.readStart();
                deviceId = invocation.readString("DeviceId");
                fileUri = invocation.readString("FileUri");
                invocation.readEnd();
                reprogram(invocation, deviceId, fileUri);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Reprogram");
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

    private class DoReprogramFallback implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String deviceId;
            String fileUri;
            try
            {
                invocation.readStart();
                deviceId = invocation.readString("DeviceId");
                fileUri = invocation.readString("FileUri");
                invocation.readEnd();
                reprogramFallback(invocation, deviceId, fileUri);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ReprogramFallback");
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
            String version;
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
                invocation.writeString("Version", version);
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

