package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkZones1
{

    /**
     * Set the value of the Inputs property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyInputs(String aValue);

    /**
     * Get a copy of the value of the Inputs property
     *
     * @return value of the Inputs property.
     */
    public String getPropertyInputs();

    /**
     * Set the value of the Outputs property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyOutputs(String aValue);

    /**
     * Get a copy of the value of the Outputs property
     *
     * @return value of the Outputs property.
     */
    public String getPropertyOutputs();

    /**
     * Set the value of the Mappings property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyMappings(String aValue);

    /**
     * Get a copy of the value of the Mappings property
     *
     * @return value of the Mappings property.
     */
    public String getPropertyMappings();
        
}

/**
 * Provider for the linn.co.uk:Zones:1 UPnP service.
 */
public class DvProviderLinnCoUkZones1 extends DvProvider implements IDvProviderLinnCoUkZones1
{

    private IDvInvocationListener iDelegateGetInputs;
    private IDvInvocationListener iDelegateGetOutputs;
    private IDvInvocationListener iDelegateGetMappings;
    private IDvInvocationListener iDelegateSetMappings;
    private PropertyString iPropertyInputs;
    private PropertyString iPropertyOutputs;
    private PropertyString iPropertyMappings;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkZones1(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "Zones", 1);
    }

    /**
     * Enable the Inputs property.
     */
    public void enablePropertyInputs()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyInputs = new PropertyString(new ParameterString("Inputs", allowedValues));
        addProperty(iPropertyInputs);
    }

    /**
     * Enable the Outputs property.
     */
    public void enablePropertyOutputs()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyOutputs = new PropertyString(new ParameterString("Outputs", allowedValues));
        addProperty(iPropertyOutputs);
    }

    /**
     * Enable the Mappings property.
     */
    public void enablePropertyMappings()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyMappings = new PropertyString(new ParameterString("Mappings", allowedValues));
        addProperty(iPropertyMappings);
    }

    /**
     * Set the value of the Inputs property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyInputs(String aValue)
    {
        return setPropertyString(iPropertyInputs, aValue);
    }

    /**
     * Get a copy of the value of the Inputs property
     *
     * @return  value of the Inputs property.
     */
    public String getPropertyInputs()
    {
        return iPropertyInputs.getValue();
    }

    /**
     * Set the value of the Outputs property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyOutputs(String aValue)
    {
        return setPropertyString(iPropertyOutputs, aValue);
    }

    /**
     * Get a copy of the value of the Outputs property
     *
     * @return  value of the Outputs property.
     */
    public String getPropertyOutputs()
    {
        return iPropertyOutputs.getValue();
    }

    /**
     * Set the value of the Mappings property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyMappings(String aValue)
    {
        return setPropertyString(iPropertyMappings, aValue);
    }

    /**
     * Get a copy of the value of the Mappings property
     *
     * @return  value of the Mappings property.
     */
    public String getPropertyMappings()
    {
        return iPropertyMappings.getValue();
    }

    /**
     * Signal that the action GetInputs is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetInputs must be overridden if this is called.
     */      
    protected void enableActionGetInputs()
    {
        Action action = new Action("GetInputs");
        action.addOutputParameter(new ParameterRelated("Inputs", iPropertyInputs));
        iDelegateGetInputs = new DoGetInputs();
        enableAction(action, iDelegateGetInputs);
    }

    /**
     * Signal that the action GetOutputs is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetOutputs must be overridden if this is called.
     */      
    protected void enableActionGetOutputs()
    {
        Action action = new Action("GetOutputs");
        action.addOutputParameter(new ParameterRelated("Outputs", iPropertyOutputs));
        iDelegateGetOutputs = new DoGetOutputs();
        enableAction(action, iDelegateGetOutputs);
    }

    /**
     * Signal that the action GetMappings is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetMappings must be overridden if this is called.
     */      
    protected void enableActionGetMappings()
    {
        Action action = new Action("GetMappings");
        action.addOutputParameter(new ParameterRelated("Mappings", iPropertyMappings));
        iDelegateGetMappings = new DoGetMappings();
        enableAction(action, iDelegateGetMappings);
    }

    /**
     * Signal that the action SetMappings is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetMappings must be overridden if this is called.
     */      
    protected void enableActionSetMappings()
    {
        Action action = new Action("SetMappings");
        action.addInputParameter(new ParameterRelated("Mappings", iPropertyMappings));
        iDelegateSetMappings = new DoSetMappings();
        enableAction(action, iDelegateSetMappings);
    }

    /**
     * GetInputs action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetInputs action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetInputs} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getInputs(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetOutputs action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetOutputs action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetOutputs} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getOutputs(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetMappings action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetMappings action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetMappings} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getMappings(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetMappings action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetMappings action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetMappings} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aMappings
     */
    protected void setMappings(IDvInvocation aInvocation, String aMappings)
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


    private class DoGetInputs implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String inputs;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 inputs = getInputs(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetInputs");
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
                invocation.writeString("Inputs", inputs);
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

    private class DoGetOutputs implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String outputs;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 outputs = getOutputs(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetOutputs");
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
                invocation.writeString("Outputs", outputs);
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

    private class DoGetMappings implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String mappings;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 mappings = getMappings(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetMappings");
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
                invocation.writeString("Mappings", mappings);
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

    private class DoSetMappings implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String mappings;
            try
            {
                invocation.readStart();
                mappings = invocation.readString("Mappings");
                invocation.readEnd();
                setMappings(invocation, mappings);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetMappings");
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

