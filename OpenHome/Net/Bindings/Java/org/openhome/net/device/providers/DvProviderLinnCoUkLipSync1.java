package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkLipSync1
{

    /**
     * Set the value of the Delay property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyDelay(long aValue);

    /**
     * Get a copy of the value of the Delay property
     *
     * @return value of the Delay property.
     */
    public long getPropertyDelay();

    /**
     * Set the value of the DelayMinimum property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyDelayMinimum(long aValue);

    /**
     * Get a copy of the value of the DelayMinimum property
     *
     * @return value of the DelayMinimum property.
     */
    public long getPropertyDelayMinimum();

    /**
     * Set the value of the DelayMaximum property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyDelayMaximum(long aValue);

    /**
     * Get a copy of the value of the DelayMaximum property
     *
     * @return value of the DelayMaximum property.
     */
    public long getPropertyDelayMaximum();
        
}

/**
 * Provider for the linn.co.uk:LipSync:1 UPnP service.
 */
public class DvProviderLinnCoUkLipSync1 extends DvProvider implements IDvProviderLinnCoUkLipSync1
{

    private IDvInvocationListener iDelegateSetDelay;
    private IDvInvocationListener iDelegateDelay;
    private IDvInvocationListener iDelegateDelayMinimum;
    private IDvInvocationListener iDelegateDelayMaximum;
    private PropertyUint iPropertyDelay;
    private PropertyUint iPropertyDelayMinimum;
    private PropertyUint iPropertyDelayMaximum;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkLipSync1(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "LipSync", 1);
    }

    /**
     * Enable the Delay property.
     */
    public void enablePropertyDelay()
    {
        iPropertyDelay = new PropertyUint(new ParameterUint("Delay"));
        addProperty(iPropertyDelay);
    }

    /**
     * Enable the DelayMinimum property.
     */
    public void enablePropertyDelayMinimum()
    {
        iPropertyDelayMinimum = new PropertyUint(new ParameterUint("DelayMinimum"));
        addProperty(iPropertyDelayMinimum);
    }

    /**
     * Enable the DelayMaximum property.
     */
    public void enablePropertyDelayMaximum()
    {
        iPropertyDelayMaximum = new PropertyUint(new ParameterUint("DelayMaximum"));
        addProperty(iPropertyDelayMaximum);
    }

    /**
     * Set the value of the Delay property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyDelay(long aValue)
    {
        return setPropertyUint(iPropertyDelay, aValue);
    }

    /**
     * Get a copy of the value of the Delay property
     *
     * @return  value of the Delay property.
     */
    public long getPropertyDelay()
    {
        return iPropertyDelay.getValue();
    }

    /**
     * Set the value of the DelayMinimum property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyDelayMinimum(long aValue)
    {
        return setPropertyUint(iPropertyDelayMinimum, aValue);
    }

    /**
     * Get a copy of the value of the DelayMinimum property
     *
     * @return  value of the DelayMinimum property.
     */
    public long getPropertyDelayMinimum()
    {
        return iPropertyDelayMinimum.getValue();
    }

    /**
     * Set the value of the DelayMaximum property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyDelayMaximum(long aValue)
    {
        return setPropertyUint(iPropertyDelayMaximum, aValue);
    }

    /**
     * Get a copy of the value of the DelayMaximum property
     *
     * @return  value of the DelayMaximum property.
     */
    public long getPropertyDelayMaximum()
    {
        return iPropertyDelayMaximum.getValue();
    }

    /**
     * Signal that the action SetDelay is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetDelay must be overridden if this is called.
     */      
    protected void enableActionSetDelay()
    {
        Action action = new Action("SetDelay");
        action.addInputParameter(new ParameterRelated("Delay", iPropertyDelay));
        iDelegateSetDelay = new DoSetDelay();
        enableAction(action, iDelegateSetDelay);
    }

    /**
     * Signal that the action Delay is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Delay must be overridden if this is called.
     */      
    protected void enableActionDelay()
    {
        Action action = new Action("Delay");
        action.addOutputParameter(new ParameterRelated("Delay", iPropertyDelay));
        iDelegateDelay = new DoDelay();
        enableAction(action, iDelegateDelay);
    }

    /**
     * Signal that the action DelayMinimum is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * DelayMinimum must be overridden if this is called.
     */      
    protected void enableActionDelayMinimum()
    {
        Action action = new Action("DelayMinimum");
        action.addOutputParameter(new ParameterRelated("Min", iPropertyDelayMinimum));
        iDelegateDelayMinimum = new DoDelayMinimum();
        enableAction(action, iDelegateDelayMinimum);
    }

    /**
     * Signal that the action DelayMaximum is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * DelayMaximum must be overridden if this is called.
     */      
    protected void enableActionDelayMaximum()
    {
        Action action = new Action("DelayMaximum");
        action.addOutputParameter(new ParameterRelated("Max", iPropertyDelayMaximum));
        iDelegateDelayMaximum = new DoDelayMaximum();
        enableAction(action, iDelegateDelayMaximum);
    }

    /**
     * SetDelay action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetDelay action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetDelay} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aDelay
     */
    protected void setDelay(IDvInvocation aInvocation, long aDelay)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Delay action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Delay action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionDelay} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long delay(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * DelayMinimum action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * DelayMinimum action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionDelayMinimum} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long delayMinimum(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * DelayMaximum action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * DelayMaximum action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionDelayMaximum} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long delayMaximum(IDvInvocation aInvocation)
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


    private class DoSetDelay implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long delay;
            try
            {
                invocation.readStart();
                delay = invocation.readUint("Delay");
                invocation.readEnd();
                setDelay(invocation, delay);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetDelay");
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

    private class DoDelay implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long delay;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 delay = delay(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Delay");
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
                invocation.writeUint("Delay", delay);
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

    private class DoDelayMinimum implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long min;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 min = delayMinimum(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "DelayMinimum");
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
                invocation.writeUint("Min", min);
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

    private class DoDelayMaximum implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long max;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 max = delayMaximum(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "DelayMaximum");
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
                invocation.writeUint("Max", max);
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

