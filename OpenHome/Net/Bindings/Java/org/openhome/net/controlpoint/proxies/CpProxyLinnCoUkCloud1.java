package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkCloud1.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkCloud1 extends ICpProxy
{
    public String syncGetChallengeResponse(String aChallenge);
    public void beginGetChallengeResponse(String aChallenge, ICpProxyListener aCallback);
    public String endGetChallengeResponse(long aAsyncHandle);
    public void syncSetControlEnabled(boolean aEnabled);
    public void beginSetControlEnabled(boolean aEnabled, ICpProxyListener aCallback);
    public void endSetControlEnabled(long aAsyncHandle);
    public boolean syncGetControlEnabled();
    public void beginGetControlEnabled(ICpProxyListener aCallback);
    public boolean endGetControlEnabled(long aAsyncHandle);
    public void setPropertyControlEnabledChanged(IPropertyChangeListener aControlEnabledChanged);
    public boolean getPropertyControlEnabled();
}

class SyncGetChallengeResponseLinnCoUkCloud1 extends SyncProxyAction
{
    private CpProxyLinnCoUkCloud1 iService;
    private String iResponse;

    public SyncGetChallengeResponseLinnCoUkCloud1(CpProxyLinnCoUkCloud1 aProxy)
    {
        iService = aProxy;
    }
    public String getResponse()
    {
        return iResponse;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetChallengeResponse(aAsyncHandle);
        
        iResponse = result;
    }
}

class SyncSetControlEnabledLinnCoUkCloud1 extends SyncProxyAction
{
    private CpProxyLinnCoUkCloud1 iService;

    public SyncSetControlEnabledLinnCoUkCloud1(CpProxyLinnCoUkCloud1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetControlEnabled(aAsyncHandle);
        
    }
}

class SyncGetControlEnabledLinnCoUkCloud1 extends SyncProxyAction
{
    private CpProxyLinnCoUkCloud1 iService;
    private boolean iEnabled;

    public SyncGetControlEnabledLinnCoUkCloud1(CpProxyLinnCoUkCloud1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getEnabled()
    {
        return iEnabled;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetControlEnabled(aAsyncHandle);
        
        iEnabled = result;
    }
}

/**
 * Proxy for the linn.co.uk:Cloud:1 UPnP service
 */
public class CpProxyLinnCoUkCloud1 extends CpProxy implements ICpProxyLinnCoUkCloud1
{

    private Action iActionGetChallengeResponse;
    private Action iActionSetControlEnabled;
    private Action iActionGetControlEnabled;
    private PropertyBool iControlEnabled;
    private IPropertyChangeListener iControlEnabledChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkCloud1(CpDevice aDevice)
    {
        super("linn-co-uk", "Cloud", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetChallengeResponse = new Action("GetChallengeResponse");
        param = new ParameterString("Challenge", allowedValues);
        iActionGetChallengeResponse.addInputParameter(param);
        param = new ParameterString("Response", allowedValues);
        iActionGetChallengeResponse.addOutputParameter(param);

        iActionSetControlEnabled = new Action("SetControlEnabled");
        param = new ParameterBool("Enabled");
        iActionSetControlEnabled.addInputParameter(param);

        iActionGetControlEnabled = new Action("GetControlEnabled");
        param = new ParameterBool("Enabled");
        iActionGetControlEnabled.addOutputParameter(param);

        iControlEnabledChanged = new PropertyChangeListener();
        iControlEnabled = new PropertyBool("ControlEnabled",
            new PropertyChangeListener() {
                public void notifyChange() {
                    controlEnabledPropertyChanged();
                }
            }
        );
        addProperty(iControlEnabled);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetChallengeResponse(String aChallenge)
    {
        SyncGetChallengeResponseLinnCoUkCloud1 sync = new SyncGetChallengeResponseLinnCoUkCloud1(this);
        beginGetChallengeResponse(aChallenge, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getResponse();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetChallengeResponse}.
     * 
     * @param aChallenge
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetChallengeResponse(String aChallenge, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetChallengeResponse, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionGetChallengeResponse.getInputParameter(inIndex++), aChallenge));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetChallengeResponse.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetChallengeResponse} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetChallengeResponse} method.
     * @return the result of the previously invoked action.
     */
    public String endGetChallengeResponse(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String response = Invocation.getOutputString(aAsyncHandle, index++);
        return response;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetControlEnabled(boolean aEnabled)
    {
        SyncSetControlEnabledLinnCoUkCloud1 sync = new SyncSetControlEnabledLinnCoUkCloud1(this);
        beginSetControlEnabled(aEnabled, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetControlEnabled}.
     * 
     * @param aEnabled
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetControlEnabled(boolean aEnabled, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetControlEnabled, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetControlEnabled.getInputParameter(inIndex++), aEnabled));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetControlEnabled} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetControlEnabled} method.
     */
    public void endSetControlEnabled(long aAsyncHandle)
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
    public boolean syncGetControlEnabled()
    {
        SyncGetControlEnabledLinnCoUkCloud1 sync = new SyncGetControlEnabledLinnCoUkCloud1(this);
        beginGetControlEnabled(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getEnabled();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetControlEnabled}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetControlEnabled(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetControlEnabled, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetControlEnabled.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetControlEnabled} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetControlEnabled} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetControlEnabled(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean enabled = Invocation.getOutputBool(aAsyncHandle, index++);
        return enabled;
    }
        
    /**
     * Set a delegate to be run when the ControlEnabled state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkCloud1 instance will not overlap.
     *
     * @param aControlEnabledChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyControlEnabledChanged(IPropertyChangeListener aControlEnabledChanged)
    {
        synchronized (iPropertyLock)
        {
            iControlEnabledChanged = aControlEnabledChanged;
        }
    }

    private void controlEnabledPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iControlEnabledChanged);
        }
    }

    /**
     * Query the value of the ControlEnabled property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ControlEnabled property.
     */
    public boolean getPropertyControlEnabled()
    {
        propertyReadLock();
        boolean val = iControlEnabled.getValue();
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
            iActionGetChallengeResponse.destroy();
            iActionSetControlEnabled.destroy();
            iActionGetControlEnabled.destroy();
            iControlEnabled.destroy();
        }
    }
}

