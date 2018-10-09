package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkUpdate1
{

    /**
     * Set the value of the SoftwareStatus property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertySoftwareStatus(String aValue);

    /**
     * Get a copy of the value of the SoftwareStatus property
     *
     * @return value of the SoftwareStatus property.
     */
    public String getPropertySoftwareStatus();

    /**
     * Set the value of the ExecutorStatus property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyExecutorStatus(String aValue);

    /**
     * Get a copy of the value of the ExecutorStatus property
     *
     * @return value of the ExecutorStatus property.
     */
    public String getPropertyExecutorStatus();
        
}

/**
 * Provider for the linn.co.uk:Update:1 UPnP service.
 */
public class DvProviderLinnCoUkUpdate1 extends DvProvider implements IDvProviderLinnCoUkUpdate1
{

    private IDvInvocationListener iDelegatePushManifest;
    private IDvInvocationListener iDelegateGetSoftwareStatus;
    private IDvInvocationListener iDelegateGetExecutorStatus;
    private IDvInvocationListener iDelegateApply;
    private IDvInvocationListener iDelegateRecover;
    private IDvInvocationListener iDelegateCheckNow;
    private PropertyString iPropertySoftwareStatus;
    private PropertyString iPropertyExecutorStatus;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkUpdate1(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "Update", 1);
    }

    /**
     * Enable the SoftwareStatus property.
     */
    public void enablePropertySoftwareStatus()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertySoftwareStatus = new PropertyString(new ParameterString("SoftwareStatus", allowedValues));
        addProperty(iPropertySoftwareStatus);
    }

    /**
     * Enable the ExecutorStatus property.
     */
    public void enablePropertyExecutorStatus()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyExecutorStatus = new PropertyString(new ParameterString("ExecutorStatus", allowedValues));
        addProperty(iPropertyExecutorStatus);
    }

    /**
     * Set the value of the SoftwareStatus property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertySoftwareStatus(String aValue)
    {
        return setPropertyString(iPropertySoftwareStatus, aValue);
    }

    /**
     * Get a copy of the value of the SoftwareStatus property
     *
     * @return  value of the SoftwareStatus property.
     */
    public String getPropertySoftwareStatus()
    {
        return iPropertySoftwareStatus.getValue();
    }

    /**
     * Set the value of the ExecutorStatus property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyExecutorStatus(String aValue)
    {
        return setPropertyString(iPropertyExecutorStatus, aValue);
    }

    /**
     * Get a copy of the value of the ExecutorStatus property
     *
     * @return  value of the ExecutorStatus property.
     */
    public String getPropertyExecutorStatus()
    {
        return iPropertyExecutorStatus.getValue();
    }

    /**
     * Signal that the action PushManifest is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * PushManifest must be overridden if this is called.
     */      
    protected void enableActionPushManifest()
    {
        Action action = new Action("PushManifest");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Uri", allowedValues));
        iDelegatePushManifest = new DoPushManifest();
        enableAction(action, iDelegatePushManifest);
    }

    /**
     * Signal that the action GetSoftwareStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetSoftwareStatus must be overridden if this is called.
     */      
    protected void enableActionGetSoftwareStatus()
    {
        Action action = new Action("GetSoftwareStatus");
        action.addOutputParameter(new ParameterRelated("SoftwareStatus", iPropertySoftwareStatus));
        iDelegateGetSoftwareStatus = new DoGetSoftwareStatus();
        enableAction(action, iDelegateGetSoftwareStatus);
    }

    /**
     * Signal that the action GetExecutorStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetExecutorStatus must be overridden if this is called.
     */      
    protected void enableActionGetExecutorStatus()
    {
        Action action = new Action("GetExecutorStatus");
        action.addOutputParameter(new ParameterRelated("ExecutorStatus", iPropertyExecutorStatus));
        iDelegateGetExecutorStatus = new DoGetExecutorStatus();
        enableAction(action, iDelegateGetExecutorStatus);
    }

    /**
     * Signal that the action Apply is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Apply must be overridden if this is called.
     */      
    protected void enableActionApply()
    {
        Action action = new Action("Apply");
        iDelegateApply = new DoApply();
        enableAction(action, iDelegateApply);
    }

    /**
     * Signal that the action Recover is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Recover must be overridden if this is called.
     */      
    protected void enableActionRecover()
    {
        Action action = new Action("Recover");
        iDelegateRecover = new DoRecover();
        enableAction(action, iDelegateRecover);
    }

    /**
     * Signal that the action CheckNow is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * CheckNow must be overridden if this is called.
     */      
    protected void enableActionCheckNow()
    {
        Action action = new Action("CheckNow");
        iDelegateCheckNow = new DoCheckNow();
        enableAction(action, iDelegateCheckNow);
    }

    /**
     * PushManifest action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * PushManifest action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionPushManifest} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aUri
     */
    protected void pushManifest(IDvInvocation aInvocation, String aUri)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetSoftwareStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetSoftwareStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetSoftwareStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getSoftwareStatus(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetExecutorStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetExecutorStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetExecutorStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getExecutorStatus(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Apply action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Apply action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionApply} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void apply(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Recover action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Recover action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionRecover} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void recover(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * CheckNow action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * CheckNow action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionCheckNow} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void checkNow(IDvInvocation aInvocation)
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


    private class DoPushManifest implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String uri;
            try
            {
                invocation.readStart();
                uri = invocation.readString("Uri");
                invocation.readEnd();
                pushManifest(invocation, uri);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "PushManifest");
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

    private class DoGetSoftwareStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String softwareStatus;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 softwareStatus = getSoftwareStatus(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetSoftwareStatus");
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
                invocation.writeString("SoftwareStatus", softwareStatus);
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

    private class DoGetExecutorStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String executorStatus;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 executorStatus = getExecutorStatus(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetExecutorStatus");
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
                invocation.writeString("ExecutorStatus", executorStatus);
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

    private class DoApply implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                apply(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Apply");
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

    private class DoRecover implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                recover(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Recover");
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

    private class DoCheckNow implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                checkNow(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "CheckNow");
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

