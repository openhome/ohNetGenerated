package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderLinnCoUkFlash1
{
        
}

/**
 * Provider for the linn.co.uk:Flash:1 UPnP service.
 */
public class DvProviderLinnCoUkFlash1 extends DvProvider implements IDvProviderLinnCoUkFlash1
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

    private IDvInvocationListener iDelegateRead;
    private IDvInvocationListener iDelegateWrite;
    private IDvInvocationListener iDelegateErase;
    private IDvInvocationListener iDelegateEraseSector;
    private IDvInvocationListener iDelegateEraseSectors;
    private IDvInvocationListener iDelegateEraseChip;
    private IDvInvocationListener iDelegateSectors;
    private IDvInvocationListener iDelegateSectorBytes;
    private IDvInvocationListener iDelegateRomDirInfo;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderLinnCoUkFlash1(DvDevice aDevice)
    {
        super(aDevice, "linn.co.uk", "Flash", 1);
    }

    /**
     * Signal that the action Read is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Read must be overridden if this is called.
     */      
    protected void enableActionRead()
    {
        Action action = new Action("Read");
        action.addInputParameter(new ParameterUint("aId"));
        action.addInputParameter(new ParameterUint("aAddress"));
        action.addInputParameter(new ParameterUint("aLength"));
        action.addOutputParameter(new ParameterBinary("aBuffer"));
        iDelegateRead = new DoRead();
        enableAction(action, iDelegateRead);
    }

    /**
     * Signal that the action Write is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Write must be overridden if this is called.
     */      
    protected void enableActionWrite()
    {
        Action action = new Action("Write");
        action.addInputParameter(new ParameterUint("aId"));
        action.addInputParameter(new ParameterUint("aAddress"));
        action.addInputParameter(new ParameterBinary("aSource"));
        iDelegateWrite = new DoWrite();
        enableAction(action, iDelegateWrite);
    }

    /**
     * Signal that the action Erase is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Erase must be overridden if this is called.
     */      
    protected void enableActionErase()
    {
        Action action = new Action("Erase");
        action.addInputParameter(new ParameterUint("aId"));
        action.addInputParameter(new ParameterUint("aAddress"));
        iDelegateErase = new DoErase();
        enableAction(action, iDelegateErase);
    }

    /**
     * Signal that the action EraseSector is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * EraseSector must be overridden if this is called.
     */      
    protected void enableActionEraseSector()
    {
        Action action = new Action("EraseSector");
        action.addInputParameter(new ParameterUint("aId"));
        action.addInputParameter(new ParameterUint("aSector"));
        iDelegateEraseSector = new DoEraseSector();
        enableAction(action, iDelegateEraseSector);
    }

    /**
     * Signal that the action EraseSectors is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * EraseSectors must be overridden if this is called.
     */      
    protected void enableActionEraseSectors()
    {
        Action action = new Action("EraseSectors");
        action.addInputParameter(new ParameterUint("aId"));
        action.addInputParameter(new ParameterUint("aFirstSector"));
        action.addInputParameter(new ParameterUint("aLastSector"));
        iDelegateEraseSectors = new DoEraseSectors();
        enableAction(action, iDelegateEraseSectors);
    }

    /**
     * Signal that the action EraseChip is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * EraseChip must be overridden if this is called.
     */      
    protected void enableActionEraseChip()
    {
        Action action = new Action("EraseChip");
        action.addInputParameter(new ParameterUint("aId"));
        iDelegateEraseChip = new DoEraseChip();
        enableAction(action, iDelegateEraseChip);
    }

    /**
     * Signal that the action Sectors is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Sectors must be overridden if this is called.
     */      
    protected void enableActionSectors()
    {
        Action action = new Action("Sectors");
        action.addInputParameter(new ParameterUint("aId"));
        action.addOutputParameter(new ParameterUint("aSectors"));
        iDelegateSectors = new DoSectors();
        enableAction(action, iDelegateSectors);
    }

    /**
     * Signal that the action SectorBytes is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SectorBytes must be overridden if this is called.
     */      
    protected void enableActionSectorBytes()
    {
        Action action = new Action("SectorBytes");
        action.addInputParameter(new ParameterUint("aId"));
        action.addOutputParameter(new ParameterUint("aBytes"));
        iDelegateSectorBytes = new DoSectorBytes();
        enableAction(action, iDelegateSectorBytes);
    }

    /**
     * Signal that the action RomDirInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * RomDirInfo must be overridden if this is called.
     */      
    protected void enableActionRomDirInfo()
    {
        Action action = new Action("RomDirInfo");
        action.addOutputParameter(new ParameterUint("aFlashIdMain"));
        action.addOutputParameter(new ParameterUint("aOffsetMain"));
        action.addOutputParameter(new ParameterUint("aBytesMain"));
        action.addOutputParameter(new ParameterUint("aFlashIdFallback"));
        action.addOutputParameter(new ParameterUint("aOffsetFallback"));
        action.addOutputParameter(new ParameterUint("aBytesFallback"));
        iDelegateRomDirInfo = new DoRomDirInfo();
        enableAction(action, iDelegateRomDirInfo);
    }

    /**
     * Read action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Read action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionRead} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aaId
     * @param aaAddress
     * @param aaLength
     */
    protected byte[] read(IDvInvocation aInvocation, long aaId, long aaAddress, long aaLength)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Write action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Write action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionWrite} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aaId
     * @param aaAddress
     * @param aaSource
     */
    protected void write(IDvInvocation aInvocation, long aaId, long aaAddress, byte[] aaSource)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Erase action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Erase action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionErase} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aaId
     * @param aaAddress
     */
    protected void erase(IDvInvocation aInvocation, long aaId, long aaAddress)
    {
        throw (new ActionDisabledError());
    }

    /**
     * EraseSector action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * EraseSector action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionEraseSector} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aaId
     * @param aaSector
     */
    protected void eraseSector(IDvInvocation aInvocation, long aaId, long aaSector)
    {
        throw (new ActionDisabledError());
    }

    /**
     * EraseSectors action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * EraseSectors action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionEraseSectors} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aaId
     * @param aaFirstSector
     * @param aaLastSector
     */
    protected void eraseSectors(IDvInvocation aInvocation, long aaId, long aaFirstSector, long aaLastSector)
    {
        throw (new ActionDisabledError());
    }

    /**
     * EraseChip action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * EraseChip action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionEraseChip} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aaId
     */
    protected void eraseChip(IDvInvocation aInvocation, long aaId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Sectors action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Sectors action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSectors} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aaId
     */
    protected long sectors(IDvInvocation aInvocation, long aaId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SectorBytes action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SectorBytes action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSectorBytes} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aaId
     */
    protected long sectorBytes(IDvInvocation aInvocation, long aaId)
    {
        throw (new ActionDisabledError());
    }

    /**
     * RomDirInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * RomDirInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionRomDirInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected RomDirInfo romDirInfo(IDvInvocation aInvocation)
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


    private class DoRead implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long aId;
            long aAddress;
            long aLength;
            byte[] aBuffer;
            try
            {
                invocation.readStart();
                aId = invocation.readUint("aId");
                aAddress = invocation.readUint("aAddress");
                aLength = invocation.readUint("aLength");
                invocation.readEnd();
                 aBuffer = read(invocation, aId, aAddress, aLength);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Read");
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
                invocation.writeBinary("aBuffer", aBuffer);
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

    private class DoWrite implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long aId;
            long aAddress;
            byte[] aSource;
            try
            {
                invocation.readStart();
                aId = invocation.readUint("aId");
                aAddress = invocation.readUint("aAddress");
                aSource = invocation.readBinary("aSource");
                invocation.readEnd();
                write(invocation, aId, aAddress, aSource);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Write");
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

    private class DoErase implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long aId;
            long aAddress;
            try
            {
                invocation.readStart();
                aId = invocation.readUint("aId");
                aAddress = invocation.readUint("aAddress");
                invocation.readEnd();
                erase(invocation, aId, aAddress);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Erase");
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

    private class DoEraseSector implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long aId;
            long aSector;
            try
            {
                invocation.readStart();
                aId = invocation.readUint("aId");
                aSector = invocation.readUint("aSector");
                invocation.readEnd();
                eraseSector(invocation, aId, aSector);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "EraseSector");
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

    private class DoEraseSectors implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long aId;
            long aFirstSector;
            long aLastSector;
            try
            {
                invocation.readStart();
                aId = invocation.readUint("aId");
                aFirstSector = invocation.readUint("aFirstSector");
                aLastSector = invocation.readUint("aLastSector");
                invocation.readEnd();
                eraseSectors(invocation, aId, aFirstSector, aLastSector);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "EraseSectors");
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

    private class DoEraseChip implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long aId;
            try
            {
                invocation.readStart();
                aId = invocation.readUint("aId");
                invocation.readEnd();
                eraseChip(invocation, aId);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "EraseChip");
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

    private class DoSectors implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long aId;
            long aSectors;
            try
            {
                invocation.readStart();
                aId = invocation.readUint("aId");
                invocation.readEnd();
                 aSectors = sectors(invocation, aId);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Sectors");
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
                invocation.writeUint("aSectors", aSectors);
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

    private class DoSectorBytes implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long aId;
            long aBytes;
            try
            {
                invocation.readStart();
                aId = invocation.readUint("aId");
                invocation.readEnd();
                 aBytes = sectorBytes(invocation, aId);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SectorBytes");
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
                invocation.writeUint("aBytes", aBytes);
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

    private class DoRomDirInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long aFlashIdMain;
            long aOffsetMain;
            long aBytesMain;
            long aFlashIdFallback;
            long aOffsetFallback;
            long aBytesFallback;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            RomDirInfo outArgs = romDirInfo(invocation);
            aFlashIdMain = outArgs.getFlashIdMain();
            aOffsetMain = outArgs.getOffsetMain();
            aBytesMain = outArgs.getBytesMain();
            aFlashIdFallback = outArgs.getFlashIdFallback();
            aOffsetFallback = outArgs.getOffsetFallback();
            aBytesFallback = outArgs.getBytesFallback();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "RomDirInfo");
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
                invocation.writeUint("aFlashIdMain", aFlashIdMain);
                invocation.writeUint("aOffsetMain", aOffsetMain);
                invocation.writeUint("aBytesMain", aBytesMain);
                invocation.writeUint("aFlashIdFallback", aFlashIdFallback);
                invocation.writeUint("aOffsetFallback", aOffsetFallback);
                invocation.writeUint("aBytesFallback", aBytesFallback);
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

