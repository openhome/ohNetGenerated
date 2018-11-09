package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkZones1.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkZones1 extends ICpProxy
{
    public String syncGetInputs();
    public void beginGetInputs(ICpProxyListener aCallback);
    public String endGetInputs(long aAsyncHandle);
    public String syncGetOutputs();
    public void beginGetOutputs(ICpProxyListener aCallback);
    public String endGetOutputs(long aAsyncHandle);
    public String syncGetMappings();
    public void beginGetMappings(ICpProxyListener aCallback);
    public String endGetMappings(long aAsyncHandle);
    public void syncSetMappings(String aMappings);
    public void beginSetMappings(String aMappings, ICpProxyListener aCallback);
    public void endSetMappings(long aAsyncHandle);
    public void setPropertyInputsChanged(IPropertyChangeListener aInputsChanged);
    public String getPropertyInputs();
    public void setPropertyOutputsChanged(IPropertyChangeListener aOutputsChanged);
    public String getPropertyOutputs();
    public void setPropertyMappingsChanged(IPropertyChangeListener aMappingsChanged);
    public String getPropertyMappings();
}

class SyncGetInputsLinnCoUkZones1 extends SyncProxyAction
{
    private CpProxyLinnCoUkZones1 iService;
    private String iInputs;

    public SyncGetInputsLinnCoUkZones1(CpProxyLinnCoUkZones1 aProxy)
    {
        iService = aProxy;
    }
    public String getInputs()
    {
        return iInputs;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetInputs(aAsyncHandle);
        
        iInputs = result;
    }
}

class SyncGetOutputsLinnCoUkZones1 extends SyncProxyAction
{
    private CpProxyLinnCoUkZones1 iService;
    private String iOutputs;

    public SyncGetOutputsLinnCoUkZones1(CpProxyLinnCoUkZones1 aProxy)
    {
        iService = aProxy;
    }
    public String getOutputs()
    {
        return iOutputs;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetOutputs(aAsyncHandle);
        
        iOutputs = result;
    }
}

class SyncGetMappingsLinnCoUkZones1 extends SyncProxyAction
{
    private CpProxyLinnCoUkZones1 iService;
    private String iMappings;

    public SyncGetMappingsLinnCoUkZones1(CpProxyLinnCoUkZones1 aProxy)
    {
        iService = aProxy;
    }
    public String getMappings()
    {
        return iMappings;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetMappings(aAsyncHandle);
        
        iMappings = result;
    }
}

class SyncSetMappingsLinnCoUkZones1 extends SyncProxyAction
{
    private CpProxyLinnCoUkZones1 iService;

    public SyncSetMappingsLinnCoUkZones1(CpProxyLinnCoUkZones1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetMappings(aAsyncHandle);
        
    }
}

/**
 * Proxy for the linn.co.uk:Zones:1 UPnP service
 */
public class CpProxyLinnCoUkZones1 extends CpProxy implements ICpProxyLinnCoUkZones1
{

    private Action iActionGetInputs;
    private Action iActionGetOutputs;
    private Action iActionGetMappings;
    private Action iActionSetMappings;
    private PropertyString iInputs;
    private PropertyString iOutputs;
    private PropertyString iMappings;
    private IPropertyChangeListener iInputsChanged;
    private IPropertyChangeListener iOutputsChanged;
    private IPropertyChangeListener iMappingsChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkZones1(CpDevice aDevice)
    {
        super("linn-co-uk", "Zones", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetInputs = new Action("GetInputs");
        param = new ParameterString("Inputs", allowedValues);
        iActionGetInputs.addOutputParameter(param);

        iActionGetOutputs = new Action("GetOutputs");
        param = new ParameterString("Outputs", allowedValues);
        iActionGetOutputs.addOutputParameter(param);

        iActionGetMappings = new Action("GetMappings");
        param = new ParameterString("Mappings", allowedValues);
        iActionGetMappings.addOutputParameter(param);

        iActionSetMappings = new Action("SetMappings");
        param = new ParameterString("Mappings", allowedValues);
        iActionSetMappings.addInputParameter(param);

        iInputsChanged = new PropertyChangeListener();
        iInputs = new PropertyString("Inputs",
            new PropertyChangeListener() {
                public void notifyChange() {
                    inputsPropertyChanged();
                }
            }
        );
        addProperty(iInputs);
        iOutputsChanged = new PropertyChangeListener();
        iOutputs = new PropertyString("Outputs",
            new PropertyChangeListener() {
                public void notifyChange() {
                    outputsPropertyChanged();
                }
            }
        );
        addProperty(iOutputs);
        iMappingsChanged = new PropertyChangeListener();
        iMappings = new PropertyString("Mappings",
            new PropertyChangeListener() {
                public void notifyChange() {
                    mappingsPropertyChanged();
                }
            }
        );
        addProperty(iMappings);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetInputs()
    {
        SyncGetInputsLinnCoUkZones1 sync = new SyncGetInputsLinnCoUkZones1(this);
        beginGetInputs(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getInputs();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetInputs}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetInputs(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetInputs, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetInputs.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetInputs} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetInputs} method.
     * @return the result of the previously invoked action.
     */
    public String endGetInputs(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String inputs = Invocation.getOutputString(aAsyncHandle, index++);
        return inputs;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetOutputs()
    {
        SyncGetOutputsLinnCoUkZones1 sync = new SyncGetOutputsLinnCoUkZones1(this);
        beginGetOutputs(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getOutputs();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetOutputs}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetOutputs(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetOutputs, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetOutputs.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetOutputs} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetOutputs} method.
     * @return the result of the previously invoked action.
     */
    public String endGetOutputs(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String outputs = Invocation.getOutputString(aAsyncHandle, index++);
        return outputs;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetMappings()
    {
        SyncGetMappingsLinnCoUkZones1 sync = new SyncGetMappingsLinnCoUkZones1(this);
        beginGetMappings(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getMappings();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetMappings}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetMappings(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetMappings, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetMappings.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetMappings} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetMappings} method.
     * @return the result of the previously invoked action.
     */
    public String endGetMappings(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String mappings = Invocation.getOutputString(aAsyncHandle, index++);
        return mappings;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetMappings(String aMappings)
    {
        SyncSetMappingsLinnCoUkZones1 sync = new SyncSetMappingsLinnCoUkZones1(this);
        beginSetMappings(aMappings, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetMappings}.
     * 
     * @param aMappings
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetMappings(String aMappings, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetMappings, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetMappings.getInputParameter(inIndex++), aMappings));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetMappings} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetMappings} method.
     */
    public void endSetMappings(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the Inputs state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkZones1 instance will not overlap.
     *
     * @param aInputsChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyInputsChanged(IPropertyChangeListener aInputsChanged)
    {
        synchronized (iPropertyLock)
        {
            iInputsChanged = aInputsChanged;
        }
    }

    private void inputsPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iInputsChanged);
        }
    }
    /**
     * Set a delegate to be run when the Outputs state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkZones1 instance will not overlap.
     *
     * @param aOutputsChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyOutputsChanged(IPropertyChangeListener aOutputsChanged)
    {
        synchronized (iPropertyLock)
        {
            iOutputsChanged = aOutputsChanged;
        }
    }

    private void outputsPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iOutputsChanged);
        }
    }
    /**
     * Set a delegate to be run when the Mappings state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkZones1 instance will not overlap.
     *
     * @param aMappingsChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyMappingsChanged(IPropertyChangeListener aMappingsChanged)
    {
        synchronized (iPropertyLock)
        {
            iMappingsChanged = aMappingsChanged;
        }
    }

    private void mappingsPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iMappingsChanged);
        }
    }

    /**
     * Query the value of the Inputs property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Inputs property.
     */
    public String getPropertyInputs()
    {
        propertyReadLock();
        String val = iInputs.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Outputs property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Outputs property.
     */
    public String getPropertyOutputs()
    {
        propertyReadLock();
        String val = iOutputs.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Mappings property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Mappings property.
     */
    public String getPropertyMappings()
    {
        propertyReadLock();
        String val = iMappings.getValue();
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
            iActionGetInputs.destroy();
            iActionGetOutputs.destroy();
            iActionGetMappings.destroy();
            iActionSetMappings.destroy();
            iInputs.destroy();
            iOutputs.destroy();
            iMappings.destroy();
        }
    }
}

