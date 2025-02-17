package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgReaction1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgReaction1 extends ICpProxy
{
    public boolean syncGetCanReact();
    public void beginGetCanReact(ICpProxyListener aCallback);
    public boolean endGetCanReact(long aAsyncHandle);
    public String syncGetCurrentReaction();
    public void beginGetCurrentReaction(ICpProxyListener aCallback);
    public String endGetCurrentReaction(long aAsyncHandle);
    public String syncGetAvailableReactions();
    public void beginGetAvailableReactions(ICpProxyListener aCallback);
    public String endGetAvailableReactions(long aAsyncHandle);
    public void syncSetReaction(String aReaction);
    public void beginSetReaction(String aReaction, ICpProxyListener aCallback);
    public void endSetReaction(long aAsyncHandle);
    public void syncClearReaction();
    public void beginClearReaction(ICpProxyListener aCallback);
    public void endClearReaction(long aAsyncHandle);
    public void setPropertyCanReactChanged(IPropertyChangeListener aCanReactChanged);
    public boolean getPropertyCanReact();
    public void setPropertyCurrentReactionChanged(IPropertyChangeListener aCurrentReactionChanged);
    public String getPropertyCurrentReaction();
    public void setPropertyAvailableReactionsChanged(IPropertyChangeListener aAvailableReactionsChanged);
    public String getPropertyAvailableReactions();
}

class SyncGetCanReactAvOpenhomeOrgReaction1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgReaction1 iService;
    private boolean iCanReact;

    public SyncGetCanReactAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getCanReact()
    {
        return iCanReact;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetCanReact(aAsyncHandle);
        
        iCanReact = result;
    }
}

class SyncGetCurrentReactionAvOpenhomeOrgReaction1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgReaction1 iService;
    private String iReaction;

    public SyncGetCurrentReactionAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1 aProxy)
    {
        iService = aProxy;
    }
    public String getReaction()
    {
        return iReaction;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetCurrentReaction(aAsyncHandle);
        
        iReaction = result;
    }
}

class SyncGetAvailableReactionsAvOpenhomeOrgReaction1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgReaction1 iService;
    private String iAvailableReactions;

    public SyncGetAvailableReactionsAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1 aProxy)
    {
        iService = aProxy;
    }
    public String getAvailableReactions()
    {
        return iAvailableReactions;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetAvailableReactions(aAsyncHandle);
        
        iAvailableReactions = result;
    }
}

class SyncSetReactionAvOpenhomeOrgReaction1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgReaction1 iService;

    public SyncSetReactionAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetReaction(aAsyncHandle);
        
    }
}

class SyncClearReactionAvOpenhomeOrgReaction1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgReaction1 iService;

    public SyncClearReactionAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endClearReaction(aAsyncHandle);
        
    }
}

/**
 * Proxy for the av.openhome.org:Reaction:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgReaction1 extends CpProxy implements ICpProxyAvOpenhomeOrgReaction1
{

    private Action iActionGetCanReact;
    private Action iActionGetCurrentReaction;
    private Action iActionGetAvailableReactions;
    private Action iActionSetReaction;
    private Action iActionClearReaction;
    private PropertyBool iCanReact;
    private PropertyString iCurrentReaction;
    private PropertyString iAvailableReactions;
    private IPropertyChangeListener iCanReactChanged;
    private IPropertyChangeListener iCurrentReactionChanged;
    private IPropertyChangeListener iAvailableReactionsChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgReaction1(CpDevice aDevice)
    {
        super("av-openhome-org", "Reaction", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetCanReact = new Action("GetCanReact");
        param = new ParameterBool("CanReact");
        iActionGetCanReact.addOutputParameter(param);

        iActionGetCurrentReaction = new Action("GetCurrentReaction");
        param = new ParameterString("Reaction", allowedValues);
        iActionGetCurrentReaction.addOutputParameter(param);

        iActionGetAvailableReactions = new Action("GetAvailableReactions");
        param = new ParameterString("AvailableReactions", allowedValues);
        iActionGetAvailableReactions.addOutputParameter(param);

        iActionSetReaction = new Action("SetReaction");
        param = new ParameterString("Reaction", allowedValues);
        iActionSetReaction.addInputParameter(param);

        iActionClearReaction = new Action("ClearReaction");

        iCanReactChanged = new PropertyChangeListener();
        iCanReact = new PropertyBool("CanReact",
            new PropertyChangeListener() {
                public void notifyChange() {
                    canReactPropertyChanged();
                }
            }
        );
        addProperty(iCanReact);
        iCurrentReactionChanged = new PropertyChangeListener();
        iCurrentReaction = new PropertyString("CurrentReaction",
            new PropertyChangeListener() {
                public void notifyChange() {
                    currentReactionPropertyChanged();
                }
            }
        );
        addProperty(iCurrentReaction);
        iAvailableReactionsChanged = new PropertyChangeListener();
        iAvailableReactions = new PropertyString("AvailableReactions",
            new PropertyChangeListener() {
                public void notifyChange() {
                    availableReactionsPropertyChanged();
                }
            }
        );
        addProperty(iAvailableReactions);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncGetCanReact()
    {
        SyncGetCanReactAvOpenhomeOrgReaction1 sync = new SyncGetCanReactAvOpenhomeOrgReaction1(this);
        beginGetCanReact(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getCanReact();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetCanReact}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetCanReact(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetCanReact, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetCanReact.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetCanReact} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetCanReact} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetCanReact(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean canReact = Invocation.getOutputBool(aAsyncHandle, index++);
        return canReact;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetCurrentReaction()
    {
        SyncGetCurrentReactionAvOpenhomeOrgReaction1 sync = new SyncGetCurrentReactionAvOpenhomeOrgReaction1(this);
        beginGetCurrentReaction(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getReaction();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetCurrentReaction}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetCurrentReaction(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetCurrentReaction, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetCurrentReaction.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetCurrentReaction} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetCurrentReaction} method.
     * @return the result of the previously invoked action.
     */
    public String endGetCurrentReaction(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String reaction = Invocation.getOutputString(aAsyncHandle, index++);
        return reaction;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetAvailableReactions()
    {
        SyncGetAvailableReactionsAvOpenhomeOrgReaction1 sync = new SyncGetAvailableReactionsAvOpenhomeOrgReaction1(this);
        beginGetAvailableReactions(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getAvailableReactions();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetAvailableReactions}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetAvailableReactions(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetAvailableReactions, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetAvailableReactions.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetAvailableReactions} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetAvailableReactions} method.
     * @return the result of the previously invoked action.
     */
    public String endGetAvailableReactions(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String availableReactions = Invocation.getOutputString(aAsyncHandle, index++);
        return availableReactions;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetReaction(String aReaction)
    {
        SyncSetReactionAvOpenhomeOrgReaction1 sync = new SyncSetReactionAvOpenhomeOrgReaction1(this);
        beginSetReaction(aReaction, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetReaction}.
     * 
     * @param aReaction
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetReaction(String aReaction, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetReaction, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetReaction.getInputParameter(inIndex++), aReaction));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetReaction} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetReaction} method.
     */
    public void endSetReaction(long aAsyncHandle)
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
    public void syncClearReaction()
    {
        SyncClearReactionAvOpenhomeOrgReaction1 sync = new SyncClearReactionAvOpenhomeOrgReaction1(this);
        beginClearReaction(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endClearReaction}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginClearReaction(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionClearReaction, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginClearReaction} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginClearReaction} method.
     */
    public void endClearReaction(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the CanReact state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgReaction1 instance will not overlap.
     *
     * @param aCanReactChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyCanReactChanged(IPropertyChangeListener aCanReactChanged)
    {
        synchronized (iPropertyLock)
        {
            iCanReactChanged = aCanReactChanged;
        }
    }

    private void canReactPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iCanReactChanged);
        }
    }
    /**
     * Set a delegate to be run when the CurrentReaction state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgReaction1 instance will not overlap.
     *
     * @param aCurrentReactionChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyCurrentReactionChanged(IPropertyChangeListener aCurrentReactionChanged)
    {
        synchronized (iPropertyLock)
        {
            iCurrentReactionChanged = aCurrentReactionChanged;
        }
    }

    private void currentReactionPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iCurrentReactionChanged);
        }
    }
    /**
     * Set a delegate to be run when the AvailableReactions state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgReaction1 instance will not overlap.
     *
     * @param aAvailableReactionsChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyAvailableReactionsChanged(IPropertyChangeListener aAvailableReactionsChanged)
    {
        synchronized (iPropertyLock)
        {
            iAvailableReactionsChanged = aAvailableReactionsChanged;
        }
    }

    private void availableReactionsPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iAvailableReactionsChanged);
        }
    }

    /**
     * Query the value of the CanReact property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the CanReact property.
     */
    public boolean getPropertyCanReact()
    {
        propertyReadLock();
        boolean val = iCanReact.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the CurrentReaction property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the CurrentReaction property.
     */
    public String getPropertyCurrentReaction()
    {
        propertyReadLock();
        String val = iCurrentReaction.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the AvailableReactions property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the AvailableReactions property.
     */
    public String getPropertyAvailableReactions()
    {
        propertyReadLock();
        String val = iAvailableReactions.getValue();
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
            iActionGetCanReact.destroy();
            iActionGetCurrentReaction.destroy();
            iActionGetAvailableReactions.destroy();
            iActionSetReaction.destroy();
            iActionClearReaction.destroy();
            iCanReact.destroy();
            iCurrentReaction.destroy();
            iAvailableReactions.destroy();
        }
    }
}

