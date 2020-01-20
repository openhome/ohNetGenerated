package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgDebug2
{
        
}

/**
 * Provider for the av.openhome.org:Debug:2 UPnP service.
 */
public class DvProviderAvOpenhomeOrgDebug2 extends DvProvider implements IDvProviderAvOpenhomeOrgDebug2
{

    private IDvInvocationListener iDelegateGetLog;
    private IDvInvocationListener iDelegateSendLog;
    private IDvInvocationListener iDelegateSendDeviceAnnouncements;
    private IDvInvocationListener iDelegateGetRecentMSearches;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgDebug2(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "Debug", 2);
    }

    /**
     * Signal that the action GetLog is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetLog must be overridden if this is called.
     */      
    protected void enableActionGetLog()
    {
        Action action = new Action("GetLog");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("Log", allowedValues));
        iDelegateGetLog = new DoGetLog();
        enableAction(action, iDelegateGetLog);
    }

    /**
     * Signal that the action SendLog is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SendLog must be overridden if this is called.
     */      
    protected void enableActionSendLog()
    {
        Action action = new Action("SendLog");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Data", allowedValues));
        iDelegateSendLog = new DoSendLog();
        enableAction(action, iDelegateSendLog);
    }

    /**
     * Signal that the action SendDeviceAnnouncements is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SendDeviceAnnouncements must be overridden if this is called.
     */      
    protected void enableActionSendDeviceAnnouncements()
    {
        Action action = new Action("SendDeviceAnnouncements");
        iDelegateSendDeviceAnnouncements = new DoSendDeviceAnnouncements();
        enableAction(action, iDelegateSendDeviceAnnouncements);
    }

    /**
     * Signal that the action GetRecentMSearches is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetRecentMSearches must be overridden if this is called.
     */      
    protected void enableActionGetRecentMSearches()
    {
        Action action = new Action("GetRecentMSearches");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("JsonArray", allowedValues));
        iDelegateGetRecentMSearches = new DoGetRecentMSearches();
        enableAction(action, iDelegateGetRecentMSearches);
    }

    /**
     * GetLog action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetLog action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetLog} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getLog(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SendLog action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SendLog action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSendLog} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aData
     */
    protected void sendLog(IDvInvocation aInvocation, String aData)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SendDeviceAnnouncements action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SendDeviceAnnouncements action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSendDeviceAnnouncements} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void sendDeviceAnnouncements(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetRecentMSearches action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetRecentMSearches action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetRecentMSearches} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getRecentMSearches(IDvInvocation aInvocation)
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


    private class DoGetLog implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String log;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 log = getLog(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetLog");
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
                invocation.writeString("Log", log);
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

    private class DoSendLog implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String data;
            try
            {
                invocation.readStart();
                data = invocation.readString("Data");
                invocation.readEnd();
                sendLog(invocation, data);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SendLog");
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

    private class DoSendDeviceAnnouncements implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                sendDeviceAnnouncements(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SendDeviceAnnouncements");
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

    private class DoGetRecentMSearches implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String jsonArray;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 jsonArray = getRecentMSearches(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetRecentMSearches");
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
                invocation.writeString("JsonArray", jsonArray);
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

