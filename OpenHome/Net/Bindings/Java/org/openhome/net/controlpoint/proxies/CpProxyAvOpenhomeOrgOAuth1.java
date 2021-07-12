package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgOAuth1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgOAuth1 extends ICpProxy
{
    public void syncSetToken(String aServiceId, String aTokenId, byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, boolean aIsLongLived);
    public void beginSetToken(String aServiceId, String aTokenId, byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, boolean aIsLongLived, ICpProxyListener aCallback);
    public void endSetToken(long aAsyncHandle);
    public String syncGetPublicKey();
    public void beginGetPublicKey(ICpProxyListener aCallback);
    public String endGetPublicKey(long aAsyncHandle);
    public void syncClearToken(String aServiceId, String aTokenId);
    public void beginClearToken(String aServiceId, String aTokenId, ICpProxyListener aCallback);
    public void endClearToken(long aAsyncHandle);
    public void syncClearShortLivedToken(String aServiceId, String aTokenId);
    public void beginClearShortLivedToken(String aServiceId, String aTokenId, ICpProxyListener aCallback);
    public void endClearShortLivedToken(long aAsyncHandle);
    public void syncClearLongLivedToken(String aServiceId, String aTokenId);
    public void beginClearLongLivedToken(String aServiceId, String aTokenId, ICpProxyListener aCallback);
    public void endClearLongLivedToken(long aAsyncHandle);
    public void syncClearShortLivedTokens(String aServiceId);
    public void beginClearShortLivedTokens(String aServiceId, ICpProxyListener aCallback);
    public void endClearShortLivedTokens(long aAsyncHandle);
    public void syncClearLongLivedTokens(String aServiceId);
    public void beginClearLongLivedTokens(String aServiceId, ICpProxyListener aCallback);
    public void endClearLongLivedTokens(long aAsyncHandle);
    public void syncClearAllTokens(String aServiceId);
    public void beginClearAllTokens(String aServiceId, ICpProxyListener aCallback);
    public void endClearAllTokens(long aAsyncHandle);
    public long syncGetUpdateId();
    public void beginGetUpdateId(ICpProxyListener aCallback);
    public long endGetUpdateId(long aAsyncHandle);
    public String syncGetServiceStatus();
    public void beginGetServiceStatus(ICpProxyListener aCallback);
    public String endGetServiceStatus(long aAsyncHandle);
    public long syncGetJobUpdateId();
    public void beginGetJobUpdateId(ICpProxyListener aCallback);
    public long endGetJobUpdateId(long aAsyncHandle);
    public String syncGetJobStatus();
    public void beginGetJobStatus(ICpProxyListener aCallback);
    public String endGetJobStatus(long aAsyncHandle);
    public String syncGetSupportedServices();
    public void beginGetSupportedServices(ICpProxyListener aCallback);
    public String endGetSupportedServices(long aAsyncHandle);
    public BeginLimitedInputFlow syncBeginLimitedInputFlow(String aServiceId);
    public void beginBeginLimitedInputFlow(String aServiceId, ICpProxyListener aCallback);
    public BeginLimitedInputFlow endBeginLimitedInputFlow(long aAsyncHandle);
    public void setPropertyPublicKeyChanged(IPropertyChangeListener aPublicKeyChanged);
    public String getPropertyPublicKey();
    public void setPropertyUpdateIdChanged(IPropertyChangeListener aUpdateIdChanged);
    public long getPropertyUpdateId();
    public void setPropertyJobUpdateIdChanged(IPropertyChangeListener aJobUpdateIdChanged);
    public long getPropertyJobUpdateId();
    public void setPropertySupportedServicesChanged(IPropertyChangeListener aSupportedServicesChanged);
    public String getPropertySupportedServices();
}

class SyncSetTokenAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;

    public SyncSetTokenAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetToken(aAsyncHandle);
        
    }
}

class SyncGetPublicKeyAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;
    private String iPublicKey;

    public SyncGetPublicKeyAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    public String getPublicKey()
    {
        return iPublicKey;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetPublicKey(aAsyncHandle);
        
        iPublicKey = result;
    }
}

class SyncClearTokenAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;

    public SyncClearTokenAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endClearToken(aAsyncHandle);
        
    }
}

class SyncClearShortLivedTokenAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;

    public SyncClearShortLivedTokenAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endClearShortLivedToken(aAsyncHandle);
        
    }
}

class SyncClearLongLivedTokenAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;

    public SyncClearLongLivedTokenAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endClearLongLivedToken(aAsyncHandle);
        
    }
}

class SyncClearShortLivedTokensAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;

    public SyncClearShortLivedTokensAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endClearShortLivedTokens(aAsyncHandle);
        
    }
}

class SyncClearLongLivedTokensAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;

    public SyncClearLongLivedTokensAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endClearLongLivedTokens(aAsyncHandle);
        
    }
}

class SyncClearAllTokensAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;

    public SyncClearAllTokensAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endClearAllTokens(aAsyncHandle);
        
    }
}

class SyncGetUpdateIdAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;
    private long iUpdateId;

    public SyncGetUpdateIdAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    public long getUpdateId()
    {
        return iUpdateId;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetUpdateId(aAsyncHandle);
        
        iUpdateId = result;
    }
}

class SyncGetServiceStatusAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;
    private String iServiceStatusJson;

    public SyncGetServiceStatusAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    public String getServiceStatusJson()
    {
        return iServiceStatusJson;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetServiceStatus(aAsyncHandle);
        
        iServiceStatusJson = result;
    }
}

class SyncGetJobUpdateIdAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;
    private long iJobUpdateId;

    public SyncGetJobUpdateIdAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    public long getJobUpdateId()
    {
        return iJobUpdateId;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetJobUpdateId(aAsyncHandle);
        
        iJobUpdateId = result;
    }
}

class SyncGetJobStatusAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;
    private String iJobStatusJson;

    public SyncGetJobStatusAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    public String getJobStatusJson()
    {
        return iJobStatusJson;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetJobStatus(aAsyncHandle);
        
        iJobStatusJson = result;
    }
}

class SyncGetSupportedServicesAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;
    private String iSupportedServiceListJson;

    public SyncGetSupportedServicesAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
    }
    public String getSupportedServiceListJson()
    {
        return iSupportedServiceListJson;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetSupportedServices(aAsyncHandle);
        
        iSupportedServiceListJson = result;
    }
}

class SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgOAuth1 iService;
    private String iJobId;
    private String iLoginUrl;
    private String iUserCode;

    public SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
    {
        iService = aProxy;
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
    protected void completeRequest(long aAsyncHandle)
    {
        BeginLimitedInputFlow result = iService.endBeginLimitedInputFlow(aAsyncHandle);
        
        iJobId = result.getJobId();
        iLoginUrl = result.getLoginUrl();
        iUserCode = result.getUserCode();
    }
}

/**
 * Proxy for the av.openhome.org:OAuth:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgOAuth1 extends CpProxy implements ICpProxyAvOpenhomeOrgOAuth1
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

    private Action iActionSetToken;
    private Action iActionGetPublicKey;
    private Action iActionClearToken;
    private Action iActionClearShortLivedToken;
    private Action iActionClearLongLivedToken;
    private Action iActionClearShortLivedTokens;
    private Action iActionClearLongLivedTokens;
    private Action iActionClearAllTokens;
    private Action iActionGetUpdateId;
    private Action iActionGetServiceStatus;
    private Action iActionGetJobUpdateId;
    private Action iActionGetJobStatus;
    private Action iActionGetSupportedServices;
    private Action iActionBeginLimitedInputFlow;
    private PropertyString iPublicKey;
    private PropertyUint iUpdateId;
    private PropertyUint iJobUpdateId;
    private PropertyString iSupportedServices;
    private IPropertyChangeListener iPublicKeyChanged;
    private IPropertyChangeListener iUpdateIdChanged;
    private IPropertyChangeListener iJobUpdateIdChanged;
    private IPropertyChangeListener iSupportedServicesChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgOAuth1(CpDevice aDevice)
    {
        super("av-openhome-org", "OAuth", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionSetToken = new Action("SetToken");
        param = new ParameterString("ServiceId", allowedValues);
        iActionSetToken.addInputParameter(param);
        param = new ParameterString("TokenId", allowedValues);
        iActionSetToken.addInputParameter(param);
        param = new ParameterBinary("AesKeyRsaEncrypted");
        iActionSetToken.addInputParameter(param);
        param = new ParameterBinary("InitVectorRsaEncrypted");
        iActionSetToken.addInputParameter(param);
        param = new ParameterBinary("TokenAesEncrypted");
        iActionSetToken.addInputParameter(param);
        param = new ParameterBool("IsLongLived");
        iActionSetToken.addInputParameter(param);

        iActionGetPublicKey = new Action("GetPublicKey");
        param = new ParameterString("PublicKey", allowedValues);
        iActionGetPublicKey.addOutputParameter(param);

        iActionClearToken = new Action("ClearToken");
        param = new ParameterString("ServiceId", allowedValues);
        iActionClearToken.addInputParameter(param);
        param = new ParameterString("TokenId", allowedValues);
        iActionClearToken.addInputParameter(param);

        iActionClearShortLivedToken = new Action("ClearShortLivedToken");
        param = new ParameterString("ServiceId", allowedValues);
        iActionClearShortLivedToken.addInputParameter(param);
        param = new ParameterString("TokenId", allowedValues);
        iActionClearShortLivedToken.addInputParameter(param);

        iActionClearLongLivedToken = new Action("ClearLongLivedToken");
        param = new ParameterString("ServiceId", allowedValues);
        iActionClearLongLivedToken.addInputParameter(param);
        param = new ParameterString("TokenId", allowedValues);
        iActionClearLongLivedToken.addInputParameter(param);

        iActionClearShortLivedTokens = new Action("ClearShortLivedTokens");
        param = new ParameterString("ServiceId", allowedValues);
        iActionClearShortLivedTokens.addInputParameter(param);

        iActionClearLongLivedTokens = new Action("ClearLongLivedTokens");
        param = new ParameterString("ServiceId", allowedValues);
        iActionClearLongLivedTokens.addInputParameter(param);

        iActionClearAllTokens = new Action("ClearAllTokens");
        param = new ParameterString("ServiceId", allowedValues);
        iActionClearAllTokens.addInputParameter(param);

        iActionGetUpdateId = new Action("GetUpdateId");
        param = new ParameterUint("UpdateId");
        iActionGetUpdateId.addOutputParameter(param);

        iActionGetServiceStatus = new Action("GetServiceStatus");
        param = new ParameterString("ServiceStatusJson", allowedValues);
        iActionGetServiceStatus.addOutputParameter(param);

        iActionGetJobUpdateId = new Action("GetJobUpdateId");
        param = new ParameterUint("JobUpdateId");
        iActionGetJobUpdateId.addOutputParameter(param);

        iActionGetJobStatus = new Action("GetJobStatus");
        param = new ParameterString("JobStatusJson", allowedValues);
        iActionGetJobStatus.addOutputParameter(param);

        iActionGetSupportedServices = new Action("GetSupportedServices");
        param = new ParameterString("SupportedServiceListJson", allowedValues);
        iActionGetSupportedServices.addOutputParameter(param);

        iActionBeginLimitedInputFlow = new Action("BeginLimitedInputFlow");
        param = new ParameterString("ServiceId", allowedValues);
        iActionBeginLimitedInputFlow.addInputParameter(param);
        param = new ParameterString("JobId", allowedValues);
        iActionBeginLimitedInputFlow.addOutputParameter(param);
        param = new ParameterString("LoginUrl", allowedValues);
        iActionBeginLimitedInputFlow.addOutputParameter(param);
        param = new ParameterString("UserCode", allowedValues);
        iActionBeginLimitedInputFlow.addOutputParameter(param);

        iPublicKeyChanged = new PropertyChangeListener();
        iPublicKey = new PropertyString("PublicKey",
            new PropertyChangeListener() {
                public void notifyChange() {
                    publicKeyPropertyChanged();
                }
            }
        );
        addProperty(iPublicKey);
        iUpdateIdChanged = new PropertyChangeListener();
        iUpdateId = new PropertyUint("UpdateId",
            new PropertyChangeListener() {
                public void notifyChange() {
                    updateIdPropertyChanged();
                }
            }
        );
        addProperty(iUpdateId);
        iJobUpdateIdChanged = new PropertyChangeListener();
        iJobUpdateId = new PropertyUint("JobUpdateId",
            new PropertyChangeListener() {
                public void notifyChange() {
                    jobUpdateIdPropertyChanged();
                }
            }
        );
        addProperty(iJobUpdateId);
        iSupportedServicesChanged = new PropertyChangeListener();
        iSupportedServices = new PropertyString("SupportedServices",
            new PropertyChangeListener() {
                public void notifyChange() {
                    supportedServicesPropertyChanged();
                }
            }
        );
        addProperty(iSupportedServices);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetToken(String aServiceId, String aTokenId, byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, boolean aIsLongLived)
    {
        SyncSetTokenAvOpenhomeOrgOAuth1 sync = new SyncSetTokenAvOpenhomeOrgOAuth1(this);
        beginSetToken(aServiceId, aTokenId, aAesKeyRsaEncrypted, aInitVectorRsaEncrypted, aTokenAesEncrypted, aIsLongLived, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetToken}.
     * 
     * @param aServiceId
     * @param aTokenId
     * @param aAesKeyRsaEncrypted
     * @param aInitVectorRsaEncrypted
     * @param aTokenAesEncrypted
     * @param aIsLongLived
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetToken(String aServiceId, String aTokenId, byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, boolean aIsLongLived, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetToken, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetToken.getInputParameter(inIndex++), aServiceId));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetToken.getInputParameter(inIndex++), aTokenId));
        invocation.addInput(new ArgumentBinary((ParameterBinary)iActionSetToken.getInputParameter(inIndex++), aAesKeyRsaEncrypted));
        invocation.addInput(new ArgumentBinary((ParameterBinary)iActionSetToken.getInputParameter(inIndex++), aInitVectorRsaEncrypted));
        invocation.addInput(new ArgumentBinary((ParameterBinary)iActionSetToken.getInputParameter(inIndex++), aTokenAesEncrypted));
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetToken.getInputParameter(inIndex++), aIsLongLived));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetToken} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetToken} method.
     */
    public void endSetToken(long aAsyncHandle)
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
    public String syncGetPublicKey()
    {
        SyncGetPublicKeyAvOpenhomeOrgOAuth1 sync = new SyncGetPublicKeyAvOpenhomeOrgOAuth1(this);
        beginGetPublicKey(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getPublicKey();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetPublicKey}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetPublicKey(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetPublicKey, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetPublicKey.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetPublicKey} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetPublicKey} method.
     * @return the result of the previously invoked action.
     */
    public String endGetPublicKey(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String publicKey = Invocation.getOutputString(aAsyncHandle, index++);
        return publicKey;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncClearToken(String aServiceId, String aTokenId)
    {
        SyncClearTokenAvOpenhomeOrgOAuth1 sync = new SyncClearTokenAvOpenhomeOrgOAuth1(this);
        beginClearToken(aServiceId, aTokenId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endClearToken}.
     * 
     * @param aServiceId
     * @param aTokenId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginClearToken(String aServiceId, String aTokenId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionClearToken, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionClearToken.getInputParameter(inIndex++), aServiceId));
        invocation.addInput(new ArgumentString((ParameterString)iActionClearToken.getInputParameter(inIndex++), aTokenId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginClearToken} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginClearToken} method.
     */
    public void endClearToken(long aAsyncHandle)
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
     */
    public void syncClearShortLivedToken(String aServiceId, String aTokenId)
    {
        SyncClearShortLivedTokenAvOpenhomeOrgOAuth1 sync = new SyncClearShortLivedTokenAvOpenhomeOrgOAuth1(this);
        beginClearShortLivedToken(aServiceId, aTokenId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endClearShortLivedToken}.
     * 
     * @param aServiceId
     * @param aTokenId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginClearShortLivedToken(String aServiceId, String aTokenId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionClearShortLivedToken, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionClearShortLivedToken.getInputParameter(inIndex++), aServiceId));
        invocation.addInput(new ArgumentString((ParameterString)iActionClearShortLivedToken.getInputParameter(inIndex++), aTokenId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginClearShortLivedToken} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginClearShortLivedToken} method.
     */
    public void endClearShortLivedToken(long aAsyncHandle)
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
     */
    public void syncClearLongLivedToken(String aServiceId, String aTokenId)
    {
        SyncClearLongLivedTokenAvOpenhomeOrgOAuth1 sync = new SyncClearLongLivedTokenAvOpenhomeOrgOAuth1(this);
        beginClearLongLivedToken(aServiceId, aTokenId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endClearLongLivedToken}.
     * 
     * @param aServiceId
     * @param aTokenId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginClearLongLivedToken(String aServiceId, String aTokenId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionClearLongLivedToken, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionClearLongLivedToken.getInputParameter(inIndex++), aServiceId));
        invocation.addInput(new ArgumentString((ParameterString)iActionClearLongLivedToken.getInputParameter(inIndex++), aTokenId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginClearLongLivedToken} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginClearLongLivedToken} method.
     */
    public void endClearLongLivedToken(long aAsyncHandle)
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
     */
    public void syncClearShortLivedTokens(String aServiceId)
    {
        SyncClearShortLivedTokensAvOpenhomeOrgOAuth1 sync = new SyncClearShortLivedTokensAvOpenhomeOrgOAuth1(this);
        beginClearShortLivedTokens(aServiceId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endClearShortLivedTokens}.
     * 
     * @param aServiceId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginClearShortLivedTokens(String aServiceId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionClearShortLivedTokens, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionClearShortLivedTokens.getInputParameter(inIndex++), aServiceId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginClearShortLivedTokens} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginClearShortLivedTokens} method.
     */
    public void endClearShortLivedTokens(long aAsyncHandle)
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
     */
    public void syncClearLongLivedTokens(String aServiceId)
    {
        SyncClearLongLivedTokensAvOpenhomeOrgOAuth1 sync = new SyncClearLongLivedTokensAvOpenhomeOrgOAuth1(this);
        beginClearLongLivedTokens(aServiceId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endClearLongLivedTokens}.
     * 
     * @param aServiceId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginClearLongLivedTokens(String aServiceId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionClearLongLivedTokens, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionClearLongLivedTokens.getInputParameter(inIndex++), aServiceId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginClearLongLivedTokens} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginClearLongLivedTokens} method.
     */
    public void endClearLongLivedTokens(long aAsyncHandle)
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
     */
    public void syncClearAllTokens(String aServiceId)
    {
        SyncClearAllTokensAvOpenhomeOrgOAuth1 sync = new SyncClearAllTokensAvOpenhomeOrgOAuth1(this);
        beginClearAllTokens(aServiceId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endClearAllTokens}.
     * 
     * @param aServiceId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginClearAllTokens(String aServiceId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionClearAllTokens, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionClearAllTokens.getInputParameter(inIndex++), aServiceId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginClearAllTokens} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginClearAllTokens} method.
     */
    public void endClearAllTokens(long aAsyncHandle)
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
    public long syncGetUpdateId()
    {
        SyncGetUpdateIdAvOpenhomeOrgOAuth1 sync = new SyncGetUpdateIdAvOpenhomeOrgOAuth1(this);
        beginGetUpdateId(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getUpdateId();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetUpdateId}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetUpdateId(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetUpdateId, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetUpdateId.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetUpdateId} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetUpdateId} method.
     * @return the result of the previously invoked action.
     */
    public long endGetUpdateId(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long updateId = Invocation.getOutputUint(aAsyncHandle, index++);
        return updateId;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetServiceStatus()
    {
        SyncGetServiceStatusAvOpenhomeOrgOAuth1 sync = new SyncGetServiceStatusAvOpenhomeOrgOAuth1(this);
        beginGetServiceStatus(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getServiceStatusJson();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetServiceStatus}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetServiceStatus(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetServiceStatus, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetServiceStatus.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetServiceStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetServiceStatus} method.
     * @return the result of the previously invoked action.
     */
    public String endGetServiceStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String serviceStatusJson = Invocation.getOutputString(aAsyncHandle, index++);
        return serviceStatusJson;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncGetJobUpdateId()
    {
        SyncGetJobUpdateIdAvOpenhomeOrgOAuth1 sync = new SyncGetJobUpdateIdAvOpenhomeOrgOAuth1(this);
        beginGetJobUpdateId(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getJobUpdateId();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetJobUpdateId}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetJobUpdateId(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetJobUpdateId, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetJobUpdateId.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetJobUpdateId} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetJobUpdateId} method.
     * @return the result of the previously invoked action.
     */
    public long endGetJobUpdateId(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long jobUpdateId = Invocation.getOutputUint(aAsyncHandle, index++);
        return jobUpdateId;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetJobStatus()
    {
        SyncGetJobStatusAvOpenhomeOrgOAuth1 sync = new SyncGetJobStatusAvOpenhomeOrgOAuth1(this);
        beginGetJobStatus(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getJobStatusJson();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetJobStatus}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetJobStatus(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetJobStatus, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetJobStatus.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetJobStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetJobStatus} method.
     * @return the result of the previously invoked action.
     */
    public String endGetJobStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String jobStatusJson = Invocation.getOutputString(aAsyncHandle, index++);
        return jobStatusJson;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetSupportedServices()
    {
        SyncGetSupportedServicesAvOpenhomeOrgOAuth1 sync = new SyncGetSupportedServicesAvOpenhomeOrgOAuth1(this);
        beginGetSupportedServices(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSupportedServiceListJson();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetSupportedServices}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetSupportedServices(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetSupportedServices, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetSupportedServices.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetSupportedServices} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetSupportedServices} method.
     * @return the result of the previously invoked action.
     */
    public String endGetSupportedServices(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String supportedServiceListJson = Invocation.getOutputString(aAsyncHandle, index++);
        return supportedServiceListJson;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public BeginLimitedInputFlow syncBeginLimitedInputFlow(String aServiceId)
    {
        SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1 sync = new SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1(this);
        beginBeginLimitedInputFlow(aServiceId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new BeginLimitedInputFlow(
            sync.getJobId(),
            sync.getLoginUrl(),
            sync.getUserCode()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endBeginLimitedInputFlow}.
     * 
     * @param aServiceId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginBeginLimitedInputFlow(String aServiceId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionBeginLimitedInputFlow, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionBeginLimitedInputFlow.getInputParameter(inIndex++), aServiceId));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionBeginLimitedInputFlow.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionBeginLimitedInputFlow.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionBeginLimitedInputFlow.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginBeginLimitedInputFlow} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginBeginLimitedInputFlow} method.
     * @return the result of the previously invoked action.
     */
    public BeginLimitedInputFlow endBeginLimitedInputFlow(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String jobId = Invocation.getOutputString(aAsyncHandle, index++);
        String loginUrl = Invocation.getOutputString(aAsyncHandle, index++);
        String userCode = Invocation.getOutputString(aAsyncHandle, index++);
        return new BeginLimitedInputFlow(
            jobId,
            loginUrl,
            userCode
        );
    }
        
    /**
     * Set a delegate to be run when the PublicKey state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgOAuth1 instance will not overlap.
     *
     * @param aPublicKeyChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyPublicKeyChanged(IPropertyChangeListener aPublicKeyChanged)
    {
        synchronized (iPropertyLock)
        {
            iPublicKeyChanged = aPublicKeyChanged;
        }
    }

    private void publicKeyPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iPublicKeyChanged);
        }
    }
    /**
     * Set a delegate to be run when the UpdateId state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgOAuth1 instance will not overlap.
     *
     * @param aUpdateIdChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyUpdateIdChanged(IPropertyChangeListener aUpdateIdChanged)
    {
        synchronized (iPropertyLock)
        {
            iUpdateIdChanged = aUpdateIdChanged;
        }
    }

    private void updateIdPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iUpdateIdChanged);
        }
    }
    /**
     * Set a delegate to be run when the JobUpdateId state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgOAuth1 instance will not overlap.
     *
     * @param aJobUpdateIdChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyJobUpdateIdChanged(IPropertyChangeListener aJobUpdateIdChanged)
    {
        synchronized (iPropertyLock)
        {
            iJobUpdateIdChanged = aJobUpdateIdChanged;
        }
    }

    private void jobUpdateIdPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iJobUpdateIdChanged);
        }
    }
    /**
     * Set a delegate to be run when the SupportedServices state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgOAuth1 instance will not overlap.
     *
     * @param aSupportedServicesChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertySupportedServicesChanged(IPropertyChangeListener aSupportedServicesChanged)
    {
        synchronized (iPropertyLock)
        {
            iSupportedServicesChanged = aSupportedServicesChanged;
        }
    }

    private void supportedServicesPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iSupportedServicesChanged);
        }
    }

    /**
     * Query the value of the PublicKey property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the PublicKey property.
     */
    public String getPropertyPublicKey()
    {
        propertyReadLock();
        String val = iPublicKey.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the UpdateId property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the UpdateId property.
     */
    public long getPropertyUpdateId()
    {
        propertyReadLock();
        long val = iUpdateId.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the JobUpdateId property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the JobUpdateId property.
     */
    public long getPropertyJobUpdateId()
    {
        propertyReadLock();
        long val = iJobUpdateId.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the SupportedServices property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the SupportedServices property.
     */
    public String getPropertySupportedServices()
    {
        propertyReadLock();
        String val = iSupportedServices.getValue();
        propertyReadUnlock();
        return val;
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
            iActionSetToken.destroy();
            iActionGetPublicKey.destroy();
            iActionClearToken.destroy();
            iActionClearShortLivedToken.destroy();
            iActionClearLongLivedToken.destroy();
            iActionClearShortLivedTokens.destroy();
            iActionClearLongLivedTokens.destroy();
            iActionClearAllTokens.destroy();
            iActionGetUpdateId.destroy();
            iActionGetServiceStatus.destroy();
            iActionGetJobUpdateId.destroy();
            iActionGetJobStatus.destroy();
            iActionGetSupportedServices.destroy();
            iActionBeginLimitedInputFlow.destroy();
            iPublicKey.destroy();
            iUpdateId.destroy();
            iJobUpdateId.destroy();
            iSupportedServices.destroy();
        }
    }
}

