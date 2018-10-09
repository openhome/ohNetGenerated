package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgConfigApp1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgConfigApp1 extends ICpProxy
{
    public String syncGetKeys();
    public void beginGetKeys(ICpProxyListener aCallback);
    public String endGetKeys(long aAsyncHandle);
    public void syncSetValue(String aKey, String aValue);
    public void beginSetValue(String aKey, String aValue, ICpProxyListener aCallback);
    public void endSetValue(long aAsyncHandle);
    public String syncGetValue(String aKey);
    public void beginGetValue(String aKey, ICpProxyListener aCallback);
    public String endGetValue(long aAsyncHandle);
    public void syncResetAll();
    public void beginResetAll(ICpProxyListener aCallback);
    public void endResetAll(long aAsyncHandle);
    public void setPropertyKeysChanged(IPropertyChangeListener aKeysChanged);
    public String getPropertyKeys();
}

class SyncGetKeysAvOpenhomeOrgConfigApp1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgConfigApp1 iService;
    private String iKeys;

    public SyncGetKeysAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1 aProxy)
    {
        iService = aProxy;
    }
    public String getKeys()
    {
        return iKeys;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetKeys(aAsyncHandle);
        
        iKeys = result;
    }
}

class SyncSetValueAvOpenhomeOrgConfigApp1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgConfigApp1 iService;

    public SyncSetValueAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetValue(aAsyncHandle);
        
    }
}

class SyncGetValueAvOpenhomeOrgConfigApp1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgConfigApp1 iService;
    private String iValue;

    public SyncGetValueAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1 aProxy)
    {
        iService = aProxy;
    }
    public String getValue()
    {
        return iValue;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetValue(aAsyncHandle);
        
        iValue = result;
    }
}

class SyncResetAllAvOpenhomeOrgConfigApp1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgConfigApp1 iService;

    public SyncResetAllAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endResetAll(aAsyncHandle);
        
    }
}

/**
 * Proxy for the av.openhome.org:ConfigApp:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgConfigApp1 extends CpProxy implements ICpProxyAvOpenhomeOrgConfigApp1
{

    private Action iActionGetKeys;
    private Action iActionSetValue;
    private Action iActionGetValue;
    private Action iActionResetAll;
    private PropertyString iKeys;
    private IPropertyChangeListener iKeysChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgConfigApp1(CpDevice aDevice)
    {
        super("av-openhome-org", "ConfigApp", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetKeys = new Action("GetKeys");
        param = new ParameterString("Keys", allowedValues);
        iActionGetKeys.addOutputParameter(param);

        iActionSetValue = new Action("SetValue");
        param = new ParameterString("Key", allowedValues);
        iActionSetValue.addInputParameter(param);
        param = new ParameterString("Value", allowedValues);
        iActionSetValue.addInputParameter(param);

        iActionGetValue = new Action("GetValue");
        param = new ParameterString("Key", allowedValues);
        iActionGetValue.addInputParameter(param);
        param = new ParameterString("Value", allowedValues);
        iActionGetValue.addOutputParameter(param);

        iActionResetAll = new Action("ResetAll");

        iKeysChanged = new PropertyChangeListener();
        iKeys = new PropertyString("Keys",
            new PropertyChangeListener() {
                public void notifyChange() {
                    keysPropertyChanged();
                }
            }
        );
        addProperty(iKeys);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetKeys()
    {
        SyncGetKeysAvOpenhomeOrgConfigApp1 sync = new SyncGetKeysAvOpenhomeOrgConfigApp1(this);
        beginGetKeys(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getKeys();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetKeys}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetKeys(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetKeys, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetKeys.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetKeys} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetKeys} method.
     * @return the result of the previously invoked action.
     */
    public String endGetKeys(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String keys = Invocation.getOutputString(aAsyncHandle, index++);
        return keys;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetValue(String aKey, String aValue)
    {
        SyncSetValueAvOpenhomeOrgConfigApp1 sync = new SyncSetValueAvOpenhomeOrgConfigApp1(this);
        beginSetValue(aKey, aValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetValue}.
     * 
     * @param aKey
     * @param aValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetValue(String aKey, String aValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetValue, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetValue.getInputParameter(inIndex++), aKey));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetValue.getInputParameter(inIndex++), aValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetValue} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetValue} method.
     */
    public void endSetValue(long aAsyncHandle)
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
    public String syncGetValue(String aKey)
    {
        SyncGetValueAvOpenhomeOrgConfigApp1 sync = new SyncGetValueAvOpenhomeOrgConfigApp1(this);
        beginGetValue(aKey, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getValue();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetValue}.
     * 
     * @param aKey
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetValue(String aKey, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetValue, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionGetValue.getInputParameter(inIndex++), aKey));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetValue.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetValue} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetValue} method.
     * @return the result of the previously invoked action.
     */
    public String endGetValue(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String value = Invocation.getOutputString(aAsyncHandle, index++);
        return value;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncResetAll()
    {
        SyncResetAllAvOpenhomeOrgConfigApp1 sync = new SyncResetAllAvOpenhomeOrgConfigApp1(this);
        beginResetAll(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endResetAll}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginResetAll(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionResetAll, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginResetAll} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginResetAll} method.
     */
    public void endResetAll(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the Keys state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgConfigApp1 instance will not overlap.
     *
     * @param aKeysChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyKeysChanged(IPropertyChangeListener aKeysChanged)
    {
        synchronized (iPropertyLock)
        {
            iKeysChanged = aKeysChanged;
        }
    }

    private void keysPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iKeysChanged);
        }
    }

    /**
     * Query the value of the Keys property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Keys property.
     */
    public String getPropertyKeys()
    {
        propertyReadLock();
        String val = iKeys.getValue();
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
            iActionGetKeys.destroy();
            iActionSetValue.destroy();
            iActionGetValue.destroy();
            iActionResetAll.destroy();
            iKeys.destroy();
        }
    }
}

