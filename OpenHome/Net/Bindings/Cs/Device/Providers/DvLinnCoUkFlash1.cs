using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkFlash1 : IDisposable
    {
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:Flash:1 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkFlash1 : DvProvider, IDisposable, IDvProviderLinnCoUkFlash1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateRead;
        private ActionDelegate iDelegateWrite;
        private ActionDelegate iDelegateErase;
        private ActionDelegate iDelegateEraseSector;
        private ActionDelegate iDelegateEraseSectors;
        private ActionDelegate iDelegateEraseChip;
        private ActionDelegate iDelegateSectors;
        private ActionDelegate iDelegateSectorBytes;
        private ActionDelegate iDelegateRomDirInfo;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkFlash1(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "Flash", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Signal that the action Read is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Read must be overridden if this is called.</remarks>
        protected void EnableActionRead()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Read");
            action.AddInputParameter(new ParameterUint("aId"));
            action.AddInputParameter(new ParameterUint("aAddress"));
            action.AddInputParameter(new ParameterUint("aLength"));
            action.AddOutputParameter(new ParameterBinary("aBuffer"));
            iDelegateRead = new ActionDelegate(DoRead);
            EnableAction(action, iDelegateRead, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Write is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Write must be overridden if this is called.</remarks>
        protected void EnableActionWrite()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Write");
            action.AddInputParameter(new ParameterUint("aId"));
            action.AddInputParameter(new ParameterUint("aAddress"));
            action.AddInputParameter(new ParameterBinary("aSource"));
            iDelegateWrite = new ActionDelegate(DoWrite);
            EnableAction(action, iDelegateWrite, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Erase is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Erase must be overridden if this is called.</remarks>
        protected void EnableActionErase()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Erase");
            action.AddInputParameter(new ParameterUint("aId"));
            action.AddInputParameter(new ParameterUint("aAddress"));
            iDelegateErase = new ActionDelegate(DoErase);
            EnableAction(action, iDelegateErase, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action EraseSector is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// EraseSector must be overridden if this is called.</remarks>
        protected void EnableActionEraseSector()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("EraseSector");
            action.AddInputParameter(new ParameterUint("aId"));
            action.AddInputParameter(new ParameterUint("aSector"));
            iDelegateEraseSector = new ActionDelegate(DoEraseSector);
            EnableAction(action, iDelegateEraseSector, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action EraseSectors is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// EraseSectors must be overridden if this is called.</remarks>
        protected void EnableActionEraseSectors()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("EraseSectors");
            action.AddInputParameter(new ParameterUint("aId"));
            action.AddInputParameter(new ParameterUint("aFirstSector"));
            action.AddInputParameter(new ParameterUint("aLastSector"));
            iDelegateEraseSectors = new ActionDelegate(DoEraseSectors);
            EnableAction(action, iDelegateEraseSectors, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action EraseChip is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// EraseChip must be overridden if this is called.</remarks>
        protected void EnableActionEraseChip()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("EraseChip");
            action.AddInputParameter(new ParameterUint("aId"));
            iDelegateEraseChip = new ActionDelegate(DoEraseChip);
            EnableAction(action, iDelegateEraseChip, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Sectors is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Sectors must be overridden if this is called.</remarks>
        protected void EnableActionSectors()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Sectors");
            action.AddInputParameter(new ParameterUint("aId"));
            action.AddOutputParameter(new ParameterUint("aSectors"));
            iDelegateSectors = new ActionDelegate(DoSectors);
            EnableAction(action, iDelegateSectors, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SectorBytes is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SectorBytes must be overridden if this is called.</remarks>
        protected void EnableActionSectorBytes()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SectorBytes");
            action.AddInputParameter(new ParameterUint("aId"));
            action.AddOutputParameter(new ParameterUint("aBytes"));
            iDelegateSectorBytes = new ActionDelegate(DoSectorBytes);
            EnableAction(action, iDelegateSectorBytes, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action RomDirInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// RomDirInfo must be overridden if this is called.</remarks>
        protected void EnableActionRomDirInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("RomDirInfo");
            action.AddOutputParameter(new ParameterUint("aFlashIdMain"));
            action.AddOutputParameter(new ParameterUint("aOffsetMain"));
            action.AddOutputParameter(new ParameterUint("aBytesMain"));
            action.AddOutputParameter(new ParameterUint("aFlashIdFallback"));
            action.AddOutputParameter(new ParameterUint("aOffsetFallback"));
            action.AddOutputParameter(new ParameterUint("aBytesFallback"));
            iDelegateRomDirInfo = new ActionDelegate(DoRomDirInfo);
            EnableAction(action, iDelegateRomDirInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Read action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Read action for the owning device.
        ///
        /// Must be implemented iff EnableActionRead was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaId"></param>
        /// <param name="aaAddress"></param>
        /// <param name="aaLength"></param>
        /// <param name="aaBuffer"></param>
        protected virtual void Read(IDvInvocation aInvocation, uint aaId, uint aaAddress, uint aaLength, out byte[] aaBuffer)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Write action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Write action for the owning device.
        ///
        /// Must be implemented iff EnableActionWrite was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaId"></param>
        /// <param name="aaAddress"></param>
        /// <param name="aaSource"></param>
        protected virtual void Write(IDvInvocation aInvocation, uint aaId, uint aaAddress, byte[] aaSource)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Erase action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Erase action for the owning device.
        ///
        /// Must be implemented iff EnableActionErase was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaId"></param>
        /// <param name="aaAddress"></param>
        protected virtual void Erase(IDvInvocation aInvocation, uint aaId, uint aaAddress)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// EraseSector action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// EraseSector action for the owning device.
        ///
        /// Must be implemented iff EnableActionEraseSector was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaId"></param>
        /// <param name="aaSector"></param>
        protected virtual void EraseSector(IDvInvocation aInvocation, uint aaId, uint aaSector)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// EraseSectors action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// EraseSectors action for the owning device.
        ///
        /// Must be implemented iff EnableActionEraseSectors was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaId"></param>
        /// <param name="aaFirstSector"></param>
        /// <param name="aaLastSector"></param>
        protected virtual void EraseSectors(IDvInvocation aInvocation, uint aaId, uint aaFirstSector, uint aaLastSector)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// EraseChip action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// EraseChip action for the owning device.
        ///
        /// Must be implemented iff EnableActionEraseChip was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaId"></param>
        protected virtual void EraseChip(IDvInvocation aInvocation, uint aaId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Sectors action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Sectors action for the owning device.
        ///
        /// Must be implemented iff EnableActionSectors was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaId"></param>
        /// <param name="aaSectors"></param>
        protected virtual void Sectors(IDvInvocation aInvocation, uint aaId, out uint aaSectors)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SectorBytes action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SectorBytes action for the owning device.
        ///
        /// Must be implemented iff EnableActionSectorBytes was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaId"></param>
        /// <param name="aaBytes"></param>
        protected virtual void SectorBytes(IDvInvocation aInvocation, uint aaId, out uint aaBytes)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// RomDirInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// RomDirInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionRomDirInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaFlashIdMain"></param>
        /// <param name="aaOffsetMain"></param>
        /// <param name="aaBytesMain"></param>
        /// <param name="aaFlashIdFallback"></param>
        /// <param name="aaOffsetFallback"></param>
        /// <param name="aaBytesFallback"></param>
        protected virtual void RomDirInfo(IDvInvocation aInvocation, out uint aaFlashIdMain, out uint aaOffsetMain, out uint aaBytesMain, out uint aaFlashIdFallback, out uint aaOffsetFallback, out uint aaBytesFallback)
        {
            throw (new ActionDisabledError());
        }

        private static int DoRead(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkFlash1 self = (DvProviderLinnCoUkFlash1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint aId;
            uint aAddress;
            uint aLength;
            byte[] aBuffer;
            try
            {
                invocation.ReadStart();
                aId = invocation.ReadUint("aId");
                aAddress = invocation.ReadUint("aAddress");
                aLength = invocation.ReadUint("aLength");
                invocation.ReadEnd();
                self.Read(invocation, aId, aAddress, aLength, out aBuffer);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Read");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Read" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Read" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBinary("aBuffer", aBuffer);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Read" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoWrite(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkFlash1 self = (DvProviderLinnCoUkFlash1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint aId;
            uint aAddress;
            byte[] aSource;
            try
            {
                invocation.ReadStart();
                aId = invocation.ReadUint("aId");
                aAddress = invocation.ReadUint("aAddress");
                aSource = invocation.ReadBinary("aSource");
                invocation.ReadEnd();
                self.Write(invocation, aId, aAddress, aSource);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Write");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Write" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Write" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Write" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoErase(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkFlash1 self = (DvProviderLinnCoUkFlash1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint aId;
            uint aAddress;
            try
            {
                invocation.ReadStart();
                aId = invocation.ReadUint("aId");
                aAddress = invocation.ReadUint("aAddress");
                invocation.ReadEnd();
                self.Erase(invocation, aId, aAddress);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Erase");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Erase" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Erase" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Erase" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoEraseSector(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkFlash1 self = (DvProviderLinnCoUkFlash1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint aId;
            uint aSector;
            try
            {
                invocation.ReadStart();
                aId = invocation.ReadUint("aId");
                aSector = invocation.ReadUint("aSector");
                invocation.ReadEnd();
                self.EraseSector(invocation, aId, aSector);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "EraseSector");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "EraseSector" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "EraseSector" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "EraseSector" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoEraseSectors(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkFlash1 self = (DvProviderLinnCoUkFlash1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint aId;
            uint aFirstSector;
            uint aLastSector;
            try
            {
                invocation.ReadStart();
                aId = invocation.ReadUint("aId");
                aFirstSector = invocation.ReadUint("aFirstSector");
                aLastSector = invocation.ReadUint("aLastSector");
                invocation.ReadEnd();
                self.EraseSectors(invocation, aId, aFirstSector, aLastSector);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "EraseSectors");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "EraseSectors" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "EraseSectors" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "EraseSectors" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoEraseChip(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkFlash1 self = (DvProviderLinnCoUkFlash1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint aId;
            try
            {
                invocation.ReadStart();
                aId = invocation.ReadUint("aId");
                invocation.ReadEnd();
                self.EraseChip(invocation, aId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "EraseChip");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "EraseChip" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "EraseChip" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "EraseChip" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSectors(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkFlash1 self = (DvProviderLinnCoUkFlash1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint aId;
            uint aSectors;
            try
            {
                invocation.ReadStart();
                aId = invocation.ReadUint("aId");
                invocation.ReadEnd();
                self.Sectors(invocation, aId, out aSectors);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Sectors");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Sectors" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Sectors" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("aSectors", aSectors);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Sectors" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSectorBytes(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkFlash1 self = (DvProviderLinnCoUkFlash1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint aId;
            uint aBytes;
            try
            {
                invocation.ReadStart();
                aId = invocation.ReadUint("aId");
                invocation.ReadEnd();
                self.SectorBytes(invocation, aId, out aBytes);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SectorBytes");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SectorBytes" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SectorBytes" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("aBytes", aBytes);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SectorBytes" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoRomDirInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkFlash1 self = (DvProviderLinnCoUkFlash1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint aFlashIdMain;
            uint aOffsetMain;
            uint aBytesMain;
            uint aFlashIdFallback;
            uint aOffsetFallback;
            uint aBytesFallback;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.RomDirInfo(invocation, out aFlashIdMain, out aOffsetMain, out aBytesMain, out aFlashIdFallback, out aOffsetFallback, out aBytesFallback);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "RomDirInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "RomDirInfo" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "RomDirInfo" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("aFlashIdMain", aFlashIdMain);
                invocation.WriteUint("aOffsetMain", aOffsetMain);
                invocation.WriteUint("aBytesMain", aBytesMain);
                invocation.WriteUint("aFlashIdFallback", aFlashIdFallback);
                invocation.WriteUint("aOffsetFallback", aOffsetFallback);
                invocation.WriteUint("aBytesFallback", aBytesFallback);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "RomDirInfo" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        /// <summary>
        /// Must be called for each class instance.  Must be called before Core.Library.Close().
        /// </summary>
        public virtual void Dispose()
        {
            if (DisposeProvider())
                iGch.Free();
        }
    }
}

