package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyLinnCoUkFlash1.*;
import org.openhome.net.core.*;

    
interface ICpProxyLinnCoUkFlash1 extends ICpProxy
{
    public byte[] syncRead(long aId, long aAddress, long aLength);
    public void beginRead(long aId, long aAddress, long aLength, ICpProxyListener aCallback);
    public byte[] endRead(long aAsyncHandle);
    public void syncWrite(long aId, long aAddress, byte[] aSource);
    public void beginWrite(long aId, long aAddress, byte[] aSource, ICpProxyListener aCallback);
    public void endWrite(long aAsyncHandle);
    public void syncErase(long aId, long aAddress);
    public void beginErase(long aId, long aAddress, ICpProxyListener aCallback);
    public void endErase(long aAsyncHandle);
    public void syncEraseSector(long aId, long aSector);
    public void beginEraseSector(long aId, long aSector, ICpProxyListener aCallback);
    public void endEraseSector(long aAsyncHandle);
    public void syncEraseSectors(long aId, long aFirstSector, long aLastSector);
    public void beginEraseSectors(long aId, long aFirstSector, long aLastSector, ICpProxyListener aCallback);
    public void endEraseSectors(long aAsyncHandle);
    public void syncEraseChip(long aId);
    public void beginEraseChip(long aId, ICpProxyListener aCallback);
    public void endEraseChip(long aAsyncHandle);
    public long syncSectors(long aId);
    public void beginSectors(long aId, ICpProxyListener aCallback);
    public long endSectors(long aAsyncHandle);
    public long syncSectorBytes(long aId);
    public void beginSectorBytes(long aId, ICpProxyListener aCallback);
    public long endSectorBytes(long aAsyncHandle);
    public RomDirInfo syncRomDirInfo();
    public void beginRomDirInfo(ICpProxyListener aCallback);
    public RomDirInfo endRomDirInfo(long aAsyncHandle);
}

class SyncReadLinnCoUkFlash1 extends SyncProxyAction
{
    private CpProxyLinnCoUkFlash1 iService;
    private byte[] iBuffer;

    public SyncReadLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
    {
        iService = aProxy;
    }
    public byte[] getBuffer()
    {
        return iBuffer;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        byte[] result = iService.endRead(aAsyncHandle);
        
        iBuffer = result;
    }
}

class SyncWriteLinnCoUkFlash1 extends SyncProxyAction
{
    private CpProxyLinnCoUkFlash1 iService;

    public SyncWriteLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endWrite(aAsyncHandle);
        
    }
}

class SyncEraseLinnCoUkFlash1 extends SyncProxyAction
{
    private CpProxyLinnCoUkFlash1 iService;

    public SyncEraseLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endErase(aAsyncHandle);
        
    }
}

class SyncEraseSectorLinnCoUkFlash1 extends SyncProxyAction
{
    private CpProxyLinnCoUkFlash1 iService;

    public SyncEraseSectorLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endEraseSector(aAsyncHandle);
        
    }
}

class SyncEraseSectorsLinnCoUkFlash1 extends SyncProxyAction
{
    private CpProxyLinnCoUkFlash1 iService;

    public SyncEraseSectorsLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endEraseSectors(aAsyncHandle);
        
    }
}

class SyncEraseChipLinnCoUkFlash1 extends SyncProxyAction
{
    private CpProxyLinnCoUkFlash1 iService;

    public SyncEraseChipLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endEraseChip(aAsyncHandle);
        
    }
}

class SyncSectorsLinnCoUkFlash1 extends SyncProxyAction
{
    private CpProxyLinnCoUkFlash1 iService;
    private long iSectors;

    public SyncSectorsLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
    {
        iService = aProxy;
    }
    public long getSectors()
    {
        return iSectors;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endSectors(aAsyncHandle);
        
        iSectors = result;
    }
}

class SyncSectorBytesLinnCoUkFlash1 extends SyncProxyAction
{
    private CpProxyLinnCoUkFlash1 iService;
    private long iBytes;

    public SyncSectorBytesLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
    {
        iService = aProxy;
    }
    public long getBytes()
    {
        return iBytes;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endSectorBytes(aAsyncHandle);
        
        iBytes = result;
    }
}

class SyncRomDirInfoLinnCoUkFlash1 extends SyncProxyAction
{
    private CpProxyLinnCoUkFlash1 iService;
    private long iFlashIdMain;
    private long iOffsetMain;
    private long iBytesMain;
    private long iFlashIdFallback;
    private long iOffsetFallback;
    private long iBytesFallback;

    public SyncRomDirInfoLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
    {
        iService = aProxy;
    }
    public long getFlashIdMain()
    {
        return iFlashIdMain;
    }
    public long getOffsetMain()
    {
        return iOffsetMain;
    }
    public long getBytesMain()
    {
        return iBytesMain;
    }
    public long getFlashIdFallback()
    {
        return iFlashIdFallback;
    }
    public long getOffsetFallback()
    {
        return iOffsetFallback;
    }
    public long getBytesFallback()
    {
        return iBytesFallback;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        RomDirInfo result = iService.endRomDirInfo(aAsyncHandle);
        
        iFlashIdMain = result.getFlashIdMain();
        iOffsetMain = result.getOffsetMain();
        iBytesMain = result.getBytesMain();
        iFlashIdFallback = result.getFlashIdFallback();
        iOffsetFallback = result.getOffsetFallback();
        iBytesFallback = result.getBytesFallback();
    }
}

/**
 * Proxy for the linn.co.uk:Flash:1 UPnP service
 */
public class CpProxyLinnCoUkFlash1 extends CpProxy implements ICpProxyLinnCoUkFlash1
{

    public class RomDirInfo
    {
        private long iFlashIdMain;
        private long iOffsetMain;
        private long iBytesMain;
        private long iFlashIdFallback;
        private long iOffsetFallback;
        private long iBytesFallback;

        public RomDirInfo(
            long aFlashIdMain,
            long aOffsetMain,
            long aBytesMain,
            long aFlashIdFallback,
            long aOffsetFallback,
            long aBytesFallback
        )
        {
            iFlashIdMain = aFlashIdMain;
            iOffsetMain = aOffsetMain;
            iBytesMain = aBytesMain;
            iFlashIdFallback = aFlashIdFallback;
            iOffsetFallback = aOffsetFallback;
            iBytesFallback = aBytesFallback;
        }
        public long getFlashIdMain()
        {
            return iFlashIdMain;
        }
        public long getOffsetMain()
        {
            return iOffsetMain;
        }
        public long getBytesMain()
        {
            return iBytesMain;
        }
        public long getFlashIdFallback()
        {
            return iFlashIdFallback;
        }
        public long getOffsetFallback()
        {
            return iOffsetFallback;
        }
        public long getBytesFallback()
        {
            return iBytesFallback;
        }
    }

    private Action iActionRead;
    private Action iActionWrite;
    private Action iActionErase;
    private Action iActionEraseSector;
    private Action iActionEraseSectors;
    private Action iActionEraseChip;
    private Action iActionSectors;
    private Action iActionSectorBytes;
    private Action iActionRomDirInfo;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyLinnCoUkFlash1(CpDevice aDevice)
    {
        super("linn-co-uk", "Flash", 1, aDevice);
        Parameter param;
        

        iActionRead = new Action("Read");
        param = new ParameterUint("aId");
        iActionRead.addInputParameter(param);
        param = new ParameterUint("aAddress");
        iActionRead.addInputParameter(param);
        param = new ParameterUint("aLength");
        iActionRead.addInputParameter(param);
        param = new ParameterBinary("aBuffer");
        iActionRead.addOutputParameter(param);

        iActionWrite = new Action("Write");
        param = new ParameterUint("aId");
        iActionWrite.addInputParameter(param);
        param = new ParameterUint("aAddress");
        iActionWrite.addInputParameter(param);
        param = new ParameterBinary("aSource");
        iActionWrite.addInputParameter(param);

        iActionErase = new Action("Erase");
        param = new ParameterUint("aId");
        iActionErase.addInputParameter(param);
        param = new ParameterUint("aAddress");
        iActionErase.addInputParameter(param);

        iActionEraseSector = new Action("EraseSector");
        param = new ParameterUint("aId");
        iActionEraseSector.addInputParameter(param);
        param = new ParameterUint("aSector");
        iActionEraseSector.addInputParameter(param);

        iActionEraseSectors = new Action("EraseSectors");
        param = new ParameterUint("aId");
        iActionEraseSectors.addInputParameter(param);
        param = new ParameterUint("aFirstSector");
        iActionEraseSectors.addInputParameter(param);
        param = new ParameterUint("aLastSector");
        iActionEraseSectors.addInputParameter(param);

        iActionEraseChip = new Action("EraseChip");
        param = new ParameterUint("aId");
        iActionEraseChip.addInputParameter(param);

        iActionSectors = new Action("Sectors");
        param = new ParameterUint("aId");
        iActionSectors.addInputParameter(param);
        param = new ParameterUint("aSectors");
        iActionSectors.addOutputParameter(param);

        iActionSectorBytes = new Action("SectorBytes");
        param = new ParameterUint("aId");
        iActionSectorBytes.addInputParameter(param);
        param = new ParameterUint("aBytes");
        iActionSectorBytes.addOutputParameter(param);

        iActionRomDirInfo = new Action("RomDirInfo");
        param = new ParameterUint("aFlashIdMain");
        iActionRomDirInfo.addOutputParameter(param);
        param = new ParameterUint("aOffsetMain");
        iActionRomDirInfo.addOutputParameter(param);
        param = new ParameterUint("aBytesMain");
        iActionRomDirInfo.addOutputParameter(param);
        param = new ParameterUint("aFlashIdFallback");
        iActionRomDirInfo.addOutputParameter(param);
        param = new ParameterUint("aOffsetFallback");
        iActionRomDirInfo.addOutputParameter(param);
        param = new ParameterUint("aBytesFallback");
        iActionRomDirInfo.addOutputParameter(param);
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public byte[] syncRead(long aId, long aAddress, long aLength)
    {
        SyncReadLinnCoUkFlash1 sync = new SyncReadLinnCoUkFlash1(this);
        beginRead(aId, aAddress, aLength, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getBuffer();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endRead}.
     * 
     * @param aId
     * @param aAddress
     * @param aLength
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginRead(long aId, long aAddress, long aLength, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionRead, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionRead.getInputParameter(inIndex++), aId));
        invocation.addInput(new ArgumentUint((ParameterUint)iActionRead.getInputParameter(inIndex++), aAddress));
        invocation.addInput(new ArgumentUint((ParameterUint)iActionRead.getInputParameter(inIndex++), aLength));
        int outIndex = 0;
        invocation.addOutput(new ArgumentBinary((ParameterBinary)iActionRead.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginRead} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginRead} method.
     * @return the result of the previously invoked action.
     */
    public byte[] endRead(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        byte[] buffer = Invocation.getOutputBinary(aAsyncHandle, index++);
        return buffer;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncWrite(long aId, long aAddress, byte[] aSource)
    {
        SyncWriteLinnCoUkFlash1 sync = new SyncWriteLinnCoUkFlash1(this);
        beginWrite(aId, aAddress, aSource, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endWrite}.
     * 
     * @param aId
     * @param aAddress
     * @param aSource
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginWrite(long aId, long aAddress, byte[] aSource, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionWrite, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionWrite.getInputParameter(inIndex++), aId));
        invocation.addInput(new ArgumentUint((ParameterUint)iActionWrite.getInputParameter(inIndex++), aAddress));
        invocation.addInput(new ArgumentBinary((ParameterBinary)iActionWrite.getInputParameter(inIndex++), aSource));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginWrite} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginWrite} method.
     */
    public void endWrite(long aAsyncHandle)
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
    public void syncErase(long aId, long aAddress)
    {
        SyncEraseLinnCoUkFlash1 sync = new SyncEraseLinnCoUkFlash1(this);
        beginErase(aId, aAddress, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endErase}.
     * 
     * @param aId
     * @param aAddress
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginErase(long aId, long aAddress, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionErase, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionErase.getInputParameter(inIndex++), aId));
        invocation.addInput(new ArgumentUint((ParameterUint)iActionErase.getInputParameter(inIndex++), aAddress));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginErase} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginErase} method.
     */
    public void endErase(long aAsyncHandle)
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
    public void syncEraseSector(long aId, long aSector)
    {
        SyncEraseSectorLinnCoUkFlash1 sync = new SyncEraseSectorLinnCoUkFlash1(this);
        beginEraseSector(aId, aSector, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endEraseSector}.
     * 
     * @param aId
     * @param aSector
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginEraseSector(long aId, long aSector, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionEraseSector, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionEraseSector.getInputParameter(inIndex++), aId));
        invocation.addInput(new ArgumentUint((ParameterUint)iActionEraseSector.getInputParameter(inIndex++), aSector));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginEraseSector} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginEraseSector} method.
     */
    public void endEraseSector(long aAsyncHandle)
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
    public void syncEraseSectors(long aId, long aFirstSector, long aLastSector)
    {
        SyncEraseSectorsLinnCoUkFlash1 sync = new SyncEraseSectorsLinnCoUkFlash1(this);
        beginEraseSectors(aId, aFirstSector, aLastSector, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endEraseSectors}.
     * 
     * @param aId
     * @param aFirstSector
     * @param aLastSector
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginEraseSectors(long aId, long aFirstSector, long aLastSector, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionEraseSectors, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionEraseSectors.getInputParameter(inIndex++), aId));
        invocation.addInput(new ArgumentUint((ParameterUint)iActionEraseSectors.getInputParameter(inIndex++), aFirstSector));
        invocation.addInput(new ArgumentUint((ParameterUint)iActionEraseSectors.getInputParameter(inIndex++), aLastSector));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginEraseSectors} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginEraseSectors} method.
     */
    public void endEraseSectors(long aAsyncHandle)
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
    public void syncEraseChip(long aId)
    {
        SyncEraseChipLinnCoUkFlash1 sync = new SyncEraseChipLinnCoUkFlash1(this);
        beginEraseChip(aId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endEraseChip}.
     * 
     * @param aId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginEraseChip(long aId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionEraseChip, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionEraseChip.getInputParameter(inIndex++), aId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginEraseChip} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginEraseChip} method.
     */
    public void endEraseChip(long aAsyncHandle)
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
    public long syncSectors(long aId)
    {
        SyncSectorsLinnCoUkFlash1 sync = new SyncSectorsLinnCoUkFlash1(this);
        beginSectors(aId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSectors();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSectors}.
     * 
     * @param aId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSectors(long aId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSectors, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSectors.getInputParameter(inIndex++), aId));
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionSectors.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSectors} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSectors} method.
     * @return the result of the previously invoked action.
     */
    public long endSectors(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long sectors = Invocation.getOutputUint(aAsyncHandle, index++);
        return sectors;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncSectorBytes(long aId)
    {
        SyncSectorBytesLinnCoUkFlash1 sync = new SyncSectorBytesLinnCoUkFlash1(this);
        beginSectorBytes(aId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getBytes();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSectorBytes}.
     * 
     * @param aId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSectorBytes(long aId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSectorBytes, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSectorBytes.getInputParameter(inIndex++), aId));
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionSectorBytes.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSectorBytes} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSectorBytes} method.
     * @return the result of the previously invoked action.
     */
    public long endSectorBytes(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long bytes = Invocation.getOutputUint(aAsyncHandle, index++);
        return bytes;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public RomDirInfo syncRomDirInfo()
    {
        SyncRomDirInfoLinnCoUkFlash1 sync = new SyncRomDirInfoLinnCoUkFlash1(this);
        beginRomDirInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new RomDirInfo(
            sync.getFlashIdMain(),
            sync.getOffsetMain(),
            sync.getBytesMain(),
            sync.getFlashIdFallback(),
            sync.getOffsetFallback(),
            sync.getBytesFallback()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endRomDirInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginRomDirInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionRomDirInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionRomDirInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionRomDirInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionRomDirInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionRomDirInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionRomDirInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionRomDirInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginRomDirInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginRomDirInfo} method.
     * @return the result of the previously invoked action.
     */
    public RomDirInfo endRomDirInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long flashIdMain = Invocation.getOutputUint(aAsyncHandle, index++);
        long offsetMain = Invocation.getOutputUint(aAsyncHandle, index++);
        long bytesMain = Invocation.getOutputUint(aAsyncHandle, index++);
        long flashIdFallback = Invocation.getOutputUint(aAsyncHandle, index++);
        long offsetFallback = Invocation.getOutputUint(aAsyncHandle, index++);
        long bytesFallback = Invocation.getOutputUint(aAsyncHandle, index++);
        return new RomDirInfo(
            flashIdMain,
            offsetMain,
            bytesMain,
            flashIdFallback,
            offsetFallback,
            bytesFallback
        );
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
            iActionRead.destroy();
            iActionWrite.destroy();
            iActionErase.destroy();
            iActionEraseSector.destroy();
            iActionEraseSectors.destroy();
            iActionEraseChip.destroy();
            iActionSectors.destroy();
            iActionSectorBytes.destroy();
            iActionRomDirInfo.destroy();
        }
    }
}

