package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkUpdate3
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

    /**
     * Set the value of the JobStatus property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyJobStatus(String aValue);

    /**
     * Get a copy of the value of the JobStatus property
     *
     * @return value of the JobStatus property.
     */
    public String getPropertyJobStatus();

    /**
     * Set the value of the RecoverSupported property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyRecoverSupported(boolean aValue);

    /**
     * Get a copy of the value of the RecoverSupported property
     *
     * @return value of the RecoverSupported property.
     */
    public boolean getPropertyRecoverSupported();
        
}

/**
 * Provider for the linn.co.uk:Update:3 UPnP service.
 */
public class DvProviderLinnCoUkUpdate3 extends DvProvider implements IDvProviderLinnCoUkUpdate3
{

    private IDvInvocationListener iDelegatePushManifest;
    private IDvInvocationListener iDelegatePushManifest2;
    private IDvInvocationListener iDelegateGetSoftwareStatus;
    private IDvInvocationListener iDelegateGetExecutorStatus;
    private IDvInvocationListener iDelegateGetJobStatus;
    private IDvInvocationListener iDelegateApply;
    private IDvInvocationListener iDelegateApply2;
    private IDvInvocationListener iDelegateRecover;
    private IDvInvocationListener iDelegateRecover2;
    private IDvInvocationListener iDelegateCheckNow;
    private IDvInvocationListener iDelegateGetRecoverSupported;
    private PropertyString iPropertySoftwareStatus;
    private PropertyString iPropertyExecutorStatus;
    private PropertyString iPropertyJobStatus;
    private PropertyBool iPropertyRecoverSupported;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkUpdate3(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "Update", 3);
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
     * Enable the JobStatus property.
     */
    public void enablePropertyJobStatus()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyJobStatus = new PropertyString(new ParameterString("JobStatus", allowedValues));
        addProperty(iPropertyJobStatus);
    }

    /**
     * Enable the RecoverSupported property.
     */
    public void enablePropertyRecoverSupported()
    {
        iPropertyRecoverSupported = new PropertyBool(new ParameterBool("RecoverSupported"));
        addProperty(iPropertyRecoverSupported);
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
     * Set the value of the JobStatus property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyJobStatus(String aValue)
    {
        return setPropertyString(iPropertyJobStatus, aValue);
    }

    /**
     * Get a copy of the value of the JobStatus property
     *
     * @return  value of the JobStatus property.
     */
    public String getPropertyJobStatus()
    {
        return iPropertyJobStatus.getValue();
    }

    /**
     * Set the value of the RecoverSupported property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyRecoverSupported(boolean aValue)
    {
        return setPropertyBool(iPropertyRecoverSupported, aValue);
    }

    /**
     * Get a copy of the value of the RecoverSupported property
     *
     * @return  value of the RecoverSupported property.
     */
    public boolean getPropertyRecoverSupported()
    {
        return iPropertyRecoverSupported.getValue();
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
     * Signal that the action PushManifest2 is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * PushManifest2 must be overridden if this is called.
     */      
    protected void enableActionPushManifest2()
    {
        Action action = new Action("PushManifest2");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Uri", allowedValues));
        action.addOutputParameter(new ParameterUint("Id"));
        iDelegatePushManifest2 = new DoPushManifest2();
        enableAction(action, iDelegatePushManifest2);
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
     * Signal that the action GetJobStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetJobStatus must be overridden if this is called.
     */      
    protected void enableActionGetJobStatus()
    {
        Action action = new Action("GetJobStatus");
        action.addOutputParameter(new ParameterRelated("JobStatus", iPropertyJobStatus));
        iDelegateGetJobStatus = new DoGetJobStatus();
        enableAction(action, iDelegateGetJobStatus);
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
     * Signal that the action Apply2 is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Apply2 must be overridden if this is called.
     */      
    protected void enableActionApply2()
    {
        Action action = new Action("Apply2");
        action.addOutputParameter(new ParameterUint("Id"));
        iDelegateApply2 = new DoApply2();
        enableAction(action, iDelegateApply2);
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
     * Signal that the action Recover2 is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Recover2 must be overridden if this is called.
     */      
    protected void enableActionRecover2()
    {
        Action action = new Action("Recover2");
        action.addOutputParameter(new ParameterUint("Id"));
        iDelegateRecover2 = new DoRecover2();
        enableAction(action, iDelegateRecover2);
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
     * Signal that the action GetRecoverSupported is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetRecoverSupported must be overridden if this is called.
     */      
    protected void enableActionGetRecoverSupported()
    {
        Action action = new Action("GetRecoverSupported");
        action.addOutputParameter(new ParameterRelated("RecoverSupported", iPropertyRecoverSupported));
        iDelegateGetRecoverSupported = new DoGetRecoverSupported();
        enableAction(action, iDelegateGetRecoverSupported);
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
     * PushManifest2 action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * PushManifest2 action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionPushManifest2} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aUri
     */
    protected long pushManifest2(IDvInvocation aInvocation, String aUri)
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
     * GetJobStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetJobStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetJobStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getJobStatus(IDvInvocation aInvocation)
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
     * Apply2 action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Apply2 action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionApply2} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long apply2(IDvInvocation aInvocation)
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
     * Recover2 action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Recover2 action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionRecover2} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long recover2(IDvInvocation aInvocation)
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
     * GetRecoverSupported action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetRecoverSupported action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetRecoverSupported} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getRecoverSupported(IDvInvocation aInvocation)
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

    private class DoPushManifest2 implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String uri;
            long id;
            try
            {
                invocation.readStart();
                uri = invocation.readString("Uri");
                invocation.readEnd();
                 id = pushManifest2(invocation, uri);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "PushManifest2");
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
                invocation.writeUint("Id", id);
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

    private class DoGetJobStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String jobStatus;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 jobStatus = getJobStatus(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetJobStatus");
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
                invocation.writeString("JobStatus", jobStatus);
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

    private class DoApply2 implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long id;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 id = apply2(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Apply2");
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
                invocation.writeUint("Id", id);
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

    private class DoRecover2 implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long id;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 id = recover2(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Recover2");
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
                invocation.writeUint("Id", id);
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

    private class DoGetRecoverSupported implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean recoverSupported;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 recoverSupported = getRecoverSupported(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetRecoverSupported");
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
                invocation.writeBool("RecoverSupported", recoverSupported);
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

