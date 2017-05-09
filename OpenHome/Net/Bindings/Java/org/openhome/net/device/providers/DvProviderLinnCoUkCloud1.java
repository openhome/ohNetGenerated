package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkCloud1
{

    /**
     * Set the value of the AssociationStatus property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyAssociationStatus(String aValue);

    /**
     * Get a copy of the value of the AssociationStatus property
     *
     * @return value of the AssociationStatus property.
     */
    public String getPropertyAssociationStatus();

    /**
     * Set the value of the ControlEnabled property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyControlEnabled(boolean aValue);

    /**
     * Get a copy of the value of the ControlEnabled property
     *
     * @return value of the ControlEnabled property.
     */
    public boolean getPropertyControlEnabled();
        
}

/**
 * Provider for the linn.co.uk:Cloud:1 UPnP service.
 */
public class DvProviderLinnCoUkCloud1 extends DvProvider implements IDvProviderLinnCoUkCloud1
{

    private IDvInvocationListener iDelegateGetChallengeResponse;
    private IDvInvocationListener iDelegateSetAssociationStatus;
    private IDvInvocationListener iDelegateGetAssociationStatus;
    private IDvInvocationListener iDelegateSetControlEnabled;
    private IDvInvocationListener iDelegateGetControlEnabled;
    private PropertyString iPropertyAssociationStatus;
    private PropertyBool iPropertyControlEnabled;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkCloud1(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "Cloud", 1);
    }

    /**
     * Enable the AssociationStatus property.
     */
    public void enablePropertyAssociationStatus()
    {
        List<String> allowedValues = new LinkedList<String>();
        allowedValues.add("Associated");
        allowedValues.add("NotAssociated");
        allowedValues.add("Unconfigured");
        iPropertyAssociationStatus = new PropertyString(new ParameterString("AssociationStatus", allowedValues));
        addProperty(iPropertyAssociationStatus);
            allowedValues.clear();
    }

    /**
     * Enable the ControlEnabled property.
     */
    public void enablePropertyControlEnabled()
    {
        iPropertyControlEnabled = new PropertyBool(new ParameterBool("ControlEnabled"));
        addProperty(iPropertyControlEnabled);
    }

    /**
     * Set the value of the AssociationStatus property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyAssociationStatus(String aValue)
    {
        return setPropertyString(iPropertyAssociationStatus, aValue);
    }

    /**
     * Get a copy of the value of the AssociationStatus property
     *
     * @return  value of the AssociationStatus property.
     */
    public String getPropertyAssociationStatus()
    {
        return iPropertyAssociationStatus.getValue();
    }

    /**
     * Set the value of the ControlEnabled property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyControlEnabled(boolean aValue)
    {
        return setPropertyBool(iPropertyControlEnabled, aValue);
    }

    /**
     * Get a copy of the value of the ControlEnabled property
     *
     * @return  value of the ControlEnabled property.
     */
    public boolean getPropertyControlEnabled()
    {
        return iPropertyControlEnabled.getValue();
    }

    /**
     * Signal that the action GetChallengeResponse is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetChallengeResponse must be overridden if this is called.
     */      
    protected void enableActionGetChallengeResponse()
    {
        Action action = new Action("GetChallengeResponse");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Challenge", allowedValues));
        action.addOutputParameter(new ParameterString("Response", allowedValues));
        iDelegateGetChallengeResponse = new DoGetChallengeResponse();
        enableAction(action, iDelegateGetChallengeResponse);
    }

    /**
     * Signal that the action SetAssociationStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetAssociationStatus must be overridden if this is called.
     */      
    protected void enableActionSetAssociationStatus()
    {
        Action action = new Action("SetAssociationStatus");
        action.addInputParameter(new ParameterRelated("Status", iPropertyAssociationStatus));
        iDelegateSetAssociationStatus = new DoSetAssociationStatus();
        enableAction(action, iDelegateSetAssociationStatus);
    }

    /**
     * Signal that the action GetAssociationStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetAssociationStatus must be overridden if this is called.
     */      
    protected void enableActionGetAssociationStatus()
    {
        Action action = new Action("GetAssociationStatus");
        action.addOutputParameter(new ParameterRelated("Status", iPropertyAssociationStatus));
        iDelegateGetAssociationStatus = new DoGetAssociationStatus();
        enableAction(action, iDelegateGetAssociationStatus);
    }

    /**
     * Signal that the action SetControlEnabled is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetControlEnabled must be overridden if this is called.
     */      
    protected void enableActionSetControlEnabled()
    {
        Action action = new Action("SetControlEnabled");
        action.addInputParameter(new ParameterRelated("Enabled", iPropertyControlEnabled));
        iDelegateSetControlEnabled = new DoSetControlEnabled();
        enableAction(action, iDelegateSetControlEnabled);
    }

    /**
     * Signal that the action GetControlEnabled is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetControlEnabled must be overridden if this is called.
     */      
    protected void enableActionGetControlEnabled()
    {
        Action action = new Action("GetControlEnabled");
        action.addOutputParameter(new ParameterRelated("Enabled", iPropertyControlEnabled));
        iDelegateGetControlEnabled = new DoGetControlEnabled();
        enableAction(action, iDelegateGetControlEnabled);
    }

    /**
     * GetChallengeResponse action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetChallengeResponse action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetChallengeResponse} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aChallenge
     */
    protected String getChallengeResponse(IDvInvocation aInvocation, String aChallenge)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetAssociationStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetAssociationStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetAssociationStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aStatus
     */
    protected void setAssociationStatus(IDvInvocation aInvocation, String aStatus)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetAssociationStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetAssociationStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetAssociationStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getAssociationStatus(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetControlEnabled action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetControlEnabled action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetControlEnabled} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aEnabled
     */
    protected void setControlEnabled(IDvInvocation aInvocation, boolean aEnabled)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetControlEnabled action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetControlEnabled action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetControlEnabled} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getControlEnabled(IDvInvocation aInvocation)
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


    private class DoGetChallengeResponse implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String challenge;
            String response;
            try
            {
                invocation.readStart();
                challenge = invocation.readString("Challenge");
                invocation.readEnd();
                 response = getChallengeResponse(invocation, challenge);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetChallengeResponse");
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
                invocation.writeString("Response", response);
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

    private class DoSetAssociationStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String status;
            try
            {
                invocation.readStart();
                status = invocation.readString("Status");
                invocation.readEnd();
                setAssociationStatus(invocation, status);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetAssociationStatus");
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

    private class DoGetAssociationStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String status;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 status = getAssociationStatus(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetAssociationStatus");
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

    private class DoSetControlEnabled implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean enabled;
            try
            {
                invocation.readStart();
                enabled = invocation.readBool("Enabled");
                invocation.readEnd();
                setControlEnabled(invocation, enabled);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetControlEnabled");
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

    private class DoGetControlEnabled implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean enabled;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 enabled = getControlEnabled(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetControlEnabled");
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
                invocation.writeBool("Enabled", enabled);
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

