using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkFlash1 : ICpProxy, IDisposable
    {
        void SyncRead(uint aId, uint aAddress, uint aLength, out byte[] aBuffer);
        void BeginRead(uint aId, uint aAddress, uint aLength, CpProxy.CallbackAsyncComplete aCallback);
        void EndRead(IntPtr aAsyncHandle, out byte[] aBuffer);
        void SyncWrite(uint aId, uint aAddress, byte[] aSource);
        void BeginWrite(uint aId, uint aAddress, byte[] aSource, CpProxy.CallbackAsyncComplete aCallback);
        void EndWrite(IntPtr aAsyncHandle);
        void SyncErase(uint aId, uint aAddress);
        void BeginErase(uint aId, uint aAddress, CpProxy.CallbackAsyncComplete aCallback);
        void EndErase(IntPtr aAsyncHandle);
        void SyncEraseSector(uint aId, uint aSector);
        void BeginEraseSector(uint aId, uint aSector, CpProxy.CallbackAsyncComplete aCallback);
        void EndEraseSector(IntPtr aAsyncHandle);
        void SyncEraseSectors(uint aId, uint aFirstSector, uint aLastSector);
        void BeginEraseSectors(uint aId, uint aFirstSector, uint aLastSector, CpProxy.CallbackAsyncComplete aCallback);
        void EndEraseSectors(IntPtr aAsyncHandle);
        void SyncEraseChip(uint aId);
        void BeginEraseChip(uint aId, CpProxy.CallbackAsyncComplete aCallback);
        void EndEraseChip(IntPtr aAsyncHandle);
        void SyncSectors(uint aId, out uint aSectors);
        void BeginSectors(uint aId, CpProxy.CallbackAsyncComplete aCallback);
        void EndSectors(IntPtr aAsyncHandle, out uint aSectors);
        void SyncSectorBytes(uint aId, out uint aBytes);
        void BeginSectorBytes(uint aId, CpProxy.CallbackAsyncComplete aCallback);
        void EndSectorBytes(IntPtr aAsyncHandle, out uint aBytes);
        void SyncRomDirInfo(out uint aFlashIdMain, out uint aOffsetMain, out uint aBytesMain, out uint aFlashIdFallback, out uint aOffsetFallback, out uint aBytesFallback);
        void BeginRomDirInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndRomDirInfo(IntPtr aAsyncHandle, out uint aFlashIdMain, out uint aOffsetMain, out uint aBytesMain, out uint aFlashIdFallback, out uint aOffsetFallback, out uint aBytesFallback);
    }

    internal class SyncReadLinnCoUkFlash1 : SyncProxyAction
    {
        private CpProxyLinnCoUkFlash1 iService;
        private byte[] iBuffer;

        public SyncReadLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
        {
            iService = aProxy;
        }
        public byte[] Buffer()
        {
            return iBuffer;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndRead(aAsyncHandle, out iBuffer);
        }
    };

    internal class SyncWriteLinnCoUkFlash1 : SyncProxyAction
    {
        private CpProxyLinnCoUkFlash1 iService;

        public SyncWriteLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndWrite(aAsyncHandle);
        }
    };

    internal class SyncEraseLinnCoUkFlash1 : SyncProxyAction
    {
        private CpProxyLinnCoUkFlash1 iService;

        public SyncEraseLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndErase(aAsyncHandle);
        }
    };

    internal class SyncEraseSectorLinnCoUkFlash1 : SyncProxyAction
    {
        private CpProxyLinnCoUkFlash1 iService;

        public SyncEraseSectorLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndEraseSector(aAsyncHandle);
        }
    };

    internal class SyncEraseSectorsLinnCoUkFlash1 : SyncProxyAction
    {
        private CpProxyLinnCoUkFlash1 iService;

        public SyncEraseSectorsLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndEraseSectors(aAsyncHandle);
        }
    };

    internal class SyncEraseChipLinnCoUkFlash1 : SyncProxyAction
    {
        private CpProxyLinnCoUkFlash1 iService;

        public SyncEraseChipLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndEraseChip(aAsyncHandle);
        }
    };

    internal class SyncSectorsLinnCoUkFlash1 : SyncProxyAction
    {
        private CpProxyLinnCoUkFlash1 iService;
        private uint iSectors;

        public SyncSectorsLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
        {
            iService = aProxy;
        }
        public uint Sectors()
        {
            return iSectors;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSectors(aAsyncHandle, out iSectors);
        }
    };

    internal class SyncSectorBytesLinnCoUkFlash1 : SyncProxyAction
    {
        private CpProxyLinnCoUkFlash1 iService;
        private uint iBytes;

        public SyncSectorBytesLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
        {
            iService = aProxy;
        }
        public uint Bytes()
        {
            return iBytes;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSectorBytes(aAsyncHandle, out iBytes);
        }
    };

    internal class SyncRomDirInfoLinnCoUkFlash1 : SyncProxyAction
    {
        private CpProxyLinnCoUkFlash1 iService;
        private uint iFlashIdMain;
        private uint iOffsetMain;
        private uint iBytesMain;
        private uint iFlashIdFallback;
        private uint iOffsetFallback;
        private uint iBytesFallback;

        public SyncRomDirInfoLinnCoUkFlash1(CpProxyLinnCoUkFlash1 aProxy)
        {
            iService = aProxy;
        }
        public uint FlashIdMain()
        {
            return iFlashIdMain;
        }
        public uint OffsetMain()
        {
            return iOffsetMain;
        }
        public uint BytesMain()
        {
            return iBytesMain;
        }
        public uint FlashIdFallback()
        {
            return iFlashIdFallback;
        }
        public uint OffsetFallback()
        {
            return iOffsetFallback;
        }
        public uint BytesFallback()
        {
            return iBytesFallback;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndRomDirInfo(aAsyncHandle, out iFlashIdMain, out iOffsetMain, out iBytesMain, out iFlashIdFallback, out iOffsetFallback, out iBytesFallback);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:Flash:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkFlash1 : CpProxy, IDisposable, ICpProxyLinnCoUkFlash1
    {
        private OpenHome.Net.Core.Action iActionRead;
        private OpenHome.Net.Core.Action iActionWrite;
        private OpenHome.Net.Core.Action iActionErase;
        private OpenHome.Net.Core.Action iActionEraseSector;
        private OpenHome.Net.Core.Action iActionEraseSectors;
        private OpenHome.Net.Core.Action iActionEraseChip;
        private OpenHome.Net.Core.Action iActionSectors;
        private OpenHome.Net.Core.Action iActionSectorBytes;
        private OpenHome.Net.Core.Action iActionRomDirInfo;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkFlash1(ICpDevice aDevice)
            : base("linn-co-uk", "Flash", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            

            iActionRead = new OpenHome.Net.Core.Action("Read");
            param = new ParameterUint("aId");
            iActionRead.AddInputParameter(param);
            param = new ParameterUint("aAddress");
            iActionRead.AddInputParameter(param);
            param = new ParameterUint("aLength");
            iActionRead.AddInputParameter(param);
            param = new ParameterBinary("aBuffer");
            iActionRead.AddOutputParameter(param);

            iActionWrite = new OpenHome.Net.Core.Action("Write");
            param = new ParameterUint("aId");
            iActionWrite.AddInputParameter(param);
            param = new ParameterUint("aAddress");
            iActionWrite.AddInputParameter(param);
            param = new ParameterBinary("aSource");
            iActionWrite.AddInputParameter(param);

            iActionErase = new OpenHome.Net.Core.Action("Erase");
            param = new ParameterUint("aId");
            iActionErase.AddInputParameter(param);
            param = new ParameterUint("aAddress");
            iActionErase.AddInputParameter(param);

            iActionEraseSector = new OpenHome.Net.Core.Action("EraseSector");
            param = new ParameterUint("aId");
            iActionEraseSector.AddInputParameter(param);
            param = new ParameterUint("aSector");
            iActionEraseSector.AddInputParameter(param);

            iActionEraseSectors = new OpenHome.Net.Core.Action("EraseSectors");
            param = new ParameterUint("aId");
            iActionEraseSectors.AddInputParameter(param);
            param = new ParameterUint("aFirstSector");
            iActionEraseSectors.AddInputParameter(param);
            param = new ParameterUint("aLastSector");
            iActionEraseSectors.AddInputParameter(param);

            iActionEraseChip = new OpenHome.Net.Core.Action("EraseChip");
            param = new ParameterUint("aId");
            iActionEraseChip.AddInputParameter(param);

            iActionSectors = new OpenHome.Net.Core.Action("Sectors");
            param = new ParameterUint("aId");
            iActionSectors.AddInputParameter(param);
            param = new ParameterUint("aSectors");
            iActionSectors.AddOutputParameter(param);

            iActionSectorBytes = new OpenHome.Net.Core.Action("SectorBytes");
            param = new ParameterUint("aId");
            iActionSectorBytes.AddInputParameter(param);
            param = new ParameterUint("aBytes");
            iActionSectorBytes.AddOutputParameter(param);

            iActionRomDirInfo = new OpenHome.Net.Core.Action("RomDirInfo");
            param = new ParameterUint("aFlashIdMain");
            iActionRomDirInfo.AddOutputParameter(param);
            param = new ParameterUint("aOffsetMain");
            iActionRomDirInfo.AddOutputParameter(param);
            param = new ParameterUint("aBytesMain");
            iActionRomDirInfo.AddOutputParameter(param);
            param = new ParameterUint("aFlashIdFallback");
            iActionRomDirInfo.AddOutputParameter(param);
            param = new ParameterUint("aOffsetFallback");
            iActionRomDirInfo.AddOutputParameter(param);
            param = new ParameterUint("aBytesFallback");
            iActionRomDirInfo.AddOutputParameter(param);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        /// <param name="aAddress"></param>
        /// <param name="aLength"></param>
        /// <param name="aBuffer"></param>
        public void SyncRead(uint aId, uint aAddress, uint aLength, out byte[] aBuffer)
        {
            SyncReadLinnCoUkFlash1 sync = new SyncReadLinnCoUkFlash1(this);
            BeginRead(aId, aAddress, aLength, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aBuffer = sync.Buffer();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndRead().</remarks>
        /// <param name="aId"></param>
        /// <param name="aAddress"></param>
        /// <param name="aLength"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginRead(uint aId, uint aAddress, uint aLength, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionRead, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionRead.InputParameter(inIndex++), aId));
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionRead.InputParameter(inIndex++), aAddress));
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionRead.InputParameter(inIndex++), aLength));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBinary((ParameterBinary)iActionRead.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aBuffer"></param>
        public void EndRead(IntPtr aAsyncHandle, out byte[] aBuffer)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aBuffer = Invocation.OutputBinary(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        /// <param name="aAddress"></param>
        /// <param name="aSource"></param>
        public void SyncWrite(uint aId, uint aAddress, byte[] aSource)
        {
            SyncWriteLinnCoUkFlash1 sync = new SyncWriteLinnCoUkFlash1(this);
            BeginWrite(aId, aAddress, aSource, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndWrite().</remarks>
        /// <param name="aId"></param>
        /// <param name="aAddress"></param>
        /// <param name="aSource"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginWrite(uint aId, uint aAddress, byte[] aSource, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionWrite, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionWrite.InputParameter(inIndex++), aId));
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionWrite.InputParameter(inIndex++), aAddress));
            invocation.AddInput(new ArgumentBinary((ParameterBinary)iActionWrite.InputParameter(inIndex++), aSource));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndWrite(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        /// <param name="aAddress"></param>
        public void SyncErase(uint aId, uint aAddress)
        {
            SyncEraseLinnCoUkFlash1 sync = new SyncEraseLinnCoUkFlash1(this);
            BeginErase(aId, aAddress, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndErase().</remarks>
        /// <param name="aId"></param>
        /// <param name="aAddress"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginErase(uint aId, uint aAddress, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionErase, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionErase.InputParameter(inIndex++), aId));
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionErase.InputParameter(inIndex++), aAddress));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndErase(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        /// <param name="aSector"></param>
        public void SyncEraseSector(uint aId, uint aSector)
        {
            SyncEraseSectorLinnCoUkFlash1 sync = new SyncEraseSectorLinnCoUkFlash1(this);
            BeginEraseSector(aId, aSector, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndEraseSector().</remarks>
        /// <param name="aId"></param>
        /// <param name="aSector"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginEraseSector(uint aId, uint aSector, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionEraseSector, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionEraseSector.InputParameter(inIndex++), aId));
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionEraseSector.InputParameter(inIndex++), aSector));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndEraseSector(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        /// <param name="aFirstSector"></param>
        /// <param name="aLastSector"></param>
        public void SyncEraseSectors(uint aId, uint aFirstSector, uint aLastSector)
        {
            SyncEraseSectorsLinnCoUkFlash1 sync = new SyncEraseSectorsLinnCoUkFlash1(this);
            BeginEraseSectors(aId, aFirstSector, aLastSector, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndEraseSectors().</remarks>
        /// <param name="aId"></param>
        /// <param name="aFirstSector"></param>
        /// <param name="aLastSector"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginEraseSectors(uint aId, uint aFirstSector, uint aLastSector, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionEraseSectors, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionEraseSectors.InputParameter(inIndex++), aId));
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionEraseSectors.InputParameter(inIndex++), aFirstSector));
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionEraseSectors.InputParameter(inIndex++), aLastSector));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndEraseSectors(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        public void SyncEraseChip(uint aId)
        {
            SyncEraseChipLinnCoUkFlash1 sync = new SyncEraseChipLinnCoUkFlash1(this);
            BeginEraseChip(aId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndEraseChip().</remarks>
        /// <param name="aId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginEraseChip(uint aId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionEraseChip, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionEraseChip.InputParameter(inIndex++), aId));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndEraseChip(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        /// <param name="aSectors"></param>
        public void SyncSectors(uint aId, out uint aSectors)
        {
            SyncSectorsLinnCoUkFlash1 sync = new SyncSectorsLinnCoUkFlash1(this);
            BeginSectors(aId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSectors = sync.Sectors();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSectors().</remarks>
        /// <param name="aId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSectors(uint aId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSectors, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSectors.InputParameter(inIndex++), aId));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionSectors.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSectors"></param>
        public void EndSectors(IntPtr aAsyncHandle, out uint aSectors)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSectors = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        /// <param name="aBytes"></param>
        public void SyncSectorBytes(uint aId, out uint aBytes)
        {
            SyncSectorBytesLinnCoUkFlash1 sync = new SyncSectorBytesLinnCoUkFlash1(this);
            BeginSectorBytes(aId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aBytes = sync.Bytes();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSectorBytes().</remarks>
        /// <param name="aId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSectorBytes(uint aId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSectorBytes, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSectorBytes.InputParameter(inIndex++), aId));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionSectorBytes.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aBytes"></param>
        public void EndSectorBytes(IntPtr aAsyncHandle, out uint aBytes)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aBytes = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aFlashIdMain"></param>
        /// <param name="aOffsetMain"></param>
        /// <param name="aBytesMain"></param>
        /// <param name="aFlashIdFallback"></param>
        /// <param name="aOffsetFallback"></param>
        /// <param name="aBytesFallback"></param>
        public void SyncRomDirInfo(out uint aFlashIdMain, out uint aOffsetMain, out uint aBytesMain, out uint aFlashIdFallback, out uint aOffsetFallback, out uint aBytesFallback)
        {
            SyncRomDirInfoLinnCoUkFlash1 sync = new SyncRomDirInfoLinnCoUkFlash1(this);
            BeginRomDirInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aFlashIdMain = sync.FlashIdMain();
            aOffsetMain = sync.OffsetMain();
            aBytesMain = sync.BytesMain();
            aFlashIdFallback = sync.FlashIdFallback();
            aOffsetFallback = sync.OffsetFallback();
            aBytesFallback = sync.BytesFallback();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndRomDirInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginRomDirInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionRomDirInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionRomDirInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionRomDirInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionRomDirInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionRomDirInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionRomDirInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionRomDirInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aFlashIdMain"></param>
        /// <param name="aOffsetMain"></param>
        /// <param name="aBytesMain"></param>
        /// <param name="aFlashIdFallback"></param>
        /// <param name="aOffsetFallback"></param>
        /// <param name="aBytesFallback"></param>
        public void EndRomDirInfo(IntPtr aAsyncHandle, out uint aFlashIdMain, out uint aOffsetMain, out uint aBytesMain, out uint aFlashIdFallback, out uint aOffsetFallback, out uint aBytesFallback)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aFlashIdMain = Invocation.OutputUint(aAsyncHandle, index++);
            aOffsetMain = Invocation.OutputUint(aAsyncHandle, index++);
            aBytesMain = Invocation.OutputUint(aAsyncHandle, index++);
            aFlashIdFallback = Invocation.OutputUint(aAsyncHandle, index++);
            aOffsetFallback = Invocation.OutputUint(aAsyncHandle, index++);
            aBytesFallback = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Must be called for each class instance.  Must be called before Core.Library.Close().
        /// </summary>
        public void Dispose()
        {
            lock (this)
            {
                if (iHandle == IntPtr.Zero)
                    return;
                DisposeProxy();
                iHandle = IntPtr.Zero;
            }
            iActionRead.Dispose();
            iActionWrite.Dispose();
            iActionErase.Dispose();
            iActionEraseSector.Dispose();
            iActionEraseSectors.Dispose();
            iActionEraseChip.Dispose();
            iActionSectors.Dispose();
            iActionSectorBytes.Dispose();
            iActionRomDirInfo.Dispose();
        }
    }
}

