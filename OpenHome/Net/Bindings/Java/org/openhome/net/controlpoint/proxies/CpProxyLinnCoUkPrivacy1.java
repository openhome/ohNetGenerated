package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkPrivacy1.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkPrivacy1 extends ICpProxy
{
    public long syncGetPolicyVersion();
    public void beginGetPolicyVersion(ICpProxyListener aCallback);
    public long endGetPolicyVersion(long aAsyncHandle);
    public long syncGetPolicyAgreed();
    public void beginGetPolicyAgreed(ICpProxyListener aCallback);
    public long endGetPolicyAgreed(long aAsyncHandle);
    public void syncSetPolicyAgreed(long aAgreed);
    public void beginSetPolicyAgreed(long aAgreed, ICpProxyListener aCallback);
    public void endSetPolicyAgreed(long aAsyncHandle);
    public String syncGetPolicyDetails();
    public void beginGetPolicyDetails(ICpProxyListener aCallback);
    public String endGetPolicyDetails(long aAsyncHandle);
    public void syncSetPolicyDetails(String aDetails);
    public void beginSetPolicyDetails(String aDetails, ICpProxyListener aCallback);
    public void endSetPolicyDetails(long aAsyncHandle);
    public void setPropertyPolicyVersionChanged(IPropertyChangeListener aPolicyVersionChanged);
    public long getPropertyPolicyVersion();
    public void setPropertyPolicyAgreedChanged(IPropertyChangeListener aPolicyAgreedChanged);
    public long getPropertyPolicyAgreed();
    public void setPropertyPolicyDetailsChanged(IPropertyChangeListener aPolicyDetailsChanged);
    public String getPropertyPolicyDetails();
}

class SyncGetPolicyVersionLinnCoUkPrivacy1 extends SyncProxyAction
{
    private CpProxyLinnCoUkPrivacy1 iService;
    private long iVersion;

    public SyncGetPolicyVersionLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1 aProxy)
    {
        iService = aProxy;
    }
    public long getVersion()
    {
        return iVersion;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetPolicyVersion(aAsyncHandle);
        
        iVersion = result;
    }
}

class SyncGetPolicyAgreedLinnCoUkPrivacy1 extends SyncProxyAction
{
    private CpProxyLinnCoUkPrivacy1 iService;
    private long iVersion;

    public SyncGetPolicyAgreedLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1 aProxy)
    {
        iService = aProxy;
    }
    public long getVersion()
    {
        return iVersion;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetPolicyAgreed(aAsyncHandle);
        
        iVersion = result;
    }
}

class SyncSetPolicyAgreedLinnCoUkPrivacy1 extends SyncProxyAction
{
    private CpProxyLinnCoUkPrivacy1 iService;

    public SyncSetPolicyAgreedLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetPolicyAgreed(aAsyncHandle);
        
    }
}

class SyncGetPolicyDetailsLinnCoUkPrivacy1 extends SyncProxyAction
{
    private CpProxyLinnCoUkPrivacy1 iService;
    private String iDetails;

    public SyncGetPolicyDetailsLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1 aProxy)
    {
        iService = aProxy;
    }
    public String getDetails()
    {
        return iDetails;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetPolicyDetails(aAsyncHandle);
        
        iDetails = result;
    }
}

class SyncSetPolicyDetailsLinnCoUkPrivacy1 extends SyncProxyAction
{
    private CpProxyLinnCoUkPrivacy1 iService;

    public SyncSetPolicyDetailsLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetPolicyDetails(aAsyncHandle);
        
    }
}

/**
 * Proxy for the linn.co.uk:Privacy:1 UPnP service
 */
public class CpProxyLinnCoUkPrivacy1 extends CpProxy implements ICpProxyLinnCoUkPrivacy1
{

    private Action iActionGetPolicyVersion;
    private Action iActionGetPolicyAgreed;
    private Action iActionSetPolicyAgreed;
    private Action iActionGetPolicyDetails;
    private Action iActionSetPolicyDetails;
    private PropertyUint iPolicyVersion;
    private PropertyUint iPolicyAgreed;
    private PropertyString iPolicyDetails;
    private IPropertyChangeListener iPolicyVersionChanged;
    private IPropertyChangeListener iPolicyAgreedChanged;
    private IPropertyChangeListener iPolicyDetailsChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkPrivacy1(CpDevice aDevice)
    {
        super("linn-co-uk", "Privacy", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetPolicyVersion = new Action("GetPolicyVersion");
        param = new ParameterUint("Version");
        iActionGetPolicyVersion.addOutputParameter(param);

        iActionGetPolicyAgreed = new Action("GetPolicyAgreed");
        param = new ParameterUint("Version");
        iActionGetPolicyAgreed.addOutputParameter(param);

        iActionSetPolicyAgreed = new Action("SetPolicyAgreed");
        param = new ParameterUint("Agreed");
        iActionSetPolicyAgreed.addInputParameter(param);

        iActionGetPolicyDetails = new Action("GetPolicyDetails");
        param = new ParameterString("Details", allowedValues);
        iActionGetPolicyDetails.addOutputParameter(param);

        iActionSetPolicyDetails = new Action("SetPolicyDetails");
        param = new ParameterString("Details", allowedValues);
        iActionSetPolicyDetails.addInputParameter(param);

        iPolicyVersionChanged = new PropertyChangeListener();
        iPolicyVersion = new PropertyUint("PolicyVersion",
            new PropertyChangeListener() {
                public void notifyChange() {
                    policyVersionPropertyChanged();
                }
            }
        );
        addProperty(iPolicyVersion);
        iPolicyAgreedChanged = new PropertyChangeListener();
        iPolicyAgreed = new PropertyUint("PolicyAgreed",
            new PropertyChangeListener() {
                public void notifyChange() {
                    policyAgreedPropertyChanged();
                }
            }
        );
        addProperty(iPolicyAgreed);
        iPolicyDetailsChanged = new PropertyChangeListener();
        iPolicyDetails = new PropertyString("PolicyDetails",
            new PropertyChangeListener() {
                public void notifyChange() {
                    policyDetailsPropertyChanged();
                }
            }
        );
        addProperty(iPolicyDetails);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncGetPolicyVersion()
    {
        SyncGetPolicyVersionLinnCoUkPrivacy1 sync = new SyncGetPolicyVersionLinnCoUkPrivacy1(this);
        beginGetPolicyVersion(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getVersion();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetPolicyVersion}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetPolicyVersion(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetPolicyVersion, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetPolicyVersion.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetPolicyVersion} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetPolicyVersion} method.
     * @return the result of the previously invoked action.
     */
    public long endGetPolicyVersion(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long version = Invocation.getOutputUint(aAsyncHandle, index++);
        return version;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncGetPolicyAgreed()
    {
        SyncGetPolicyAgreedLinnCoUkPrivacy1 sync = new SyncGetPolicyAgreedLinnCoUkPrivacy1(this);
        beginGetPolicyAgreed(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getVersion();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetPolicyAgreed}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetPolicyAgreed(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetPolicyAgreed, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetPolicyAgreed.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetPolicyAgreed} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetPolicyAgreed} method.
     * @return the result of the previously invoked action.
     */
    public long endGetPolicyAgreed(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long version = Invocation.getOutputUint(aAsyncHandle, index++);
        return version;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetPolicyAgreed(long aAgreed)
    {
        SyncSetPolicyAgreedLinnCoUkPrivacy1 sync = new SyncSetPolicyAgreedLinnCoUkPrivacy1(this);
        beginSetPolicyAgreed(aAgreed, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetPolicyAgreed}.
     * 
     * @param aAgreed
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetPolicyAgreed(long aAgreed, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetPolicyAgreed, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetPolicyAgreed.getInputParameter(inIndex++), aAgreed));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetPolicyAgreed} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetPolicyAgreed} method.
     */
    public void endSetPolicyAgreed(long aAsyncHandle)
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
    public String syncGetPolicyDetails()
    {
        SyncGetPolicyDetailsLinnCoUkPrivacy1 sync = new SyncGetPolicyDetailsLinnCoUkPrivacy1(this);
        beginGetPolicyDetails(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getDetails();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetPolicyDetails}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetPolicyDetails(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetPolicyDetails, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetPolicyDetails.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetPolicyDetails} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetPolicyDetails} method.
     * @return the result of the previously invoked action.
     */
    public String endGetPolicyDetails(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String details = Invocation.getOutputString(aAsyncHandle, index++);
        return details;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetPolicyDetails(String aDetails)
    {
        SyncSetPolicyDetailsLinnCoUkPrivacy1 sync = new SyncSetPolicyDetailsLinnCoUkPrivacy1(this);
        beginSetPolicyDetails(aDetails, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetPolicyDetails}.
     * 
     * @param aDetails
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetPolicyDetails(String aDetails, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetPolicyDetails, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetPolicyDetails.getInputParameter(inIndex++), aDetails));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetPolicyDetails} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetPolicyDetails} method.
     */
    public void endSetPolicyDetails(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the PolicyVersion state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkPrivacy1 instance will not overlap.
     *
     * @param aPolicyVersionChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyPolicyVersionChanged(IPropertyChangeListener aPolicyVersionChanged)
    {
        synchronized (iPropertyLock)
        {
            iPolicyVersionChanged = aPolicyVersionChanged;
        }
    }

    private void policyVersionPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iPolicyVersionChanged);
        }
    }
    /**
     * Set a delegate to be run when the PolicyAgreed state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkPrivacy1 instance will not overlap.
     *
     * @param aPolicyAgreedChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyPolicyAgreedChanged(IPropertyChangeListener aPolicyAgreedChanged)
    {
        synchronized (iPropertyLock)
        {
            iPolicyAgreedChanged = aPolicyAgreedChanged;
        }
    }

    private void policyAgreedPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iPolicyAgreedChanged);
        }
    }
    /**
     * Set a delegate to be run when the PolicyDetails state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkPrivacy1 instance will not overlap.
     *
     * @param aPolicyDetailsChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyPolicyDetailsChanged(IPropertyChangeListener aPolicyDetailsChanged)
    {
        synchronized (iPropertyLock)
        {
            iPolicyDetailsChanged = aPolicyDetailsChanged;
        }
    }

    private void policyDetailsPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iPolicyDetailsChanged);
        }
    }

    /**
     * Query the value of the PolicyVersion property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the PolicyVersion property.
     */
    public long getPropertyPolicyVersion()
    {
        propertyReadLock();
        long val = iPolicyVersion.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the PolicyAgreed property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the PolicyAgreed property.
     */
    public long getPropertyPolicyAgreed()
    {
        propertyReadLock();
        long val = iPolicyAgreed.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the PolicyDetails property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the PolicyDetails property.
     */
    public String getPropertyPolicyDetails()
    {
        propertyReadLock();
        String val = iPolicyDetails.getValue();
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
            iActionGetPolicyVersion.destroy();
            iActionGetPolicyAgreed.destroy();
            iActionSetPolicyAgreed.destroy();
            iActionGetPolicyDetails.destroy();
            iActionSetPolicyDetails.destroy();
            iPolicyVersion.destroy();
            iPolicyAgreed.destroy();
            iPolicyDetails.destroy();
        }
    }
}

