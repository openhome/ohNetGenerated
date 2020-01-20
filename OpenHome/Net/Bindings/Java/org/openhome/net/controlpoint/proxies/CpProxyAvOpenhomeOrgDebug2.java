package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgDebug2.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgDebug2 extends ICpProxy
{
    public String syncGetLog();
    public void beginGetLog(ICpProxyListener aCallback);
    public String endGetLog(long aAsyncHandle);
    public void syncSendLog(String aData);
    public void beginSendLog(String aData, ICpProxyListener aCallback);
    public void endSendLog(long aAsyncHandle);
    public void syncSendDeviceAnnouncements();
    public void beginSendDeviceAnnouncements(ICpProxyListener aCallback);
    public void endSendDeviceAnnouncements(long aAsyncHandle);
    public String syncGetRecentMSearches();
    public void beginGetRecentMSearches(ICpProxyListener aCallback);
    public String endGetRecentMSearches(long aAsyncHandle);
}

class SyncGetLogAvOpenhomeOrgDebug2 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDebug2 iService;
    private String iLog;

    public SyncGetLogAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2 aProxy)
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

class SyncSendLogAvOpenhomeOrgDebug2 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDebug2 iService;

    public SyncSendLogAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSendLog(aAsyncHandle);
        
    }
}

class SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDebug2 iService;

    public SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSendDeviceAnnouncements(aAsyncHandle);
        
    }
}

class SyncGetRecentMSearchesAvOpenhomeOrgDebug2 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDebug2 iService;
    private String iJsonArray;

    public SyncGetRecentMSearchesAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2 aProxy)
    {
        iService = aProxy;
    }
    public String getJsonArray()
    {
        return iJsonArray;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetRecentMSearches(aAsyncHandle);
        
        iJsonArray = result;
    }
}

/**
 * Proxy for the av.openhome.org:Debug:2 UPnP service
 */
public class CpProxyAvOpenhomeOrgDebug2 extends CpProxy implements ICpProxyAvOpenhomeOrgDebug2
{

    private Action iActionGetLog;
    private Action iActionSendLog;
    private Action iActionSendDeviceAnnouncements;
    private Action iActionGetRecentMSearches;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgDebug2(CpDevice aDevice)
    {
        super("av-openhome-org", "Debug", 2, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetLog = new Action("GetLog");
        param = new ParameterString("Log", allowedValues);
        iActionGetLog.addOutputParameter(param);

        iActionSendLog = new Action("SendLog");
        param = new ParameterString("Data", allowedValues);
        iActionSendLog.addInputParameter(param);

        iActionSendDeviceAnnouncements = new Action("SendDeviceAnnouncements");

        iActionGetRecentMSearches = new Action("GetRecentMSearches");
        param = new ParameterString("JsonArray", allowedValues);
        iActionGetRecentMSearches.addOutputParameter(param);
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
        SyncGetLogAvOpenhomeOrgDebug2 sync = new SyncGetLogAvOpenhomeOrgDebug2(this);
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
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSendLog(String aData)
    {
        SyncSendLogAvOpenhomeOrgDebug2 sync = new SyncSendLogAvOpenhomeOrgDebug2(this);
        beginSendLog(aData, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSendLog}.
     * 
     * @param aData
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSendLog(String aData, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSendLog, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSendLog.getInputParameter(inIndex++), aData));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSendLog} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSendLog} method.
     */
    public void endSendLog(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSendDeviceAnnouncements()
    {
        SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2 sync = new SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2(this);
        beginSendDeviceAnnouncements(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSendDeviceAnnouncements}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSendDeviceAnnouncements(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSendDeviceAnnouncements, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSendDeviceAnnouncements} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSendDeviceAnnouncements} method.
     */
    public void endSendDeviceAnnouncements(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetRecentMSearches()
    {
        SyncGetRecentMSearchesAvOpenhomeOrgDebug2 sync = new SyncGetRecentMSearchesAvOpenhomeOrgDebug2(this);
        beginGetRecentMSearches(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getJsonArray();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetRecentMSearches}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetRecentMSearches(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetRecentMSearches, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetRecentMSearches.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetRecentMSearches} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetRecentMSearches} method.
     * @return the result of the previously invoked action.
     */
    public String endGetRecentMSearches(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String jsonArray = Invocation.getOutputString(aAsyncHandle, index++);
        return jsonArray;
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
            iActionSendLog.destroy();
            iActionSendDeviceAnnouncements.destroy();
            iActionGetRecentMSearches.destroy();
        }
    }
}

