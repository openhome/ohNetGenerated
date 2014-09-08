package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgExakt1
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
        
}

/**
 * Provider for the av.openhome.org:Exakt:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgExakt1 extends DvProvider implements IDvProviderAvOpenhomeOrgExakt1
{

    private IDvInvocationListener iDelegateDeviceList;
    private IDvInvocationListener iDelegateDeviceSettings;
    private IDvInvocationListener iDelegateConnectionStatus;
    private IDvInvocationListener iDelegateSet;
    private IDvInvocationListener iDelegateReprogram;
    private IDvInvocationListener iDelegateReprogramFallback;
    private PropertyString iPropertyDeviceList;
    private PropertyString iPropertyConnectionStatus;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgExakt1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "Exakt", 1);
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
}

