#ifndef HEADER_DVLINNCOUKFLASH1
#define HEADER_DVLINNCOUKFLASH1

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Core/DvDevice.h>
#include <OpenHome/Net/Core/DvProvider.h>

namespace OpenHome {
namespace Net {

class DviDevice;
class IDviInvocation;
class PropertyInt;
class PropertyUint;
class PropertyBool;
class PropertyString;
class PropertyBinary;

/**
 * Provider for the linn.co.uk:Flash:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkFlash1 : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkFlash1() {}
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkFlash1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkFlash1(DviDevice& aDevice);
    /**
     * Signal that the action Read is supported.
     * The action's availability will be published in the device's service.xml.
     * Read must be overridden if this is called.
     */
    void EnableActionRead();
    /**
     * Signal that the action Write is supported.
     * The action's availability will be published in the device's service.xml.
     * Write must be overridden if this is called.
     */
    void EnableActionWrite();
    /**
     * Signal that the action Erase is supported.
     * The action's availability will be published in the device's service.xml.
     * Erase must be overridden if this is called.
     */
    void EnableActionErase();
    /**
     * Signal that the action EraseSector is supported.
     * The action's availability will be published in the device's service.xml.
     * EraseSector must be overridden if this is called.
     */
    void EnableActionEraseSector();
    /**
     * Signal that the action EraseSectors is supported.
     * The action's availability will be published in the device's service.xml.
     * EraseSectors must be overridden if this is called.
     */
    void EnableActionEraseSectors();
    /**
     * Signal that the action EraseChip is supported.
     * The action's availability will be published in the device's service.xml.
     * EraseChip must be overridden if this is called.
     */
    void EnableActionEraseChip();
    /**
     * Signal that the action Sectors is supported.
     * The action's availability will be published in the device's service.xml.
     * Sectors must be overridden if this is called.
     */
    void EnableActionSectors();
    /**
     * Signal that the action SectorBytes is supported.
     * The action's availability will be published in the device's service.xml.
     * SectorBytes must be overridden if this is called.
     */
    void EnableActionSectorBytes();
    /**
     * Signal that the action RomDirInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * RomDirInfo must be overridden if this is called.
     */
    void EnableActionRomDirInfo();
private:
    /**
     * Read action.
     *
     * Will be called when the device stack receives an invocation of the
     * Read action for the owning device.
     * Must be implemented iff EnableActionRead was called.
     */
    virtual void Read(IDvInvocation& aInvocation, TUint aaId, TUint aaAddress, TUint aaLength, IDvInvocationResponseBinary& aaBuffer);
    /**
     * Write action.
     *
     * Will be called when the device stack receives an invocation of the
     * Write action for the owning device.
     * Must be implemented iff EnableActionWrite was called.
     */
    virtual void Write(IDvInvocation& aInvocation, TUint aaId, TUint aaAddress, const Brx& aaSource);
    /**
     * Erase action.
     *
     * Will be called when the device stack receives an invocation of the
     * Erase action for the owning device.
     * Must be implemented iff EnableActionErase was called.
     */
    virtual void Erase(IDvInvocation& aInvocation, TUint aaId, TUint aaAddress);
    /**
     * EraseSector action.
     *
     * Will be called when the device stack receives an invocation of the
     * EraseSector action for the owning device.
     * Must be implemented iff EnableActionEraseSector was called.
     */
    virtual void EraseSector(IDvInvocation& aInvocation, TUint aaId, TUint aaSector);
    /**
     * EraseSectors action.
     *
     * Will be called when the device stack receives an invocation of the
     * EraseSectors action for the owning device.
     * Must be implemented iff EnableActionEraseSectors was called.
     */
    virtual void EraseSectors(IDvInvocation& aInvocation, TUint aaId, TUint aaFirstSector, TUint aaLastSector);
    /**
     * EraseChip action.
     *
     * Will be called when the device stack receives an invocation of the
     * EraseChip action for the owning device.
     * Must be implemented iff EnableActionEraseChip was called.
     */
    virtual void EraseChip(IDvInvocation& aInvocation, TUint aaId);
    /**
     * Sectors action.
     *
     * Will be called when the device stack receives an invocation of the
     * Sectors action for the owning device.
     * Must be implemented iff EnableActionSectors was called.
     */
    virtual void Sectors(IDvInvocation& aInvocation, TUint aaId, IDvInvocationResponseUint& aaSectors);
    /**
     * SectorBytes action.
     *
     * Will be called when the device stack receives an invocation of the
     * SectorBytes action for the owning device.
     * Must be implemented iff EnableActionSectorBytes was called.
     */
    virtual void SectorBytes(IDvInvocation& aInvocation, TUint aaId, IDvInvocationResponseUint& aaBytes);
    /**
     * RomDirInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * RomDirInfo action for the owning device.
     * Must be implemented iff EnableActionRomDirInfo was called.
     */
    virtual void RomDirInfo(IDvInvocation& aInvocation, IDvInvocationResponseUint& aaFlashIdMain, IDvInvocationResponseUint& aaOffsetMain, IDvInvocationResponseUint& aaBytesMain, IDvInvocationResponseUint& aaFlashIdFallback, IDvInvocationResponseUint& aaOffsetFallback, IDvInvocationResponseUint& aaBytesFallback);
private:
    DvProviderLinnCoUkFlash1();
    void Construct();
    void DoRead(IDviInvocation& aInvocation);
    void DoWrite(IDviInvocation& aInvocation);
    void DoErase(IDviInvocation& aInvocation);
    void DoEraseSector(IDviInvocation& aInvocation);
    void DoEraseSectors(IDviInvocation& aInvocation);
    void DoEraseChip(IDviInvocation& aInvocation);
    void DoSectors(IDviInvocation& aInvocation);
    void DoSectorBytes(IDviInvocation& aInvocation);
    void DoRomDirInfo(IDviInvocation& aInvocation);
private:
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKFLASH1

