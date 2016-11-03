package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkPrivacy1
{

    /**
     * Set the value of the PolicyVersion property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyPolicyVersion(long aValue);

    /**
     * Get a copy of the value of the PolicyVersion property
     *
     * @return value of the PolicyVersion property.
     */
    public long getPropertyPolicyVersion();

    /**
     * Set the value of the PolicyAgreed property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyPolicyAgreed(long aValue);

    /**
     * Get a copy of the value of the PolicyAgreed property
     *
     * @return value of the PolicyAgreed property.
     */
    public long getPropertyPolicyAgreed();

    /**
     * Set the value of the PolicyDetails property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyPolicyDetails(String aValue);

    /**
     * Get a copy of the value of the PolicyDetails property
     *
     * @return value of the PolicyDetails property.
     */
    public String getPropertyPolicyDetails();
        
}

/**
 * Provider for the linn.co.uk:Privacy:1 UPnP service.
 */
public class DvProviderLinnCoUkPrivacy1 extends DvProvider implements IDvProviderLinnCoUkPrivacy1
{

    private IDvInvocationListener iDelegateGetPolicyVersion;
    private IDvInvocationListener iDelegateGetPolicyAgreed;
    private IDvInvocationListener iDelegateSetPolicyAgreed;
    private IDvInvocationListener iDelegateGetPolicyDetails;
    private IDvInvocationListener iDelegateSetPolicyDetails;
    private PropertyUint iPropertyPolicyVersion;
    private PropertyUint iPropertyPolicyAgreed;
    private PropertyString iPropertyPolicyDetails;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkPrivacy1(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "Privacy", 1);
    }

    /**
     * Enable the PolicyVersion property.
     */
    public void enablePropertyPolicyVersion()
    {
        iPropertyPolicyVersion = new PropertyUint(new ParameterUint("PolicyVersion"));
        addProperty(iPropertyPolicyVersion);
    }

    /**
     * Enable the PolicyAgreed property.
     */
    public void enablePropertyPolicyAgreed()
    {
        iPropertyPolicyAgreed = new PropertyUint(new ParameterUint("PolicyAgreed"));
        addProperty(iPropertyPolicyAgreed);
    }

    /**
     * Enable the PolicyDetails property.
     */
    public void enablePropertyPolicyDetails()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyPolicyDetails = new PropertyString(new ParameterString("PolicyDetails", allowedValues));
        addProperty(iPropertyPolicyDetails);
    }

    /**
     * Set the value of the PolicyVersion property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyPolicyVersion(long aValue)
    {
        return setPropertyUint(iPropertyPolicyVersion, aValue);
    }

    /**
     * Get a copy of the value of the PolicyVersion property
     *
     * @return  value of the PolicyVersion property.
     */
    public long getPropertyPolicyVersion()
    {
        return iPropertyPolicyVersion.getValue();
    }

    /**
     * Set the value of the PolicyAgreed property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyPolicyAgreed(long aValue)
    {
        return setPropertyUint(iPropertyPolicyAgreed, aValue);
    }

    /**
     * Get a copy of the value of the PolicyAgreed property
     *
     * @return  value of the PolicyAgreed property.
     */
    public long getPropertyPolicyAgreed()
    {
        return iPropertyPolicyAgreed.getValue();
    }

    /**
     * Set the value of the PolicyDetails property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyPolicyDetails(String aValue)
    {
        return setPropertyString(iPropertyPolicyDetails, aValue);
    }

    /**
     * Get a copy of the value of the PolicyDetails property
     *
     * @return  value of the PolicyDetails property.
     */
    public String getPropertyPolicyDetails()
    {
        return iPropertyPolicyDetails.getValue();
    }

    /**
     * Signal that the action GetPolicyVersion is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetPolicyVersion must be overridden if this is called.
     */      
    protected void enableActionGetPolicyVersion()
    {
        Action action = new Action("GetPolicyVersion");
        action.addOutputParameter(new ParameterRelated("Version", iPropertyPolicyVersion));
        iDelegateGetPolicyVersion = new DoGetPolicyVersion();
        enableAction(action, iDelegateGetPolicyVersion);
    }

    /**
     * Signal that the action GetPolicyAgreed is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetPolicyAgreed must be overridden if this is called.
     */      
    protected void enableActionGetPolicyAgreed()
    {
        Action action = new Action("GetPolicyAgreed");
        action.addOutputParameter(new ParameterRelated("Version", iPropertyPolicyAgreed));
        iDelegateGetPolicyAgreed = new DoGetPolicyAgreed();
        enableAction(action, iDelegateGetPolicyAgreed);
    }

    /**
     * Signal that the action SetPolicyAgreed is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetPolicyAgreed must be overridden if this is called.
     */      
    protected void enableActionSetPolicyAgreed()
    {
        Action action = new Action("SetPolicyAgreed");
        action.addInputParameter(new ParameterRelated("Agreed", iPropertyPolicyAgreed));
        iDelegateSetPolicyAgreed = new DoSetPolicyAgreed();
        enableAction(action, iDelegateSetPolicyAgreed);
    }

    /**
     * Signal that the action GetPolicyDetails is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetPolicyDetails must be overridden if this is called.
     */      
    protected void enableActionGetPolicyDetails()
    {
        Action action = new Action("GetPolicyDetails");
        action.addOutputParameter(new ParameterRelated("Details", iPropertyPolicyDetails));
        iDelegateGetPolicyDetails = new DoGetPolicyDetails();
        enableAction(action, iDelegateGetPolicyDetails);
    }

    /**
     * Signal that the action SetPolicyDetails is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetPolicyDetails must be overridden if this is called.
     */      
    protected void enableActionSetPolicyDetails()
    {
        Action action = new Action("SetPolicyDetails");
        action.addInputParameter(new ParameterRelated("Details", iPropertyPolicyDetails));
        iDelegateSetPolicyDetails = new DoSetPolicyDetails();
        enableAction(action, iDelegateSetPolicyDetails);
    }

    /**
     * GetPolicyVersion action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetPolicyVersion action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetPolicyVersion} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long getPolicyVersion(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetPolicyAgreed action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetPolicyAgreed action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetPolicyAgreed} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long getPolicyAgreed(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetPolicyAgreed action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetPolicyAgreed action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetPolicyAgreed} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aAgreed
     */
    protected void setPolicyAgreed(IDvInvocation aInvocation, long aAgreed)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetPolicyDetails action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetPolicyDetails action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetPolicyDetails} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getPolicyDetails(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetPolicyDetails action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetPolicyDetails action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetPolicyDetails} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aDetails
     */
    protected void setPolicyDetails(IDvInvocation aInvocation, String aDetails)
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


    private class DoGetPolicyVersion implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long version;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 version = getPolicyVersion(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetPolicyVersion");
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

    private class DoGetPolicyAgreed implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long version;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 version = getPolicyAgreed(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetPolicyAgreed");
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

    private class DoSetPolicyAgreed implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long agreed;
            try
            {
                invocation.readStart();
                agreed = invocation.readUint("Agreed");
                invocation.readEnd();
                setPolicyAgreed(invocation, agreed);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetPolicyAgreed");
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

    private class DoGetPolicyDetails implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String details;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 details = getPolicyDetails(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetPolicyDetails");
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
                invocation.writeString("Details", details);
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

    private class DoSetPolicyDetails implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String details;
            try
            {
                invocation.readStart();
                details = invocation.readString("Details");
                invocation.readEnd();
                setPolicyDetails(invocation, details);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetPolicyDetails");
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

