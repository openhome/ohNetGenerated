package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkLipSync1.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkLipSync1 extends ICpProxy
{
    public void syncSetDelay(long aDelay);
    public void beginSetDelay(long aDelay, ICpProxyListener aCallback);
    public void endSetDelay(long aAsyncHandle);
    public long syncDelay();
    public void beginDelay(ICpProxyListener aCallback);
    public long endDelay(long aAsyncHandle);
    public long syncDelayMinimum();
    public void beginDelayMinimum(ICpProxyListener aCallback);
    public long endDelayMinimum(long aAsyncHandle);
    public long syncDelayMaximum();
    public void beginDelayMaximum(ICpProxyListener aCallback);
    public long endDelayMaximum(long aAsyncHandle);
    public void setPropertyDelayChanged(IPropertyChangeListener aDelayChanged);
    public long getPropertyDelay();
    public void setPropertyDelayMinimumChanged(IPropertyChangeListener aDelayMinimumChanged);
    public long getPropertyDelayMinimum();
    public void setPropertyDelayMaximumChanged(IPropertyChangeListener aDelayMaximumChanged);
    public long getPropertyDelayMaximum();
}

class SyncSetDelayLinnCoUkLipSync1 extends SyncProxyAction
{
    private CpProxyLinnCoUkLipSync1 iService;

    public SyncSetDelayLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetDelay(aAsyncHandle);
        
    }
}

class SyncDelayLinnCoUkLipSync1 extends SyncProxyAction
{
    private CpProxyLinnCoUkLipSync1 iService;
    private long iDelay;

    public SyncDelayLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1 aProxy)
    {
        iService = aProxy;
    }
    public long getDelay()
    {
        return iDelay;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endDelay(aAsyncHandle);
        
        iDelay = result;
    }
}

class SyncDelayMinimumLinnCoUkLipSync1 extends SyncProxyAction
{
    private CpProxyLinnCoUkLipSync1 iService;
    private long iMin;

    public SyncDelayMinimumLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1 aProxy)
    {
        iService = aProxy;
    }
    public long getMin()
    {
        return iMin;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endDelayMinimum(aAsyncHandle);
        
        iMin = result;
    }
}

class SyncDelayMaximumLinnCoUkLipSync1 extends SyncProxyAction
{
    private CpProxyLinnCoUkLipSync1 iService;
    private long iMax;

    public SyncDelayMaximumLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1 aProxy)
    {
        iService = aProxy;
    }
    public long getMax()
    {
        return iMax;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endDelayMaximum(aAsyncHandle);
        
        iMax = result;
    }
}

/**
 * Proxy for the linn.co.uk:LipSync:1 UPnP service
 */
public class CpProxyLinnCoUkLipSync1 extends CpProxy implements ICpProxyLinnCoUkLipSync1
{

    private Action iActionSetDelay;
    private Action iActionDelay;
    private Action iActionDelayMinimum;
    private Action iActionDelayMaximum;
    private PropertyUint iDelay;
    private PropertyUint iDelayMinimum;
    private PropertyUint iDelayMaximum;
    private IPropertyChangeListener iDelayChanged;
    private IPropertyChangeListener iDelayMinimumChanged;
    private IPropertyChangeListener iDelayMaximumChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkLipSync1(CpDevice aDevice)
    {
        super("linn-co-uk", "LipSync", 1, aDevice);
        Parameter param;
        

        iActionSetDelay = new Action("SetDelay");
        param = new ParameterUint("Delay");
        iActionSetDelay.addInputParameter(param);

        iActionDelay = new Action("Delay");
        param = new ParameterUint("Delay");
        iActionDelay.addOutputParameter(param);

        iActionDelayMinimum = new Action("DelayMinimum");
        param = new ParameterUint("Min");
        iActionDelayMinimum.addOutputParameter(param);

        iActionDelayMaximum = new Action("DelayMaximum");
        param = new ParameterUint("Max");
        iActionDelayMaximum.addOutputParameter(param);

        iDelayChanged = new PropertyChangeListener();
        iDelay = new PropertyUint("Delay",
            new PropertyChangeListener() {
                public void notifyChange() {
                    delayPropertyChanged();
                }
            }
        );
        addProperty(iDelay);
        iDelayMinimumChanged = new PropertyChangeListener();
        iDelayMinimum = new PropertyUint("DelayMinimum",
            new PropertyChangeListener() {
                public void notifyChange() {
                    delayMinimumPropertyChanged();
                }
            }
        );
        addProperty(iDelayMinimum);
        iDelayMaximumChanged = new PropertyChangeListener();
        iDelayMaximum = new PropertyUint("DelayMaximum",
            new PropertyChangeListener() {
                public void notifyChange() {
                    delayMaximumPropertyChanged();
                }
            }
        );
        addProperty(iDelayMaximum);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetDelay(long aDelay)
    {
        SyncSetDelayLinnCoUkLipSync1 sync = new SyncSetDelayLinnCoUkLipSync1(this);
        beginSetDelay(aDelay, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetDelay}.
     * 
     * @param aDelay
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetDelay(long aDelay, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetDelay, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetDelay.getInputParameter(inIndex++), aDelay));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetDelay} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetDelay} method.
     */
    public void endSetDelay(long aAsyncHandle)
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
    public long syncDelay()
    {
        SyncDelayLinnCoUkLipSync1 sync = new SyncDelayLinnCoUkLipSync1(this);
        beginDelay(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getDelay();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endDelay}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginDelay(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionDelay, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionDelay.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginDelay} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginDelay} method.
     * @return the result of the previously invoked action.
     */
    public long endDelay(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long delay = Invocation.getOutputUint(aAsyncHandle, index++);
        return delay;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncDelayMinimum()
    {
        SyncDelayMinimumLinnCoUkLipSync1 sync = new SyncDelayMinimumLinnCoUkLipSync1(this);
        beginDelayMinimum(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getMin();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endDelayMinimum}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginDelayMinimum(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionDelayMinimum, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionDelayMinimum.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginDelayMinimum} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginDelayMinimum} method.
     * @return the result of the previously invoked action.
     */
    public long endDelayMinimum(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long min = Invocation.getOutputUint(aAsyncHandle, index++);
        return min;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncDelayMaximum()
    {
        SyncDelayMaximumLinnCoUkLipSync1 sync = new SyncDelayMaximumLinnCoUkLipSync1(this);
        beginDelayMaximum(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getMax();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endDelayMaximum}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginDelayMaximum(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionDelayMaximum, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionDelayMaximum.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginDelayMaximum} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginDelayMaximum} method.
     * @return the result of the previously invoked action.
     */
    public long endDelayMaximum(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long max = Invocation.getOutputUint(aAsyncHandle, index++);
        return max;
    }
        
    /**
     * Set a delegate to be run when the Delay state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkLipSync1 instance will not overlap.
     *
     * @param aDelayChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyDelayChanged(IPropertyChangeListener aDelayChanged)
    {
        synchronized (iPropertyLock)
        {
            iDelayChanged = aDelayChanged;
        }
    }

    private void delayPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iDelayChanged);
        }
    }
    /**
     * Set a delegate to be run when the DelayMinimum state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkLipSync1 instance will not overlap.
     *
     * @param aDelayMinimumChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyDelayMinimumChanged(IPropertyChangeListener aDelayMinimumChanged)
    {
        synchronized (iPropertyLock)
        {
            iDelayMinimumChanged = aDelayMinimumChanged;
        }
    }

    private void delayMinimumPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iDelayMinimumChanged);
        }
    }
    /**
     * Set a delegate to be run when the DelayMaximum state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkLipSync1 instance will not overlap.
     *
     * @param aDelayMaximumChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyDelayMaximumChanged(IPropertyChangeListener aDelayMaximumChanged)
    {
        synchronized (iPropertyLock)
        {
            iDelayMaximumChanged = aDelayMaximumChanged;
        }
    }

    private void delayMaximumPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iDelayMaximumChanged);
        }
    }

    /**
     * Query the value of the Delay property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Delay property.
     */
    public long getPropertyDelay()
    {
        propertyReadLock();
        long val = iDelay.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the DelayMinimum property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the DelayMinimum property.
     */
    public long getPropertyDelayMinimum()
    {
        propertyReadLock();
        long val = iDelayMinimum.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the DelayMaximum property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the DelayMaximum property.
     */
    public long getPropertyDelayMaximum()
    {
        propertyReadLock();
        long val = iDelayMaximum.getValue();
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
            iActionSetDelay.destroy();
            iActionDelay.destroy();
            iActionDelayMinimum.destroy();
            iActionDelayMaximum.destroy();
            iDelay.destroy();
            iDelayMinimum.destroy();
            iDelayMaximum.destroy();
        }
    }
}

