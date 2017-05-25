package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkCloud1
{

    /**
     * Set the value of the AssociationStatus property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyAssociationStatus(String aValue);

    /**
     * Get a copy of the value of the AssociationStatus property
     *
     * @return value of the AssociationStatus property.
     */
    public String getPropertyAssociationStatus();

    /**
     * Set the value of the ControlEnabled property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyControlEnabled(boolean aValue);

    /**
     * Get a copy of the value of the ControlEnabled property
     *
     * @return value of the ControlEnabled property.
     */
    public boolean getPropertyControlEnabled();

    /**
     * Set the value of the Connected property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyConnected(boolean aValue);

    /**
     * Get a copy of the value of the Connected property
     *
     * @return value of the Connected property.
     */
    public boolean getPropertyConnected();

    /**
     * Set the value of the PublicKey property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyPublicKey(String aValue);

    /**
     * Get a copy of the value of the PublicKey property
     *
     * @return value of the PublicKey property.
     */
    public String getPropertyPublicKey();
        
}

/**
 * Provider for the linn.co.uk:Cloud:1 UPnP service.
 */
public class DvProviderLinnCoUkCloud1 extends DvProvider implements IDvProviderLinnCoUkCloud1
{

    private IDvInvocationListener iDelegateSetAssociated;
    private IDvInvocationListener iDelegateSetControlEnabled;
    private IDvInvocationListener iDelegateGetControlEnabled;
    private IDvInvocationListener iDelegateGetConnected;
    private IDvInvocationListener iDelegateGetPublicKey;
    private PropertyString iPropertyAssociationStatus;
    private PropertyBool iPropertyControlEnabled;
    private PropertyBool iPropertyConnected;
    private PropertyString iPropertyPublicKey;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkCloud1(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "Cloud", 1);
    }

    /**
     * Enable the AssociationStatus property.
     */
    public void enablePropertyAssociationStatus()
    {
        List<String> allowedValues = new LinkedList<String>();
        allowedValues.add("Associated");
        allowedValues.add("NotAssociated");
        allowedValues.add("Unconfigured");
        iPropertyAssociationStatus = new PropertyString(new ParameterString("AssociationStatus", allowedValues));
        addProperty(iPropertyAssociationStatus);
            allowedValues.clear();
    }

    /**
     * Enable the ControlEnabled property.
     */
    public void enablePropertyControlEnabled()
    {
        iPropertyControlEnabled = new PropertyBool(new ParameterBool("ControlEnabled"));
        addProperty(iPropertyControlEnabled);
    }

    /**
     * Enable the Connected property.
     */
    public void enablePropertyConnected()
    {
        iPropertyConnected = new PropertyBool(new ParameterBool("Connected"));
        addProperty(iPropertyConnected);
    }

    /**
     * Enable the PublicKey property.
     */
    public void enablePropertyPublicKey()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyPublicKey = new PropertyString(new ParameterString("PublicKey", allowedValues));
        addProperty(iPropertyPublicKey);
    }

    /**
     * Set the value of the AssociationStatus property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyAssociationStatus(String aValue)
    {
        return setPropertyString(iPropertyAssociationStatus, aValue);
    }

    /**
     * Get a copy of the value of the AssociationStatus property
     *
     * @return  value of the AssociationStatus property.
     */
    public String getPropertyAssociationStatus()
    {
        return iPropertyAssociationStatus.getValue();
    }

    /**
     * Set the value of the ControlEnabled property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyControlEnabled(boolean aValue)
    {
        return setPropertyBool(iPropertyControlEnabled, aValue);
    }

    /**
     * Get a copy of the value of the ControlEnabled property
     *
     * @return  value of the ControlEnabled property.
     */
    public boolean getPropertyControlEnabled()
    {
        return iPropertyControlEnabled.getValue();
    }

    /**
     * Set the value of the Connected property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyConnected(boolean aValue)
    {
        return setPropertyBool(iPropertyConnected, aValue);
    }

    /**
     * Get a copy of the value of the Connected property
     *
     * @return  value of the Connected property.
     */
    public boolean getPropertyConnected()
    {
        return iPropertyConnected.getValue();
    }

    /**
     * Set the value of the PublicKey property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyPublicKey(String aValue)
    {
        return setPropertyString(iPropertyPublicKey, aValue);
    }

    /**
     * Get a copy of the value of the PublicKey property
     *
     * @return  value of the PublicKey property.
     */
    public String getPropertyPublicKey()
    {
        return iPropertyPublicKey.getValue();
    }

    /**
     * Signal that the action SetAssociated is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetAssociated must be overridden if this is called.
     */      
    protected void enableActionSetAssociated()
    {
        Action action = new Action("SetAssociated");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("TokenEncrypted", allowedValues));
        action.addInputParameter(new ParameterBool("Associated"));
        iDelegateSetAssociated = new DoSetAssociated();
        enableAction(action, iDelegateSetAssociated);
    }

    /**
     * Signal that the action SetControlEnabled is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetControlEnabled must be overridden if this is called.
     */      
    protected void enableActionSetControlEnabled()
    {
        Action action = new Action("SetControlEnabled");
        action.addInputParameter(new ParameterRelated("Enabled", iPropertyControlEnabled));
        iDelegateSetControlEnabled = new DoSetControlEnabled();
        enableAction(action, iDelegateSetControlEnabled);
    }

    /**
     * Signal that the action GetControlEnabled is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetControlEnabled must be overridden if this is called.
     */      
    protected void enableActionGetControlEnabled()
    {
        Action action = new Action("GetControlEnabled");
        action.addOutputParameter(new ParameterRelated("Enabled", iPropertyControlEnabled));
        iDelegateGetControlEnabled = new DoGetControlEnabled();
        enableAction(action, iDelegateGetControlEnabled);
    }

    /**
     * Signal that the action GetConnected is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetConnected must be overridden if this is called.
     */      
    protected void enableActionGetConnected()
    {
        Action action = new Action("GetConnected");
        action.addOutputParameter(new ParameterRelated("Connected", iPropertyConnected));
        iDelegateGetConnected = new DoGetConnected();
        enableAction(action, iDelegateGetConnected);
    }

    /**
     * Signal that the action GetPublicKey is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetPublicKey must be overridden if this is called.
     */      
    protected void enableActionGetPublicKey()
    {
        Action action = new Action("GetPublicKey");
        action.addOutputParameter(new ParameterRelated("PublicKey", iPropertyPublicKey));
        iDelegateGetPublicKey = new DoGetPublicKey();
        enableAction(action, iDelegateGetPublicKey);
    }

    /**
     * SetAssociated action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetAssociated action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetAssociated} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aTokenEncrypted
     * @param aAssociated
     */
    protected void setAssociated(IDvInvocation aInvocation, String aTokenEncrypted, boolean aAssociated)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetControlEnabled action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetControlEnabled action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetControlEnabled} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aEnabled
     */
    protected void setControlEnabled(IDvInvocation aInvocation, boolean aEnabled)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetControlEnabled action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetControlEnabled action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetControlEnabled} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getControlEnabled(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetConnected action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetConnected action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetConnected} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getConnected(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetPublicKey action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetPublicKey action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetPublicKey} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getPublicKey(IDvInvocation aInvocation)
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


    private class DoSetAssociated implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String tokenEncrypted;
            boolean associated;
            try
            {
                invocation.readStart();
                tokenEncrypted = invocation.readString("TokenEncrypted");
                associated = invocation.readBool("Associated");
                invocation.readEnd();
                setAssociated(invocation, tokenEncrypted, associated);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetAssociated");
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

    private class DoSetControlEnabled implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean enabled;
            try
            {
                invocation.readStart();
                enabled = invocation.readBool("Enabled");
                invocation.readEnd();
                setControlEnabled(invocation, enabled);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetControlEnabled");
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

    private class DoGetControlEnabled implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean enabled;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 enabled = getControlEnabled(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetControlEnabled");
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
                invocation.writeBool("Enabled", enabled);
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

    private class DoGetConnected implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean connected;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 connected = getConnected(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetConnected");
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
                invocation.writeBool("Connected", connected);
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

    private class DoGetPublicKey implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String publicKey;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 publicKey = getPublicKey(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetPublicKey");
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
                invocation.writeString("PublicKey", publicKey);
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

