package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkVolkano1.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkVolkano1 extends ICpProxy
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
    public String syncMacAddress();
    public void beginMacAddress(ICpProxyListener aCallback);
    public String endMacAddress(long aAsyncHandle);
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
}

class SyncRebootLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;

    public SyncRebootLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endReboot(aAsyncHandle);
        
    }
}

class SyncBootModeLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;
    private String iMode;

    public SyncBootModeLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
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

class SyncSetBootModeLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;

    public SyncSetBootModeLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetBootMode(aAsyncHandle);
        
    }
}

class SyncBspTypeLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;
    private String iBspType;

    public SyncBspTypeLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
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

class SyncUglyNameLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;
    private String iUglyName;

    public SyncUglyNameLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
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

class SyncMacAddressLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;
    private String iMacAddress;

    public SyncMacAddressLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
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

class SyncProductIdLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;
    private String iProductNumber;

    public SyncProductIdLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
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

class SyncBoardIdLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;
    private String iBoardNumber;

    public SyncBoardIdLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
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

class SyncBoardTypeLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;
    private String iBoardNumber;

    public SyncBoardTypeLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
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

class SyncMaxBoardsLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;
    private long iMaxBoards;

    public SyncMaxBoardsLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
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

class SyncSoftwareVersionLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;
    private String iSoftwareVersion;

    public SyncSoftwareVersionLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
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

class SyncSoftwareUpdateLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;
    private boolean iAvailable;
    private String iSoftwareVersion;

    public SyncSoftwareUpdateLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
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

class SyncDeviceInfoLinnCoUkVolkano1 extends SyncProxyAction
{
    private CpProxyLinnCoUkVolkano1 iService;
    private String iDeviceInfoXml;

    public SyncDeviceInfoLinnCoUkVolkano1(CpProxyLinnCoUkVolkano1 aProxy)
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

/**
 * Proxy for the linn.co.uk:Volkano:1 UPnP service
 */
public class CpProxyLinnCoUkVolkano1 extends CpProxy implements ICpProxyLinnCoUkVolkano1
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
    private Action iActionMacAddress;
    private Action iActionProductId;
    private Action iActionBoardId;
    private Action iActionBoardType;
    private Action iActionMaxBoards;
    private Action iActionSoftwareVersion;
    private Action iActionSoftwareUpdate;
    private Action iActionDeviceInfo;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkVolkano1(CpDevice aDevice)
    {
        super("linn-co-uk", "Volkano", 1, aDevice);
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

        iActionMacAddress = new Action("MacAddress");
        param = new ParameterString("aMacAddress", allowedValues);
        iActionMacAddress.addOutputParameter(param);

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
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncReboot()
    {
        SyncRebootLinnCoUkVolkano1 sync = new SyncRebootLinnCoUkVolkano1(this);
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
        SyncBootModeLinnCoUkVolkano1 sync = new SyncBootModeLinnCoUkVolkano1(this);
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
        SyncSetBootModeLinnCoUkVolkano1 sync = new SyncSetBootModeLinnCoUkVolkano1(this);
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
        SyncBspTypeLinnCoUkVolkano1 sync = new SyncBspTypeLinnCoUkVolkano1(this);
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
        SyncUglyNameLinnCoUkVolkano1 sync = new SyncUglyNameLinnCoUkVolkano1(this);
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
    public String syncMacAddress()
    {
        SyncMacAddressLinnCoUkVolkano1 sync = new SyncMacAddressLinnCoUkVolkano1(this);
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
    public String syncProductId()
    {
        SyncProductIdLinnCoUkVolkano1 sync = new SyncProductIdLinnCoUkVolkano1(this);
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
        SyncBoardIdLinnCoUkVolkano1 sync = new SyncBoardIdLinnCoUkVolkano1(this);
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
        SyncBoardTypeLinnCoUkVolkano1 sync = new SyncBoardTypeLinnCoUkVolkano1(this);
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
        SyncMaxBoardsLinnCoUkVolkano1 sync = new SyncMaxBoardsLinnCoUkVolkano1(this);
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
        SyncSoftwareVersionLinnCoUkVolkano1 sync = new SyncSoftwareVersionLinnCoUkVolkano1(this);
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
        SyncSoftwareUpdateLinnCoUkVolkano1 sync = new SyncSoftwareUpdateLinnCoUkVolkano1(this);
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
        SyncDeviceInfoLinnCoUkVolkano1 sync = new SyncDeviceInfoLinnCoUkVolkano1(this);
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
            iActionMacAddress.destroy();
            iActionProductId.destroy();
            iActionBoardId.destroy();
            iActionBoardType.destroy();
            iActionMaxBoards.destroy();
            iActionSoftwareVersion.destroy();
            iActionSoftwareUpdate.destroy();
            iActionDeviceInfo.destroy();
        }
    }
}

