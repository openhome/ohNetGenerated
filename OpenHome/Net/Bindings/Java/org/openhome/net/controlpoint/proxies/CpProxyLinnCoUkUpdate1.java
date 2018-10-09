package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkUpdate1.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkUpdate1 extends ICpProxy
{
    public void syncPushManifest(String aUri);
    public void beginPushManifest(String aUri, ICpProxyListener aCallback);
    public void endPushManifest(long aAsyncHandle);
    public String syncGetSoftwareStatus();
    public void beginGetSoftwareStatus(ICpProxyListener aCallback);
    public String endGetSoftwareStatus(long aAsyncHandle);
    public String syncGetExecutorStatus();
    public void beginGetExecutorStatus(ICpProxyListener aCallback);
    public String endGetExecutorStatus(long aAsyncHandle);
    public void syncApply();
    public void beginApply(ICpProxyListener aCallback);
    public void endApply(long aAsyncHandle);
    public void syncRecover();
    public void beginRecover(ICpProxyListener aCallback);
    public void endRecover(long aAsyncHandle);
    public void syncCheckNow();
    public void beginCheckNow(ICpProxyListener aCallback);
    public void endCheckNow(long aAsyncHandle);
    public void setPropertySoftwareStatusChanged(IPropertyChangeListener aSoftwareStatusChanged);
    public String getPropertySoftwareStatus();
    public void setPropertyExecutorStatusChanged(IPropertyChangeListener aExecutorStatusChanged);
    public String getPropertyExecutorStatus();
}

class SyncPushManifestLinnCoUkUpdate1 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate1 iService;

    public SyncPushManifestLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPushManifest(aAsyncHandle);
        
    }
}

class SyncGetSoftwareStatusLinnCoUkUpdate1 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate1 iService;
    private String iSoftwareStatus;

    public SyncGetSoftwareStatusLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
    {
        iService = aProxy;
    }
    public String getSoftwareStatus()
    {
        return iSoftwareStatus;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetSoftwareStatus(aAsyncHandle);
        
        iSoftwareStatus = result;
    }
}

class SyncGetExecutorStatusLinnCoUkUpdate1 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate1 iService;
    private String iExecutorStatus;

    public SyncGetExecutorStatusLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
    {
        iService = aProxy;
    }
    public String getExecutorStatus()
    {
        return iExecutorStatus;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetExecutorStatus(aAsyncHandle);
        
        iExecutorStatus = result;
    }
}

class SyncApplyLinnCoUkUpdate1 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate1 iService;

    public SyncApplyLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endApply(aAsyncHandle);
        
    }
}

class SyncRecoverLinnCoUkUpdate1 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate1 iService;

    public SyncRecoverLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endRecover(aAsyncHandle);
        
    }
}

class SyncCheckNowLinnCoUkUpdate1 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate1 iService;

    public SyncCheckNowLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endCheckNow(aAsyncHandle);
        
    }
}

/**
 * Proxy for the linn.co.uk:Update:1 UPnP service
 */
public class CpProxyLinnCoUkUpdate1 extends CpProxy implements ICpProxyLinnCoUkUpdate1
{

    private Action iActionPushManifest;
    private Action iActionGetSoftwareStatus;
    private Action iActionGetExecutorStatus;
    private Action iActionApply;
    private Action iActionRecover;
    private Action iActionCheckNow;
    private PropertyString iSoftwareStatus;
    private PropertyString iExecutorStatus;
    private IPropertyChangeListener iSoftwareStatusChanged;
    private IPropertyChangeListener iExecutorStatusChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkUpdate1(CpDevice aDevice)
    {
        super("linn-co-uk", "Update", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionPushManifest = new Action("PushManifest");
        param = new ParameterString("Uri", allowedValues);
        iActionPushManifest.addInputParameter(param);

        iActionGetSoftwareStatus = new Action("GetSoftwareStatus");
        param = new ParameterString("SoftwareStatus", allowedValues);
        iActionGetSoftwareStatus.addOutputParameter(param);

        iActionGetExecutorStatus = new Action("GetExecutorStatus");
        param = new ParameterString("ExecutorStatus", allowedValues);
        iActionGetExecutorStatus.addOutputParameter(param);

        iActionApply = new Action("Apply");

        iActionRecover = new Action("Recover");

        iActionCheckNow = new Action("CheckNow");

        iSoftwareStatusChanged = new PropertyChangeListener();
        iSoftwareStatus = new PropertyString("SoftwareStatus",
            new PropertyChangeListener() {
                public void notifyChange() {
                    softwareStatusPropertyChanged();
                }
            }
        );
        addProperty(iSoftwareStatus);
        iExecutorStatusChanged = new PropertyChangeListener();
        iExecutorStatus = new PropertyString("ExecutorStatus",
            new PropertyChangeListener() {
                public void notifyChange() {
                    executorStatusPropertyChanged();
                }
            }
        );
        addProperty(iExecutorStatus);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncPushManifest(String aUri)
    {
        SyncPushManifestLinnCoUkUpdate1 sync = new SyncPushManifestLinnCoUkUpdate1(this);
        beginPushManifest(aUri, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endPushManifest}.
     * 
     * @param aUri
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginPushManifest(String aUri, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionPushManifest, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionPushManifest.getInputParameter(inIndex++), aUri));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginPushManifest} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginPushManifest} method.
     */
    public void endPushManifest(long aAsyncHandle)
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
    public String syncGetSoftwareStatus()
    {
        SyncGetSoftwareStatusLinnCoUkUpdate1 sync = new SyncGetSoftwareStatusLinnCoUkUpdate1(this);
        beginGetSoftwareStatus(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSoftwareStatus();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetSoftwareStatus}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetSoftwareStatus(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetSoftwareStatus, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetSoftwareStatus.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetSoftwareStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetSoftwareStatus} method.
     * @return the result of the previously invoked action.
     */
    public String endGetSoftwareStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String softwareStatus = Invocation.getOutputString(aAsyncHandle, index++);
        return softwareStatus;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetExecutorStatus()
    {
        SyncGetExecutorStatusLinnCoUkUpdate1 sync = new SyncGetExecutorStatusLinnCoUkUpdate1(this);
        beginGetExecutorStatus(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getExecutorStatus();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetExecutorStatus}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetExecutorStatus(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetExecutorStatus, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetExecutorStatus.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetExecutorStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetExecutorStatus} method.
     * @return the result of the previously invoked action.
     */
    public String endGetExecutorStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String executorStatus = Invocation.getOutputString(aAsyncHandle, index++);
        return executorStatus;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncApply()
    {
        SyncApplyLinnCoUkUpdate1 sync = new SyncApplyLinnCoUkUpdate1(this);
        beginApply(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endApply}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginApply(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionApply, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginApply} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginApply} method.
     */
    public void endApply(long aAsyncHandle)
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
    public void syncRecover()
    {
        SyncRecoverLinnCoUkUpdate1 sync = new SyncRecoverLinnCoUkUpdate1(this);
        beginRecover(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endRecover}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginRecover(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionRecover, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginRecover} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginRecover} method.
     */
    public void endRecover(long aAsyncHandle)
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
    public void syncCheckNow()
    {
        SyncCheckNowLinnCoUkUpdate1 sync = new SyncCheckNowLinnCoUkUpdate1(this);
        beginCheckNow(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endCheckNow}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginCheckNow(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionCheckNow, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginCheckNow} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginCheckNow} method.
     */
    public void endCheckNow(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the SoftwareStatus state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkUpdate1 instance will not overlap.
     *
     * @param aSoftwareStatusChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertySoftwareStatusChanged(IPropertyChangeListener aSoftwareStatusChanged)
    {
        synchronized (iPropertyLock)
        {
            iSoftwareStatusChanged = aSoftwareStatusChanged;
        }
    }

    private void softwareStatusPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iSoftwareStatusChanged);
        }
    }
    /**
     * Set a delegate to be run when the ExecutorStatus state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkUpdate1 instance will not overlap.
     *
     * @param aExecutorStatusChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyExecutorStatusChanged(IPropertyChangeListener aExecutorStatusChanged)
    {
        synchronized (iPropertyLock)
        {
            iExecutorStatusChanged = aExecutorStatusChanged;
        }
    }

    private void executorStatusPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iExecutorStatusChanged);
        }
    }

    /**
     * Query the value of the SoftwareStatus property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the SoftwareStatus property.
     */
    public String getPropertySoftwareStatus()
    {
        propertyReadLock();
        String val = iSoftwareStatus.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the ExecutorStatus property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ExecutorStatus property.
     */
    public String getPropertyExecutorStatus()
    {
        propertyReadLock();
        String val = iExecutorStatus.getValue();
        propertyReadUnlock();
        return val;
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
            iActionPushManifest.destroy();
            iActionGetSoftwareStatus.destroy();
            iActionGetExecutorStatus.destroy();
            iActionApply.destroy();
            iActionRecover.destroy();
            iActionCheckNow.destroy();
            iSoftwareStatus.destroy();
            iExecutorStatus.destroy();
        }
    }
}

