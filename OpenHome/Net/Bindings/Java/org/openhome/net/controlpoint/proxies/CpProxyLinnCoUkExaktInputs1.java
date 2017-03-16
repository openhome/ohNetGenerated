package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkExaktInputs1.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkExaktInputs1 extends ICpProxy
{
    public String syncGetAssociation(long aInputIndex);
    public void beginGetAssociation(long aInputIndex, ICpProxyListener aCallback);
    public String endGetAssociation(long aAsyncHandle);
    public void syncSetAssociation(long aInputIndex, String aDeviceId);
    public void beginSetAssociation(long aInputIndex, String aDeviceId, ICpProxyListener aCallback);
    public void endSetAssociation(long aAsyncHandle);
    public void syncClearAssociation(long aInputIndex);
    public void beginClearAssociation(long aInputIndex, ICpProxyListener aCallback);
    public void endClearAssociation(long aAsyncHandle);
    public long syncInputCount();
    public void beginInputCount(ICpProxyListener aCallback);
    public long endInputCount(long aAsyncHandle);
    public void setPropertyAssociationsChanged(IPropertyChangeListener aAssociationsChanged);
    public String getPropertyAssociations();
}

class SyncGetAssociationLinnCoUkExaktInputs1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExaktInputs1 iService;
    private String iDeviceId;

    public SyncGetAssociationLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1 aProxy)
    {
        iService = aProxy;
    }
    public String getDeviceId()
    {
        return iDeviceId;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetAssociation(aAsyncHandle);
        
        iDeviceId = result;
    }
}

class SyncSetAssociationLinnCoUkExaktInputs1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExaktInputs1 iService;

    public SyncSetAssociationLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetAssociation(aAsyncHandle);
        
    }
}

class SyncClearAssociationLinnCoUkExaktInputs1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExaktInputs1 iService;

    public SyncClearAssociationLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endClearAssociation(aAsyncHandle);
        
    }
}

class SyncInputCountLinnCoUkExaktInputs1 extends SyncProxyAction
{
    private CpProxyLinnCoUkExaktInputs1 iService;
    private long iInputCount;

    public SyncInputCountLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1 aProxy)
    {
        iService = aProxy;
    }
    public long getInputCount()
    {
        return iInputCount;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endInputCount(aAsyncHandle);
        
        iInputCount = result;
    }
}

/**
 * Proxy for the linn.co.uk:ExaktInputs:1 UPnP service
 */
public class CpProxyLinnCoUkExaktInputs1 extends CpProxy implements ICpProxyLinnCoUkExaktInputs1
{

    private Action iActionGetAssociation;
    private Action iActionSetAssociation;
    private Action iActionClearAssociation;
    private Action iActionInputCount;
    private PropertyString iAssociations;
    private IPropertyChangeListener iAssociationsChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkExaktInputs1(CpDevice aDevice)
    {
        super("linn-co-uk", "ExaktInputs", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetAssociation = new Action("GetAssociation");
        param = new ParameterUint("InputIndex");
        iActionGetAssociation.addInputParameter(param);
        param = new ParameterString("DeviceId", allowedValues);
        iActionGetAssociation.addOutputParameter(param);

        iActionSetAssociation = new Action("SetAssociation");
        param = new ParameterUint("InputIndex");
        iActionSetAssociation.addInputParameter(param);
        param = new ParameterString("DeviceId", allowedValues);
        iActionSetAssociation.addInputParameter(param);

        iActionClearAssociation = new Action("ClearAssociation");
        param = new ParameterUint("InputIndex");
        iActionClearAssociation.addInputParameter(param);

        iActionInputCount = new Action("InputCount");
        param = new ParameterUint("InputCount");
        iActionInputCount.addOutputParameter(param);

        iAssociationsChanged = new PropertyChangeListener();
        iAssociations = new PropertyString("Associations",
            new PropertyChangeListener() {
                public void notifyChange() {
                    associationsPropertyChanged();
                }
            }
        );
        addProperty(iAssociations);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetAssociation(long aInputIndex)
    {
        SyncGetAssociationLinnCoUkExaktInputs1 sync = new SyncGetAssociationLinnCoUkExaktInputs1(this);
        beginGetAssociation(aInputIndex, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getDeviceId();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetAssociation}.
     * 
     * @param aInputIndex
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetAssociation(long aInputIndex, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetAssociation, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionGetAssociation.getInputParameter(inIndex++), aInputIndex));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetAssociation.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetAssociation} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetAssociation} method.
     * @return the result of the previously invoked action.
     */
    public String endGetAssociation(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String deviceId = Invocation.getOutputString(aAsyncHandle, index++);
        return deviceId;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetAssociation(long aInputIndex, String aDeviceId)
    {
        SyncSetAssociationLinnCoUkExaktInputs1 sync = new SyncSetAssociationLinnCoUkExaktInputs1(this);
        beginSetAssociation(aInputIndex, aDeviceId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetAssociation}.
     * 
     * @param aInputIndex
     * @param aDeviceId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetAssociation(long aInputIndex, String aDeviceId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetAssociation, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetAssociation.getInputParameter(inIndex++), aInputIndex));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetAssociation.getInputParameter(inIndex++), aDeviceId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetAssociation} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetAssociation} method.
     */
    public void endSetAssociation(long aAsyncHandle)
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
    public void syncClearAssociation(long aInputIndex)
    {
        SyncClearAssociationLinnCoUkExaktInputs1 sync = new SyncClearAssociationLinnCoUkExaktInputs1(this);
        beginClearAssociation(aInputIndex, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endClearAssociation}.
     * 
     * @param aInputIndex
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginClearAssociation(long aInputIndex, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionClearAssociation, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionClearAssociation.getInputParameter(inIndex++), aInputIndex));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginClearAssociation} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginClearAssociation} method.
     */
    public void endClearAssociation(long aAsyncHandle)
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
    public long syncInputCount()
    {
        SyncInputCountLinnCoUkExaktInputs1 sync = new SyncInputCountLinnCoUkExaktInputs1(this);
        beginInputCount(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getInputCount();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endInputCount}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginInputCount(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionInputCount, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionInputCount.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginInputCount} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginInputCount} method.
     * @return the result of the previously invoked action.
     */
    public long endInputCount(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long inputCount = Invocation.getOutputUint(aAsyncHandle, index++);
        return inputCount;
    }
        
    /**
     * Set a delegate to be run when the Associations state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExaktInputs1 instance will not overlap.
     *
     * @param aAssociationsChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyAssociationsChanged(IPropertyChangeListener aAssociationsChanged)
    {
        synchronized (iPropertyLock)
        {
            iAssociationsChanged = aAssociationsChanged;
        }
    }

    private void associationsPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iAssociationsChanged);
        }
    }

    /**
     * Query the value of the Associations property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Associations property.
     */
    public String getPropertyAssociations()
    {
        propertyReadLock();
        String val = iAssociations.getValue();
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
            iActionGetAssociation.destroy();
            iActionSetAssociation.destroy();
            iActionClearAssociation.destroy();
            iActionInputCount.destroy();
            iAssociations.destroy();
        }
    }
}

