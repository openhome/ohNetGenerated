package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgPins1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgPins1 extends ICpProxy
{
    public long syncGetDeviceMax();
    public void beginGetDeviceMax(ICpProxyListener aCallback);
    public long endGetDeviceMax(long aAsyncHandle);
    public long syncGetAccountMax();
    public void beginGetAccountMax(ICpProxyListener aCallback);
    public long endGetAccountMax(long aAsyncHandle);
    public String syncGetModes();
    public void beginGetModes(ICpProxyListener aCallback);
    public String endGetModes(long aAsyncHandle);
    public String syncGetIdArray();
    public void beginGetIdArray(ICpProxyListener aCallback);
    public String endGetIdArray(long aAsyncHandle);
    public boolean syncGetCloudConnected();
    public void beginGetCloudConnected(ICpProxyListener aCallback);
    public boolean endGetCloudConnected(long aAsyncHandle);
    public String syncReadList(String aIds);
    public void beginReadList(String aIds, ICpProxyListener aCallback);
    public String endReadList(long aAsyncHandle);
    public void syncInvokeId(long aId);
    public void beginInvokeId(long aId, ICpProxyListener aCallback);
    public void endInvokeId(long aAsyncHandle);
    public void syncInvokeIndex(long aIndex);
    public void beginInvokeIndex(long aIndex, ICpProxyListener aCallback);
    public void endInvokeIndex(long aAsyncHandle);
    public void syncInvokeUri(String aMode, String aType, String aUri, boolean aShuffle);
    public void beginInvokeUri(String aMode, String aType, String aUri, boolean aShuffle, ICpProxyListener aCallback);
    public void endInvokeUri(long aAsyncHandle);
    public void syncSetDevice(long aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, boolean aShuffle);
    public void beginSetDevice(long aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, boolean aShuffle, ICpProxyListener aCallback);
    public void endSetDevice(long aAsyncHandle);
    public void syncSetAccount(long aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, boolean aShuffle);
    public void beginSetAccount(long aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, boolean aShuffle, ICpProxyListener aCallback);
    public void endSetAccount(long aAsyncHandle);
    public void syncClear(long aId);
    public void beginClear(long aId, ICpProxyListener aCallback);
    public void endClear(long aAsyncHandle);
    public void syncSwap(long aIndex1, long aIndex2);
    public void beginSwap(long aIndex1, long aIndex2, ICpProxyListener aCallback);
    public void endSwap(long aAsyncHandle);
    public void setPropertyDeviceMaxChanged(IPropertyChangeListener aDeviceMaxChanged);
    public long getPropertyDeviceMax();
    public void setPropertyAccountMaxChanged(IPropertyChangeListener aAccountMaxChanged);
    public long getPropertyAccountMax();
    public void setPropertyModesChanged(IPropertyChangeListener aModesChanged);
    public String getPropertyModes();
    public void setPropertyIdArrayChanged(IPropertyChangeListener aIdArrayChanged);
    public String getPropertyIdArray();
    public void setPropertyCloudConnectedChanged(IPropertyChangeListener aCloudConnectedChanged);
    public boolean getPropertyCloudConnected();
}

class SyncGetDeviceMaxAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;
    private long iDeviceMax;

    public SyncGetDeviceMaxAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    public long getDeviceMax()
    {
        return iDeviceMax;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetDeviceMax(aAsyncHandle);
        
        iDeviceMax = result;
    }
}

class SyncGetAccountMaxAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;
    private long iAccountMax;

    public SyncGetAccountMaxAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    public long getAccountMax()
    {
        return iAccountMax;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetAccountMax(aAsyncHandle);
        
        iAccountMax = result;
    }
}

class SyncGetModesAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;
    private String iModes;

    public SyncGetModesAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    public String getModes()
    {
        return iModes;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetModes(aAsyncHandle);
        
        iModes = result;
    }
}

class SyncGetIdArrayAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;
    private String iIdArray;

    public SyncGetIdArrayAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    public String getIdArray()
    {
        return iIdArray;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetIdArray(aAsyncHandle);
        
        iIdArray = result;
    }
}

class SyncGetCloudConnectedAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;
    private boolean iCloudConnected;

    public SyncGetCloudConnectedAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getCloudConnected()
    {
        return iCloudConnected;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetCloudConnected(aAsyncHandle);
        
        iCloudConnected = result;
    }
}

class SyncReadListAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;
    private String iList;

    public SyncReadListAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    public String getList()
    {
        return iList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endReadList(aAsyncHandle);
        
        iList = result;
    }
}

class SyncInvokeIdAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;

    public SyncInvokeIdAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endInvokeId(aAsyncHandle);
        
    }
}

class SyncInvokeIndexAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;

    public SyncInvokeIndexAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endInvokeIndex(aAsyncHandle);
        
    }
}

class SyncInvokeUriAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;

    public SyncInvokeUriAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endInvokeUri(aAsyncHandle);
        
    }
}

class SyncSetDeviceAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;

    public SyncSetDeviceAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetDevice(aAsyncHandle);
        
    }
}

class SyncSetAccountAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;

    public SyncSetAccountAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetAccount(aAsyncHandle);
        
    }
}

class SyncClearAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;

    public SyncClearAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endClear(aAsyncHandle);
        
    }
}

class SyncSwapAvOpenhomeOrgPins1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgPins1 iService;

    public SyncSwapAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSwap(aAsyncHandle);
        
    }
}

/**
 * Proxy for the av.openhome.org:Pins:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgPins1 extends CpProxy implements ICpProxyAvOpenhomeOrgPins1
{

    private Action iActionGetDeviceMax;
    private Action iActionGetAccountMax;
    private Action iActionGetModes;
    private Action iActionGetIdArray;
    private Action iActionGetCloudConnected;
    private Action iActionReadList;
    private Action iActionInvokeId;
    private Action iActionInvokeIndex;
    private Action iActionInvokeUri;
    private Action iActionSetDevice;
    private Action iActionSetAccount;
    private Action iActionClear;
    private Action iActionSwap;
    private PropertyUint iDeviceMax;
    private PropertyUint iAccountMax;
    private PropertyString iModes;
    private PropertyString iIdArray;
    private PropertyBool iCloudConnected;
    private IPropertyChangeListener iDeviceMaxChanged;
    private IPropertyChangeListener iAccountMaxChanged;
    private IPropertyChangeListener iModesChanged;
    private IPropertyChangeListener iIdArrayChanged;
    private IPropertyChangeListener iCloudConnectedChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgPins1(CpDevice aDevice)
    {
        super("av-openhome-org", "Pins", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetDeviceMax = new Action("GetDeviceMax");
        param = new ParameterUint("DeviceMax");
        iActionGetDeviceMax.addOutputParameter(param);

        iActionGetAccountMax = new Action("GetAccountMax");
        param = new ParameterUint("AccountMax");
        iActionGetAccountMax.addOutputParameter(param);

        iActionGetModes = new Action("GetModes");
        param = new ParameterString("Modes", allowedValues);
        iActionGetModes.addOutputParameter(param);

        iActionGetIdArray = new Action("GetIdArray");
        param = new ParameterString("IdArray", allowedValues);
        iActionGetIdArray.addOutputParameter(param);

        iActionGetCloudConnected = new Action("GetCloudConnected");
        param = new ParameterBool("CloudConnected");
        iActionGetCloudConnected.addOutputParameter(param);

        iActionReadList = new Action("ReadList");
        param = new ParameterString("Ids", allowedValues);
        iActionReadList.addInputParameter(param);
        param = new ParameterString("List", allowedValues);
        iActionReadList.addOutputParameter(param);

        iActionInvokeId = new Action("InvokeId");
        param = new ParameterUint("Id");
        iActionInvokeId.addInputParameter(param);

        iActionInvokeIndex = new Action("InvokeIndex");
        param = new ParameterUint("Index");
        iActionInvokeIndex.addInputParameter(param);

        iActionInvokeUri = new Action("InvokeUri");
        param = new ParameterString("Mode", allowedValues);
        iActionInvokeUri.addInputParameter(param);
        param = new ParameterString("Type", allowedValues);
        iActionInvokeUri.addInputParameter(param);
        param = new ParameterString("Uri", allowedValues);
        iActionInvokeUri.addInputParameter(param);
        param = new ParameterBool("Shuffle");
        iActionInvokeUri.addInputParameter(param);

        iActionSetDevice = new Action("SetDevice");
        param = new ParameterUint("Index");
        iActionSetDevice.addInputParameter(param);
        param = new ParameterString("Mode", allowedValues);
        iActionSetDevice.addInputParameter(param);
        param = new ParameterString("Type", allowedValues);
        iActionSetDevice.addInputParameter(param);
        param = new ParameterString("Uri", allowedValues);
        iActionSetDevice.addInputParameter(param);
        param = new ParameterString("Title", allowedValues);
        iActionSetDevice.addInputParameter(param);
        param = new ParameterString("Description", allowedValues);
        iActionSetDevice.addInputParameter(param);
        param = new ParameterString("ArtworkUri", allowedValues);
        iActionSetDevice.addInputParameter(param);
        param = new ParameterBool("Shuffle");
        iActionSetDevice.addInputParameter(param);

        iActionSetAccount = new Action("SetAccount");
        param = new ParameterUint("Index");
        iActionSetAccount.addInputParameter(param);
        param = new ParameterString("Mode", allowedValues);
        iActionSetAccount.addInputParameter(param);
        param = new ParameterString("Type", allowedValues);
        iActionSetAccount.addInputParameter(param);
        param = new ParameterString("Uri", allowedValues);
        iActionSetAccount.addInputParameter(param);
        param = new ParameterString("Title", allowedValues);
        iActionSetAccount.addInputParameter(param);
        param = new ParameterString("Description", allowedValues);
        iActionSetAccount.addInputParameter(param);
        param = new ParameterString("ArtworkUri", allowedValues);
        iActionSetAccount.addInputParameter(param);
        param = new ParameterBool("Shuffle");
        iActionSetAccount.addInputParameter(param);

        iActionClear = new Action("Clear");
        param = new ParameterUint("Id");
        iActionClear.addInputParameter(param);

        iActionSwap = new Action("Swap");
        param = new ParameterUint("Index1");
        iActionSwap.addInputParameter(param);
        param = new ParameterUint("Index2");
        iActionSwap.addInputParameter(param);

        iDeviceMaxChanged = new PropertyChangeListener();
        iDeviceMax = new PropertyUint("DeviceMax",
            new PropertyChangeListener() {
                public void notifyChange() {
                    deviceMaxPropertyChanged();
                }
            }
        );
        addProperty(iDeviceMax);
        iAccountMaxChanged = new PropertyChangeListener();
        iAccountMax = new PropertyUint("AccountMax",
            new PropertyChangeListener() {
                public void notifyChange() {
                    accountMaxPropertyChanged();
                }
            }
        );
        addProperty(iAccountMax);
        iModesChanged = new PropertyChangeListener();
        iModes = new PropertyString("Modes",
            new PropertyChangeListener() {
                public void notifyChange() {
                    modesPropertyChanged();
                }
            }
        );
        addProperty(iModes);
        iIdArrayChanged = new PropertyChangeListener();
        iIdArray = new PropertyString("IdArray",
            new PropertyChangeListener() {
                public void notifyChange() {
                    idArrayPropertyChanged();
                }
            }
        );
        addProperty(iIdArray);
        iCloudConnectedChanged = new PropertyChangeListener();
        iCloudConnected = new PropertyBool("CloudConnected",
            new PropertyChangeListener() {
                public void notifyChange() {
                    cloudConnectedPropertyChanged();
                }
            }
        );
        addProperty(iCloudConnected);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncGetDeviceMax()
    {
        SyncGetDeviceMaxAvOpenhomeOrgPins1 sync = new SyncGetDeviceMaxAvOpenhomeOrgPins1(this);
        beginGetDeviceMax(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getDeviceMax();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDeviceMax}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDeviceMax(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDeviceMax, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetDeviceMax.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDeviceMax} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDeviceMax} method.
     * @return the result of the previously invoked action.
     */
    public long endGetDeviceMax(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long deviceMax = Invocation.getOutputUint(aAsyncHandle, index++);
        return deviceMax;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncGetAccountMax()
    {
        SyncGetAccountMaxAvOpenhomeOrgPins1 sync = new SyncGetAccountMaxAvOpenhomeOrgPins1(this);
        beginGetAccountMax(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getAccountMax();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetAccountMax}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetAccountMax(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetAccountMax, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetAccountMax.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetAccountMax} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetAccountMax} method.
     * @return the result of the previously invoked action.
     */
    public long endGetAccountMax(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long accountMax = Invocation.getOutputUint(aAsyncHandle, index++);
        return accountMax;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetModes()
    {
        SyncGetModesAvOpenhomeOrgPins1 sync = new SyncGetModesAvOpenhomeOrgPins1(this);
        beginGetModes(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getModes();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetModes}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetModes(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetModes, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetModes.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetModes} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetModes} method.
     * @return the result of the previously invoked action.
     */
    public String endGetModes(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String modes = Invocation.getOutputString(aAsyncHandle, index++);
        return modes;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetIdArray()
    {
        SyncGetIdArrayAvOpenhomeOrgPins1 sync = new SyncGetIdArrayAvOpenhomeOrgPins1(this);
        beginGetIdArray(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getIdArray();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetIdArray}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetIdArray(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetIdArray, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetIdArray.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetIdArray} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetIdArray} method.
     * @return the result of the previously invoked action.
     */
    public String endGetIdArray(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String idArray = Invocation.getOutputString(aAsyncHandle, index++);
        return idArray;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncGetCloudConnected()
    {
        SyncGetCloudConnectedAvOpenhomeOrgPins1 sync = new SyncGetCloudConnectedAvOpenhomeOrgPins1(this);
        beginGetCloudConnected(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getCloudConnected();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetCloudConnected}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetCloudConnected(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetCloudConnected, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetCloudConnected.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetCloudConnected} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetCloudConnected} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetCloudConnected(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean cloudConnected = Invocation.getOutputBool(aAsyncHandle, index++);
        return cloudConnected;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncReadList(String aIds)
    {
        SyncReadListAvOpenhomeOrgPins1 sync = new SyncReadListAvOpenhomeOrgPins1(this);
        beginReadList(aIds, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getList();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endReadList}.
     * 
     * @param aIds
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginReadList(String aIds, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionReadList, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionReadList.getInputParameter(inIndex++), aIds));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionReadList.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginReadList} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginReadList} method.
     * @return the result of the previously invoked action.
     */
    public String endReadList(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String list = Invocation.getOutputString(aAsyncHandle, index++);
        return list;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncInvokeId(long aId)
    {
        SyncInvokeIdAvOpenhomeOrgPins1 sync = new SyncInvokeIdAvOpenhomeOrgPins1(this);
        beginInvokeId(aId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endInvokeId}.
     * 
     * @param aId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginInvokeId(long aId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionInvokeId, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionInvokeId.getInputParameter(inIndex++), aId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginInvokeId} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginInvokeId} method.
     */
    public void endInvokeId(long aAsyncHandle)
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
    public void syncInvokeIndex(long aIndex)
    {
        SyncInvokeIndexAvOpenhomeOrgPins1 sync = new SyncInvokeIndexAvOpenhomeOrgPins1(this);
        beginInvokeIndex(aIndex, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endInvokeIndex}.
     * 
     * @param aIndex
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginInvokeIndex(long aIndex, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionInvokeIndex, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionInvokeIndex.getInputParameter(inIndex++), aIndex));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginInvokeIndex} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginInvokeIndex} method.
     */
    public void endInvokeIndex(long aAsyncHandle)
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
    public void syncInvokeUri(String aMode, String aType, String aUri, boolean aShuffle)
    {
        SyncInvokeUriAvOpenhomeOrgPins1 sync = new SyncInvokeUriAvOpenhomeOrgPins1(this);
        beginInvokeUri(aMode, aType, aUri, aShuffle, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endInvokeUri}.
     * 
     * @param aMode
     * @param aType
     * @param aUri
     * @param aShuffle
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginInvokeUri(String aMode, String aType, String aUri, boolean aShuffle, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionInvokeUri, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionInvokeUri.getInputParameter(inIndex++), aMode));
        invocation.addInput(new ArgumentString((ParameterString)iActionInvokeUri.getInputParameter(inIndex++), aType));
        invocation.addInput(new ArgumentString((ParameterString)iActionInvokeUri.getInputParameter(inIndex++), aUri));
        invocation.addInput(new ArgumentBool((ParameterBool)iActionInvokeUri.getInputParameter(inIndex++), aShuffle));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginInvokeUri} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginInvokeUri} method.
     */
    public void endInvokeUri(long aAsyncHandle)
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
    public void syncSetDevice(long aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, boolean aShuffle)
    {
        SyncSetDeviceAvOpenhomeOrgPins1 sync = new SyncSetDeviceAvOpenhomeOrgPins1(this);
        beginSetDevice(aIndex, aMode, aType, aUri, aTitle, aDescription, aArtworkUri, aShuffle, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetDevice}.
     * 
     * @param aIndex
     * @param aMode
     * @param aType
     * @param aUri
     * @param aTitle
     * @param aDescription
     * @param aArtworkUri
     * @param aShuffle
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetDevice(long aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, boolean aShuffle, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetDevice, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetDevice.getInputParameter(inIndex++), aIndex));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetDevice.getInputParameter(inIndex++), aMode));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetDevice.getInputParameter(inIndex++), aType));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetDevice.getInputParameter(inIndex++), aUri));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetDevice.getInputParameter(inIndex++), aTitle));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetDevice.getInputParameter(inIndex++), aDescription));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetDevice.getInputParameter(inIndex++), aArtworkUri));
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetDevice.getInputParameter(inIndex++), aShuffle));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetDevice} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetDevice} method.
     */
    public void endSetDevice(long aAsyncHandle)
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
    public void syncSetAccount(long aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, boolean aShuffle)
    {
        SyncSetAccountAvOpenhomeOrgPins1 sync = new SyncSetAccountAvOpenhomeOrgPins1(this);
        beginSetAccount(aIndex, aMode, aType, aUri, aTitle, aDescription, aArtworkUri, aShuffle, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetAccount}.
     * 
     * @param aIndex
     * @param aMode
     * @param aType
     * @param aUri
     * @param aTitle
     * @param aDescription
     * @param aArtworkUri
     * @param aShuffle
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetAccount(long aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, boolean aShuffle, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetAccount, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetAccount.getInputParameter(inIndex++), aIndex));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetAccount.getInputParameter(inIndex++), aMode));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetAccount.getInputParameter(inIndex++), aType));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetAccount.getInputParameter(inIndex++), aUri));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetAccount.getInputParameter(inIndex++), aTitle));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetAccount.getInputParameter(inIndex++), aDescription));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetAccount.getInputParameter(inIndex++), aArtworkUri));
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetAccount.getInputParameter(inIndex++), aShuffle));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetAccount} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetAccount} method.
     */
    public void endSetAccount(long aAsyncHandle)
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
    public void syncClear(long aId)
    {
        SyncClearAvOpenhomeOrgPins1 sync = new SyncClearAvOpenhomeOrgPins1(this);
        beginClear(aId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endClear}.
     * 
     * @param aId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginClear(long aId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionClear, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionClear.getInputParameter(inIndex++), aId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginClear} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginClear} method.
     */
    public void endClear(long aAsyncHandle)
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
    public void syncSwap(long aIndex1, long aIndex2)
    {
        SyncSwapAvOpenhomeOrgPins1 sync = new SyncSwapAvOpenhomeOrgPins1(this);
        beginSwap(aIndex1, aIndex2, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSwap}.
     * 
     * @param aIndex1
     * @param aIndex2
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSwap(long aIndex1, long aIndex2, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSwap, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSwap.getInputParameter(inIndex++), aIndex1));
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSwap.getInputParameter(inIndex++), aIndex2));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSwap} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSwap} method.
     */
    public void endSwap(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the DeviceMax state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPins1 instance will not overlap.
     *
     * @param aDeviceMaxChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyDeviceMaxChanged(IPropertyChangeListener aDeviceMaxChanged)
    {
        synchronized (iPropertyLock)
        {
            iDeviceMaxChanged = aDeviceMaxChanged;
        }
    }

    private void deviceMaxPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iDeviceMaxChanged);
        }
    }
    /**
     * Set a delegate to be run when the AccountMax state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPins1 instance will not overlap.
     *
     * @param aAccountMaxChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyAccountMaxChanged(IPropertyChangeListener aAccountMaxChanged)
    {
        synchronized (iPropertyLock)
        {
            iAccountMaxChanged = aAccountMaxChanged;
        }
    }

    private void accountMaxPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iAccountMaxChanged);
        }
    }
    /**
     * Set a delegate to be run when the Modes state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPins1 instance will not overlap.
     *
     * @param aModesChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyModesChanged(IPropertyChangeListener aModesChanged)
    {
        synchronized (iPropertyLock)
        {
            iModesChanged = aModesChanged;
        }
    }

    private void modesPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iModesChanged);
        }
    }
    /**
     * Set a delegate to be run when the IdArray state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPins1 instance will not overlap.
     *
     * @param aIdArrayChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyIdArrayChanged(IPropertyChangeListener aIdArrayChanged)
    {
        synchronized (iPropertyLock)
        {
            iIdArrayChanged = aIdArrayChanged;
        }
    }

    private void idArrayPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iIdArrayChanged);
        }
    }
    /**
     * Set a delegate to be run when the CloudConnected state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPins1 instance will not overlap.
     *
     * @param aCloudConnectedChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyCloudConnectedChanged(IPropertyChangeListener aCloudConnectedChanged)
    {
        synchronized (iPropertyLock)
        {
            iCloudConnectedChanged = aCloudConnectedChanged;
        }
    }

    private void cloudConnectedPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iCloudConnectedChanged);
        }
    }

    /**
     * Query the value of the DeviceMax property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the DeviceMax property.
     */
    public long getPropertyDeviceMax()
    {
        propertyReadLock();
        long val = iDeviceMax.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the AccountMax property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the AccountMax property.
     */
    public long getPropertyAccountMax()
    {
        propertyReadLock();
        long val = iAccountMax.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Modes property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Modes property.
     */
    public String getPropertyModes()
    {
        propertyReadLock();
        String val = iModes.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the IdArray property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the IdArray property.
     */
    public String getPropertyIdArray()
    {
        propertyReadLock();
        String val = iIdArray.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the CloudConnected property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the CloudConnected property.
     */
    public boolean getPropertyCloudConnected()
    {
        propertyReadLock();
        boolean val = iCloudConnected.getValue();
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
            iActionGetDeviceMax.destroy();
            iActionGetAccountMax.destroy();
            iActionGetModes.destroy();
            iActionGetIdArray.destroy();
            iActionGetCloudConnected.destroy();
            iActionReadList.destroy();
            iActionInvokeId.destroy();
            iActionInvokeIndex.destroy();
            iActionInvokeUri.destroy();
            iActionSetDevice.destroy();
            iActionSetAccount.destroy();
            iActionClear.destroy();
            iActionSwap.destroy();
            iDeviceMax.destroy();
            iAccountMax.destroy();
            iModes.destroy();
            iIdArray.destroy();
            iCloudConnected.destroy();
        }
    }
}

