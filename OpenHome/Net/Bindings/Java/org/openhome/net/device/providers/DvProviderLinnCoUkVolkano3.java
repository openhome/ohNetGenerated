package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkVolkano3
{

    /**
     * Set the value of the DeviceInfo property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyDeviceInfo(String aValue);

    /**
     * Get a copy of the value of the DeviceInfo property
     *
     * @return value of the DeviceInfo property.
     */
    public String getPropertyDeviceInfo();

    /**
     * Set the value of the IpAddress property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyIpAddress(String aValue);

    /**
     * Get a copy of the value of the IpAddress property
     *
     * @return value of the IpAddress property.
     */
    public String getPropertyIpAddress();

    /**
     * Set the value of the IpAddressList property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyIpAddressList(String aValue);

    /**
     * Get a copy of the value of the IpAddressList property
     *
     * @return value of the IpAddressList property.
     */
    public String getPropertyIpAddressList();

    /**
     * Set the value of the MacAddressList property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyMacAddressList(String aValue);

    /**
     * Get a copy of the value of the MacAddressList property
     *
     * @return value of the MacAddressList property.
     */
    public String getPropertyMacAddressList();

    /**
     * Set the value of the CoreBoardId property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyCoreBoardId(String aValue);

    /**
     * Get a copy of the value of the CoreBoardId property
     *
     * @return value of the CoreBoardId property.
     */
    public String getPropertyCoreBoardId();
        
}

/**
 * Provider for the linn.co.uk:Volkano:3 UPnP service.
 */
public class DvProviderLinnCoUkVolkano3 extends DvProvider implements IDvProviderLinnCoUkVolkano3
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

    private IDvInvocationListener iDelegateReboot;
    private IDvInvocationListener iDelegateBootMode;
    private IDvInvocationListener iDelegateSetBootMode;
    private IDvInvocationListener iDelegateBspType;
    private IDvInvocationListener iDelegateUglyName;
    private IDvInvocationListener iDelegateIpAddress;
    private IDvInvocationListener iDelegateIpAddressList;
    private IDvInvocationListener iDelegateMacAddress;
    private IDvInvocationListener iDelegateMacAddressList;
    private IDvInvocationListener iDelegateProductId;
    private IDvInvocationListener iDelegateBoardId;
    private IDvInvocationListener iDelegateBoardType;
    private IDvInvocationListener iDelegateMaxBoards;
    private IDvInvocationListener iDelegateSoftwareVersion;
    private IDvInvocationListener iDelegateSoftwareUpdate;
    private IDvInvocationListener iDelegateDeviceInfo;
    private IDvInvocationListener iDelegateCoreBoardId;
    private PropertyString iPropertyDeviceInfo;
    private PropertyString iPropertyIpAddress;
    private PropertyString iPropertyIpAddressList;
    private PropertyString iPropertyMacAddressList;
    private PropertyString iPropertyCoreBoardId;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkVolkano3(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "Volkano", 3);
    }

    /**
     * Enable the DeviceInfo property.
     */
    public void enablePropertyDeviceInfo()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyDeviceInfo = new PropertyString(new ParameterString("DeviceInfo", allowedValues));
        addProperty(iPropertyDeviceInfo);
    }

    /**
     * Enable the IpAddress property.
     */
    public void enablePropertyIpAddress()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyIpAddress = new PropertyString(new ParameterString("IpAddress", allowedValues));
        addProperty(iPropertyIpAddress);
    }

    /**
     * Enable the IpAddressList property.
     */
    public void enablePropertyIpAddressList()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyIpAddressList = new PropertyString(new ParameterString("IpAddressList", allowedValues));
        addProperty(iPropertyIpAddressList);
    }

    /**
     * Enable the MacAddressList property.
     */
    public void enablePropertyMacAddressList()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyMacAddressList = new PropertyString(new ParameterString("MacAddressList", allowedValues));
        addProperty(iPropertyMacAddressList);
    }

    /**
     * Enable the CoreBoardId property.
     */
    public void enablePropertyCoreBoardId()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyCoreBoardId = new PropertyString(new ParameterString("CoreBoardId", allowedValues));
        addProperty(iPropertyCoreBoardId);
    }

    /**
     * Set the value of the DeviceInfo property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyDeviceInfo(String aValue)
    {
        return setPropertyString(iPropertyDeviceInfo, aValue);
    }

    /**
     * Get a copy of the value of the DeviceInfo property
     *
     * @return  value of the DeviceInfo property.
     */
    public String getPropertyDeviceInfo()
    {
        return iPropertyDeviceInfo.getValue();
    }

    /**
     * Set the value of the IpAddress property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyIpAddress(String aValue)
    {
        return setPropertyString(iPropertyIpAddress, aValue);
    }

    /**
     * Get a copy of the value of the IpAddress property
     *
     * @return  value of the IpAddress property.
     */
    public String getPropertyIpAddress()
    {
        return iPropertyIpAddress.getValue();
    }

    /**
     * Set the value of the IpAddressList property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyIpAddressList(String aValue)
    {
        return setPropertyString(iPropertyIpAddressList, aValue);
    }

    /**
     * Get a copy of the value of the IpAddressList property
     *
     * @return  value of the IpAddressList property.
     */
    public String getPropertyIpAddressList()
    {
        return iPropertyIpAddressList.getValue();
    }

    /**
     * Set the value of the MacAddressList property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyMacAddressList(String aValue)
    {
        return setPropertyString(iPropertyMacAddressList, aValue);
    }

    /**
     * Get a copy of the value of the MacAddressList property
     *
     * @return  value of the MacAddressList property.
     */
    public String getPropertyMacAddressList()
    {
        return iPropertyMacAddressList.getValue();
    }

    /**
     * Set the value of the CoreBoardId property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyCoreBoardId(String aValue)
    {
        return setPropertyString(iPropertyCoreBoardId, aValue);
    }

    /**
     * Get a copy of the value of the CoreBoardId property
     *
     * @return  value of the CoreBoardId property.
     */
    public String getPropertyCoreBoardId()
    {
        return iPropertyCoreBoardId.getValue();
    }

    /**
     * Signal that the action Reboot is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Reboot must be overridden if this is called.
     */      
    protected void enableActionReboot()
    {
        Action action = new Action("Reboot");
        iDelegateReboot = new DoReboot();
        enableAction(action, iDelegateReboot);
    }

    /**
     * Signal that the action BootMode is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * BootMode must be overridden if this is called.
     */      
    protected void enableActionBootMode()
    {
        Action action = new Action("BootMode");        List<String> allowedValues = new LinkedList<String>();
        allowedValues.add("Main");
        allowedValues.add("Fallback");
        allowedValues.add("Ram");
        action.addOutputParameter(new ParameterString("aMode", allowedValues));
        allowedValues.clear();
        iDelegateBootMode = new DoBootMode();
        enableAction(action, iDelegateBootMode);
    }

    /**
     * Signal that the action SetBootMode is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetBootMode must be overridden if this is called.
     */      
    protected void enableActionSetBootMode()
    {
        Action action = new Action("SetBootMode");        List<String> allowedValues = new LinkedList<String>();
        allowedValues.add("Main");
        allowedValues.add("Fallback");
        action.addInputParameter(new ParameterString("aMode", allowedValues));
        allowedValues.clear();
        iDelegateSetBootMode = new DoSetBootMode();
        enableAction(action, iDelegateSetBootMode);
    }

    /**
     * Signal that the action BspType is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * BspType must be overridden if this is called.
     */      
    protected void enableActionBspType()
    {
        Action action = new Action("BspType");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("aBspType", allowedValues));
        iDelegateBspType = new DoBspType();
        enableAction(action, iDelegateBspType);
    }

    /**
     * Signal that the action UglyName is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * UglyName must be overridden if this is called.
     */      
    protected void enableActionUglyName()
    {
        Action action = new Action("UglyName");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("aUglyName", allowedValues));
        iDelegateUglyName = new DoUglyName();
        enableAction(action, iDelegateUglyName);
    }

    /**
     * Signal that the action IpAddress is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * IpAddress must be overridden if this is called.
     */      
    protected void enableActionIpAddress()
    {
        Action action = new Action("IpAddress");
        action.addOutputParameter(new ParameterRelated("aIpAddress", iPropertyIpAddress));
        iDelegateIpAddress = new DoIpAddress();
        enableAction(action, iDelegateIpAddress);
    }

    /**
     * Signal that the action IpAddressList is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * IpAddressList must be overridden if this is called.
     */      
    protected void enableActionIpAddressList()
    {
        Action action = new Action("IpAddressList");
        action.addOutputParameter(new ParameterRelated("aIpAddressList", iPropertyIpAddressList));
        iDelegateIpAddressList = new DoIpAddressList();
        enableAction(action, iDelegateIpAddressList);
    }

    /**
     * Signal that the action MacAddress is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * MacAddress must be overridden if this is called.
     */      
    protected void enableActionMacAddress()
    {
        Action action = new Action("MacAddress");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("aMacAddress", allowedValues));
        iDelegateMacAddress = new DoMacAddress();
        enableAction(action, iDelegateMacAddress);
    }

    /**
     * Signal that the action MacAddressList is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * MacAddressList must be overridden if this is called.
     */      
    protected void enableActionMacAddressList()
    {
        Action action = new Action("MacAddressList");
        action.addOutputParameter(new ParameterRelated("aMacAddressList", iPropertyMacAddressList));
        iDelegateMacAddressList = new DoMacAddressList();
        enableAction(action, iDelegateMacAddressList);
    }

    /**
     * Signal that the action ProductId is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ProductId must be overridden if this is called.
     */      
    protected void enableActionProductId()
    {
        Action action = new Action("ProductId");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("aProductNumber", allowedValues));
        iDelegateProductId = new DoProductId();
        enableAction(action, iDelegateProductId);
    }

    /**
     * Signal that the action BoardId is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * BoardId must be overridden if this is called.
     */      
    protected void enableActionBoardId()
    {
        Action action = new Action("BoardId");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterUint("aIndex"));
        action.addOutputParameter(new ParameterString("aBoardNumber", allowedValues));
        iDelegateBoardId = new DoBoardId();
        enableAction(action, iDelegateBoardId);
    }

    /**
     * Signal that the action BoardType is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * BoardType must be overridden if this is called.
     */      
    protected void enableActionBoardType()
    {
        Action action = new Action("BoardType");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterUint("aIndex"));
        action.addOutputParameter(new ParameterString("aBoardNumber", allowedValues));
        iDelegateBoardType = new DoBoardType();
        enableAction(action, iDelegateBoardType);
    }

    /**
     * Signal that the action MaxBoards is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * MaxBoards must be overridden if this is called.
     */      
    protected void enableActionMaxBoards()
    {
        Action action = new Action("MaxBoards");
        action.addOutputParameter(new ParameterUint("aMaxBoards"));
        iDelegateMaxBoards = new DoMaxBoards();
        enableAction(action, iDelegateMaxBoards);
    }

    /**
     * Signal that the action SoftwareVersion is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SoftwareVersion must be overridden if this is called.
     */      
    protected void enableActionSoftwareVersion()
    {
        Action action = new Action("SoftwareVersion");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("aSoftwareVersion", allowedValues));
        iDelegateSoftwareVersion = new DoSoftwareVersion();
        enableAction(action, iDelegateSoftwareVersion);
    }

    /**
     * Signal that the action SoftwareUpdate is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SoftwareUpdate must be overridden if this is called.
     */      
    protected void enableActionSoftwareUpdate()
    {
        Action action = new Action("SoftwareUpdate");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterBool("aAvailable"));
        action.addOutputParameter(new ParameterString("aSoftwareVersion", allowedValues));
        iDelegateSoftwareUpdate = new DoSoftwareUpdate();
        enableAction(action, iDelegateSoftwareUpdate);
    }

    /**
     * Signal that the action DeviceInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * DeviceInfo must be overridden if this is called.
     */      
    protected void enableActionDeviceInfo()
    {
        Action action = new Action("DeviceInfo");
        action.addOutputParameter(new ParameterRelated("aDeviceInfoXml", iPropertyDeviceInfo));
        iDelegateDeviceInfo = new DoDeviceInfo();
        enableAction(action, iDelegateDeviceInfo);
    }

    /**
     * Signal that the action CoreBoardId is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * CoreBoardId must be overridden if this is called.
     */      
    protected void enableActionCoreBoardId()
    {
        Action action = new Action("CoreBoardId");
        action.addOutputParameter(new ParameterRelated("aCoreBoardId", iPropertyCoreBoardId));
        iDelegateCoreBoardId = new DoCoreBoardId();
        enableAction(action, iDelegateCoreBoardId);
    }

    /**
     * Reboot action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Reboot action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionReboot} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void reboot(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * BootMode action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * BootMode action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionBootMode} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String bootMode(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetBootMode action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetBootMode action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetBootMode} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aaMode
     */
    protected void setBootMode(IDvInvocation aInvocation, String aaMode)
    {
        throw (new ActionDisabledError());
    }

    /**
     * BspType action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * BspType action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionBspType} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String bspType(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * UglyName action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * UglyName action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionUglyName} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String uglyName(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * IpAddress action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * IpAddress action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionIpAddress} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String ipAddress(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * IpAddressList action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * IpAddressList action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionIpAddressList} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String ipAddressList(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * MacAddress action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * MacAddress action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionMacAddress} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String macAddress(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * MacAddressList action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * MacAddressList action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionMacAddressList} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String macAddressList(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ProductId action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ProductId action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionProductId} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String productId(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * BoardId action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * BoardId action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionBoardId} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aaIndex
     */
    protected String boardId(IDvInvocation aInvocation, long aaIndex)
    {
        throw (new ActionDisabledError());
    }

    /**
     * BoardType action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * BoardType action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionBoardType} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aaIndex
     */
    protected String boardType(IDvInvocation aInvocation, long aaIndex)
    {
        throw (new ActionDisabledError());
    }

    /**
     * MaxBoards action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * MaxBoards action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionMaxBoards} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long maxBoards(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SoftwareVersion action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SoftwareVersion action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSoftwareVersion} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String softwareVersion(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SoftwareUpdate action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SoftwareUpdate action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSoftwareUpdate} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected SoftwareUpdate softwareUpdate(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * DeviceInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * DeviceInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionDeviceInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String deviceInfo(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * CoreBoardId action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * CoreBoardId action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionCoreBoardId} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String coreBoardId(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Must be called for each class instance.  Must be called before Core.Library.Close().
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            super.dispose();
            iHandle = 0;
        }
    }


    private class DoReboot implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                reboot(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Reboot");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoBootMode implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aMode;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aMode = bootMode(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "BootMode");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aMode", aMode);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetBootMode implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aMode;
            try
            {
                invocation.readStart();
                aMode = invocation.readString("aMode");
                invocation.readEnd();
                setBootMode(invocation, aMode);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetBootMode");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoBspType implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aBspType;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aBspType = bspType(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "BspType");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aBspType", aBspType);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoUglyName implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aUglyName;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aUglyName = uglyName(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "UglyName");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aUglyName", aUglyName);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoIpAddress implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aIpAddress;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aIpAddress = ipAddress(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "IpAddress");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aIpAddress", aIpAddress);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoIpAddressList implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aIpAddressList;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aIpAddressList = ipAddressList(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "IpAddressList");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aIpAddressList", aIpAddressList);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoMacAddress implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aMacAddress;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aMacAddress = macAddress(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "MacAddress");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aMacAddress", aMacAddress);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoMacAddressList implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aMacAddressList;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aMacAddressList = macAddressList(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "MacAddressList");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aMacAddressList", aMacAddressList);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoProductId implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aProductNumber;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aProductNumber = productId(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ProductId");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aProductNumber", aProductNumber);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoBoardId implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long aIndex;
            String aBoardNumber;
            try
            {
                invocation.readStart();
                aIndex = invocation.readUint("aIndex");
                invocation.readEnd();
                 aBoardNumber = boardId(invocation, aIndex);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "BoardId");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aBoardNumber", aBoardNumber);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoBoardType implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long aIndex;
            String aBoardNumber;
            try
            {
                invocation.readStart();
                aIndex = invocation.readUint("aIndex");
                invocation.readEnd();
                 aBoardNumber = boardType(invocation, aIndex);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "BoardType");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aBoardNumber", aBoardNumber);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoMaxBoards implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long aMaxBoards;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aMaxBoards = maxBoards(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "MaxBoards");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("aMaxBoards", aMaxBoards);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSoftwareVersion implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aSoftwareVersion;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aSoftwareVersion = softwareVersion(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SoftwareVersion");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aSoftwareVersion", aSoftwareVersion);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSoftwareUpdate implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean aAvailable;
            String aSoftwareVersion;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            SoftwareUpdate outArgs = softwareUpdate(invocation);
            aAvailable = outArgs.getAvailable();
            aSoftwareVersion = outArgs.getSoftwareVersion();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SoftwareUpdate");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeBool("aAvailable", aAvailable);
                invocation.writeString("aSoftwareVersion", aSoftwareVersion);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoDeviceInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aDeviceInfoXml;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aDeviceInfoXml = deviceInfo(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "DeviceInfo");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aDeviceInfoXml", aDeviceInfoXml);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoCoreBoardId implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aCoreBoardId;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aCoreBoardId = coreBoardId(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "CoreBoardId");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("aCoreBoardId", aCoreBoardId);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }
}

