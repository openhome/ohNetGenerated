package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgCredentials1
{

    /**
     * Set the value of the Ids property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyIds(String aValue);

    /**
     * Get a copy of the value of the Ids property
     *
     * @return value of the Ids property.
     */
    public String getPropertyIds();

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

    /**
     * Set the value of the SequenceNumber property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertySequenceNumber(long aValue);

    /**
     * Get a copy of the value of the SequenceNumber property
     *
     * @return value of the SequenceNumber property.
     */
    public long getPropertySequenceNumber();
        
}

/**
 * Provider for the av.openhome.org:Credentials:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgCredentials1 extends DvProvider implements IDvProviderAvOpenhomeOrgCredentials1
{

    public class Get
    {
        private String iUserName;
        private byte[] iPassword;
        private boolean iEnabled;
        private String iStatus;
        private String iData;

        public Get(
            String aUserName,
            byte[] aPassword,
            boolean aEnabled,
            String aStatus,
            String aData
        )
        {
            iUserName = aUserName;
            iPassword = aPassword;
            iEnabled = aEnabled;
            iStatus = aStatus;
            iData = aData;
        }
        public String getUserName()
        {
            return iUserName;
        }
        public byte[] getPassword()
        {
            return iPassword;
        }
        public boolean getEnabled()
        {
            return iEnabled;
        }
        public String getStatus()
        {
            return iStatus;
        }
        public String getData()
        {
            return iData;
        }
    }

    private IDvInvocationListener iDelegateSet;
    private IDvInvocationListener iDelegateClear;
    private IDvInvocationListener iDelegateSetEnabled;
    private IDvInvocationListener iDelegateGet;
    private IDvInvocationListener iDelegateLogin;
    private IDvInvocationListener iDelegateReLogin;
    private IDvInvocationListener iDelegateGetIds;
    private IDvInvocationListener iDelegateGetPublicKey;
    private IDvInvocationListener iDelegateGetSequenceNumber;
    private PropertyString iPropertyIds;
    private PropertyString iPropertyPublicKey;
    private PropertyUint iPropertySequenceNumber;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgCredentials1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "Credentials", 1);
    }

    /**
     * Enable the Ids property.
     */
    public void enablePropertyIds()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyIds = new PropertyString(new ParameterString("Ids", allowedValues));
        addProperty(iPropertyIds);
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
     * Enable the SequenceNumber property.
     */
    public void enablePropertySequenceNumber()
    {
        iPropertySequenceNumber = new PropertyUint(new ParameterUint("SequenceNumber"));
        addProperty(iPropertySequenceNumber);
    }

    /**
     * Set the value of the Ids property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyIds(String aValue)
    {
        return setPropertyString(iPropertyIds, aValue);
    }

    /**
     * Get a copy of the value of the Ids property
     *
     * @return  value of the Ids property.
     */
    public String getPropertyIds()
    {
        return iPropertyIds.getValue();
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
     * Set the value of the SequenceNumber property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertySequenceNumber(long aValue)
    {
        return setPropertyUint(iPropertySequenceNumber, aValue);
    }

    /**
     * Get a copy of the value of the SequenceNumber property
     *
     * @return  value of the SequenceNumber property.
     */
    public long getPropertySequenceNumber()
    {
        return iPropertySequenceNumber.getValue();
    }

    /**
     * Signal that the action Set is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Set must be overridden if this is called.
     */      
    protected void enableActionSet()
    {
        Action action = new Action("Set");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Id", allowedValues));
        action.addInputParameter(new ParameterString("UserName", allowedValues));
        action.addInputParameter(new ParameterBinary("Password"));
        iDelegateSet = new DoSet();
        enableAction(action, iDelegateSet);
    }

    /**
     * Signal that the action Clear is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Clear must be overridden if this is called.
     */      
    protected void enableActionClear()
    {
        Action action = new Action("Clear");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Id", allowedValues));
        iDelegateClear = new DoClear();
        enableAction(action, iDelegateClear);
    }

    /**
     * Signal that the action SetEnabled is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetEnabled must be overridden if this is called.
     */      
    protected void enableActionSetEnabled()
    {
        Action action = new Action("SetEnabled");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Id", allowedValues));
        action.addInputParameter(new ParameterBool("Enabled"));
        iDelegateSetEnabled = new DoSetEnabled();
        enableAction(action, iDelegateSetEnabled);
    }

    /**
     * Signal that the action Get is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Get must be overridden if this is called.
     */      
    protected void enableActionGet()
    {
        Action action = new Action("Get");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Id", allowedValues));
        action.addOutputParameter(new ParameterString("UserName", allowedValues));
        action.addOutputParameter(new ParameterBinary("Password"));
        action.addOutputParameter(new ParameterBool("Enabled"));
        action.addOutputParameter(new ParameterString("Status", allowedValues));
        action.addOutputParameter(new ParameterString("Data", allowedValues));
        iDelegateGet = new DoGet();
        enableAction(action, iDelegateGet);
    }

    /**
     * Signal that the action Login is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Login must be overridden if this is called.
     */      
    protected void enableActionLogin()
    {
        Action action = new Action("Login");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Id", allowedValues));
        action.addOutputParameter(new ParameterString("Token", allowedValues));
        iDelegateLogin = new DoLogin();
        enableAction(action, iDelegateLogin);
    }

    /**
     * Signal that the action ReLogin is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ReLogin must be overridden if this is called.
     */      
    protected void enableActionReLogin()
    {
        Action action = new Action("ReLogin");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Id", allowedValues));
        action.addInputParameter(new ParameterString("CurrentToken", allowedValues));
        action.addOutputParameter(new ParameterString("NewToken", allowedValues));
        iDelegateReLogin = new DoReLogin();
        enableAction(action, iDelegateReLogin);
    }

    /**
     * Signal that the action GetIds is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetIds must be overridden if this is called.
     */      
    protected void enableActionGetIds()
    {
        Action action = new Action("GetIds");
        action.addOutputParameter(new ParameterRelated("Ids", iPropertyIds));
        iDelegateGetIds = new DoGetIds();
        enableAction(action, iDelegateGetIds);
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
     * Signal that the action GetSequenceNumber is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetSequenceNumber must be overridden if this is called.
     */      
    protected void enableActionGetSequenceNumber()
    {
        Action action = new Action("GetSequenceNumber");
        action.addOutputParameter(new ParameterRelated("SequenceNumber", iPropertySequenceNumber));
        iDelegateGetSequenceNumber = new DoGetSequenceNumber();
        enableAction(action, iDelegateGetSequenceNumber);
    }

    /**
     * Set action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Set action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSet} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aId
     * @param aUserName
     * @param aPassword
     */
    protected void set(IDvInvocation aInvocation, String aId, String aUserName, byte[] aPassword)
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
    protected void clear(IDvInvocation aInvocation, String aId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetEnabled action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetEnabled action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetEnabled} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aId
     * @param aEnabled
     */
    protected void setEnabled(IDvInvocation aInvocation, String aId, boolean aEnabled)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Get action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Get action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGet} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aId
     */
    protected Get get(IDvInvocation aInvocation, String aId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Login action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Login action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionLogin} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aId
     */
    protected String login(IDvInvocation aInvocation, String aId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ReLogin action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ReLogin action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionReLogin} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aId
     * @param aCurrentToken
     */
    protected String reLogin(IDvInvocation aInvocation, String aId, String aCurrentToken)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetIds action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetIds action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetIds} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getIds(IDvInvocation aInvocation)
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
     * GetSequenceNumber action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetSequenceNumber action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetSequenceNumber} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long getSequenceNumber(IDvInvocation aInvocation)
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


    private class DoSet implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String id;
            String userName;
            byte[] password;
            try
            {
                invocation.readStart();
                id = invocation.readString("Id");
                userName = invocation.readString("UserName");
                password = invocation.readBinary("Password");
                invocation.readEnd();
                set(invocation, id, userName, password);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Set");
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
            String id;
            try
            {
                invocation.readStart();
                id = invocation.readString("Id");
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

    private class DoSetEnabled implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String id;
            boolean enabled;
            try
            {
                invocation.readStart();
                id = invocation.readString("Id");
                enabled = invocation.readBool("Enabled");
                invocation.readEnd();
                setEnabled(invocation, id, enabled);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetEnabled");
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

    private class DoGet implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String id;
            String userName;
            byte[] password;
            boolean enabled;
            String status;
            String data;
            try
            {
                invocation.readStart();
                id = invocation.readString("Id");
                invocation.readEnd();

            Get outArgs = get(invocation, id);
            userName = outArgs.getUserName();
            password = outArgs.getPassword();
            enabled = outArgs.getEnabled();
            status = outArgs.getStatus();
            data = outArgs.getData();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Get");
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
                invocation.writeString("UserName", userName);
                invocation.writeBinary("Password", password);
                invocation.writeBool("Enabled", enabled);
                invocation.writeString("Status", status);
                invocation.writeString("Data", data);
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

    private class DoLogin implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String id;
            String token;
            try
            {
                invocation.readStart();
                id = invocation.readString("Id");
                invocation.readEnd();
                 token = login(invocation, id);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Login");
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
                invocation.writeString("Token", token);
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

    private class DoReLogin implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String id;
            String currentToken;
            String newToken;
            try
            {
                invocation.readStart();
                id = invocation.readString("Id");
                currentToken = invocation.readString("CurrentToken");
                invocation.readEnd();
                 newToken = reLogin(invocation, id, currentToken);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ReLogin");
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
                invocation.writeString("NewToken", newToken);
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

    private class DoGetIds implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String ids;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 ids = getIds(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetIds");
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
                invocation.writeString("Ids", ids);
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

    private class DoGetSequenceNumber implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long sequenceNumber;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 sequenceNumber = getSequenceNumber(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetSequenceNumber");
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
                invocation.writeUint("SequenceNumber", sequenceNumber);
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

