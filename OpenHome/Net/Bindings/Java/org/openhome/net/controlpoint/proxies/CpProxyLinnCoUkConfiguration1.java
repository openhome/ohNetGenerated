package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkConfiguration1.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkConfiguration1 extends ICpProxy
{
    public String syncConfigurationXml();
    public void beginConfigurationXml(ICpProxyListener aCallback);
    public String endConfigurationXml(long aAsyncHandle);
    public String syncParameterXml();
    public void beginParameterXml(ICpProxyListener aCallback);
    public String endParameterXml(long aAsyncHandle);
    public void syncSetParameter(String aTarget, String aName, String aValue);
    public void beginSetParameter(String aTarget, String aName, String aValue, ICpProxyListener aCallback);
    public void endSetParameter(long aAsyncHandle);
    public void setPropertyConfigurationXmlChanged(IPropertyChangeListener aConfigurationXmlChanged);
    public String getPropertyConfigurationXml();
    public void setPropertyParameterXmlChanged(IPropertyChangeListener aParameterXmlChanged);
    public String getPropertyParameterXml();
}

class SyncConfigurationXmlLinnCoUkConfiguration1 extends SyncProxyAction
{
    private CpProxyLinnCoUkConfiguration1 iService;
    private String iConfigurationXml;

    public SyncConfigurationXmlLinnCoUkConfiguration1(CpProxyLinnCoUkConfiguration1 aProxy)
    {
        iService = aProxy;
    }
    public String getConfigurationXml()
    {
        return iConfigurationXml;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endConfigurationXml(aAsyncHandle);
        
        iConfigurationXml = result;
    }
}

class SyncParameterXmlLinnCoUkConfiguration1 extends SyncProxyAction
{
    private CpProxyLinnCoUkConfiguration1 iService;
    private String iParameterXml;

    public SyncParameterXmlLinnCoUkConfiguration1(CpProxyLinnCoUkConfiguration1 aProxy)
    {
        iService = aProxy;
    }
    public String getParameterXml()
    {
        return iParameterXml;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endParameterXml(aAsyncHandle);
        
        iParameterXml = result;
    }
}

class SyncSetParameterLinnCoUkConfiguration1 extends SyncProxyAction
{
    private CpProxyLinnCoUkConfiguration1 iService;

    public SyncSetParameterLinnCoUkConfiguration1(CpProxyLinnCoUkConfiguration1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetParameter(aAsyncHandle);
        
    }
}

/**
 * Proxy for the linn.co.uk:Configuration:1 UPnP service
 */
public class CpProxyLinnCoUkConfiguration1 extends CpProxy implements ICpProxyLinnCoUkConfiguration1
{

    private Action iActionConfigurationXml;
    private Action iActionParameterXml;
    private Action iActionSetParameter;
    private PropertyString iConfigurationXml;
    private PropertyString iParameterXml;
    private IPropertyChangeListener iConfigurationXmlChanged;
    private IPropertyChangeListener iParameterXmlChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkConfiguration1(CpDevice aDevice)
    {
        super("linn-co-uk", "Configuration", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionConfigurationXml = new Action("ConfigurationXml");
        param = new ParameterString("aConfigurationXml", allowedValues);
        iActionConfigurationXml.addOutputParameter(param);

        iActionParameterXml = new Action("ParameterXml");
        param = new ParameterString("aParameterXml", allowedValues);
        iActionParameterXml.addOutputParameter(param);

        iActionSetParameter = new Action("SetParameter");
        param = new ParameterString("aTarget", allowedValues);
        iActionSetParameter.addInputParameter(param);
        param = new ParameterString("aName", allowedValues);
        iActionSetParameter.addInputParameter(param);
        param = new ParameterString("aValue", allowedValues);
        iActionSetParameter.addInputParameter(param);

        iConfigurationXmlChanged = new PropertyChangeListener();
        iConfigurationXml = new PropertyString("ConfigurationXml",
            new PropertyChangeListener() {
                public void notifyChange() {
                    configurationXmlPropertyChanged();
                }
            }
        );
        addProperty(iConfigurationXml);
        iParameterXmlChanged = new PropertyChangeListener();
        iParameterXml = new PropertyString("ParameterXml",
            new PropertyChangeListener() {
                public void notifyChange() {
                    parameterXmlPropertyChanged();
                }
            }
        );
        addProperty(iParameterXml);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncConfigurationXml()
    {
        SyncConfigurationXmlLinnCoUkConfiguration1 sync = new SyncConfigurationXmlLinnCoUkConfiguration1(this);
        beginConfigurationXml(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getConfigurationXml();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endConfigurationXml}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginConfigurationXml(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionConfigurationXml, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionConfigurationXml.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginConfigurationXml} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginConfigurationXml} method.
     * @return the result of the previously invoked action.
     */
    public String endConfigurationXml(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String configurationXml = Invocation.getOutputString(aAsyncHandle, index++);
        return configurationXml;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncParameterXml()
    {
        SyncParameterXmlLinnCoUkConfiguration1 sync = new SyncParameterXmlLinnCoUkConfiguration1(this);
        beginParameterXml(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getParameterXml();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endParameterXml}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginParameterXml(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionParameterXml, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionParameterXml.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginParameterXml} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginParameterXml} method.
     * @return the result of the previously invoked action.
     */
    public String endParameterXml(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String parameterXml = Invocation.getOutputString(aAsyncHandle, index++);
        return parameterXml;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetParameter(String aTarget, String aName, String aValue)
    {
        SyncSetParameterLinnCoUkConfiguration1 sync = new SyncSetParameterLinnCoUkConfiguration1(this);
        beginSetParameter(aTarget, aName, aValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetParameter}.
     * 
     * @param aTarget
     * @param aName
     * @param aValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetParameter(String aTarget, String aName, String aValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetParameter, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetParameter.getInputParameter(inIndex++), aTarget));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetParameter.getInputParameter(inIndex++), aName));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetParameter.getInputParameter(inIndex++), aValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetParameter} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetParameter} method.
     */
    public void endSetParameter(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the ConfigurationXml state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkConfiguration1 instance will not overlap.
     *
     * @param aConfigurationXmlChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyConfigurationXmlChanged(IPropertyChangeListener aConfigurationXmlChanged)
    {
        synchronized (iPropertyLock)
        {
            iConfigurationXmlChanged = aConfigurationXmlChanged;
        }
    }

    private void configurationXmlPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iConfigurationXmlChanged);
        }
    }
    /**
     * Set a delegate to be run when the ParameterXml state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkConfiguration1 instance will not overlap.
     *
     * @param aParameterXmlChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyParameterXmlChanged(IPropertyChangeListener aParameterXmlChanged)
    {
        synchronized (iPropertyLock)
        {
            iParameterXmlChanged = aParameterXmlChanged;
        }
    }

    private void parameterXmlPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iParameterXmlChanged);
        }
    }

    /**
     * Query the value of the ConfigurationXml property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ConfigurationXml property.
     */
    public String getPropertyConfigurationXml()
    {
        propertyReadLock();
        String val = iConfigurationXml.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the ParameterXml property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ParameterXml property.
     */
    public String getPropertyParameterXml()
    {
        propertyReadLock();
        String val = iParameterXml.getValue();
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
            iActionConfigurationXml.destroy();
            iActionParameterXml.destroy();
            iActionSetParameter.destroy();
            iConfigurationXml.destroy();
            iParameterXml.destroy();
        }
    }
}

