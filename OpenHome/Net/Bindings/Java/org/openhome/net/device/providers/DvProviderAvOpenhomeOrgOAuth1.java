package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgOAuth1
{

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
     * Set the value of the UpdateId property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyUpdateId(long aValue);

    /**
     * Get a copy of the value of the UpdateId property
     *
     * @return value of the UpdateId property.
     */
    public long getPropertyUpdateId();

    /**
     * Set the value of the JobUpdateId property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyJobUpdateId(long aValue);

    /**
     * Get a copy of the value of the JobUpdateId property
     *
     * @return value of the JobUpdateId property.
     */
    public long getPropertyJobUpdateId();

    /**
     * Set the value of the SupportedServices property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertySupportedServices(String aValue);

    /**
     * Get a copy of the value of the SupportedServices property
     *
     * @return value of the SupportedServices property.
     */
    public String getPropertySupportedServices();
        
}

/**
 * Provider for the av.openhome.org:OAuth:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgOAuth1 extends DvProvider implements IDvProviderAvOpenhomeOrgOAuth1
{

    public class BeginLimitedInputFlow
    {
        private String iJobId;
        private String iLoginUrl;
        private String iUserCode;

        public BeginLimitedInputFlow(
            String aJobId,
            String aLoginUrl,
            String aUserCode
        )
        {
            iJobId = aJobId;
            iLoginUrl = aLoginUrl;
            iUserCode = aUserCode;
        }
        public String getJobId()
        {
            return iJobId;
        }
        public String getLoginUrl()
        {
            return iLoginUrl;
        }
        public String getUserCode()
        {
            return iUserCode;
        }
    }

    private IDvInvocationListener iDelegateSetToken;
    private IDvInvocationListener iDelegateGetPublicKey;
    private IDvInvocationListener iDelegateClearToken;
    private IDvInvocationListener iDelegateClearShortLivedToken;
    private IDvInvocationListener iDelegateClearLongLivedToken;
    private IDvInvocationListener iDelegateClearShortLivedTokens;
    private IDvInvocationListener iDelegateClearLongLivedTokens;
    private IDvInvocationListener iDelegateClearAllTokens;
    private IDvInvocationListener iDelegateGetUpdateId;
    private IDvInvocationListener iDelegateGetServiceStatus;
    private IDvInvocationListener iDelegateGetJobUpdateId;
    private IDvInvocationListener iDelegateGetJobStatus;
    private IDvInvocationListener iDelegateGetSupportedServices;
    private IDvInvocationListener iDelegateBeginLimitedInputFlow;
    private PropertyString iPropertyPublicKey;
    private PropertyUint iPropertyUpdateId;
    private PropertyUint iPropertyJobUpdateId;
    private PropertyString iPropertySupportedServices;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgOAuth1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "OAuth", 1);
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
     * Enable the UpdateId property.
     */
    public void enablePropertyUpdateId()
    {
        iPropertyUpdateId = new PropertyUint(new ParameterUint("UpdateId"));
        addProperty(iPropertyUpdateId);
    }

    /**
     * Enable the JobUpdateId property.
     */
    public void enablePropertyJobUpdateId()
    {
        iPropertyJobUpdateId = new PropertyUint(new ParameterUint("JobUpdateId"));
        addProperty(iPropertyJobUpdateId);
    }

    /**
     * Enable the SupportedServices property.
     */
    public void enablePropertySupportedServices()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertySupportedServices = new PropertyString(new ParameterString("SupportedServices", allowedValues));
        addProperty(iPropertySupportedServices);
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
     * Set the value of the UpdateId property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyUpdateId(long aValue)
    {
        return setPropertyUint(iPropertyUpdateId, aValue);
    }

    /**
     * Get a copy of the value of the UpdateId property
     *
     * @return  value of the UpdateId property.
     */
    public long getPropertyUpdateId()
    {
        return iPropertyUpdateId.getValue();
    }

    /**
     * Set the value of the JobUpdateId property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyJobUpdateId(long aValue)
    {
        return setPropertyUint(iPropertyJobUpdateId, aValue);
    }

    /**
     * Get a copy of the value of the JobUpdateId property
     *
     * @return  value of the JobUpdateId property.
     */
    public long getPropertyJobUpdateId()
    {
        return iPropertyJobUpdateId.getValue();
    }

    /**
     * Set the value of the SupportedServices property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertySupportedServices(String aValue)
    {
        return setPropertyString(iPropertySupportedServices, aValue);
    }

    /**
     * Get a copy of the value of the SupportedServices property
     *
     * @return  value of the SupportedServices property.
     */
    public String getPropertySupportedServices()
    {
        return iPropertySupportedServices.getValue();
    }

    /**
     * Signal that the action SetToken is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetToken must be overridden if this is called.
     */      
    protected void enableActionSetToken()
    {
        Action action = new Action("SetToken");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ServiceId", allowedValues));
        action.addInputParameter(new ParameterString("TokenId", allowedValues));
        action.addInputParameter(new ParameterBinary("AesKeyRsaEncrypted"));
        action.addInputParameter(new ParameterBinary("InitVectorRsaEncrypted"));
        action.addInputParameter(new ParameterBinary("TokenAesEncrypted"));
        action.addInputParameter(new ParameterBool("IsLongLived"));
        iDelegateSetToken = new DoSetToken();
        enableAction(action, iDelegateSetToken);
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
     * Signal that the action ClearToken is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ClearToken must be overridden if this is called.
     */      
    protected void enableActionClearToken()
    {
        Action action = new Action("ClearToken");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ServiceId", allowedValues));
        action.addInputParameter(new ParameterString("TokenId", allowedValues));
        iDelegateClearToken = new DoClearToken();
        enableAction(action, iDelegateClearToken);
    }

    /**
     * Signal that the action ClearShortLivedToken is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ClearShortLivedToken must be overridden if this is called.
     */      
    protected void enableActionClearShortLivedToken()
    {
        Action action = new Action("ClearShortLivedToken");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ServiceId", allowedValues));
        action.addInputParameter(new ParameterString("TokenId", allowedValues));
        iDelegateClearShortLivedToken = new DoClearShortLivedToken();
        enableAction(action, iDelegateClearShortLivedToken);
    }

    /**
     * Signal that the action ClearLongLivedToken is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ClearLongLivedToken must be overridden if this is called.
     */      
    protected void enableActionClearLongLivedToken()
    {
        Action action = new Action("ClearLongLivedToken");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ServiceId", allowedValues));
        action.addInputParameter(new ParameterString("TokenId", allowedValues));
        iDelegateClearLongLivedToken = new DoClearLongLivedToken();
        enableAction(action, iDelegateClearLongLivedToken);
    }

    /**
     * Signal that the action ClearShortLivedTokens is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ClearShortLivedTokens must be overridden if this is called.
     */      
    protected void enableActionClearShortLivedTokens()
    {
        Action action = new Action("ClearShortLivedTokens");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ServiceId", allowedValues));
        iDelegateClearShortLivedTokens = new DoClearShortLivedTokens();
        enableAction(action, iDelegateClearShortLivedTokens);
    }

    /**
     * Signal that the action ClearLongLivedTokens is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ClearLongLivedTokens must be overridden if this is called.
     */      
    protected void enableActionClearLongLivedTokens()
    {
        Action action = new Action("ClearLongLivedTokens");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ServiceId", allowedValues));
        iDelegateClearLongLivedTokens = new DoClearLongLivedTokens();
        enableAction(action, iDelegateClearLongLivedTokens);
    }

    /**
     * Signal that the action ClearAllTokens is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ClearAllTokens must be overridden if this is called.
     */      
    protected void enableActionClearAllTokens()
    {
        Action action = new Action("ClearAllTokens");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ServiceId", allowedValues));
        iDelegateClearAllTokens = new DoClearAllTokens();
        enableAction(action, iDelegateClearAllTokens);
    }

    /**
     * Signal that the action GetUpdateId is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetUpdateId must be overridden if this is called.
     */      
    protected void enableActionGetUpdateId()
    {
        Action action = new Action("GetUpdateId");
        action.addOutputParameter(new ParameterRelated("UpdateId", iPropertyUpdateId));
        iDelegateGetUpdateId = new DoGetUpdateId();
        enableAction(action, iDelegateGetUpdateId);
    }

    /**
     * Signal that the action GetServiceStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetServiceStatus must be overridden if this is called.
     */      
    protected void enableActionGetServiceStatus()
    {
        Action action = new Action("GetServiceStatus");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("ServiceStatusJson", allowedValues));
        iDelegateGetServiceStatus = new DoGetServiceStatus();
        enableAction(action, iDelegateGetServiceStatus);
    }

    /**
     * Signal that the action GetJobUpdateId is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetJobUpdateId must be overridden if this is called.
     */      
    protected void enableActionGetJobUpdateId()
    {
        Action action = new Action("GetJobUpdateId");
        action.addOutputParameter(new ParameterRelated("JobUpdateId", iPropertyJobUpdateId));
        iDelegateGetJobUpdateId = new DoGetJobUpdateId();
        enableAction(action, iDelegateGetJobUpdateId);
    }

    /**
     * Signal that the action GetJobStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetJobStatus must be overridden if this is called.
     */      
    protected void enableActionGetJobStatus()
    {
        Action action = new Action("GetJobStatus");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("JobStatusJson", allowedValues));
        iDelegateGetJobStatus = new DoGetJobStatus();
        enableAction(action, iDelegateGetJobStatus);
    }

    /**
     * Signal that the action GetSupportedServices is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetSupportedServices must be overridden if this is called.
     */      
    protected void enableActionGetSupportedServices()
    {
        Action action = new Action("GetSupportedServices");
        action.addOutputParameter(new ParameterRelated("SupportedServiceListJson", iPropertySupportedServices));
        iDelegateGetSupportedServices = new DoGetSupportedServices();
        enableAction(action, iDelegateGetSupportedServices);
    }

    /**
     * Signal that the action BeginLimitedInputFlow is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * BeginLimitedInputFlow must be overridden if this is called.
     */      
    protected void enableActionBeginLimitedInputFlow()
    {
        Action action = new Action("BeginLimitedInputFlow");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ServiceId", allowedValues));
        action.addOutputParameter(new ParameterString("JobId", allowedValues));
        action.addOutputParameter(new ParameterString("LoginUrl", allowedValues));
        action.addOutputParameter(new ParameterString("UserCode", allowedValues));
        iDelegateBeginLimitedInputFlow = new DoBeginLimitedInputFlow();
        enableAction(action, iDelegateBeginLimitedInputFlow);
    }

    /**
     * SetToken action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetToken action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetToken} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aServiceId
     * @param aTokenId
     * @param aAesKeyRsaEncrypted
     * @param aInitVectorRsaEncrypted
     * @param aTokenAesEncrypted
     * @param aIsLongLived
     */
    protected void setToken(IDvInvocation aInvocation, String aServiceId, String aTokenId, byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, boolean aIsLongLived)
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
     * ClearToken action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ClearToken action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionClearToken} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aServiceId
     * @param aTokenId
     */
    protected void clearToken(IDvInvocation aInvocation, String aServiceId, String aTokenId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ClearShortLivedToken action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ClearShortLivedToken action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionClearShortLivedToken} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aServiceId
     * @param aTokenId
     */
    protected void clearShortLivedToken(IDvInvocation aInvocation, String aServiceId, String aTokenId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ClearLongLivedToken action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ClearLongLivedToken action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionClearLongLivedToken} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aServiceId
     * @param aTokenId
     */
    protected void clearLongLivedToken(IDvInvocation aInvocation, String aServiceId, String aTokenId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ClearShortLivedTokens action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ClearShortLivedTokens action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionClearShortLivedTokens} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aServiceId
     */
    protected void clearShortLivedTokens(IDvInvocation aInvocation, String aServiceId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ClearLongLivedTokens action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ClearLongLivedTokens action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionClearLongLivedTokens} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aServiceId
     */
    protected void clearLongLivedTokens(IDvInvocation aInvocation, String aServiceId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ClearAllTokens action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ClearAllTokens action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionClearAllTokens} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aServiceId
     */
    protected void clearAllTokens(IDvInvocation aInvocation, String aServiceId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetUpdateId action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetUpdateId action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetUpdateId} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long getUpdateId(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetServiceStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetServiceStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetServiceStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getServiceStatus(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetJobUpdateId action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetJobUpdateId action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetJobUpdateId} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long getJobUpdateId(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetJobStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetJobStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetJobStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getJobStatus(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetSupportedServices action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetSupportedServices action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetSupportedServices} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getSupportedServices(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * BeginLimitedInputFlow action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * BeginLimitedInputFlow action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionBeginLimitedInputFlow} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aServiceId
     */
    protected BeginLimitedInputFlow beginLimitedInputFlow(IDvInvocation aInvocation, String aServiceId)
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


    private class DoSetToken implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String serviceId;
            String tokenId;
            byte[] aesKeyRsaEncrypted;
            byte[] initVectorRsaEncrypted;
            byte[] tokenAesEncrypted;
            boolean isLongLived;
            try
            {
                invocation.readStart();
                serviceId = invocation.readString("ServiceId");
                tokenId = invocation.readString("TokenId");
                aesKeyRsaEncrypted = invocation.readBinary("AesKeyRsaEncrypted");
                initVectorRsaEncrypted = invocation.readBinary("InitVectorRsaEncrypted");
                tokenAesEncrypted = invocation.readBinary("TokenAesEncrypted");
                isLongLived = invocation.readBool("IsLongLived");
                invocation.readEnd();
                setToken(invocation, serviceId, tokenId, aesKeyRsaEncrypted, initVectorRsaEncrypted, tokenAesEncrypted, isLongLived);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetToken");
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

    private class DoClearToken implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String serviceId;
            String tokenId;
            try
            {
                invocation.readStart();
                serviceId = invocation.readString("ServiceId");
                tokenId = invocation.readString("TokenId");
                invocation.readEnd();
                clearToken(invocation, serviceId, tokenId);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ClearToken");
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

    private class DoClearShortLivedToken implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String serviceId;
            String tokenId;
            try
            {
                invocation.readStart();
                serviceId = invocation.readString("ServiceId");
                tokenId = invocation.readString("TokenId");
                invocation.readEnd();
                clearShortLivedToken(invocation, serviceId, tokenId);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ClearShortLivedToken");
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

    private class DoClearLongLivedToken implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String serviceId;
            String tokenId;
            try
            {
                invocation.readStart();
                serviceId = invocation.readString("ServiceId");
                tokenId = invocation.readString("TokenId");
                invocation.readEnd();
                clearLongLivedToken(invocation, serviceId, tokenId);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ClearLongLivedToken");
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

    private class DoClearShortLivedTokens implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String serviceId;
            try
            {
                invocation.readStart();
                serviceId = invocation.readString("ServiceId");
                invocation.readEnd();
                clearShortLivedTokens(invocation, serviceId);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ClearShortLivedTokens");
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

    private class DoClearLongLivedTokens implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String serviceId;
            try
            {
                invocation.readStart();
                serviceId = invocation.readString("ServiceId");
                invocation.readEnd();
                clearLongLivedTokens(invocation, serviceId);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ClearLongLivedTokens");
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

    private class DoClearAllTokens implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String serviceId;
            try
            {
                invocation.readStart();
                serviceId = invocation.readString("ServiceId");
                invocation.readEnd();
                clearAllTokens(invocation, serviceId);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ClearAllTokens");
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

    private class DoGetUpdateId implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long updateId;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 updateId = getUpdateId(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetUpdateId");
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
                invocation.writeUint("UpdateId", updateId);
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

    private class DoGetServiceStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String serviceStatusJson;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 serviceStatusJson = getServiceStatus(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetServiceStatus");
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
                invocation.writeString("ServiceStatusJson", serviceStatusJson);
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

    private class DoGetJobUpdateId implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long jobUpdateId;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 jobUpdateId = getJobUpdateId(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetJobUpdateId");
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
                invocation.writeUint("JobUpdateId", jobUpdateId);
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

    private class DoGetJobStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String jobStatusJson;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 jobStatusJson = getJobStatus(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetJobStatus");
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
                invocation.writeString("JobStatusJson", jobStatusJson);
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

    private class DoGetSupportedServices implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String supportedServiceListJson;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 supportedServiceListJson = getSupportedServices(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetSupportedServices");
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
                invocation.writeString("SupportedServiceListJson", supportedServiceListJson);
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

    private class DoBeginLimitedInputFlow implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String serviceId;
            String jobId;
            String loginUrl;
            String userCode;
            try
            {
                invocation.readStart();
                serviceId = invocation.readString("ServiceId");
                invocation.readEnd();

            BeginLimitedInputFlow outArgs = beginLimitedInputFlow(invocation, serviceId);
            jobId = outArgs.getJobId();
            loginUrl = outArgs.getLoginUrl();
            userCode = outArgs.getUserCode();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "BeginLimitedInputFlow");
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
                invocation.writeString("JobId", jobId);
                invocation.writeString("LoginUrl", loginUrl);
                invocation.writeString("UserCode", userCode);
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

