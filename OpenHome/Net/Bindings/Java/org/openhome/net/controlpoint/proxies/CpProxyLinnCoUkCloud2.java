package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkCloud2.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkCloud2 extends ICpProxy
{
    public String syncGetChallengeResponse(String aChallenge);
    public void beginGetChallengeResponse(String aChallenge, ICpProxyListener aCallback);
    public String endGetChallengeResponse(long aAsyncHandle);
    public void syncSetAssociated(byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, boolean aAssociated);
    public void beginSetAssociated(byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, boolean aAssociated, ICpProxyListener aCallback);
    public void endSetAssociated(long aAsyncHandle);
    public boolean syncGetConnected();
    public void beginGetConnected(ICpProxyListener aCallback);
    public boolean endGetConnected(long aAsyncHandle);
    public String syncGetAccountId();
    public void beginGetAccountId(ICpProxyListener aCallback);
    public String endGetAccountId(long aAsyncHandle);
    public String syncGetPublicKey();
    public void beginGetPublicKey(ICpProxyListener aCallback);
    public String endGetPublicKey(long aAsyncHandle);
    public void setPropertyAssociationStatusChanged(IPropertyChangeListener aAssociationStatusChanged);
    public String getPropertyAssociationStatus();
    public void setPropertyConnectedChanged(IPropertyChangeListener aConnectedChanged);
    public boolean getPropertyConnected();
    public void setPropertyAccountIdChanged(IPropertyChangeListener aAccountIdChanged);
    public String getPropertyAccountId();
    public void setPropertyPublicKeyChanged(IPropertyChangeListener aPublicKeyChanged);
    public String getPropertyPublicKey();
}

class SyncGetChallengeResponseLinnCoUkCloud2 extends SyncProxyAction
{
    private CpProxyLinnCoUkCloud2 iService;
    private String iResponse;

    public SyncGetChallengeResponseLinnCoUkCloud2(CpProxyLinnCoUkCloud2 aProxy)
    {
        iService = aProxy;
    }
    public String getResponse()
    {
        return iResponse;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetChallengeResponse(aAsyncHandle);
        
        iResponse = result;
    }
}

class SyncSetAssociatedLinnCoUkCloud2 extends SyncProxyAction
{
    private CpProxyLinnCoUkCloud2 iService;

    public SyncSetAssociatedLinnCoUkCloud2(CpProxyLinnCoUkCloud2 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetAssociated(aAsyncHandle);
        
    }
}

class SyncGetConnectedLinnCoUkCloud2 extends SyncProxyAction
{
    private CpProxyLinnCoUkCloud2 iService;
    private boolean iConnected;

    public SyncGetConnectedLinnCoUkCloud2(CpProxyLinnCoUkCloud2 aProxy)
    {
        iService = aProxy;
    }
    public boolean getConnected()
    {
        return iConnected;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetConnected(aAsyncHandle);
        
        iConnected = result;
    }
}

class SyncGetAccountIdLinnCoUkCloud2 extends SyncProxyAction
{
    private CpProxyLinnCoUkCloud2 iService;
    private String iAccountId;

    public SyncGetAccountIdLinnCoUkCloud2(CpProxyLinnCoUkCloud2 aProxy)
    {
        iService = aProxy;
    }
    public String getAccountId()
    {
        return iAccountId;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetAccountId(aAsyncHandle);
        
        iAccountId = result;
    }
}

class SyncGetPublicKeyLinnCoUkCloud2 extends SyncProxyAction
{
    private CpProxyLinnCoUkCloud2 iService;
    private String iPublicKey;

    public SyncGetPublicKeyLinnCoUkCloud2(CpProxyLinnCoUkCloud2 aProxy)
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

/**
 * Proxy for the linn.co.uk:Cloud:2 UPnP service
 */
public class CpProxyLinnCoUkCloud2 extends CpProxy implements ICpProxyLinnCoUkCloud2
{

    private Action iActionGetChallengeResponse;
    private Action iActionSetAssociated;
    private Action iActionGetConnected;
    private Action iActionGetAccountId;
    private Action iActionGetPublicKey;
    private PropertyString iAssociationStatus;
    private PropertyBool iConnected;
    private PropertyString iAccountId;
    private PropertyString iPublicKey;
    private IPropertyChangeListener iAssociationStatusChanged;
    private IPropertyChangeListener iConnectedChanged;
    private IPropertyChangeListener iAccountIdChanged;
    private IPropertyChangeListener iPublicKeyChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkCloud2(CpDevice aDevice)
    {
        super("linn-co-uk", "Cloud", 2, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetChallengeResponse = new Action("GetChallengeResponse");
        param = new ParameterString("Challenge", allowedValues);
        iActionGetChallengeResponse.addInputParameter(param);
        param = new ParameterString("Response", allowedValues);
        iActionGetChallengeResponse.addOutputParameter(param);

        iActionSetAssociated = new Action("SetAssociated");
        param = new ParameterBinary("AesKeyRsaEncrypted");
        iActionSetAssociated.addInputParameter(param);
        param = new ParameterBinary("InitVectorRsaEncrypted");
        iActionSetAssociated.addInputParameter(param);
        param = new ParameterBinary("TokenAesEncrypted");
        iActionSetAssociated.addInputParameter(param);
        param = new ParameterBool("Associated");
        iActionSetAssociated.addInputParameter(param);

        iActionGetConnected = new Action("GetConnected");
        param = new ParameterBool("Connected");
        iActionGetConnected.addOutputParameter(param);

        iActionGetAccountId = new Action("GetAccountId");
        param = new ParameterString("AccountId", allowedValues);
        iActionGetAccountId.addOutputParameter(param);

        iActionGetPublicKey = new Action("GetPublicKey");
        param = new ParameterString("PublicKey", allowedValues);
        iActionGetPublicKey.addOutputParameter(param);

        iAssociationStatusChanged = new PropertyChangeListener();
        iAssociationStatus = new PropertyString("AssociationStatus",
            new PropertyChangeListener() {
                public void notifyChange() {
                    associationStatusPropertyChanged();
                }
            }
        );
        addProperty(iAssociationStatus);
        iConnectedChanged = new PropertyChangeListener();
        iConnected = new PropertyBool("Connected",
            new PropertyChangeListener() {
                public void notifyChange() {
                    connectedPropertyChanged();
                }
            }
        );
        addProperty(iConnected);
        iAccountIdChanged = new PropertyChangeListener();
        iAccountId = new PropertyString("AccountId",
            new PropertyChangeListener() {
                public void notifyChange() {
                    accountIdPropertyChanged();
                }
            }
        );
        addProperty(iAccountId);
        iPublicKeyChanged = new PropertyChangeListener();
        iPublicKey = new PropertyString("PublicKey",
            new PropertyChangeListener() {
                public void notifyChange() {
                    publicKeyPropertyChanged();
                }
            }
        );
        addProperty(iPublicKey);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetChallengeResponse(String aChallenge)
    {
        SyncGetChallengeResponseLinnCoUkCloud2 sync = new SyncGetChallengeResponseLinnCoUkCloud2(this);
        beginGetChallengeResponse(aChallenge, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getResponse();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetChallengeResponse}.
     * 
     * @param aChallenge
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetChallengeResponse(String aChallenge, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetChallengeResponse, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionGetChallengeResponse.getInputParameter(inIndex++), aChallenge));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetChallengeResponse.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetChallengeResponse} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetChallengeResponse} method.
     * @return the result of the previously invoked action.
     */
    public String endGetChallengeResponse(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String response = Invocation.getOutputString(aAsyncHandle, index++);
        return response;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetAssociated(byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, boolean aAssociated)
    {
        SyncSetAssociatedLinnCoUkCloud2 sync = new SyncSetAssociatedLinnCoUkCloud2(this);
        beginSetAssociated(aAesKeyRsaEncrypted, aInitVectorRsaEncrypted, aTokenAesEncrypted, aAssociated, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetAssociated}.
     * 
     * @param aAesKeyRsaEncrypted
     * @param aInitVectorRsaEncrypted
     * @param aTokenAesEncrypted
     * @param aAssociated
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetAssociated(byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, boolean aAssociated, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetAssociated, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBinary((ParameterBinary)iActionSetAssociated.getInputParameter(inIndex++), aAesKeyRsaEncrypted));
        invocation.addInput(new ArgumentBinary((ParameterBinary)iActionSetAssociated.getInputParameter(inIndex++), aInitVectorRsaEncrypted));
        invocation.addInput(new ArgumentBinary((ParameterBinary)iActionSetAssociated.getInputParameter(inIndex++), aTokenAesEncrypted));
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetAssociated.getInputParameter(inIndex++), aAssociated));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetAssociated} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetAssociated} method.
     */
    public void endSetAssociated(long aAsyncHandle)
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
    public boolean syncGetConnected()
    {
        SyncGetConnectedLinnCoUkCloud2 sync = new SyncGetConnectedLinnCoUkCloud2(this);
        beginGetConnected(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getConnected();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetConnected}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetConnected(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetConnected, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetConnected.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetConnected} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetConnected} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetConnected(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean connected = Invocation.getOutputBool(aAsyncHandle, index++);
        return connected;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetAccountId()
    {
        SyncGetAccountIdLinnCoUkCloud2 sync = new SyncGetAccountIdLinnCoUkCloud2(this);
        beginGetAccountId(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getAccountId();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetAccountId}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetAccountId(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetAccountId, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetAccountId.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetAccountId} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetAccountId} method.
     * @return the result of the previously invoked action.
     */
    public String endGetAccountId(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String accountId = Invocation.getOutputString(aAsyncHandle, index++);
        return accountId;
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
        SyncGetPublicKeyLinnCoUkCloud2 sync = new SyncGetPublicKeyLinnCoUkCloud2(this);
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
     * Set a delegate to be run when the AssociationStatus state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkCloud2 instance will not overlap.
     *
     * @param aAssociationStatusChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyAssociationStatusChanged(IPropertyChangeListener aAssociationStatusChanged)
    {
        synchronized (iPropertyLock)
        {
            iAssociationStatusChanged = aAssociationStatusChanged;
        }
    }

    private void associationStatusPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iAssociationStatusChanged);
        }
    }
    /**
     * Set a delegate to be run when the Connected state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkCloud2 instance will not overlap.
     *
     * @param aConnectedChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyConnectedChanged(IPropertyChangeListener aConnectedChanged)
    {
        synchronized (iPropertyLock)
        {
            iConnectedChanged = aConnectedChanged;
        }
    }

    private void connectedPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iConnectedChanged);
        }
    }
    /**
     * Set a delegate to be run when the AccountId state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkCloud2 instance will not overlap.
     *
     * @param aAccountIdChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyAccountIdChanged(IPropertyChangeListener aAccountIdChanged)
    {
        synchronized (iPropertyLock)
        {
            iAccountIdChanged = aAccountIdChanged;
        }
    }

    private void accountIdPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iAccountIdChanged);
        }
    }
    /**
     * Set a delegate to be run when the PublicKey state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkCloud2 instance will not overlap.
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
     * Query the value of the AssociationStatus property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the AssociationStatus property.
     */
    public String getPropertyAssociationStatus()
    {
        propertyReadLock();
        String val = iAssociationStatus.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Connected property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Connected property.
     */
    public boolean getPropertyConnected()
    {
        propertyReadLock();
        boolean val = iConnected.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the AccountId property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the AccountId property.
     */
    public String getPropertyAccountId()
    {
        propertyReadLock();
        String val = iAccountId.getValue();
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
            iActionGetChallengeResponse.destroy();
            iActionSetAssociated.destroy();
            iActionGetConnected.destroy();
            iActionGetAccountId.destroy();
            iActionGetPublicKey.destroy();
            iAssociationStatus.destroy();
            iConnected.destroy();
            iAccountId.destroy();
            iPublicKey.destroy();
        }
    }
}

