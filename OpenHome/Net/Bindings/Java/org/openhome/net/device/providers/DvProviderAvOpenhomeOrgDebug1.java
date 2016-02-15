package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgDebug1
{
        
}

/**
 * Provider for the av.openhome.org:Debug:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgDebug1 extends DvProvider implements IDvProviderAvOpenhomeOrgDebug1
{

    private IDvInvocationListener iDelegateGetLog;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgDebug1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "Debug", 1);
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
}

