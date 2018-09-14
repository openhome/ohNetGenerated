package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkZoneReceiver1.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkZoneReceiver1 extends ICpProxy
{
    public String syncGetSender();
    public void beginGetSender(ICpProxyListener aCallback);
    public String endGetSender(long aAsyncHandle);
    public void setPropertySenderChanged(IPropertyChangeListener aSenderChanged);
    public String getPropertySender();
}

class SyncGetSenderLinnCoUkZoneReceiver1 extends SyncProxyAction
{
    private CpProxyLinnCoUkZoneReceiver1 iService;
    private String iSender;

    public SyncGetSenderLinnCoUkZoneReceiver1(CpProxyLinnCoUkZoneReceiver1 aProxy)
    {
        iService = aProxy;
    }
    public String getSender()
    {
        return iSender;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetSender(aAsyncHandle);
        
        iSender = result;
    }
}

/**
 * Proxy for the linn.co.uk:ZoneReceiver:1 UPnP service
 */
public class CpProxyLinnCoUkZoneReceiver1 extends CpProxy implements ICpProxyLinnCoUkZoneReceiver1
{

    private Action iActionGetSender;
    private PropertyString iSender;
    private IPropertyChangeListener iSenderChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkZoneReceiver1(CpDevice aDevice)
    {
        super("linn-co-uk", "ZoneReceiver", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetSender = new Action("GetSender");
        param = new ParameterString("Sender", allowedValues);
        iActionGetSender.addOutputParameter(param);

        iSenderChanged = new PropertyChangeListener();
        iSender = new PropertyString("Sender",
            new PropertyChangeListener() {
                public void notifyChange() {
                    senderPropertyChanged();
                }
            }
        );
        addProperty(iSender);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetSender()
    {
        SyncGetSenderLinnCoUkZoneReceiver1 sync = new SyncGetSenderLinnCoUkZoneReceiver1(this);
        beginGetSender(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSender();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetSender}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetSender(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetSender, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetSender.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetSender} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetSender} method.
     * @return the result of the previously invoked action.
     */
    public String endGetSender(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String sender = Invocation.getOutputString(aAsyncHandle, index++);
        return sender;
    }
        
    /**
     * Set a delegate to be run when the Sender state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkZoneReceiver1 instance will not overlap.
     *
     * @param aSenderChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertySenderChanged(IPropertyChangeListener aSenderChanged)
    {
        synchronized (iPropertyLock)
        {
            iSenderChanged = aSenderChanged;
        }
    }

    private void senderPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iSenderChanged);
        }
    }

    /**
     * Query the value of the Sender property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Sender property.
     */
    public String getPropertySender()
    {
        propertyReadLock();
        String val = iSender.getValue();
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
            iActionGetSender.destroy();
            iSender.destroy();
        }
    }
}

