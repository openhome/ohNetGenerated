package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgPins1
{

    /**
     * Set the value of the DeviceMax property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyDeviceMax(long aValue);

    /**
     * Get a copy of the value of the DeviceMax property
     *
     * @return value of the DeviceMax property.
     */
    public long getPropertyDeviceMax();

    /**
     * Set the value of the AccountMax property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyAccountMax(long aValue);

    /**
     * Get a copy of the value of the AccountMax property
     *
     * @return value of the AccountMax property.
     */
    public long getPropertyAccountMax();

    /**
     * Set the value of the Modes property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyModes(String aValue);

    /**
     * Get a copy of the value of the Modes property
     *
     * @return value of the Modes property.
     */
    public String getPropertyModes();

    /**
     * Set the value of the IdArray property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyIdArray(String aValue);

    /**
     * Get a copy of the value of the IdArray property
     *
     * @return value of the IdArray property.
     */
    public String getPropertyIdArray();
        
}

/**
 * Provider for the av.openhome.org:Pins:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgPins1 extends DvProvider implements IDvProviderAvOpenhomeOrgPins1
{

    public class GetDeviceAccountMax
    {
        private long iDeviceMax;
        private long iAccountMax;

        public GetDeviceAccountMax(
            long aDeviceMax,
            long aAccountMax
        )
        {
            iDeviceMax = aDeviceMax;
            iAccountMax = aAccountMax;
        }
        public long getDeviceMax()
        {
            return iDeviceMax;
        }
        public long getAccountMax()
        {
            return iAccountMax;
        }
    }

    private IDvInvocationListener iDelegateGetDeviceAccountMax;
    private IDvInvocationListener iDelegateGetModes;
    private IDvInvocationListener iDelegateGetIdArray;
    private IDvInvocationListener iDelegateReadList;
    private IDvInvocationListener iDelegateInvokeId;
    private IDvInvocationListener iDelegateInvokeIndex;
    private IDvInvocationListener iDelegateSetDevice;
    private IDvInvocationListener iDelegateSetAccount;
    private IDvInvocationListener iDelegateClear;
    private IDvInvocationListener iDelegateSwap;
    private PropertyUint iPropertyDeviceMax;
    private PropertyUint iPropertyAccountMax;
    private PropertyString iPropertyModes;
    private PropertyString iPropertyIdArray;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgPins1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "Pins", 1);
    }

    /**
     * Enable the DeviceMax property.
     */
    public void enablePropertyDeviceMax()
    {
        iPropertyDeviceMax = new PropertyUint(new ParameterUint("DeviceMax"));
        addProperty(iPropertyDeviceMax);
    }

    /**
     * Enable the AccountMax property.
     */
    public void enablePropertyAccountMax()
    {
        iPropertyAccountMax = new PropertyUint(new ParameterUint("AccountMax"));
        addProperty(iPropertyAccountMax);
    }

    /**
     * Enable the Modes property.
     */
    public void enablePropertyModes()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyModes = new PropertyString(new ParameterString("Modes", allowedValues));
        addProperty(iPropertyModes);
    }

    /**
     * Enable the IdArray property.
     */
    public void enablePropertyIdArray()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyIdArray = new PropertyString(new ParameterString("IdArray", allowedValues));
        addProperty(iPropertyIdArray);
    }

    /**
     * Set the value of the DeviceMax property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyDeviceMax(long aValue)
    {
        return setPropertyUint(iPropertyDeviceMax, aValue);
    }

    /**
     * Get a copy of the value of the DeviceMax property
     *
     * @return  value of the DeviceMax property.
     */
    public long getPropertyDeviceMax()
    {
        return iPropertyDeviceMax.getValue();
    }

    /**
     * Set the value of the AccountMax property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyAccountMax(long aValue)
    {
        return setPropertyUint(iPropertyAccountMax, aValue);
    }

    /**
     * Get a copy of the value of the AccountMax property
     *
     * @return  value of the AccountMax property.
     */
    public long getPropertyAccountMax()
    {
        return iPropertyAccountMax.getValue();
    }

    /**
     * Set the value of the Modes property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyModes(String aValue)
    {
        return setPropertyString(iPropertyModes, aValue);
    }

    /**
     * Get a copy of the value of the Modes property
     *
     * @return  value of the Modes property.
     */
    public String getPropertyModes()
    {
        return iPropertyModes.getValue();
    }

    /**
     * Set the value of the IdArray property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyIdArray(String aValue)
    {
        return setPropertyString(iPropertyIdArray, aValue);
    }

    /**
     * Get a copy of the value of the IdArray property
     *
     * @return  value of the IdArray property.
     */
    public String getPropertyIdArray()
    {
        return iPropertyIdArray.getValue();
    }

    /**
     * Signal that the action GetDeviceAccountMax is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetDeviceAccountMax must be overridden if this is called.
     */      
    protected void enableActionGetDeviceAccountMax()
    {
        Action action = new Action("GetDeviceAccountMax");
        action.addOutputParameter(new ParameterRelated("DeviceMax", iPropertyDeviceMax));
        action.addOutputParameter(new ParameterRelated("AccountMax", iPropertyAccountMax));
        iDelegateGetDeviceAccountMax = new DoGetDeviceAccountMax();
        enableAction(action, iDelegateGetDeviceAccountMax);
    }

    /**
     * Signal that the action GetModes is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetModes must be overridden if this is called.
     */      
    protected void enableActionGetModes()
    {
        Action action = new Action("GetModes");
        action.addOutputParameter(new ParameterRelated("Modes", iPropertyModes));
        iDelegateGetModes = new DoGetModes();
        enableAction(action, iDelegateGetModes);
    }

    /**
     * Signal that the action GetIdArray is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetIdArray must be overridden if this is called.
     */      
    protected void enableActionGetIdArray()
    {
        Action action = new Action("GetIdArray");
        action.addOutputParameter(new ParameterRelated("IdArray", iPropertyIdArray));
        iDelegateGetIdArray = new DoGetIdArray();
        enableAction(action, iDelegateGetIdArray);
    }

    /**
     * Signal that the action ReadList is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ReadList must be overridden if this is called.
     */      
    protected void enableActionReadList()
    {
        Action action = new Action("ReadList");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Ids", allowedValues));
        action.addOutputParameter(new ParameterString("List", allowedValues));
        iDelegateReadList = new DoReadList();
        enableAction(action, iDelegateReadList);
    }

    /**
     * Signal that the action InvokeId is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * InvokeId must be overridden if this is called.
     */      
    protected void enableActionInvokeId()
    {
        Action action = new Action("InvokeId");
        action.addInputParameter(new ParameterUint("Id"));
        iDelegateInvokeId = new DoInvokeId();
        enableAction(action, iDelegateInvokeId);
    }

    /**
     * Signal that the action InvokeIndex is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * InvokeIndex must be overridden if this is called.
     */      
    protected void enableActionInvokeIndex()
    {
        Action action = new Action("InvokeIndex");
        action.addInputParameter(new ParameterUint("Index"));
        iDelegateInvokeIndex = new DoInvokeIndex();
        enableAction(action, iDelegateInvokeIndex);
    }

    /**
     * Signal that the action SetDevice is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetDevice must be overridden if this is called.
     */      
    protected void enableActionSetDevice()
    {
        Action action = new Action("SetDevice");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterUint("Index"));
        action.addInputParameter(new ParameterString("Mode", allowedValues));
        action.addInputParameter(new ParameterString("Type", allowedValues));
        action.addInputParameter(new ParameterString("Uri", allowedValues));
        action.addInputParameter(new ParameterString("Title", allowedValues));
        action.addInputParameter(new ParameterString("Description", allowedValues));
        action.addInputParameter(new ParameterString("ArtworkUri", allowedValues));
        action.addInputParameter(new ParameterBool("Shuffle"));
        iDelegateSetDevice = new DoSetDevice();
        enableAction(action, iDelegateSetDevice);
    }

    /**
     * Signal that the action SetAccount is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetAccount must be overridden if this is called.
     */      
    protected void enableActionSetAccount()
    {
        Action action = new Action("SetAccount");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterUint("Index"));
        action.addInputParameter(new ParameterString("Mode", allowedValues));
        action.addInputParameter(new ParameterString("Type", allowedValues));
        action.addInputParameter(new ParameterString("Uri", allowedValues));
        action.addInputParameter(new ParameterString("Title", allowedValues));
        action.addInputParameter(new ParameterString("Description", allowedValues));
        action.addInputParameter(new ParameterString("ArtworkUri", allowedValues));
        action.addInputParameter(new ParameterBool("Shuffle"));
        iDelegateSetAccount = new DoSetAccount();
        enableAction(action, iDelegateSetAccount);
    }

    /**
     * Signal that the action Clear is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Clear must be overridden if this is called.
     */      
    protected void enableActionClear()
    {
        Action action = new Action("Clear");
        action.addInputParameter(new ParameterUint("Id"));
        iDelegateClear = new DoClear();
        enableAction(action, iDelegateClear);
    }

    /**
     * Signal that the action Swap is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Swap must be overridden if this is called.
     */      
    protected void enableActionSwap()
    {
        Action action = new Action("Swap");
        action.addInputParameter(new ParameterUint("Index1"));
        action.addInputParameter(new ParameterUint("Index2"));
        iDelegateSwap = new DoSwap();
        enableAction(action, iDelegateSwap);
    }

    /**
     * GetDeviceAccountMax action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetDeviceAccountMax action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetDeviceAccountMax} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetDeviceAccountMax getDeviceAccountMax(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetModes action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetModes action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetModes} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getModes(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetIdArray action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetIdArray action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetIdArray} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getIdArray(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ReadList action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ReadList action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionReadList} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aIds
     */
    protected String readList(IDvInvocation aInvocation, String aIds)
    {
        throw (new ActionDisabledError());
    }

    /**
     * InvokeId action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * InvokeId action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionInvokeId} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aId
     */
    protected void invokeId(IDvInvocation aInvocation, long aId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * InvokeIndex action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * InvokeIndex action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionInvokeIndex} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aIndex
     */
    protected void invokeIndex(IDvInvocation aInvocation, long aIndex)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetDevice action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetDevice action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetDevice} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aIndex
     * @param aMode
     * @param aType
     * @param aUri
     * @param aTitle
     * @param aDescription
     * @param aArtworkUri
     * @param aShuffle
     */
    protected void setDevice(IDvInvocation aInvocation, long aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, boolean aShuffle)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetAccount action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetAccount action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetAccount} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aIndex
     * @param aMode
     * @param aType
     * @param aUri
     * @param aTitle
     * @param aDescription
     * @param aArtworkUri
     * @param aShuffle
     */
    protected void setAccount(IDvInvocation aInvocation, long aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, boolean aShuffle)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Clear action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Clear action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionClear} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aId
     */
    protected void clear(IDvInvocation aInvocation, long aId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Swap action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Swap action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSwap} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aIndex1
     * @param aIndex2
     */
    protected void swap(IDvInvocation aInvocation, long aIndex1, long aIndex2)
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


    private class DoGetDeviceAccountMax implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long deviceMax;
            long accountMax;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetDeviceAccountMax outArgs = getDeviceAccountMax(invocation);
            deviceMax = outArgs.getDeviceMax();
            accountMax = outArgs.getAccountMax();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetDeviceAccountMax");
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
                invocation.writeUint("DeviceMax", deviceMax);
                invocation.writeUint("AccountMax", accountMax);
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

    private class DoGetModes implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String modes;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 modes = getModes(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetModes");
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
                invocation.writeString("Modes", modes);
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

    private class DoGetIdArray implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String idArray;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 idArray = getIdArray(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetIdArray");
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
                invocation.writeString("IdArray", idArray);
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

    private class DoReadList implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String ids;
            String list;
            try
            {
                invocation.readStart();
                ids = invocation.readString("Ids");
                invocation.readEnd();
                 list = readList(invocation, ids);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ReadList");
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
                invocation.writeString("List", list);
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

    private class DoInvokeId implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long id;
            try
            {
                invocation.readStart();
                id = invocation.readUint("Id");
                invocation.readEnd();
                invokeId(invocation, id);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "InvokeId");
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

    private class DoInvokeIndex implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long index;
            try
            {
                invocation.readStart();
                index = invocation.readUint("Index");
                invocation.readEnd();
                invokeIndex(invocation, index);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "InvokeIndex");
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

    private class DoSetDevice implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long index;
            String mode;
            String type;
            String uri;
            String title;
            String description;
            String artworkUri;
            boolean shuffle;
            try
            {
                invocation.readStart();
                index = invocation.readUint("Index");
                mode = invocation.readString("Mode");
                type = invocation.readString("Type");
                uri = invocation.readString("Uri");
                title = invocation.readString("Title");
                description = invocation.readString("Description");
                artworkUri = invocation.readString("ArtworkUri");
                shuffle = invocation.readBool("Shuffle");
                invocation.readEnd();
                setDevice(invocation, index, mode, type, uri, title, description, artworkUri, shuffle);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetDevice");
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

    private class DoSetAccount implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long index;
            String mode;
            String type;
            String uri;
            String title;
            String description;
            String artworkUri;
            boolean shuffle;
            try
            {
                invocation.readStart();
                index = invocation.readUint("Index");
                mode = invocation.readString("Mode");
                type = invocation.readString("Type");
                uri = invocation.readString("Uri");
                title = invocation.readString("Title");
                description = invocation.readString("Description");
                artworkUri = invocation.readString("ArtworkUri");
                shuffle = invocation.readBool("Shuffle");
                invocation.readEnd();
                setAccount(invocation, index, mode, type, uri, title, description, artworkUri, shuffle);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetAccount");
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

    private class DoClear implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long id;
            try
            {
                invocation.readStart();
                id = invocation.readUint("Id");
                invocation.readEnd();
                clear(invocation, id);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Clear");
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

    private class DoSwap implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long index1;
            long index2;
            try
            {
                invocation.readStart();
                index1 = invocation.readUint("Index1");
                index2 = invocation.readUint("Index2");
                invocation.readEnd();
                swap(invocation, index1, index2);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Swap");
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
}

