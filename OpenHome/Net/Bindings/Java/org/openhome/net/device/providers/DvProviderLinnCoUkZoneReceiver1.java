package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkZoneReceiver1
{

    /**
     * Set the value of the Sender property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertySender(String aValue);

    /**
     * Get a copy of the value of the Sender property
     *
     * @return value of the Sender property.
     */
    public String getPropertySender();
        
}

/**
 * Provider for the linn.co.uk:ZoneReceiver:1 UPnP service.
 */
public class DvProviderLinnCoUkZoneReceiver1 extends DvProvider implements IDvProviderLinnCoUkZoneReceiver1
{

    private IDvInvocationListener iDelegateGetSender;
    private PropertyString iPropertySender;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkZoneReceiver1(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "ZoneReceiver", 1);
    }

    /**
     * Enable the Sender property.
     */
    public void enablePropertySender()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertySender = new PropertyString(new ParameterString("Sender", allowedValues));
        addProperty(iPropertySender);
    }

    /**
     * Set the value of the Sender property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertySender(String aValue)
    {
        return setPropertyString(iPropertySender, aValue);
    }

    /**
     * Get a copy of the value of the Sender property
     *
     * @return  value of the Sender property.
     */
    public String getPropertySender()
    {
        return iPropertySender.getValue();
    }

    /**
     * Signal that the action GetSender is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetSender must be overridden if this is called.
     */      
    protected void enableActionGetSender()
    {
        Action action = new Action("GetSender");
        action.addOutputParameter(new ParameterRelated("Sender", iPropertySender));
        iDelegateGetSender = new DoGetSender();
        enableAction(action, iDelegateGetSender);
    }

    /**
     * GetSender action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetSender action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetSender} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getSender(IDvInvocation aInvocation)
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


    private class DoGetSender implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String sender;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 sender = getSender(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetSender");
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
                invocation.writeString("Sender", sender);
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

