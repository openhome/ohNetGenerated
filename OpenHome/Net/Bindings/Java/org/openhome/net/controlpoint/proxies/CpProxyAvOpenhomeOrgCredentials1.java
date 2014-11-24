package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgCredentials1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgCredentials1 extends ICpProxy
{
    public void syncSet(String aId, String aUserName, byte[] aPassword);
    public void beginSet(String aId, String aUserName, byte[] aPassword, ICpProxyListener aCallback);
    public void endSet(long aAsyncHandle);
    public void syncClear(String aId);
    public void beginClear(String aId, ICpProxyListener aCallback);
    public void endClear(long aAsyncHandle);
    public void syncSetEnabled(String aId, boolean aEnabled);
    public void beginSetEnabled(String aId, boolean aEnabled, ICpProxyListener aCallback);
    public void endSetEnabled(long aAsyncHandle);
    public Get syncGet(String aId);
    public void beginGet(String aId, ICpProxyListener aCallback);
    public Get endGet(long aAsyncHandle);
    public String syncLogin(String aId);
    public void beginLogin(String aId, ICpProxyListener aCallback);
    public String endLogin(long aAsyncHandle);
    public String syncReLogin(String aId, String aCurrentToken);
    public void beginReLogin(String aId, String aCurrentToken, ICpProxyListener aCallback);
    public String endReLogin(long aAsyncHandle);
    public String syncGetIds();
    public void beginGetIds(ICpProxyListener aCallback);
    public String endGetIds(long aAsyncHandle);
    public String syncGetPublicKey();
    public void beginGetPublicKey(ICpProxyListener aCallback);
    public String endGetPublicKey(long aAsyncHandle);
    public long syncGetSequenceNumber();
    public void beginGetSequenceNumber(ICpProxyListener aCallback);
    public long endGetSequenceNumber(long aAsyncHandle);
    public void setPropertyIdsChanged(IPropertyChangeListener aIdsChanged);
    public String getPropertyIds();
    public void setPropertyPublicKeyChanged(IPropertyChangeListener aPublicKeyChanged);
    public String getPropertyPublicKey();
    public void setPropertySequenceNumberChanged(IPropertyChangeListener aSequenceNumberChanged);
    public long getPropertySequenceNumber();
}

class SyncSetAvOpenhomeOrgCredentials1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgCredentials1 iService;

    public SyncSetAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSet(aAsyncHandle);
        
    }
}

class SyncClearAvOpenhomeOrgCredentials1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgCredentials1 iService;

    public SyncClearAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endClear(aAsyncHandle);
        
    }
}

class SyncSetEnabledAvOpenhomeOrgCredentials1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgCredentials1 iService;

    public SyncSetEnabledAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetEnabled(aAsyncHandle);
        
    }
}

class SyncGetAvOpenhomeOrgCredentials1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgCredentials1 iService;
    private String iUserName;
    private byte[] iPassword;
    private boolean iEnabled;
    private String iStatus;
    private String iData;

    public SyncGetAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
    {
        iService = aProxy;
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
    protected void completeRequest(long aAsyncHandle)
    {
        Get result = iService.endGet(aAsyncHandle);
        
        iUserName = result.getUserName();
        iPassword = result.getPassword();
        iEnabled = result.getEnabled();
        iStatus = result.getStatus();
        iData = result.getData();
    }
}

class SyncLoginAvOpenhomeOrgCredentials1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgCredentials1 iService;
    private String iToken;

    public SyncLoginAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
    {
        iService = aProxy;
    }
    public String getToken()
    {
        return iToken;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endLogin(aAsyncHandle);
        
        iToken = result;
    }
}

class SyncReLoginAvOpenhomeOrgCredentials1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgCredentials1 iService;
    private String iNewToken;

    public SyncReLoginAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
    {
        iService = aProxy;
    }
    public String getNewToken()
    {
        return iNewToken;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endReLogin(aAsyncHandle);
        
        iNewToken = result;
    }
}

class SyncGetIdsAvOpenhomeOrgCredentials1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgCredentials1 iService;
    private String iIds;

    public SyncGetIdsAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
    {
        iService = aProxy;
    }
    public String getIds()
    {
        return iIds;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetIds(aAsyncHandle);
        
        iIds = result;
    }
}

class SyncGetPublicKeyAvOpenhomeOrgCredentials1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgCredentials1 iService;
    private String iPublicKey;

    public SyncGetPublicKeyAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
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

class SyncGetSequenceNumberAvOpenhomeOrgCredentials1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgCredentials1 iService;
    private long iSequenceNumber;

    public SyncGetSequenceNumberAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
    {
        iService = aProxy;
    }
    public long getSequenceNumber()
    {
        return iSequenceNumber;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetSequenceNumber(aAsyncHandle);
        
        iSequenceNumber = result;
    }
}

/**
 * Proxy for the av.openhome.org:Credentials:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgCredentials1 extends CpProxy implements ICpProxyAvOpenhomeOrgCredentials1
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

    private Action iActionSet;
    private Action iActionClear;
    private Action iActionSetEnabled;
    private Action iActionGet;
    private Action iActionLogin;
    private Action iActionReLogin;
    private Action iActionGetIds;
    private Action iActionGetPublicKey;
    private Action iActionGetSequenceNumber;
    private PropertyString iIds;
    private PropertyString iPublicKey;
    private PropertyUint iSequenceNumber;
    private IPropertyChangeListener iIdsChanged;
    private IPropertyChangeListener iPublicKeyChanged;
    private IPropertyChangeListener iSequenceNumberChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgCredentials1(CpDevice aDevice)
    {
        super("av-openhome-org", "Credentials", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionSet = new Action("Set");
        param = new ParameterString("Id", allowedValues);
        iActionSet.addInputParameter(param);
        param = new ParameterString("UserName", allowedValues);
        iActionSet.addInputParameter(param);
        param = new ParameterBinary("Password");
        iActionSet.addInputParameter(param);

        iActionClear = new Action("Clear");
        param = new ParameterString("Id", allowedValues);
        iActionClear.addInputParameter(param);

        iActionSetEnabled = new Action("SetEnabled");
        param = new ParameterString("Id", allowedValues);
        iActionSetEnabled.addInputParameter(param);
        param = new ParameterBool("Enabled");
        iActionSetEnabled.addInputParameter(param);

        iActionGet = new Action("Get");
        param = new ParameterString("Id", allowedValues);
        iActionGet.addInputParameter(param);
        param = new ParameterString("UserName", allowedValues);
        iActionGet.addOutputParameter(param);
        param = new ParameterBinary("Password");
        iActionGet.addOutputParameter(param);
        param = new ParameterBool("Enabled");
        iActionGet.addOutputParameter(param);
        param = new ParameterString("Status", allowedValues);
        iActionGet.addOutputParameter(param);
        param = new ParameterString("Data", allowedValues);
        iActionGet.addOutputParameter(param);

        iActionLogin = new Action("Login");
        param = new ParameterString("Id", allowedValues);
        iActionLogin.addInputParameter(param);
        param = new ParameterString("Token", allowedValues);
        iActionLogin.addOutputParameter(param);

        iActionReLogin = new Action("ReLogin");
        param = new ParameterString("Id", allowedValues);
        iActionReLogin.addInputParameter(param);
        param = new ParameterString("CurrentToken", allowedValues);
        iActionReLogin.addInputParameter(param);
        param = new ParameterString("NewToken", allowedValues);
        iActionReLogin.addOutputParameter(param);

        iActionGetIds = new Action("GetIds");
        param = new ParameterString("Ids", allowedValues);
        iActionGetIds.addOutputParameter(param);

        iActionGetPublicKey = new Action("GetPublicKey");
        param = new ParameterString("PublicKey", allowedValues);
        iActionGetPublicKey.addOutputParameter(param);

        iActionGetSequenceNumber = new Action("GetSequenceNumber");
        param = new ParameterUint("SequenceNumber");
        iActionGetSequenceNumber.addOutputParameter(param);

        iIdsChanged = new PropertyChangeListener();
        iIds = new PropertyString("Ids",
            new PropertyChangeListener() {
                public void notifyChange() {
                    idsPropertyChanged();
                }
            }
        );
        addProperty(iIds);
        iPublicKeyChanged = new PropertyChangeListener();
        iPublicKey = new PropertyString("PublicKey",
            new PropertyChangeListener() {
                public void notifyChange() {
                    publicKeyPropertyChanged();
                }
            }
        );
        addProperty(iPublicKey);
        iSequenceNumberChanged = new PropertyChangeListener();
        iSequenceNumber = new PropertyUint("SequenceNumber",
            new PropertyChangeListener() {
                public void notifyChange() {
                    sequenceNumberPropertyChanged();
                }
            }
        );
        addProperty(iSequenceNumber);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSet(String aId, String aUserName, byte[] aPassword)
    {
        SyncSetAvOpenhomeOrgCredentials1 sync = new SyncSetAvOpenhomeOrgCredentials1(this);
        beginSet(aId, aUserName, aPassword, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSet}.
     * 
     * @param aId
     * @param aUserName
     * @param aPassword
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSet(String aId, String aUserName, byte[] aPassword, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSet, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSet.getInputParameter(inIndex++), aId));
        invocation.addInput(new ArgumentString((ParameterString)iActionSet.getInputParameter(inIndex++), aUserName));
        invocation.addInput(new ArgumentBinary((ParameterBinary)iActionSet.getInputParameter(inIndex++), aPassword));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSet} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSet} method.
     */
    public void endSet(long aAsyncHandle)
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
    public void syncClear(String aId)
    {
        SyncClearAvOpenhomeOrgCredentials1 sync = new SyncClearAvOpenhomeOrgCredentials1(this);
        beginClear(aId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endClear}.
     * 
     * @param aId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginClear(String aId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionClear, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionClear.getInputParameter(inIndex++), aId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginClear} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginClear} method.
     */
    public void endClear(long aAsyncHandle)
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
    public void syncSetEnabled(String aId, boolean aEnabled)
    {
        SyncSetEnabledAvOpenhomeOrgCredentials1 sync = new SyncSetEnabledAvOpenhomeOrgCredentials1(this);
        beginSetEnabled(aId, aEnabled, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetEnabled}.
     * 
     * @param aId
     * @param aEnabled
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetEnabled(String aId, boolean aEnabled, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetEnabled, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetEnabled.getInputParameter(inIndex++), aId));
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetEnabled.getInputParameter(inIndex++), aEnabled));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetEnabled} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetEnabled} method.
     */
    public void endSetEnabled(long aAsyncHandle)
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
    public Get syncGet(String aId)
    {
        SyncGetAvOpenhomeOrgCredentials1 sync = new SyncGetAvOpenhomeOrgCredentials1(this);
        beginGet(aId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new Get(
            sync.getUserName(),
            sync.getPassword(),
            sync.getEnabled(),
            sync.getStatus(),
            sync.getData()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGet}.
     * 
     * @param aId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGet(String aId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGet, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionGet.getInputParameter(inIndex++), aId));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGet.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentBinary((ParameterBinary)iActionGet.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGet.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGet.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGet.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGet} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGet} method.
     * @return the result of the previously invoked action.
     */
    public Get endGet(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String userName = Invocation.getOutputString(aAsyncHandle, index++);
        byte[] password = Invocation.getOutputBinary(aAsyncHandle, index++);
        boolean enabled = Invocation.getOutputBool(aAsyncHandle, index++);
        String status = Invocation.getOutputString(aAsyncHandle, index++);
        String data = Invocation.getOutputString(aAsyncHandle, index++);
        return new Get(
            userName,
            password,
            enabled,
            status,
            data
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncLogin(String aId)
    {
        SyncLoginAvOpenhomeOrgCredentials1 sync = new SyncLoginAvOpenhomeOrgCredentials1(this);
        beginLogin(aId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getToken();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endLogin}.
     * 
     * @param aId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginLogin(String aId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionLogin, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionLogin.getInputParameter(inIndex++), aId));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionLogin.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginLogin} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginLogin} method.
     * @return the result of the previously invoked action.
     */
    public String endLogin(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String token = Invocation.getOutputString(aAsyncHandle, index++);
        return token;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncReLogin(String aId, String aCurrentToken)
    {
        SyncReLoginAvOpenhomeOrgCredentials1 sync = new SyncReLoginAvOpenhomeOrgCredentials1(this);
        beginReLogin(aId, aCurrentToken, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getNewToken();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endReLogin}.
     * 
     * @param aId
     * @param aCurrentToken
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginReLogin(String aId, String aCurrentToken, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionReLogin, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionReLogin.getInputParameter(inIndex++), aId));
        invocation.addInput(new ArgumentString((ParameterString)iActionReLogin.getInputParameter(inIndex++), aCurrentToken));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionReLogin.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginReLogin} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginReLogin} method.
     * @return the result of the previously invoked action.
     */
    public String endReLogin(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String newToken = Invocation.getOutputString(aAsyncHandle, index++);
        return newToken;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetIds()
    {
        SyncGetIdsAvOpenhomeOrgCredentials1 sync = new SyncGetIdsAvOpenhomeOrgCredentials1(this);
        beginGetIds(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getIds();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetIds}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetIds(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetIds, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetIds.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetIds} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetIds} method.
     * @return the result of the previously invoked action.
     */
    public String endGetIds(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String ids = Invocation.getOutputString(aAsyncHandle, index++);
        return ids;
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
        SyncGetPublicKeyAvOpenhomeOrgCredentials1 sync = new SyncGetPublicKeyAvOpenhomeOrgCredentials1(this);
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
     *
     * @return the result of the invoked action.
     */
    public long syncGetSequenceNumber()
    {
        SyncGetSequenceNumberAvOpenhomeOrgCredentials1 sync = new SyncGetSequenceNumberAvOpenhomeOrgCredentials1(this);
        beginGetSequenceNumber(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSequenceNumber();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetSequenceNumber}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetSequenceNumber(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetSequenceNumber, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetSequenceNumber.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetSequenceNumber} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetSequenceNumber} method.
     * @return the result of the previously invoked action.
     */
    public long endGetSequenceNumber(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long sequenceNumber = Invocation.getOutputUint(aAsyncHandle, index++);
        return sequenceNumber;
    }
        
    /**
     * Set a delegate to be run when the Ids state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgCredentials1 instance will not overlap.
     *
     * @param aIdsChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyIdsChanged(IPropertyChangeListener aIdsChanged)
    {
        synchronized (iPropertyLock)
        {
            iIdsChanged = aIdsChanged;
        }
    }

    private void idsPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iIdsChanged);
        }
    }
    /**
     * Set a delegate to be run when the PublicKey state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgCredentials1 instance will not overlap.
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
     * Set a delegate to be run when the SequenceNumber state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgCredentials1 instance will not overlap.
     *
     * @param aSequenceNumberChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertySequenceNumberChanged(IPropertyChangeListener aSequenceNumberChanged)
    {
        synchronized (iPropertyLock)
        {
            iSequenceNumberChanged = aSequenceNumberChanged;
        }
    }

    private void sequenceNumberPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iSequenceNumberChanged);
        }
    }

    /**
     * Query the value of the Ids property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Ids property.
     */
    public String getPropertyIds()
    {
        propertyReadLock();
        String val = iIds.getValue();
        propertyReadUnlock();
        return val;
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
     * Query the value of the SequenceNumber property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the SequenceNumber property.
     */
    public long getPropertySequenceNumber()
    {
        propertyReadLock();
        long val = iSequenceNumber.getValue();
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
            iActionSet.destroy();
            iActionClear.destroy();
            iActionSetEnabled.destroy();
            iActionGet.destroy();
            iActionLogin.destroy();
            iActionReLogin.destroy();
            iActionGetIds.destroy();
            iActionGetPublicKey.destroy();
            iActionGetSequenceNumber.destroy();
            iIds.destroy();
            iPublicKey.destroy();
            iSequenceNumber.destroy();
        }
    }
}

