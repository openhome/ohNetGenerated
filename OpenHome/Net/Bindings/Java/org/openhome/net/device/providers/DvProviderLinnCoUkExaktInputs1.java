package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkExaktInputs1
{

    /**
     * Set the value of the Associations property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyAssociations(String aValue);

    /**
     * Get a copy of the value of the Associations property
     *
     * @return value of the Associations property.
     */
    public String getPropertyAssociations();
        
}

/**
 * Provider for the linn.co.uk:ExaktInputs:1 UPnP service.
 */
public class DvProviderLinnCoUkExaktInputs1 extends DvProvider implements IDvProviderLinnCoUkExaktInputs1
{

    private IDvInvocationListener iDelegateGetAssociation;
    private IDvInvocationListener iDelegateSetAssociation;
    private IDvInvocationListener iDelegateClearAssociation;
    private IDvInvocationListener iDelegateInputCount;
    private PropertyString iPropertyAssociations;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkExaktInputs1(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "ExaktInputs", 1);
    }

    /**
     * Enable the Associations property.
     */
    public void enablePropertyAssociations()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyAssociations = new PropertyString(new ParameterString("Associations", allowedValues));
        addProperty(iPropertyAssociations);
    }

    /**
     * Set the value of the Associations property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyAssociations(String aValue)
    {
        return setPropertyString(iPropertyAssociations, aValue);
    }

    /**
     * Get a copy of the value of the Associations property
     *
     * @return  value of the Associations property.
     */
    public String getPropertyAssociations()
    {
        return iPropertyAssociations.getValue();
    }

    /**
     * Signal that the action GetAssociation is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetAssociation must be overridden if this is called.
     */      
    protected void enableActionGetAssociation()
    {
        Action action = new Action("GetAssociation");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterUint("InputIndex"));
        action.addOutputParameter(new ParameterString("DeviceId", allowedValues));
        iDelegateGetAssociation = new DoGetAssociation();
        enableAction(action, iDelegateGetAssociation);
    }

    /**
     * Signal that the action SetAssociation is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetAssociation must be overridden if this is called.
     */      
    protected void enableActionSetAssociation()
    {
        Action action = new Action("SetAssociation");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterUint("InputIndex"));
        action.addInputParameter(new ParameterString("DeviceId", allowedValues));
        iDelegateSetAssociation = new DoSetAssociation();
        enableAction(action, iDelegateSetAssociation);
    }

    /**
     * Signal that the action ClearAssociation is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ClearAssociation must be overridden if this is called.
     */      
    protected void enableActionClearAssociation()
    {
        Action action = new Action("ClearAssociation");
        action.addInputParameter(new ParameterUint("InputIndex"));
        iDelegateClearAssociation = new DoClearAssociation();
        enableAction(action, iDelegateClearAssociation);
    }

    /**
     * Signal that the action InputCount is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * InputCount must be overridden if this is called.
     */      
    protected void enableActionInputCount()
    {
        Action action = new Action("InputCount");
        action.addOutputParameter(new ParameterUint("InputCount"));
        iDelegateInputCount = new DoInputCount();
        enableAction(action, iDelegateInputCount);
    }

    /**
     * GetAssociation action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetAssociation action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetAssociation} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aInputIndex
     */
    protected String getAssociation(IDvInvocation aInvocation, long aInputIndex)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetAssociation action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetAssociation action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetAssociation} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aInputIndex
     * @param aDeviceId
     */
    protected void setAssociation(IDvInvocation aInvocation, long aInputIndex, String aDeviceId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ClearAssociation action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ClearAssociation action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionClearAssociation} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aInputIndex
     */
    protected void clearAssociation(IDvInvocation aInvocation, long aInputIndex)
    {
        throw (new ActionDisabledError());
    }

    /**
     * InputCount action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * InputCount action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionInputCount} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long inputCount(IDvInvocation aInvocation)
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


    private class DoGetAssociation implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long inputIndex;
            String deviceId;
            try
            {
                invocation.readStart();
                inputIndex = invocation.readUint("InputIndex");
                invocation.readEnd();
                 deviceId = getAssociation(invocation, inputIndex);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetAssociation");
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
                invocation.writeString("DeviceId", deviceId);
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

    private class DoSetAssociation implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long inputIndex;
            String deviceId;
            try
            {
                invocation.readStart();
                inputIndex = invocation.readUint("InputIndex");
                deviceId = invocation.readString("DeviceId");
                invocation.readEnd();
                setAssociation(invocation, inputIndex, deviceId);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetAssociation");
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

    private class DoClearAssociation implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long inputIndex;
            try
            {
                invocation.readStart();
                inputIndex = invocation.readUint("InputIndex");
                invocation.readEnd();
                clearAssociation(invocation, inputIndex);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ClearAssociation");
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

    private class DoInputCount implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long inputCount;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 inputCount = inputCount(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "InputCount");
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
                invocation.writeUint("InputCount", inputCount);
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

