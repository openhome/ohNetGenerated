#ifndef HEADER_DVLINNCOUKFLASH1CPP
#define HEADER_DVLINNCOUKFLASH1CPP

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/DvDevice.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>

#include <string>

namespace OpenHome {
namespace Net {

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
class DvProviderLinnCoUkFlash1Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkFlash1Cpp() {}
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkFlash1Cpp(DvDeviceStd& aDevice);
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
    virtual void Read(IDvInvocationStd& aInvocation, uint32_t aaId, uint32_t aaAddress, uint32_t aaLength, std::string& aaBuffer);
    /**
     * Write action.
     *
     * Will be called when the device stack receives an invocation of the
     * Write action for the owning device.
     * Must be implemented iff EnableActionWrite was called.
     */
    virtual void Write(IDvInvocationStd& aInvocation, uint32_t aaId, uint32_t aaAddress, const std::string& aaSource);
    /**
     * Erase action.
     *
     * Will be called when the device stack receives an invocation of the
     * Erase action for the owning device.
     * Must be implemented iff EnableActionErase was called.
     */
    virtual void Erase(IDvInvocationStd& aInvocation, uint32_t aaId, uint32_t aaAddress);
    /**
     * EraseSector action.
     *
     * Will be called when the device stack receives an invocation of the
     * EraseSector action for the owning device.
     * Must be implemented iff EnableActionEraseSector was called.
     */
    virtual void EraseSector(IDvInvocationStd& aInvocation, uint32_t aaId, uint32_t aaSector);
    /**
     * EraseSectors action.
     *
     * Will be called when the device stack receives an invocation of the
     * EraseSectors action for the owning device.
     * Must be implemented iff EnableActionEraseSectors was called.
     */
    virtual void EraseSectors(IDvInvocationStd& aInvocation, uint32_t aaId, uint32_t aaFirstSector, uint32_t aaLastSector);
    /**
     * EraseChip action.
     *
     * Will be called when the device stack receives an invocation of the
     * EraseChip action for the owning device.
     * Must be implemented iff EnableActionEraseChip was called.
     */
    virtual void EraseChip(IDvInvocationStd& aInvocation, uint32_t aaId);
    /**
     * Sectors action.
     *
     * Will be called when the device stack receives an invocation of the
     * Sectors action for the owning device.
     * Must be implemented iff EnableActionSectors was called.
     */
    virtual void Sectors(IDvInvocationStd& aInvocation, uint32_t aaId, uint32_t& aaSectors);
    /**
     * SectorBytes action.
     *
     * Will be called when the device stack receives an invocation of the
     * SectorBytes action for the owning device.
     * Must be implemented iff EnableActionSectorBytes was called.
     */
    virtual void SectorBytes(IDvInvocationStd& aInvocation, uint32_t aaId, uint32_t& aaBytes);
    /**
     * RomDirInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * RomDirInfo action for the owning device.
     * Must be implemented iff EnableActionRomDirInfo was called.
     */
    virtual void RomDirInfo(IDvInvocationStd& aInvocation, uint32_t& aaFlashIdMain, uint32_t& aaOffsetMain, uint32_t& aaBytesMain, uint32_t& aaFlashIdFallback, uint32_t& aaOffsetFallback, uint32_t& aaBytesFallback);
private:
    DvProviderLinnCoUkFlash1Cpp();
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

#endif // HEADER_DVLINNCOUKFLASH1CPP

