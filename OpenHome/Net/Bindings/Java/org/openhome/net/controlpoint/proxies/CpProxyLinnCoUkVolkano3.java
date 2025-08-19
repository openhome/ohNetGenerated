package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkVolkano3.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkVolkano3 extends ICpProxy
{
    public void syncReboot();
    public void beginReboot(ICpProxyListener aCallback);
    public void endReboot(long aAsyncHandle);
    public String syncBootMode();
    public void beginBootMode(ICpProxyListener aCallback);
    public String endBootMode(long aAsyncHandle);
    public void syncSetBootMode(String aMode);
    public void beginSetBootMode(String aMode, ICpProxyListener aCallback);
    public void endSetBootMode(long aAsyncHandle);
    public String syncBspType();
    public void beginBspType(ICpProxyListener aCallback);
    public String endBspType(long aAsyncHandle);
    public String syncUglyName();
    public void beginUglyName(ICpProxyListener aCallback);
    public String endUglyName(long aAsyncHandle);
    public String syncIpAddress();
    public void beginIpAddress(ICpProxyListener aCallback);
    public String endIpAddress(long aAsyncHandle);
    public String syncIpAddressList();
    public void beginIpAddressList(ICpProxyListener aCallback);
    public String endIpAddressList(long aAsyncHandle);
    public String syncMacAddress();
    public void beginMacAddress(ICpProxyListener aCallback);
    public String endMacAddress(long aAsyncHandle);
    public String syncMacAddressList();
    public void beginMacAddressList(ICpProxyListener aCallback);
    public String endMacAddressList(long aAsyncHandle);
    public String syncProductId();
    public void beginProductId(ICpProxyListener aCallback);
    public String endProductId(long aAsyncHandle);
    public String syncBoardId(long aIndex);
    public void beginBoardId(long aIndex, ICpProxyListener aCallback);
    public String endBoardId(long aAsyncHandle);
    public String syncBoardType(long aIndex);
    public void beginBoardType(long aIndex, ICpProxyListener aCallback);
    public String endBoardType(long aAsyncHandle);
    public long syncMaxBoards();
    public void beginMaxBoards(ICpProxyListener aCallback);
    public long endMaxBoards(long aAsyncHandle);
    public String syncSoftwareVersion();
    public void beginSoftwareVersion(ICpProxyListener aCallback);
    public String endSoftwareVersion(long aAsyncHandle);
    public SoftwareUpdate syncSoftwareUpdate();
    public void beginSoftwareUpdate(ICpProxyListener aCallback);
    public SoftwareUpdate endSoftwareUpdate(long aAsyncHandle);
    public String syncDeviceInfo();
    public void beginDeviceInfo(ICpProxyListener aCallback);
    public String endDeviceInfo(long aAsyncHandle);
    public String syncCoreBoardId();
    public void beginCoreBoardId(ICpProxyListener aCallback);
    public String endCoreBoardId(long aAsyncHandle);
    public void setPropertyDeviceInfoChanged(IPropertyChangeListener aDeviceInfoChanged);
    public String getPropertyDeviceInfo();
    public void setPropertyIpAddressChanged(IPropertyChangeListener aIpAddressChanged);
    public String getPropertyIpAddress();
    public void setPropertyIpAddressListChanged(IPropertyChangeListener aIpAddressListChanged);
    public String getPropertyIpAddressList();
    public void setPropertyMacAddressListChanged(IPropertyChangeListener aMacAddressListChanged);
    public String getPropertyMacAddressList();
    public void setPropertyCoreBoardIdChanged(IPropertyChangeListener aCoreBoardIdChanged);
    public String getPropertyCoreBoardId();
}

class SyncRebootLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;

    public SyncRebootLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endReboot(aAsyncHandle);
        
    }
}

class SyncBootModeLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iMode;

    public SyncBootModeLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getMode()
    {
        return iMode;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endBootMode(aAsyncHandle);
        
        iMode = result;
    }
}

class SyncSetBootModeLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;

    public SyncSetBootModeLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetBootMode(aAsyncHandle);
        
    }
}

class SyncBspTypeLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iBspType;

    public SyncBspTypeLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getBspType()
    {
        return iBspType;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endBspType(aAsyncHandle);
        
        iBspType = result;
    }
}

class SyncUglyNameLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iUglyName;

    public SyncUglyNameLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getUglyName()
    {
        return iUglyName;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endUglyName(aAsyncHandle);
        
        iUglyName = result;
    }
}

class SyncIpAddressLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iIpAddress;

    public SyncIpAddressLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getIpAddress()
    {
        return iIpAddress;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endIpAddress(aAsyncHandle);
        
        iIpAddress = result;
    }
}

class SyncIpAddressListLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iIpAddressList;

    public SyncIpAddressListLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getIpAddressList()
    {
        return iIpAddressList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endIpAddressList(aAsyncHandle);
        
        iIpAddressList = result;
    }
}

class SyncMacAddressLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iMacAddress;

    public SyncMacAddressLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getMacAddress()
    {
        return iMacAddress;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endMacAddress(aAsyncHandle);
        
        iMacAddress = result;
    }
}

class SyncMacAddressListLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iMacAddressList;

    public SyncMacAddressListLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getMacAddressList()
    {
        return iMacAddressList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endMacAddressList(aAsyncHandle);
        
        iMacAddressList = result;
    }
}

class SyncProductIdLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iProductNumber;

    public SyncProductIdLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getProductNumber()
    {
        return iProductNumber;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endProductId(aAsyncHandle);
        
        iProductNumber = result;
    }
}

class SyncBoardIdLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iBoardNumber;

    public SyncBoardIdLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getBoardNumber()
    {
        return iBoardNumber;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endBoardId(aAsyncHandle);
        
        iBoardNumber = result;
    }
}

class SyncBoardTypeLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iBoardNumber;

    public SyncBoardTypeLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getBoardNumber()
    {
        return iBoardNumber;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endBoardType(aAsyncHandle);
        
        iBoardNumber = result;
    }
}

class SyncMaxBoardsLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private long iMaxBoards;

    public SyncMaxBoardsLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public long getMaxBoards()
    {
        return iMaxBoards;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endMaxBoards(aAsyncHandle);
        
        iMaxBoards = result;
    }
}

class SyncSoftwareVersionLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iSoftwareVersion;

    public SyncSoftwareVersionLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getSoftwareVersion()
    {
        return iSoftwareVersion;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endSoftwareVersion(aAsyncHandle);
        
        iSoftwareVersion = result;
    }
}

class SyncSoftwareUpdateLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private boolean iAvailable;
    private String iSoftwareVersion;

    public SyncSoftwareUpdateLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public boolean getAvailable()
    {
        return iAvailable;
    }
    public String getSoftwareVersion()
    {
        return iSoftwareVersion;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        SoftwareUpdate result = iService.endSoftwareUpdate(aAsyncHandle);
        
        iAvailable = result.getAvailable();
        iSoftwareVersion = result.getSoftwareVersion();
    }
}

class SyncDeviceInfoLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iDeviceInfoXml;

    public SyncDeviceInfoLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getDeviceInfoXml()
    {
        return iDeviceInfoXml;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endDeviceInfo(aAsyncHandle);
        
        iDeviceInfoXml = result;
    }
}

class SyncCoreBoardIdLinnCoUkVolkano3 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano3 iService;
    private String iCoreBoardId;

    public SyncCoreBoardIdLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3 aProxy)
    {
        iService = aProxy;
    }
    public String getCoreBoardId()
    {
        return iCoreBoardId;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endCoreBoardId(aAsyncHandle);
        
        iCoreBoardId = result;
    }
}

/**
 * Proxy for the linn.co.uk:Volkano:3 UPnP service
 */
public class CpProxyLinnCoUkVolkano3 extends CpProxy implements ICpProxyLinnCoUkVolkano3
{

    public class SoftwareUpdate
    {
        private boolean iAvailable;
        private String iSoftwareVersion;

        public SoftwareUpdate(
            boolean aAvailable,
            String aSoftwareVersion
        )
        {
            iAvailable = aAvailable;
            iSoftwareVersion = aSoftwareVersion;
        }
        public boolean getAvailable()
        {
            return iAvailable;
        }
        public String getSoftwareVersion()
        {
            return iSoftwareVersion;
        }
    }

    private Action iActionReboot;
    private Action iActionBootMode;
    private Action iActionSetBootMode;
    private Action iActionBspType;
    private Action iActionUglyName;
    private Action iActionIpAddress;
    private Action iActionIpAddressList;
    private Action iActionMacAddress;
    private Action iActionMacAddressList;
    private Action iActionProductId;
    private Action iActionBoardId;
    private Action iActionBoardType;
    private Action iActionMaxBoards;
    private Action iActionSoftwareVersion;
    private Action iActionSoftwareUpdate;
    private Action iActionDeviceInfo;
    private Action iActionCoreBoardId;
    private PropertyString iDeviceInfo;
    private PropertyString iIpAddress;
    private PropertyString iIpAddressList;
    private PropertyString iMacAddressList;
    private PropertyString iCoreBoardId;
    private IPropertyChangeListener iDeviceInfoChanged;
    private IPropertyChangeListener iIpAddressChanged;
    private IPropertyChangeListener iIpAddressListChanged;
    private IPropertyChangeListener iMacAddressListChanged;
    private IPropertyChangeListener iCoreBoardIdChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkVolkano3(CpDevice aDevice)
    {
        super("linn-co-uk", "Volkano", 3, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionReboot = new Action("Reboot");

        iActionBootMode = new Action("BootMode");
        allowedValues.add("Main");
        allowedValues.add("Fallback");
        allowedValues.add("Ram");
        param = new ParameterString("aMode", allowedValues);
        iActionBootMode.addOutputParameter(param);
        allowedValues.clear();

        iActionSetBootMode = new Action("SetBootMode");
        allowedValues.add("Main");
        allowedValues.add("Fallback");
        param = new ParameterString("aMode", allowedValues);
        iActionSetBootMode.addInputParameter(param);
        allowedValues.clear();

        iActionBspType = new Action("BspType");
        param = new ParameterString("aBspType", allowedValues);
        iActionBspType.addOutputParameter(param);

        iActionUglyName = new Action("UglyName");
        param = new ParameterString("aUglyName", allowedValues);
        iActionUglyName.addOutputParameter(param);

        iActionIpAddress = new Action("IpAddress");
        param = new ParameterString("aIpAddress", allowedValues);
        iActionIpAddress.addOutputParameter(param);

        iActionIpAddressList = new Action("IpAddressList");
        param = new ParameterString("aIpAddressList", allowedValues);
        iActionIpAddressList.addOutputParameter(param);

        iActionMacAddress = new Action("MacAddress");
        param = new ParameterString("aMacAddress", allowedValues);
        iActionMacAddress.addOutputParameter(param);

        iActionMacAddressList = new Action("MacAddressList");
        param = new ParameterString("aMacAddressList", allowedValues);
        iActionMacAddressList.addOutputParameter(param);

        iActionProductId = new Action("ProductId");
        param = new ParameterString("aProductNumber", allowedValues);
        iActionProductId.addOutputParameter(param);

        iActionBoardId = new Action("BoardId");
        param = new ParameterUint("aIndex");
        iActionBoardId.addInputParameter(param);
        param = new ParameterString("aBoardNumber", allowedValues);
        iActionBoardId.addOutputParameter(param);

        iActionBoardType = new Action("BoardType");
        param = new ParameterUint("aIndex");
        iActionBoardType.addInputParameter(param);
        param = new ParameterString("aBoardNumber", allowedValues);
        iActionBoardType.addOutputParameter(param);

        iActionMaxBoards = new Action("MaxBoards");
        param = new ParameterUint("aMaxBoards");
        iActionMaxBoards.addOutputParameter(param);

        iActionSoftwareVersion = new Action("SoftwareVersion");
        param = new ParameterString("aSoftwareVersion", allowedValues);
        iActionSoftwareVersion.addOutputParameter(param);

        iActionSoftwareUpdate = new Action("SoftwareUpdate");
        param = new ParameterBool("aAvailable");
        iActionSoftwareUpdate.addOutputParameter(param);
        param = new ParameterString("aSoftwareVersion", allowedValues);
        iActionSoftwareUpdate.addOutputParameter(param);

        iActionDeviceInfo = new Action("DeviceInfo");
        param = new ParameterString("aDeviceInfoXml", allowedValues);
        iActionDeviceInfo.addOutputParameter(param);

        iActionCoreBoardId = new Action("CoreBoardId");
        param = new ParameterString("aCoreBoardId", allowedValues);
        iActionCoreBoardId.addOutputParameter(param);

        iDeviceInfoChanged = new PropertyChangeListener();
        iDeviceInfo = new PropertyString("DeviceInfo",
            new PropertyChangeListener() {
                public void notifyChange() {
                    deviceInfoPropertyChanged();
                }
            }
        );
        addProperty(iDeviceInfo);
        iIpAddressChanged = new PropertyChangeListener();
        iIpAddress = new PropertyString("IpAddress",
            new PropertyChangeListener() {
                public void notifyChange() {
                    ipAddressPropertyChanged();
                }
            }
        );
        addProperty(iIpAddress);
        iIpAddressListChanged = new PropertyChangeListener();
        iIpAddressList = new PropertyString("IpAddressList",
            new PropertyChangeListener() {
                public void notifyChange() {
                    ipAddressListPropertyChanged();
                }
            }
        );
        addProperty(iIpAddressList);
        iMacAddressListChanged = new PropertyChangeListener();
        iMacAddressList = new PropertyString("MacAddressList",
            new PropertyChangeListener() {
                public void notifyChange() {
                    macAddressListPropertyChanged();
                }
            }
        );
        addProperty(iMacAddressList);
        iCoreBoardIdChanged = new PropertyChangeListener();
        iCoreBoardId = new PropertyString("CoreBoardId",
            new PropertyChangeListener() {
                public void notifyChange() {
                    coreBoardIdPropertyChanged();
                }
            }
        );
        addProperty(iCoreBoardId);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncReboot()
    {
        SyncRebootLinnCoUkVolkano3 sync = new SyncRebootLinnCoUkVolkano3(this);
        beginReboot(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endReboot}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginReboot(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionReboot, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginReboot} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginReboot} method.
     */
    public void endReboot(long aAsyncHandle)
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
    public String syncBootMode()
    {
        SyncBootModeLinnCoUkVolkano3 sync = new SyncBootModeLinnCoUkVolkano3(this);
        beginBootMode(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getMode();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endBootMode}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginBootMode(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionBootMode, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionBootMode.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginBootMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginBootMode} method.
     * @return the result of the previously invoked action.
     */
    public String endBootMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String mode = Invocation.getOutputString(aAsyncHandle, index++);
        return mode;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetBootMode(String aMode)
    {
        SyncSetBootModeLinnCoUkVolkano3 sync = new SyncSetBootModeLinnCoUkVolkano3(this);
        beginSetBootMode(aMode, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetBootMode}.
     * 
     * @param aMode
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetBootMode(String aMode, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetBootMode, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetBootMode.getInputParameter(inIndex++), aMode));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetBootMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetBootMode} method.
     */
    public void endSetBootMode(long aAsyncHandle)
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
    public String syncBspType()
    {
        SyncBspTypeLinnCoUkVolkano3 sync = new SyncBspTypeLinnCoUkVolkano3(this);
        beginBspType(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getBspType();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endBspType}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginBspType(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionBspType, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionBspType.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginBspType} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginBspType} method.
     * @return the result of the previously invoked action.
     */
    public String endBspType(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String bspType = Invocation.getOutputString(aAsyncHandle, index++);
        return bspType;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncUglyName()
    {
        SyncUglyNameLinnCoUkVolkano3 sync = new SyncUglyNameLinnCoUkVolkano3(this);
        beginUglyName(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getUglyName();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endUglyName}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginUglyName(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionUglyName, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionUglyName.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginUglyName} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginUglyName} method.
     * @return the result of the previously invoked action.
     */
    public String endUglyName(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String uglyName = Invocation.getOutputString(aAsyncHandle, index++);
        return uglyName;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncIpAddress()
    {
        SyncIpAddressLinnCoUkVolkano3 sync = new SyncIpAddressLinnCoUkVolkano3(this);
        beginIpAddress(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getIpAddress();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endIpAddress}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginIpAddress(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionIpAddress, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionIpAddress.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginIpAddress} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginIpAddress} method.
     * @return the result of the previously invoked action.
     */
    public String endIpAddress(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String ipAddress = Invocation.getOutputString(aAsyncHandle, index++);
        return ipAddress;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncIpAddressList()
    {
        SyncIpAddressListLinnCoUkVolkano3 sync = new SyncIpAddressListLinnCoUkVolkano3(this);
        beginIpAddressList(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getIpAddressList();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endIpAddressList}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginIpAddressList(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionIpAddressList, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionIpAddressList.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginIpAddressList} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginIpAddressList} method.
     * @return the result of the previously invoked action.
     */
    public String endIpAddressList(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String ipAddressList = Invocation.getOutputString(aAsyncHandle, index++);
        return ipAddressList;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncMacAddress()
    {
        SyncMacAddressLinnCoUkVolkano3 sync = new SyncMacAddressLinnCoUkVolkano3(this);
        beginMacAddress(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getMacAddress();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endMacAddress}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginMacAddress(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionMacAddress, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionMacAddress.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginMacAddress} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginMacAddress} method.
     * @return the result of the previously invoked action.
     */
    public String endMacAddress(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String macAddress = Invocation.getOutputString(aAsyncHandle, index++);
        return macAddress;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncMacAddressList()
    {
        SyncMacAddressListLinnCoUkVolkano3 sync = new SyncMacAddressListLinnCoUkVolkano3(this);
        beginMacAddressList(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getMacAddressList();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endMacAddressList}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginMacAddressList(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionMacAddressList, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionMacAddressList.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginMacAddressList} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginMacAddressList} method.
     * @return the result of the previously invoked action.
     */
    public String endMacAddressList(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String macAddressList = Invocation.getOutputString(aAsyncHandle, index++);
        return macAddressList;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncProductId()
    {
        SyncProductIdLinnCoUkVolkano3 sync = new SyncProductIdLinnCoUkVolkano3(this);
        beginProductId(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getProductNumber();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endProductId}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginProductId(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionProductId, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionProductId.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginProductId} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginProductId} method.
     * @return the result of the previously invoked action.
     */
    public String endProductId(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String productNumber = Invocation.getOutputString(aAsyncHandle, index++);
        return productNumber;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncBoardId(long aIndex)
    {
        SyncBoardIdLinnCoUkVolkano3 sync = new SyncBoardIdLinnCoUkVolkano3(this);
        beginBoardId(aIndex, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getBoardNumber();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endBoardId}.
     * 
     * @param aIndex
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginBoardId(long aIndex, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionBoardId, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionBoardId.getInputParameter(inIndex++), aIndex));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionBoardId.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginBoardId} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginBoardId} method.
     * @return the result of the previously invoked action.
     */
    public String endBoardId(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String boardNumber = Invocation.getOutputString(aAsyncHandle, index++);
        return boardNumber;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncBoardType(long aIndex)
    {
        SyncBoardTypeLinnCoUkVolkano3 sync = new SyncBoardTypeLinnCoUkVolkano3(this);
        beginBoardType(aIndex, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getBoardNumber();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endBoardType}.
     * 
     * @param aIndex
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginBoardType(long aIndex, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionBoardType, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionBoardType.getInputParameter(inIndex++), aIndex));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionBoardType.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginBoardType} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginBoardType} method.
     * @return the result of the previously invoked action.
     */
    public String endBoardType(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String boardNumber = Invocation.getOutputString(aAsyncHandle, index++);
        return boardNumber;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncMaxBoards()
    {
        SyncMaxBoardsLinnCoUkVolkano3 sync = new SyncMaxBoardsLinnCoUkVolkano3(this);
        beginMaxBoards(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getMaxBoards();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endMaxBoards}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginMaxBoards(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionMaxBoards, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionMaxBoards.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginMaxBoards} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginMaxBoards} method.
     * @return the result of the previously invoked action.
     */
    public long endMaxBoards(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long maxBoards = Invocation.getOutputUint(aAsyncHandle, index++);
        return maxBoards;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncSoftwareVersion()
    {
        SyncSoftwareVersionLinnCoUkVolkano3 sync = new SyncSoftwareVersionLinnCoUkVolkano3(this);
        beginSoftwareVersion(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSoftwareVersion();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSoftwareVersion}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSoftwareVersion(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSoftwareVersion, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionSoftwareVersion.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSoftwareVersion} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSoftwareVersion} method.
     * @return the result of the previously invoked action.
     */
    public String endSoftwareVersion(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String softwareVersion = Invocation.getOutputString(aAsyncHandle, index++);
        return softwareVersion;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public SoftwareUpdate syncSoftwareUpdate()
    {
        SyncSoftwareUpdateLinnCoUkVolkano3 sync = new SyncSoftwareUpdateLinnCoUkVolkano3(this);
        beginSoftwareUpdate(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new SoftwareUpdate(
            sync.getAvailable(),
            sync.getSoftwareVersion()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSoftwareUpdate}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSoftwareUpdate(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSoftwareUpdate, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionSoftwareUpdate.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionSoftwareUpdate.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSoftwareUpdate} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSoftwareUpdate} method.
     * @return the result of the previously invoked action.
     */
    public SoftwareUpdate endSoftwareUpdate(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean available = Invocation.getOutputBool(aAsyncHandle, index++);
        String softwareVersion = Invocation.getOutputString(aAsyncHandle, index++);
        return new SoftwareUpdate(
            available,
            softwareVersion
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncDeviceInfo()
    {
        SyncDeviceInfoLinnCoUkVolkano3 sync = new SyncDeviceInfoLinnCoUkVolkano3(this);
        beginDeviceInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getDeviceInfoXml();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endDeviceInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginDeviceInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionDeviceInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionDeviceInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginDeviceInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginDeviceInfo} method.
     * @return the result of the previously invoked action.
     */
    public String endDeviceInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String deviceInfoXml = Invocation.getOutputString(aAsyncHandle, index++);
        return deviceInfoXml;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncCoreBoardId()
    {
        SyncCoreBoardIdLinnCoUkVolkano3 sync = new SyncCoreBoardIdLinnCoUkVolkano3(this);
        beginCoreBoardId(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getCoreBoardId();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endCoreBoardId}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginCoreBoardId(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionCoreBoardId, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionCoreBoardId.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginCoreBoardId} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginCoreBoardId} method.
     * @return the result of the previously invoked action.
     */
    public String endCoreBoardId(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String coreBoardId = Invocation.getOutputString(aAsyncHandle, index++);
        return coreBoardId;
    }
        
    /**
     * Set a delegate to be run when the DeviceInfo state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkVolkano3 instance will not overlap.
     *
     * @param aDeviceInfoChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyDeviceInfoChanged(IPropertyChangeListener aDeviceInfoChanged)
    {
        synchronized (iPropertyLock)
        {
            iDeviceInfoChanged = aDeviceInfoChanged;
        }
    }

    private void deviceInfoPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iDeviceInfoChanged);
        }
    }
    /**
     * Set a delegate to be run when the IpAddress state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkVolkano3 instance will not overlap.
     *
     * @param aIpAddressChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyIpAddressChanged(IPropertyChangeListener aIpAddressChanged)
    {
        synchronized (iPropertyLock)
        {
            iIpAddressChanged = aIpAddressChanged;
        }
    }

    private void ipAddressPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iIpAddressChanged);
        }
    }
    /**
     * Set a delegate to be run when the IpAddressList state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkVolkano3 instance will not overlap.
     *
     * @param aIpAddressListChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyIpAddressListChanged(IPropertyChangeListener aIpAddressListChanged)
    {
        synchronized (iPropertyLock)
        {
            iIpAddressListChanged = aIpAddressListChanged;
        }
    }

    private void ipAddressListPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iIpAddressListChanged);
        }
    }
    /**
     * Set a delegate to be run when the MacAddressList state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkVolkano3 instance will not overlap.
     *
     * @param aMacAddressListChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyMacAddressListChanged(IPropertyChangeListener aMacAddressListChanged)
    {
        synchronized (iPropertyLock)
        {
            iMacAddressListChanged = aMacAddressListChanged;
        }
    }

    private void macAddressListPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iMacAddressListChanged);
        }
    }
    /**
     * Set a delegate to be run when the CoreBoardId state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkVolkano3 instance will not overlap.
     *
     * @param aCoreBoardIdChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyCoreBoardIdChanged(IPropertyChangeListener aCoreBoardIdChanged)
    {
        synchronized (iPropertyLock)
        {
            iCoreBoardIdChanged = aCoreBoardIdChanged;
        }
    }

    private void coreBoardIdPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iCoreBoardIdChanged);
        }
    }

    /**
     * Query the value of the DeviceInfo property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the DeviceInfo property.
     */
    public String getPropertyDeviceInfo()
    {
        propertyReadLock();
        String val = iDeviceInfo.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the IpAddress property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the IpAddress property.
     */
    public String getPropertyIpAddress()
    {
        propertyReadLock();
        String val = iIpAddress.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the IpAddressList property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the IpAddressList property.
     */
    public String getPropertyIpAddressList()
    {
        propertyReadLock();
        String val = iIpAddressList.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the MacAddressList property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the MacAddressList property.
     */
    public String getPropertyMacAddressList()
    {
        propertyReadLock();
        String val = iMacAddressList.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the CoreBoardId property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the CoreBoardId property.
     */
    public String getPropertyCoreBoardId()
    {
        propertyReadLock();
        String val = iCoreBoardId.getValue();
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
            iActionReboot.destroy();
            iActionBootMode.destroy();
            iActionSetBootMode.destroy();
            iActionBspType.destroy();
            iActionUglyName.destroy();
            iActionIpAddress.destroy();
            iActionIpAddressList.destroy();
            iActionMacAddress.destroy();
            iActionMacAddressList.destroy();
            iActionProductId.destroy();
            iActionBoardId.destroy();
            iActionBoardType.destroy();
            iActionMaxBoards.destroy();
            iActionSoftwareVersion.destroy();
            iActionSoftwareUpdate.destroy();
            iActionDeviceInfo.destroy();
            iActionCoreBoardId.destroy();
            iDeviceInfo.destroy();
            iIpAddress.destroy();
            iIpAddressList.destroy();
            iMacAddressList.destroy();
            iCoreBoardId.destroy();
        }
    }
}

