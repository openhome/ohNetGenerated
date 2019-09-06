package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkWifi1.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkWifi1 extends ICpProxy
{
    public void syncClearCredentials();
    public void beginClearCredentials(ICpProxyListener aCallback);
    public void endClearCredentials(long aAsyncHandle);
    public boolean syncGetAdapterInUse();
    public void beginGetAdapterInUse(ICpProxyListener aCallback);
    public boolean endGetAdapterInUse(long aAsyncHandle);
    public String syncGetConfiguration();
    public void beginGetConfiguration(ICpProxyListener aCallback);
    public String endGetConfiguration(long aAsyncHandle);
    public String syncGetNetworkInfo();
    public void beginGetNetworkInfo(ICpProxyListener aCallback);
    public String endGetNetworkInfo(long aAsyncHandle);
    public String syncGetScanResults();
    public void beginGetScanResults(ICpProxyListener aCallback);
    public String endGetScanResults(long aAsyncHandle);
    public String syncGetSignalInfo();
    public void beginGetSignalInfo(ICpProxyListener aCallback);
    public String endGetSignalInfo(long aAsyncHandle);
    public String syncGetStatus();
    public void beginGetStatus(ICpProxyListener aCallback);
    public String endGetStatus(long aAsyncHandle);
    public void syncScan();
    public void beginScan(ICpProxyListener aCallback);
    public void endScan(long aAsyncHandle);
    public void syncSetCredentials(String aSsid, String aPassword);
    public void beginSetCredentials(String aSsid, String aPassword, ICpProxyListener aCallback);
    public void endSetCredentials(long aAsyncHandle);
    public void setPropertyAdapterInUseChanged(IPropertyChangeListener aAdapterInUseChanged);
    public boolean getPropertyAdapterInUse();
    public void setPropertyConfigurationChanged(IPropertyChangeListener aConfigurationChanged);
    public String getPropertyConfiguration();
    public void setPropertyScanResultsChanged(IPropertyChangeListener aScanResultsChanged);
    public String getPropertyScanResults();
    public void setPropertyStatusChanged(IPropertyChangeListener aStatusChanged);
    public String getPropertyStatus();
}

class SyncClearCredentialsLinnCoUkWifi1 extends SyncProxyAction
{
    private CpProxyLinnCoUkWifi1 iService;

    public SyncClearCredentialsLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endClearCredentials(aAsyncHandle);
        
    }
}

class SyncGetAdapterInUseLinnCoUkWifi1 extends SyncProxyAction
{
    private CpProxyLinnCoUkWifi1 iService;
    private boolean iAdapterInUse;

    public SyncGetAdapterInUseLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getAdapterInUse()
    {
        return iAdapterInUse;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetAdapterInUse(aAsyncHandle);
        
        iAdapterInUse = result;
    }
}

class SyncGetConfigurationLinnCoUkWifi1 extends SyncProxyAction
{
    private CpProxyLinnCoUkWifi1 iService;
    private String iConfiguration;

    public SyncGetConfigurationLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
    {
        iService = aProxy;
    }
    public String getConfiguration()
    {
        return iConfiguration;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetConfiguration(aAsyncHandle);
        
        iConfiguration = result;
    }
}

class SyncGetNetworkInfoLinnCoUkWifi1 extends SyncProxyAction
{
    private CpProxyLinnCoUkWifi1 iService;
    private String iNetworkInfo;

    public SyncGetNetworkInfoLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
    {
        iService = aProxy;
    }
    public String getNetworkInfo()
    {
        return iNetworkInfo;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetNetworkInfo(aAsyncHandle);
        
        iNetworkInfo = result;
    }
}

class SyncGetScanResultsLinnCoUkWifi1 extends SyncProxyAction
{
    private CpProxyLinnCoUkWifi1 iService;
    private String iScanResults;

    public SyncGetScanResultsLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
    {
        iService = aProxy;
    }
    public String getScanResults()
    {
        return iScanResults;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetScanResults(aAsyncHandle);
        
        iScanResults = result;
    }
}

class SyncGetSignalInfoLinnCoUkWifi1 extends SyncProxyAction
{
    private CpProxyLinnCoUkWifi1 iService;
    private String iSignalInfo;

    public SyncGetSignalInfoLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
    {
        iService = aProxy;
    }
    public String getSignalInfo()
    {
        return iSignalInfo;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetSignalInfo(aAsyncHandle);
        
        iSignalInfo = result;
    }
}

class SyncGetStatusLinnCoUkWifi1 extends SyncProxyAction
{
    private CpProxyLinnCoUkWifi1 iService;
    private String iStatus;

    public SyncGetStatusLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
    {
        iService = aProxy;
    }
    public String getStatus()
    {
        return iStatus;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetStatus(aAsyncHandle);
        
        iStatus = result;
    }
}

class SyncScanLinnCoUkWifi1 extends SyncProxyAction
{
    private CpProxyLinnCoUkWifi1 iService;

    public SyncScanLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endScan(aAsyncHandle);
        
    }
}

class SyncSetCredentialsLinnCoUkWifi1 extends SyncProxyAction
{
    private CpProxyLinnCoUkWifi1 iService;

    public SyncSetCredentialsLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetCredentials(aAsyncHandle);
        
    }
}

/**
 * Proxy for the linn.co.uk:Wifi:1 UPnP service
 */
public class CpProxyLinnCoUkWifi1 extends CpProxy implements ICpProxyLinnCoUkWifi1
{

    private Action iActionClearCredentials;
    private Action iActionGetAdapterInUse;
    private Action iActionGetConfiguration;
    private Action iActionGetNetworkInfo;
    private Action iActionGetScanResults;
    private Action iActionGetSignalInfo;
    private Action iActionGetStatus;
    private Action iActionScan;
    private Action iActionSetCredentials;
    private PropertyBool iAdapterInUse;
    private PropertyString iConfiguration;
    private PropertyString iScanResults;
    private PropertyString iStatus;
    private IPropertyChangeListener iAdapterInUseChanged;
    private IPropertyChangeListener iConfigurationChanged;
    private IPropertyChangeListener iScanResultsChanged;
    private IPropertyChangeListener iStatusChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkWifi1(CpDevice aDevice)
    {
        super("linn-co-uk", "Wifi", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionClearCredentials = new Action("ClearCredentials");

        iActionGetAdapterInUse = new Action("GetAdapterInUse");
        param = new ParameterBool("AdapterInUse");
        iActionGetAdapterInUse.addOutputParameter(param);

        iActionGetConfiguration = new Action("GetConfiguration");
        param = new ParameterString("Configuration", allowedValues);
        iActionGetConfiguration.addOutputParameter(param);

        iActionGetNetworkInfo = new Action("GetNetworkInfo");
        param = new ParameterString("NetworkInfo", allowedValues);
        iActionGetNetworkInfo.addOutputParameter(param);

        iActionGetScanResults = new Action("GetScanResults");
        param = new ParameterString("ScanResults", allowedValues);
        iActionGetScanResults.addOutputParameter(param);

        iActionGetSignalInfo = new Action("GetSignalInfo");
        param = new ParameterString("SignalInfo", allowedValues);
        iActionGetSignalInfo.addOutputParameter(param);

        iActionGetStatus = new Action("GetStatus");
        param = new ParameterString("Status", allowedValues);
        iActionGetStatus.addOutputParameter(param);

        iActionScan = new Action("Scan");

        iActionSetCredentials = new Action("SetCredentials");
        param = new ParameterString("Ssid", allowedValues);
        iActionSetCredentials.addInputParameter(param);
        param = new ParameterString("Password", allowedValues);
        iActionSetCredentials.addInputParameter(param);

        iAdapterInUseChanged = new PropertyChangeListener();
        iAdapterInUse = new PropertyBool("AdapterInUse",
            new PropertyChangeListener() {
                public void notifyChange() {
                    adapterInUsePropertyChanged();
                }
            }
        );
        addProperty(iAdapterInUse);
        iConfigurationChanged = new PropertyChangeListener();
        iConfiguration = new PropertyString("Configuration",
            new PropertyChangeListener() {
                public void notifyChange() {
                    configurationPropertyChanged();
                }
            }
        );
        addProperty(iConfiguration);
        iScanResultsChanged = new PropertyChangeListener();
        iScanResults = new PropertyString("ScanResults",
            new PropertyChangeListener() {
                public void notifyChange() {
                    scanResultsPropertyChanged();
                }
            }
        );
        addProperty(iScanResults);
        iStatusChanged = new PropertyChangeListener();
        iStatus = new PropertyString("Status",
            new PropertyChangeListener() {
                public void notifyChange() {
                    statusPropertyChanged();
                }
            }
        );
        addProperty(iStatus);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncClearCredentials()
    {
        SyncClearCredentialsLinnCoUkWifi1 sync = new SyncClearCredentialsLinnCoUkWifi1(this);
        beginClearCredentials(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endClearCredentials}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginClearCredentials(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionClearCredentials, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginClearCredentials} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginClearCredentials} method.
     */
    public void endClearCredentials(long aAsyncHandle)
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
    public boolean syncGetAdapterInUse()
    {
        SyncGetAdapterInUseLinnCoUkWifi1 sync = new SyncGetAdapterInUseLinnCoUkWifi1(this);
        beginGetAdapterInUse(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getAdapterInUse();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetAdapterInUse}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetAdapterInUse(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetAdapterInUse, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetAdapterInUse.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetAdapterInUse} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetAdapterInUse} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetAdapterInUse(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean adapterInUse = Invocation.getOutputBool(aAsyncHandle, index++);
        return adapterInUse;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetConfiguration()
    {
        SyncGetConfigurationLinnCoUkWifi1 sync = new SyncGetConfigurationLinnCoUkWifi1(this);
        beginGetConfiguration(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getConfiguration();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetConfiguration}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetConfiguration(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetConfiguration, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetConfiguration.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetConfiguration} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetConfiguration} method.
     * @return the result of the previously invoked action.
     */
    public String endGetConfiguration(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String configuration = Invocation.getOutputString(aAsyncHandle, index++);
        return configuration;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetNetworkInfo()
    {
        SyncGetNetworkInfoLinnCoUkWifi1 sync = new SyncGetNetworkInfoLinnCoUkWifi1(this);
        beginGetNetworkInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getNetworkInfo();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetNetworkInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetNetworkInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetNetworkInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetNetworkInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetNetworkInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetNetworkInfo} method.
     * @return the result of the previously invoked action.
     */
    public String endGetNetworkInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String networkInfo = Invocation.getOutputString(aAsyncHandle, index++);
        return networkInfo;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetScanResults()
    {
        SyncGetScanResultsLinnCoUkWifi1 sync = new SyncGetScanResultsLinnCoUkWifi1(this);
        beginGetScanResults(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getScanResults();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetScanResults}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetScanResults(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetScanResults, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetScanResults.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetScanResults} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetScanResults} method.
     * @return the result of the previously invoked action.
     */
    public String endGetScanResults(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String scanResults = Invocation.getOutputString(aAsyncHandle, index++);
        return scanResults;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetSignalInfo()
    {
        SyncGetSignalInfoLinnCoUkWifi1 sync = new SyncGetSignalInfoLinnCoUkWifi1(this);
        beginGetSignalInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSignalInfo();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetSignalInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetSignalInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetSignalInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetSignalInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetSignalInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetSignalInfo} method.
     * @return the result of the previously invoked action.
     */
    public String endGetSignalInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String signalInfo = Invocation.getOutputString(aAsyncHandle, index++);
        return signalInfo;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetStatus()
    {
        SyncGetStatusLinnCoUkWifi1 sync = new SyncGetStatusLinnCoUkWifi1(this);
        beginGetStatus(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getStatus();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetStatus}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetStatus(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetStatus, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetStatus.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetStatus} method.
     * @return the result of the previously invoked action.
     */
    public String endGetStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String status = Invocation.getOutputString(aAsyncHandle, index++);
        return status;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncScan()
    {
        SyncScanLinnCoUkWifi1 sync = new SyncScanLinnCoUkWifi1(this);
        beginScan(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endScan}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginScan(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionScan, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginScan} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginScan} method.
     */
    public void endScan(long aAsyncHandle)
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
    public void syncSetCredentials(String aSsid, String aPassword)
    {
        SyncSetCredentialsLinnCoUkWifi1 sync = new SyncSetCredentialsLinnCoUkWifi1(this);
        beginSetCredentials(aSsid, aPassword, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetCredentials}.
     * 
     * @param aSsid
     * @param aPassword
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetCredentials(String aSsid, String aPassword, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetCredentials, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetCredentials.getInputParameter(inIndex++), aSsid));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetCredentials.getInputParameter(inIndex++), aPassword));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetCredentials} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetCredentials} method.
     */
    public void endSetCredentials(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the AdapterInUse state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkWifi1 instance will not overlap.
     *
     * @param aAdapterInUseChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyAdapterInUseChanged(IPropertyChangeListener aAdapterInUseChanged)
    {
        synchronized (iPropertyLock)
        {
            iAdapterInUseChanged = aAdapterInUseChanged;
        }
    }

    private void adapterInUsePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iAdapterInUseChanged);
        }
    }
    /**
     * Set a delegate to be run when the Configuration state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkWifi1 instance will not overlap.
     *
     * @param aConfigurationChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyConfigurationChanged(IPropertyChangeListener aConfigurationChanged)
    {
        synchronized (iPropertyLock)
        {
            iConfigurationChanged = aConfigurationChanged;
        }
    }

    private void configurationPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iConfigurationChanged);
        }
    }
    /**
     * Set a delegate to be run when the ScanResults state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkWifi1 instance will not overlap.
     *
     * @param aScanResultsChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyScanResultsChanged(IPropertyChangeListener aScanResultsChanged)
    {
        synchronized (iPropertyLock)
        {
            iScanResultsChanged = aScanResultsChanged;
        }
    }

    private void scanResultsPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iScanResultsChanged);
        }
    }
    /**
     * Set a delegate to be run when the Status state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkWifi1 instance will not overlap.
     *
     * @param aStatusChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyStatusChanged(IPropertyChangeListener aStatusChanged)
    {
        synchronized (iPropertyLock)
        {
            iStatusChanged = aStatusChanged;
        }
    }

    private void statusPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iStatusChanged);
        }
    }

    /**
     * Query the value of the AdapterInUse property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the AdapterInUse property.
     */
    public boolean getPropertyAdapterInUse()
    {
        propertyReadLock();
        boolean val = iAdapterInUse.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Configuration property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Configuration property.
     */
    public String getPropertyConfiguration()
    {
        propertyReadLock();
        String val = iConfiguration.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the ScanResults property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ScanResults property.
     */
    public String getPropertyScanResults()
    {
        propertyReadLock();
        String val = iScanResults.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Status property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Status property.
     */
    public String getPropertyStatus()
    {
        propertyReadLock();
        String val = iStatus.getValue();
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
            iActionClearCredentials.destroy();
            iActionGetAdapterInUse.destroy();
            iActionGetConfiguration.destroy();
            iActionGetNetworkInfo.destroy();
            iActionGetScanResults.destroy();
            iActionGetSignalInfo.destroy();
            iActionGetStatus.destroy();
            iActionScan.destroy();
            iActionSetCredentials.destroy();
            iAdapterInUse.destroy();
            iConfiguration.destroy();
            iScanResults.destroy();
            iStatus.destroy();
        }
    }
}

