package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgReaction1
{

    /**
     * Set the value of the CanReact property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyCanReact(boolean aValue);

    /**
     * Get a copy of the value of the CanReact property
     *
     * @return value of the CanReact property.
     */
    public boolean getPropertyCanReact();

    /**
     * Set the value of the CurrentReaction property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyCurrentReaction(String aValue);

    /**
     * Get a copy of the value of the CurrentReaction property
     *
     * @return value of the CurrentReaction property.
     */
    public String getPropertyCurrentReaction();

    /**
     * Set the value of the AvailableReactions property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyAvailableReactions(String aValue);

    /**
     * Get a copy of the value of the AvailableReactions property
     *
     * @return value of the AvailableReactions property.
     */
    public String getPropertyAvailableReactions();
        
}

/**
 * Provider for the av.openhome.org:Reaction:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgReaction1 extends DvProvider implements IDvProviderAvOpenhomeOrgReaction1
{

    private IDvInvocationListener iDelegateGetCanReact;
    private IDvInvocationListener iDelegateGetCurrentReaction;
    private IDvInvocationListener iDelegateGetAvailableReactions;
    private IDvInvocationListener iDelegateSetReaction;
    private IDvInvocationListener iDelegateClearReaction;
    private PropertyBool iPropertyCanReact;
    private PropertyString iPropertyCurrentReaction;
    private PropertyString iPropertyAvailableReactions;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgReaction1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "Reaction", 1);
    }

    /**
     * Enable the CanReact property.
     */
    public void enablePropertyCanReact()
    {
        iPropertyCanReact = new PropertyBool(new ParameterBool("CanReact"));
        addProperty(iPropertyCanReact);
    }

    /**
     * Enable the CurrentReaction property.
     */
    public void enablePropertyCurrentReaction()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyCurrentReaction = new PropertyString(new ParameterString("CurrentReaction", allowedValues));
        addProperty(iPropertyCurrentReaction);
    }

    /**
     * Enable the AvailableReactions property.
     */
    public void enablePropertyAvailableReactions()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyAvailableReactions = new PropertyString(new ParameterString("AvailableReactions", allowedValues));
        addProperty(iPropertyAvailableReactions);
    }

    /**
     * Set the value of the CanReact property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyCanReact(boolean aValue)
    {
        return setPropertyBool(iPropertyCanReact, aValue);
    }

    /**
     * Get a copy of the value of the CanReact property
     *
     * @return  value of the CanReact property.
     */
    public boolean getPropertyCanReact()
    {
        return iPropertyCanReact.getValue();
    }

    /**
     * Set the value of the CurrentReaction property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyCurrentReaction(String aValue)
    {
        return setPropertyString(iPropertyCurrentReaction, aValue);
    }

    /**
     * Get a copy of the value of the CurrentReaction property
     *
     * @return  value of the CurrentReaction property.
     */
    public String getPropertyCurrentReaction()
    {
        return iPropertyCurrentReaction.getValue();
    }

    /**
     * Set the value of the AvailableReactions property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyAvailableReactions(String aValue)
    {
        return setPropertyString(iPropertyAvailableReactions, aValue);
    }

    /**
     * Get a copy of the value of the AvailableReactions property
     *
     * @return  value of the AvailableReactions property.
     */
    public String getPropertyAvailableReactions()
    {
        return iPropertyAvailableReactions.getValue();
    }

    /**
     * Signal that the action GetCanReact is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetCanReact must be overridden if this is called.
     */      
    protected void enableActionGetCanReact()
    {
        Action action = new Action("GetCanReact");
        action.addOutputParameter(new ParameterBool("CanReact"));
        iDelegateGetCanReact = new DoGetCanReact();
        enableAction(action, iDelegateGetCanReact);
    }

    /**
     * Signal that the action GetCurrentReaction is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetCurrentReaction must be overridden if this is called.
     */      
    protected void enableActionGetCurrentReaction()
    {
        Action action = new Action("GetCurrentReaction");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("Reaction", allowedValues));
        iDelegateGetCurrentReaction = new DoGetCurrentReaction();
        enableAction(action, iDelegateGetCurrentReaction);
    }

    /**
     * Signal that the action GetAvailableReactions is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetAvailableReactions must be overridden if this is called.
     */      
    protected void enableActionGetAvailableReactions()
    {
        Action action = new Action("GetAvailableReactions");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("AvailableReactions", allowedValues));
        iDelegateGetAvailableReactions = new DoGetAvailableReactions();
        enableAction(action, iDelegateGetAvailableReactions);
    }

    /**
     * Signal that the action SetReaction is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetReaction must be overridden if this is called.
     */      
    protected void enableActionSetReaction()
    {
        Action action = new Action("SetReaction");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Reaction", allowedValues));
        iDelegateSetReaction = new DoSetReaction();
        enableAction(action, iDelegateSetReaction);
    }

    /**
     * Signal that the action ClearReaction is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ClearReaction must be overridden if this is called.
     */      
    protected void enableActionClearReaction()
    {
        Action action = new Action("ClearReaction");
        iDelegateClearReaction = new DoClearReaction();
        enableAction(action, iDelegateClearReaction);
    }

    /**
     * GetCanReact action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetCanReact action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetCanReact} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getCanReact(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetCurrentReaction action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetCurrentReaction action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetCurrentReaction} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getCurrentReaction(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetAvailableReactions action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetAvailableReactions action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetAvailableReactions} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getAvailableReactions(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetReaction action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetReaction action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetReaction} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aReaction
     */
    protected void setReaction(IDvInvocation aInvocation, String aReaction)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ClearReaction action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ClearReaction action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionClearReaction} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void clearReaction(IDvInvocation aInvocation)
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


    private class DoGetCanReact implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean canReact;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 canReact = getCanReact(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetCanReact");
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
                invocation.writeBool("CanReact", canReact);
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

    private class DoGetCurrentReaction implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String reaction;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 reaction = getCurrentReaction(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetCurrentReaction");
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
                invocation.writeString("Reaction", reaction);
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

    private class DoGetAvailableReactions implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String availableReactions;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 availableReactions = getAvailableReactions(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetAvailableReactions");
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
                invocation.writeString("AvailableReactions", availableReactions);
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

    private class DoSetReaction implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String reaction;
            try
            {
                invocation.readStart();
                reaction = invocation.readString("Reaction");
                invocation.readEnd();
                setReaction(invocation, reaction);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetReaction");
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

    private class DoClearReaction implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                clearReaction(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ClearReaction");
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

