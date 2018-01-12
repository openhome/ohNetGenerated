package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkConfiguration1
{

    /**
     * Set the value of the ConfigurationXml property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyConfigurationXml(String aValue);

    /**
     * Get a copy of the value of the ConfigurationXml property
     *
     * @return value of the ConfigurationXml property.
     */
    public String getPropertyConfigurationXml();

    /**
     * Set the value of the ParameterXml property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyParameterXml(String aValue);

    /**
     * Get a copy of the value of the ParameterXml property
     *
     * @return value of the ParameterXml property.
     */
    public String getPropertyParameterXml();
        
}

/**
 * Provider for the linn.co.uk:Configuration:1 UPnP service.
 */
public class DvProviderLinnCoUkConfiguration1 extends DvProvider implements IDvProviderLinnCoUkConfiguration1
{

    private IDvInvocationListener iDelegateConfigurationXml;
    private IDvInvocationListener iDelegateParameterXml;
    private IDvInvocationListener iDelegateSetParameter;
    private PropertyString iPropertyConfigurationXml;
    private PropertyString iPropertyParameterXml;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkConfiguration1(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "Configuration", 1);
    }

    /**
     * Enable the ConfigurationXml property.
     */
    public void enablePropertyConfigurationXml()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyConfigurationXml = new PropertyString(new ParameterString("ConfigurationXml", allowedValues));
        addProperty(iPropertyConfigurationXml);
    }

    /**
     * Enable the ParameterXml property.
     */
    public void enablePropertyParameterXml()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyParameterXml = new PropertyString(new ParameterString("ParameterXml", allowedValues));
        addProperty(iPropertyParameterXml);
    }

    /**
     * Set the value of the ConfigurationXml property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyConfigurationXml(String aValue)
    {
        return setPropertyString(iPropertyConfigurationXml, aValue);
    }

    /**
     * Get a copy of the value of the ConfigurationXml property
     *
     * @return  value of the ConfigurationXml property.
     */
    public String getPropertyConfigurationXml()
    {
        return iPropertyConfigurationXml.getValue();
    }

    /**
     * Set the value of the ParameterXml property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyParameterXml(String aValue)
    {
        return setPropertyString(iPropertyParameterXml, aValue);
    }

    /**
     * Get a copy of the value of the ParameterXml property
     *
     * @return  value of the ParameterXml property.
     */
    public String getPropertyParameterXml()
    {
        return iPropertyParameterXml.getValue();
    }

    /**
     * Signal that the action ConfigurationXml is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ConfigurationXml must be overridden if this is called.
     */      
    protected void enableActionConfigurationXml()
    {
        Action action = new Action("ConfigurationXml");
        action.addOutputParameter(new ParameterRelated("aConfigurationXml", iPropertyConfigurationXml));
        iDelegateConfigurationXml = new DoConfigurationXml();
        enableAction(action, iDelegateConfigurationXml);
    }

    /**
     * Signal that the action ParameterXml is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ParameterXml must be overridden if this is called.
     */      
    protected void enableActionParameterXml()
    {
        Action action = new Action("ParameterXml");
        action.addOutputParameter(new ParameterRelated("aParameterXml", iPropertyParameterXml));
        iDelegateParameterXml = new DoParameterXml();
        enableAction(action, iDelegateParameterXml);
    }

    /**
     * Signal that the action SetParameter is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetParameter must be overridden if this is called.
     */      
    protected void enableActionSetParameter()
    {
        Action action = new Action("SetParameter");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("aTarget", allowedValues));
        action.addInputParameter(new ParameterString("aName", allowedValues));
        action.addInputParameter(new ParameterString("aValue", allowedValues));
        iDelegateSetParameter = new DoSetParameter();
        enableAction(action, iDelegateSetParameter);
    }

    /**
     * ConfigurationXml action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ConfigurationXml action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionConfigurationXml} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String configurationXml(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ParameterXml action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ParameterXml action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionParameterXml} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String parameterXml(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetParameter action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetParameter action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetParameter} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aaTarget
     * @param aaName
     * @param aaValue
     */
    protected void setParameter(IDvInvocation aInvocation, String aaTarget, String aaName, String aaValue)
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


    private class DoConfigurationXml implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aConfigurationXml;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aConfigurationXml = configurationXml(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ConfigurationXml");
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
                invocation.writeString("aConfigurationXml", aConfigurationXml);
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

    private class DoParameterXml implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aParameterXml;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 aParameterXml = parameterXml(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ParameterXml");
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
                invocation.writeString("aParameterXml", aParameterXml);
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

    private class DoSetParameter implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String aTarget;
            String aName;
            String aValue;
            try
            {
                invocation.readStart();
                aTarget = invocation.readString("aTarget");
                aName = invocation.readString("aName");
                aValue = invocation.readString("aValue");
                invocation.readEnd();
                setParameter(invocation, aTarget, aName, aValue);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetParameter");
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

