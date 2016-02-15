package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgDebug1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgDebug1 extends ICpProxy
{
    public String syncGetLog();
    public void beginGetLog(ICpProxyListener aCallback);
    public String endGetLog(long aAsyncHandle);
}

class SyncGetLogAvOpenhomeOrgDebug1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDebug1 iService;
    private String iLog;

    public SyncGetLogAvOpenhomeOrgDebug1(CpProxyAvOpenhomeOrgDebug1 aProxy)
    {
        iService = aProxy;
    }
    public String getLog()
    {
        return iLog;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetLog(aAsyncHandle);
        
        iLog = result;
    }
}

/**
 * Proxy for the av.openhome.org:Debug:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgDebug1 extends CpProxy implements ICpProxyAvOpenhomeOrgDebug1
{

    private Action iActionGetLog;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgDebug1(CpDevice aDevice)
    {
        super("av-openhome-org", "Debug", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetLog = new Action("GetLog");
        param = new ParameterString("Log", allowedValues);
        iActionGetLog.addOutputParameter(param);
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetLog()
    {
        SyncGetLogAvOpenhomeOrgDebug1 sync = new SyncGetLogAvOpenhomeOrgDebug1(this);
        beginGetLog(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getLog();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetLog}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetLog(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetLog, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetLog.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetLog} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetLog} method.
     * @return the result of the previously invoked action.
     */
    public String endGetLog(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String log = Invocation.getOutputString(aAsyncHandle, index++);
        return log;
    }
        

    /**
     * Dispose of this control point proxy.
     * Must be called for each class instance.
     * Must be called before <tt>Library.close()</tt>.
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            disposeProxy();
            iHandle = 0;
            iActionGetLog.destroy();
        }
    }
}

