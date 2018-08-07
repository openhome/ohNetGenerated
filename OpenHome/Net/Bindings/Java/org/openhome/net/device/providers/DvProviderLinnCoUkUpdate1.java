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

    /**
     * Set the value of the UpdateTopic property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyUpdateTopic(String aValue);

    /**
     * Get a copy of the value of the UpdateTopic property
     *
     * @return value of the UpdateTopic property.
     */
    public String getPropertyUpdateTopic();

    /**
     * Set the value of the UpdateChannel property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyUpdateChannel(String aValue);

    /**
     * Get a copy of the value of the UpdateChannel property
     *
     * @return value of the UpdateChannel property.
     */
    public String getPropertyUpdateChannel();
        
}

/**
 * Provider for the linn.co.uk:Update:1 UPnP service.
 */
public class DvProviderLinnCoUkUpdate1 extends DvProvider implements IDvProviderLinnCoUkUpdate1
{

    public class GetUpdateFeedParams
    {
        private String iTopic;
        private String iChannel;

        public GetUpdateFeedParams(
            String aTopic,
            String aChannel
        )
        {
            iTopic = aTopic;
            iChannel = aChannel;
        }
        public String getTopic()
        {
            return iTopic;
        }
        public String getChannel()
        {
            return iChannel;
        }
    }

    private IDvInvocationListener iDelegatePushManifest;
    private IDvInvocationListener iDelegateSetUpdateFeedParams;
    private IDvInvocationListener iDelegateGetUpdateFeedParams;
    private IDvInvocationListener iDelegateGetSoftwareStatus;
    private IDvInvocationListener iDelegateGetExecutorStatus;
    private IDvInvocationListener iDelegateApply;
    private IDvInvocationListener iDelegateRestore;
    private PropertyString iPropertySoftwareStatus;
    private PropertyString iPropertyExecutorStatus;
    private PropertyString iPropertyUpdateTopic;
    private PropertyString iPropertyUpdateChannel;

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
     * Enable the UpdateTopic property.
     */
    public void enablePropertyUpdateTopic()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyUpdateTopic = new PropertyString(new ParameterString("UpdateTopic", allowedValues));
        addProperty(iPropertyUpdateTopic);
    }

    /**
     * Enable the UpdateChannel property.
     */
    public void enablePropertyUpdateChannel()
    {
        List<String> allowedValues = new LinkedList<String>();
        allowedValues.add("release");
        allowedValues.add("beta");
        allowedValues.add("development");
        allowedValues.add("nightly");
        iPropertyUpdateChannel = new PropertyString(new ParameterString("UpdateChannel", allowedValues));
        addProperty(iPropertyUpdateChannel);
            allowedValues.clear();
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
     * Set the value of the UpdateTopic property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyUpdateTopic(String aValue)
    {
        return setPropertyString(iPropertyUpdateTopic, aValue);
    }

    /**
     * Get a copy of the value of the UpdateTopic property
     *
     * @return  value of the UpdateTopic property.
     */
    public String getPropertyUpdateTopic()
    {
        return iPropertyUpdateTopic.getValue();
    }

    /**
     * Set the value of the UpdateChannel property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyUpdateChannel(String aValue)
    {
        return setPropertyString(iPropertyUpdateChannel, aValue);
    }

    /**
     * Get a copy of the value of the UpdateChannel property
     *
     * @return  value of the UpdateChannel property.
     */
    public String getPropertyUpdateChannel()
    {
        return iPropertyUpdateChannel.getValue();
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
     * Signal that the action SetUpdateFeedParams is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetUpdateFeedParams must be overridden if this is called.
     */      
    protected void enableActionSetUpdateFeedParams()
    {
        Action action = new Action("SetUpdateFeedParams");
        action.addInputParameter(new ParameterRelated("Topic", iPropertyUpdateTopic));
        action.addInputParameter(new ParameterRelated("Channel", iPropertyUpdateChannel));
        iDelegateSetUpdateFeedParams = new DoSetUpdateFeedParams();
        enableAction(action, iDelegateSetUpdateFeedParams);
    }

    /**
     * Signal that the action GetUpdateFeedParams is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetUpdateFeedParams must be overridden if this is called.
     */      
    protected void enableActionGetUpdateFeedParams()
    {
        Action action = new Action("GetUpdateFeedParams");
        action.addOutputParameter(new ParameterRelated("Topic", iPropertyUpdateTopic));
        action.addOutputParameter(new ParameterRelated("Channel", iPropertyUpdateChannel));
        iDelegateGetUpdateFeedParams = new DoGetUpdateFeedParams();
        enableAction(action, iDelegateGetUpdateFeedParams);
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
     * Signal that the action Restore is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Restore must be overridden if this is called.
     */      
    protected void enableActionRestore()
    {
        Action action = new Action("Restore");
        iDelegateRestore = new DoRestore();
        enableAction(action, iDelegateRestore);
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
     * SetUpdateFeedParams action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetUpdateFeedParams action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetUpdateFeedParams} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aTopic
     * @param aChannel
     */
    protected void setUpdateFeedParams(IDvInvocation aInvocation, String aTopic, String aChannel)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetUpdateFeedParams action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetUpdateFeedParams action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetUpdateFeedParams} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetUpdateFeedParams getUpdateFeedParams(IDvInvocation aInvocation)
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
     * Restore action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Restore action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionRestore} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void restore(IDvInvocation aInvocation)
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

    private class DoSetUpdateFeedParams implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String topic;
            String channel;
            try
            {
                invocation.readStart();
                topic = invocation.readString("Topic");
                channel = invocation.readString("Channel");
                invocation.readEnd();
                setUpdateFeedParams(invocation, topic, channel);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetUpdateFeedParams");
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

    private class DoGetUpdateFeedParams implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String topic;
            String channel;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetUpdateFeedParams outArgs = getUpdateFeedParams(invocation);
            topic = outArgs.getTopic();
            channel = outArgs.getChannel();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetUpdateFeedParams");
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
                invocation.writeString("Topic", topic);
                invocation.writeString("Channel", channel);
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

    private class DoRestore implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                restore(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Restore");
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

