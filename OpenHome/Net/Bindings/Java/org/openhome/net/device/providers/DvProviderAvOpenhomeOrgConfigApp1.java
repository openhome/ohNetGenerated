package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgConfigApp1
{

    /**
     * Set the value of the Keys property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyKeys(String aValue);

    /**
     * Get a copy of the value of the Keys property
     *
     * @return value of the Keys property.
     */
    public String getPropertyKeys();
        
}

/**
 * Provider for the av.openhome.org:ConfigApp:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgConfigApp1 extends DvProvider implements IDvProviderAvOpenhomeOrgConfigApp1
{

    private IDvInvocationListener iDelegateGetKeys;
    private IDvInvocationListener iDelegateSetValue;
    private IDvInvocationListener iDelegateGetValue;
    private IDvInvocationListener iDelegateResetAll;
    private PropertyString iPropertyKeys;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgConfigApp1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "ConfigApp", 1);
    }

    /**
     * Enable the Keys property.
     */
    public void enablePropertyKeys()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyKeys = new PropertyString(new ParameterString("Keys", allowedValues));
        addProperty(iPropertyKeys);
    }

    /**
     * Set the value of the Keys property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyKeys(String aValue)
    {
        return setPropertyString(iPropertyKeys, aValue);
    }

    /**
     * Get a copy of the value of the Keys property
     *
     * @return  value of the Keys property.
     */
    public String getPropertyKeys()
    {
        return iPropertyKeys.getValue();
    }

    /**
     * Signal that the action GetKeys is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetKeys must be overridden if this is called.
     */      
    protected void enableActionGetKeys()
    {
        Action action = new Action("GetKeys");
        action.addOutputParameter(new ParameterRelated("Keys", iPropertyKeys));
        iDelegateGetKeys = new DoGetKeys();
        enableAction(action, iDelegateGetKeys);
    }

    /**
     * Signal that the action SetValue is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetValue must be overridden if this is called.
     */      
    protected void enableActionSetValue()
    {
        Action action = new Action("SetValue");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Key", allowedValues));
        action.addInputParameter(new ParameterString("Value", allowedValues));
        iDelegateSetValue = new DoSetValue();
        enableAction(action, iDelegateSetValue);
    }

    /**
     * Signal that the action GetValue is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetValue must be overridden if this is called.
     */      
    protected void enableActionGetValue()
    {
        Action action = new Action("GetValue");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Key", allowedValues));
        action.addOutputParameter(new ParameterString("Value", allowedValues));
        iDelegateGetValue = new DoGetValue();
        enableAction(action, iDelegateGetValue);
    }

    /**
     * Signal that the action ResetAll is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ResetAll must be overridden if this is called.
     */      
    protected void enableActionResetAll()
    {
        Action action = new Action("ResetAll");
        iDelegateResetAll = new DoResetAll();
        enableAction(action, iDelegateResetAll);
    }

    /**
     * GetKeys action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetKeys action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetKeys} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getKeys(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetValue action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetValue action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetValue} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aKey
     * @param aValue
     */
    protected void setValue(IDvInvocation aInvocation, String aKey, String aValue)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetValue action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetValue action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetValue} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aKey
     */
    protected String getValue(IDvInvocation aInvocation, String aKey)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ResetAll action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ResetAll action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionResetAll} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void resetAll(IDvInvocation aInvocation)
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


    private class DoGetKeys implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String keys;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 keys = getKeys(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetKeys");
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
                invocation.writeString("Keys", keys);
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

    private class DoSetValue implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String key;
            String value;
            try
            {
                invocation.readStart();
                key = invocation.readString("Key");
                value = invocation.readString("Value");
                invocation.readEnd();
                setValue(invocation, key, value);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetValue");
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

    private class DoGetValue implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String key;
            String value;
            try
            {
                invocation.readStart();
                key = invocation.readString("Key");
                invocation.readEnd();
                 value = getValue(invocation, key);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetValue");
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
                invocation.writeString("Value", value);
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

    private class DoResetAll implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                resetAll(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ResetAll");
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

