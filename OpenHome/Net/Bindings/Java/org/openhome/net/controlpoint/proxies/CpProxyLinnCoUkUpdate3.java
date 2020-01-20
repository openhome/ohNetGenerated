package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkUpdate3.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkUpdate3 extends ICpProxy
{
    public void syncPushManifest(String aUri);
    public void beginPushManifest(String aUri, ICpProxyListener aCallback);
    public void endPushManifest(long aAsyncHandle);
    public long syncPushManifest2(String aUri);
    public void beginPushManifest2(String aUri, ICpProxyListener aCallback);
    public long endPushManifest2(long aAsyncHandle);
    public String syncGetSoftwareStatus();
    public void beginGetSoftwareStatus(ICpProxyListener aCallback);
    public String endGetSoftwareStatus(long aAsyncHandle);
    public String syncGetExecutorStatus();
    public void beginGetExecutorStatus(ICpProxyListener aCallback);
    public String endGetExecutorStatus(long aAsyncHandle);
    public String syncGetJobStatus();
    public void beginGetJobStatus(ICpProxyListener aCallback);
    public String endGetJobStatus(long aAsyncHandle);
    public void syncApply();
    public void beginApply(ICpProxyListener aCallback);
    public void endApply(long aAsyncHandle);
    public long syncApply2();
    public void beginApply2(ICpProxyListener aCallback);
    public long endApply2(long aAsyncHandle);
    public void syncRecover();
    public void beginRecover(ICpProxyListener aCallback);
    public void endRecover(long aAsyncHandle);
    public long syncRecover2();
    public void beginRecover2(ICpProxyListener aCallback);
    public long endRecover2(long aAsyncHandle);
    public void syncCheckNow();
    public void beginCheckNow(ICpProxyListener aCallback);
    public void endCheckNow(long aAsyncHandle);
    public boolean syncGetRecoverSupported();
    public void beginGetRecoverSupported(ICpProxyListener aCallback);
    public boolean endGetRecoverSupported(long aAsyncHandle);
    public void setPropertySoftwareStatusChanged(IPropertyChangeListener aSoftwareStatusChanged);
    public String getPropertySoftwareStatus();
    public void setPropertyExecutorStatusChanged(IPropertyChangeListener aExecutorStatusChanged);
    public String getPropertyExecutorStatus();
    public void setPropertyJobStatusChanged(IPropertyChangeListener aJobStatusChanged);
    public String getPropertyJobStatus();
    public void setPropertyRecoverSupportedChanged(IPropertyChangeListener aRecoverSupportedChanged);
    public boolean getPropertyRecoverSupported();
}

class SyncPushManifestLinnCoUkUpdate3 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate3 iService;

    public SyncPushManifestLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPushManifest(aAsyncHandle);
        
    }
}

class SyncPushManifest2LinnCoUkUpdate3 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate3 iService;
    private long iId;

    public SyncPushManifest2LinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
    {
        iService = aProxy;
    }
    public long getId()
    {
        return iId;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endPushManifest2(aAsyncHandle);
        
        iId = result;
    }
}

class SyncGetSoftwareStatusLinnCoUkUpdate3 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate3 iService;
    private String iSoftwareStatus;

    public SyncGetSoftwareStatusLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
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

class SyncGetExecutorStatusLinnCoUkUpdate3 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate3 iService;
    private String iExecutorStatus;

    public SyncGetExecutorStatusLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
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

class SyncGetJobStatusLinnCoUkUpdate3 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate3 iService;
    private String iJobStatus;

    public SyncGetJobStatusLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
    {
        iService = aProxy;
    }
    public String getJobStatus()
    {
        return iJobStatus;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetJobStatus(aAsyncHandle);
        
        iJobStatus = result;
    }
}

class SyncApplyLinnCoUkUpdate3 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate3 iService;

    public SyncApplyLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endApply(aAsyncHandle);
        
    }
}

class SyncApply2LinnCoUkUpdate3 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate3 iService;
    private long iId;

    public SyncApply2LinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
    {
        iService = aProxy;
    }
    public long getId()
    {
        return iId;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endApply2(aAsyncHandle);
        
        iId = result;
    }
}

class SyncRecoverLinnCoUkUpdate3 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate3 iService;

    public SyncRecoverLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endRecover(aAsyncHandle);
        
    }
}

class SyncRecover2LinnCoUkUpdate3 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate3 iService;
    private long iId;

    public SyncRecover2LinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
    {
        iService = aProxy;
    }
    public long getId()
    {
        return iId;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endRecover2(aAsyncHandle);
        
        iId = result;
    }
}

class SyncCheckNowLinnCoUkUpdate3 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate3 iService;

    public SyncCheckNowLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endCheckNow(aAsyncHandle);
        
    }
}

class SyncGetRecoverSupportedLinnCoUkUpdate3 extends SyncProxyAction
{
    private CpProxyLinnCoUkUpdate3 iService;
    private boolean iRecoverSupported;

    public SyncGetRecoverSupportedLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
    {
        iService = aProxy;
    }
    public boolean getRecoverSupported()
    {
        return iRecoverSupported;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetRecoverSupported(aAsyncHandle);
        
        iRecoverSupported = result;
    }
}

/**
 * Proxy for the linn.co.uk:Update:3 UPnP service
 */
public class CpProxyLinnCoUkUpdate3 extends CpProxy implements ICpProxyLinnCoUkUpdate3
{

    private Action iActionPushManifest;
    private Action iActionPushManifest2;
    private Action iActionGetSoftwareStatus;
    private Action iActionGetExecutorStatus;
    private Action iActionGetJobStatus;
    private Action iActionApply;
    private Action iActionApply2;
    private Action iActionRecover;
    private Action iActionRecover2;
    private Action iActionCheckNow;
    private Action iActionGetRecoverSupported;
    private PropertyString iSoftwareStatus;
    private PropertyString iExecutorStatus;
    private PropertyString iJobStatus;
    private PropertyBool iRecoverSupported;
    private IPropertyChangeListener iSoftwareStatusChanged;
    private IPropertyChangeListener iExecutorStatusChanged;
    private IPropertyChangeListener iJobStatusChanged;
    private IPropertyChangeListener iRecoverSupportedChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkUpdate3(CpDevice aDevice)
    {
        super("linn-co-uk", "Update", 3, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionPushManifest = new Action("PushManifest");
        param = new ParameterString("Uri", allowedValues);
        iActionPushManifest.addInputParameter(param);

        iActionPushManifest2 = new Action("PushManifest2");
        param = new ParameterString("Uri", allowedValues);
        iActionPushManifest2.addInputParameter(param);
        param = new ParameterUint("Id");
        iActionPushManifest2.addOutputParameter(param);

        iActionGetSoftwareStatus = new Action("GetSoftwareStatus");
        param = new ParameterString("SoftwareStatus", allowedValues);
        iActionGetSoftwareStatus.addOutputParameter(param);

        iActionGetExecutorStatus = new Action("GetExecutorStatus");
        param = new ParameterString("ExecutorStatus", allowedValues);
        iActionGetExecutorStatus.addOutputParameter(param);

        iActionGetJobStatus = new Action("GetJobStatus");
        param = new ParameterString("JobStatus", allowedValues);
        iActionGetJobStatus.addOutputParameter(param);

        iActionApply = new Action("Apply");

        iActionApply2 = new Action("Apply2");
        param = new ParameterUint("Id");
        iActionApply2.addOutputParameter(param);

        iActionRecover = new Action("Recover");

        iActionRecover2 = new Action("Recover2");
        param = new ParameterUint("Id");
        iActionRecover2.addOutputParameter(param);

        iActionCheckNow = new Action("CheckNow");

        iActionGetRecoverSupported = new Action("GetRecoverSupported");
        param = new ParameterBool("RecoverSupported");
        iActionGetRecoverSupported.addOutputParameter(param);

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
        iJobStatusChanged = new PropertyChangeListener();
        iJobStatus = new PropertyString("JobStatus",
            new PropertyChangeListener() {
                public void notifyChange() {
                    jobStatusPropertyChanged();
                }
            }
        );
        addProperty(iJobStatus);
        iRecoverSupportedChanged = new PropertyChangeListener();
        iRecoverSupported = new PropertyBool("RecoverSupported",
            new PropertyChangeListener() {
                public void notifyChange() {
                    recoverSupportedPropertyChanged();
                }
            }
        );
        addProperty(iRecoverSupported);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncPushManifest(String aUri)
    {
        SyncPushManifestLinnCoUkUpdate3 sync = new SyncPushManifestLinnCoUkUpdate3(this);
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
    public long syncPushManifest2(String aUri)
    {
        SyncPushManifest2LinnCoUkUpdate3 sync = new SyncPushManifest2LinnCoUkUpdate3(this);
        beginPushManifest2(aUri, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getId();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endPushManifest2}.
     * 
     * @param aUri
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginPushManifest2(String aUri, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionPushManifest2, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionPushManifest2.getInputParameter(inIndex++), aUri));
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionPushManifest2.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginPushManifest2} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginPushManifest2} method.
     * @return the result of the previously invoked action.
     */
    public long endPushManifest2(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long id = Invocation.getOutputUint(aAsyncHandle, index++);
        return id;
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
        SyncGetSoftwareStatusLinnCoUkUpdate3 sync = new SyncGetSoftwareStatusLinnCoUkUpdate3(this);
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
        SyncGetExecutorStatusLinnCoUkUpdate3 sync = new SyncGetExecutorStatusLinnCoUkUpdate3(this);
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
     *
     * @return the result of the invoked action.
     */
    public String syncGetJobStatus()
    {
        SyncGetJobStatusLinnCoUkUpdate3 sync = new SyncGetJobStatusLinnCoUkUpdate3(this);
        beginGetJobStatus(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getJobStatus();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetJobStatus}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetJobStatus(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetJobStatus, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetJobStatus.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetJobStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetJobStatus} method.
     * @return the result of the previously invoked action.
     */
    public String endGetJobStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String jobStatus = Invocation.getOutputString(aAsyncHandle, index++);
        return jobStatus;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncApply()
    {
        SyncApplyLinnCoUkUpdate3 sync = new SyncApplyLinnCoUkUpdate3(this);
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
     *
     * @return the result of the invoked action.
     */
    public long syncApply2()
    {
        SyncApply2LinnCoUkUpdate3 sync = new SyncApply2LinnCoUkUpdate3(this);
        beginApply2(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getId();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endApply2}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginApply2(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionApply2, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionApply2.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginApply2} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginApply2} method.
     * @return the result of the previously invoked action.
     */
    public long endApply2(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long id = Invocation.getOutputUint(aAsyncHandle, index++);
        return id;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncRecover()
    {
        SyncRecoverLinnCoUkUpdate3 sync = new SyncRecoverLinnCoUkUpdate3(this);
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
     *
     * @return the result of the invoked action.
     */
    public long syncRecover2()
    {
        SyncRecover2LinnCoUkUpdate3 sync = new SyncRecover2LinnCoUkUpdate3(this);
        beginRecover2(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getId();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endRecover2}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginRecover2(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionRecover2, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionRecover2.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginRecover2} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginRecover2} method.
     * @return the result of the previously invoked action.
     */
    public long endRecover2(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long id = Invocation.getOutputUint(aAsyncHandle, index++);
        return id;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncCheckNow()
    {
        SyncCheckNowLinnCoUkUpdate3 sync = new SyncCheckNowLinnCoUkUpdate3(this);
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
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncGetRecoverSupported()
    {
        SyncGetRecoverSupportedLinnCoUkUpdate3 sync = new SyncGetRecoverSupportedLinnCoUkUpdate3(this);
        beginGetRecoverSupported(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getRecoverSupported();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetRecoverSupported}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetRecoverSupported(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetRecoverSupported, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetRecoverSupported.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetRecoverSupported} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetRecoverSupported} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetRecoverSupported(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean recoverSupported = Invocation.getOutputBool(aAsyncHandle, index++);
        return recoverSupported;
    }
        
    /**
     * Set a delegate to be run when the SoftwareStatus state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkUpdate3 instance will not overlap.
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
     * CpProxyLinnCoUkUpdate3 instance will not overlap.
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
     * Set a delegate to be run when the JobStatus state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkUpdate3 instance will not overlap.
     *
     * @param aJobStatusChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyJobStatusChanged(IPropertyChangeListener aJobStatusChanged)
    {
        synchronized (iPropertyLock)
        {
            iJobStatusChanged = aJobStatusChanged;
        }
    }

    private void jobStatusPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iJobStatusChanged);
        }
    }
    /**
     * Set a delegate to be run when the RecoverSupported state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkUpdate3 instance will not overlap.
     *
     * @param aRecoverSupportedChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyRecoverSupportedChanged(IPropertyChangeListener aRecoverSupportedChanged)
    {
        synchronized (iPropertyLock)
        {
            iRecoverSupportedChanged = aRecoverSupportedChanged;
        }
    }

    private void recoverSupportedPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iRecoverSupportedChanged);
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
     * Query the value of the JobStatus property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the JobStatus property.
     */
    public String getPropertyJobStatus()
    {
        propertyReadLock();
        String val = iJobStatus.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the RecoverSupported property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the RecoverSupported property.
     */
    public boolean getPropertyRecoverSupported()
    {
        propertyReadLock();
        boolean val = iRecoverSupported.getValue();
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
            iActionPushManifest2.destroy();
            iActionGetSoftwareStatus.destroy();
            iActionGetExecutorStatus.destroy();
            iActionGetJobStatus.destroy();
            iActionApply.destroy();
            iActionApply2.destroy();
            iActionRecover.destroy();
            iActionRecover2.destroy();
            iActionCheckNow.destroy();
            iActionGetRecoverSupported.destroy();
            iSoftwareStatus.destroy();
            iExecutorStatus.destroy();
            iJobStatus.destroy();
            iRecoverSupported.destroy();
        }
    }
}

