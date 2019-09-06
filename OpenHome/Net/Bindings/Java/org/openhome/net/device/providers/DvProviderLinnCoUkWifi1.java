package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkWifi1
{

    /**
     * Set the value of the AdapterInUse property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyAdapterInUse(boolean aValue);

    /**
     * Get a copy of the value of the AdapterInUse property
     *
     * @return value of the AdapterInUse property.
     */
    public boolean getPropertyAdapterInUse();

    /**
     * Set the value of the Configuration property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyConfiguration(String aValue);

    /**
     * Get a copy of the value of the Configuration property
     *
     * @return value of the Configuration property.
     */
    public String getPropertyConfiguration();

    /**
     * Set the value of the ScanResults property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyScanResults(String aValue);

    /**
     * Get a copy of the value of the ScanResults property
     *
     * @return value of the ScanResults property.
     */
    public String getPropertyScanResults();

    /**
     * Set the value of the Status property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyStatus(String aValue);

    /**
     * Get a copy of the value of the Status property
     *
     * @return value of the Status property.
     */
    public String getPropertyStatus();
        
}

/**
 * Provider for the linn.co.uk:Wifi:1 UPnP service.
 */
public class DvProviderLinnCoUkWifi1 extends DvProvider implements IDvProviderLinnCoUkWifi1
{

    private IDvInvocationListener iDelegateClearCredentials;
    private IDvInvocationListener iDelegateGetAdapterInUse;
    private IDvInvocationListener iDelegateGetConfiguration;
    private IDvInvocationListener iDelegateGetNetworkInfo;
    private IDvInvocationListener iDelegateGetScanResults;
    private IDvInvocationListener iDelegateGetSignalInfo;
    private IDvInvocationListener iDelegateGetStatus;
    private IDvInvocationListener iDelegateScan;
    private IDvInvocationListener iDelegateSetCredentials;
    private PropertyBool iPropertyAdapterInUse;
    private PropertyString iPropertyConfiguration;
    private PropertyString iPropertyScanResults;
    private PropertyString iPropertyStatus;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkWifi1(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "Wifi", 1);
    }

    /**
     * Enable the AdapterInUse property.
     */
    public void enablePropertyAdapterInUse()
    {
        iPropertyAdapterInUse = new PropertyBool(new ParameterBool("AdapterInUse"));
        addProperty(iPropertyAdapterInUse);
    }

    /**
     * Enable the Configuration property.
     */
    public void enablePropertyConfiguration()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyConfiguration = new PropertyString(new ParameterString("Configuration", allowedValues));
        addProperty(iPropertyConfiguration);
    }

    /**
     * Enable the ScanResults property.
     */
    public void enablePropertyScanResults()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyScanResults = new PropertyString(new ParameterString("ScanResults", allowedValues));
        addProperty(iPropertyScanResults);
    }

    /**
     * Enable the Status property.
     */
    public void enablePropertyStatus()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyStatus = new PropertyString(new ParameterString("Status", allowedValues));
        addProperty(iPropertyStatus);
    }

    /**
     * Set the value of the AdapterInUse property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyAdapterInUse(boolean aValue)
    {
        return setPropertyBool(iPropertyAdapterInUse, aValue);
    }

    /**
     * Get a copy of the value of the AdapterInUse property
     *
     * @return  value of the AdapterInUse property.
     */
    public boolean getPropertyAdapterInUse()
    {
        return iPropertyAdapterInUse.getValue();
    }

    /**
     * Set the value of the Configuration property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyConfiguration(String aValue)
    {
        return setPropertyString(iPropertyConfiguration, aValue);
    }

    /**
     * Get a copy of the value of the Configuration property
     *
     * @return  value of the Configuration property.
     */
    public String getPropertyConfiguration()
    {
        return iPropertyConfiguration.getValue();
    }

    /**
     * Set the value of the ScanResults property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyScanResults(String aValue)
    {
        return setPropertyString(iPropertyScanResults, aValue);
    }

    /**
     * Get a copy of the value of the ScanResults property
     *
     * @return  value of the ScanResults property.
     */
    public String getPropertyScanResults()
    {
        return iPropertyScanResults.getValue();
    }

    /**
     * Set the value of the Status property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyStatus(String aValue)
    {
        return setPropertyString(iPropertyStatus, aValue);
    }

    /**
     * Get a copy of the value of the Status property
     *
     * @return  value of the Status property.
     */
    public String getPropertyStatus()
    {
        return iPropertyStatus.getValue();
    }

    /**
     * Signal that the action ClearCredentials is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ClearCredentials must be overridden if this is called.
     */      
    protected void enableActionClearCredentials()
    {
        Action action = new Action("ClearCredentials");
        iDelegateClearCredentials = new DoClearCredentials();
        enableAction(action, iDelegateClearCredentials);
    }

    /**
     * Signal that the action GetAdapterInUse is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetAdapterInUse must be overridden if this is called.
     */      
    protected void enableActionGetAdapterInUse()
    {
        Action action = new Action("GetAdapterInUse");
        action.addOutputParameter(new ParameterRelated("AdapterInUse", iPropertyAdapterInUse));
        iDelegateGetAdapterInUse = new DoGetAdapterInUse();
        enableAction(action, iDelegateGetAdapterInUse);
    }

    /**
     * Signal that the action GetConfiguration is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetConfiguration must be overridden if this is called.
     */      
    protected void enableActionGetConfiguration()
    {
        Action action = new Action("GetConfiguration");
        action.addOutputParameter(new ParameterRelated("Configuration", iPropertyConfiguration));
        iDelegateGetConfiguration = new DoGetConfiguration();
        enableAction(action, iDelegateGetConfiguration);
    }

    /**
     * Signal that the action GetNetworkInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetNetworkInfo must be overridden if this is called.
     */      
    protected void enableActionGetNetworkInfo()
    {
        Action action = new Action("GetNetworkInfo");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("NetworkInfo", allowedValues));
        iDelegateGetNetworkInfo = new DoGetNetworkInfo();
        enableAction(action, iDelegateGetNetworkInfo);
    }

    /**
     * Signal that the action GetScanResults is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetScanResults must be overridden if this is called.
     */      
    protected void enableActionGetScanResults()
    {
        Action action = new Action("GetScanResults");
        action.addOutputParameter(new ParameterRelated("ScanResults", iPropertyScanResults));
        iDelegateGetScanResults = new DoGetScanResults();
        enableAction(action, iDelegateGetScanResults);
    }

    /**
     * Signal that the action GetSignalInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetSignalInfo must be overridden if this is called.
     */      
    protected void enableActionGetSignalInfo()
    {
        Action action = new Action("GetSignalInfo");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("SignalInfo", allowedValues));
        iDelegateGetSignalInfo = new DoGetSignalInfo();
        enableAction(action, iDelegateGetSignalInfo);
    }

    /**
     * Signal that the action GetStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetStatus must be overridden if this is called.
     */      
    protected void enableActionGetStatus()
    {
        Action action = new Action("GetStatus");
        action.addOutputParameter(new ParameterRelated("Status", iPropertyStatus));
        iDelegateGetStatus = new DoGetStatus();
        enableAction(action, iDelegateGetStatus);
    }

    /**
     * Signal that the action Scan is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Scan must be overridden if this is called.
     */      
    protected void enableActionScan()
    {
        Action action = new Action("Scan");
        iDelegateScan = new DoScan();
        enableAction(action, iDelegateScan);
    }

    /**
     * Signal that the action SetCredentials is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetCredentials must be overridden if this is called.
     */      
    protected void enableActionSetCredentials()
    {
        Action action = new Action("SetCredentials");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Ssid", allowedValues));
        action.addInputParameter(new ParameterString("Password", allowedValues));
        iDelegateSetCredentials = new DoSetCredentials();
        enableAction(action, iDelegateSetCredentials);
    }

    /**
     * ClearCredentials action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ClearCredentials action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionClearCredentials} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void clearCredentials(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetAdapterInUse action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetAdapterInUse action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetAdapterInUse} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getAdapterInUse(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetConfiguration action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetConfiguration action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetConfiguration} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getConfiguration(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetNetworkInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetNetworkInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetNetworkInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getNetworkInfo(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetScanResults action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetScanResults action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetScanResults} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getScanResults(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetSignalInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetSignalInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetSignalInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getSignalInfo(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getStatus(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Scan action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Scan action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionScan} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void scan(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetCredentials action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetCredentials action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetCredentials} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aSsid
     * @param aPassword
     */
    protected void setCredentials(IDvInvocation aInvocation, String aSsid, String aPassword)
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


    private class DoClearCredentials implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                clearCredentials(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ClearCredentials");
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

    private class DoGetAdapterInUse implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean adapterInUse;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 adapterInUse = getAdapterInUse(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetAdapterInUse");
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
                invocation.writeBool("AdapterInUse", adapterInUse);
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

    private class DoGetConfiguration implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String configuration;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 configuration = getConfiguration(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetConfiguration");
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
                invocation.writeString("Configuration", configuration);
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

    private class DoGetNetworkInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String networkInfo;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 networkInfo = getNetworkInfo(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetNetworkInfo");
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
                invocation.writeString("NetworkInfo", networkInfo);
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

    private class DoGetScanResults implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String scanResults;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 scanResults = getScanResults(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetScanResults");
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
                invocation.writeString("ScanResults", scanResults);
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

    private class DoGetSignalInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String signalInfo;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 signalInfo = getSignalInfo(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetSignalInfo");
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
                invocation.writeString("SignalInfo", signalInfo);
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

    private class DoGetStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String status;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 status = getStatus(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetStatus");
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
                invocation.writeString("Status", status);
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

    private class DoScan implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                scan(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Scan");
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

    private class DoSetCredentials implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String ssid;
            String password;
            try
            {
                invocation.readStart();
                ssid = invocation.readString("Ssid");
                password = invocation.readString("Password");
                invocation.readEnd();
                setCredentials(invocation, ssid, password);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetCredentials");
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

