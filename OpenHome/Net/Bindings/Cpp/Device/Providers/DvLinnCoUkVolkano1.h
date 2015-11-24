#ifndef HEADER_DVLINNCOUKVOLKANO1CPP
#define HEADER_DVLINNCOUKVOLKANO1CPP

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
 * Provider for the linn.co.uk:Volkano:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkVolkano1Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkVolkano1Cpp() {}
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkVolkano1Cpp(DvDeviceStd& aDevice);
    /**
     * Signal that the action Reboot is supported.
     * The action's availability will be published in the device's service.xml.
     * Reboot must be overridden if this is called.
     */
    void EnableActionReboot();
    /**
     * Signal that the action BootMode is supported.
     * The action's availability will be published in the device's service.xml.
     * BootMode must be overridden if this is called.
     */
    void EnableActionBootMode();
    /**
     * Signal that the action SetBootMode is supported.
     * The action's availability will be published in the device's service.xml.
     * SetBootMode must be overridden if this is called.
     */
    void EnableActionSetBootMode();
    /**
     * Signal that the action BspType is supported.
     * The action's availability will be published in the device's service.xml.
     * BspType must be overridden if this is called.
     */
    void EnableActionBspType();
    /**
     * Signal that the action UglyName is supported.
     * The action's availability will be published in the device's service.xml.
     * UglyName must be overridden if this is called.
     */
    void EnableActionUglyName();
    /**
     * Signal that the action MacAddress is supported.
     * The action's availability will be published in the device's service.xml.
     * MacAddress must be overridden if this is called.
     */
    void EnableActionMacAddress();
    /**
     * Signal that the action ProductId is supported.
     * The action's availability will be published in the device's service.xml.
     * ProductId must be overridden if this is called.
     */
    void EnableActionProductId();
    /**
     * Signal that the action BoardId is supported.
     * The action's availability will be published in the device's service.xml.
     * BoardId must be overridden if this is called.
     */
    void EnableActionBoardId();
    /**
     * Signal that the action BoardType is supported.
     * The action's availability will be published in the device's service.xml.
     * BoardType must be overridden if this is called.
     */
    void EnableActionBoardType();
    /**
     * Signal that the action MaxBoards is supported.
     * The action's availability will be published in the device's service.xml.
     * MaxBoards must be overridden if this is called.
     */
    void EnableActionMaxBoards();
    /**
     * Signal that the action SoftwareVersion is supported.
     * The action's availability will be published in the device's service.xml.
     * SoftwareVersion must be overridden if this is called.
     */
    void EnableActionSoftwareVersion();
    /**
     * Signal that the action SoftwareUpdate is supported.
     * The action's availability will be published in the device's service.xml.
     * SoftwareUpdate must be overridden if this is called.
     */
    void EnableActionSoftwareUpdate();
    /**
     * Signal that the action DeviceInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * DeviceInfo must be overridden if this is called.
     */
    void EnableActionDeviceInfo();
private:
    /**
     * Reboot action.
     *
     * Will be called when the device stack receives an invocation of the
     * Reboot action for the owning device.
     * Must be implemented iff EnableActionReboot was called.
     */
    virtual void Reboot(IDvInvocationStd& aInvocation);
    /**
     * BootMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * BootMode action for the owning device.
     * Must be implemented iff EnableActionBootMode was called.
     */
    virtual void BootMode(IDvInvocationStd& aInvocation, std::string& aaMode);
    /**
     * SetBootMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetBootMode action for the owning device.
     * Must be implemented iff EnableActionSetBootMode was called.
     */
    virtual void SetBootMode(IDvInvocationStd& aInvocation, const std::string& aaMode);
    /**
     * BspType action.
     *
     * Will be called when the device stack receives an invocation of the
     * BspType action for the owning device.
     * Must be implemented iff EnableActionBspType was called.
     */
    virtual void BspType(IDvInvocationStd& aInvocation, std::string& aaBspType);
    /**
     * UglyName action.
     *
     * Will be called when the device stack receives an invocation of the
     * UglyName action for the owning device.
     * Must be implemented iff EnableActionUglyName was called.
     */
    virtual void UglyName(IDvInvocationStd& aInvocation, std::string& aaUglyName);
    /**
     * MacAddress action.
     *
     * Will be called when the device stack receives an invocation of the
     * MacAddress action for the owning device.
     * Must be implemented iff EnableActionMacAddress was called.
     */
    virtual void MacAddress(IDvInvocationStd& aInvocation, std::string& aaMacAddress);
    /**
     * ProductId action.
     *
     * Will be called when the device stack receives an invocation of the
     * ProductId action for the owning device.
     * Must be implemented iff EnableActionProductId was called.
     */
    virtual void ProductId(IDvInvocationStd& aInvocation, std::string& aaProductNumber);
    /**
     * BoardId action.
     *
     * Will be called when the device stack receives an invocation of the
     * BoardId action for the owning device.
     * Must be implemented iff EnableActionBoardId was called.
     */
    virtual void BoardId(IDvInvocationStd& aInvocation, uint32_t aaIndex, std::string& aaBoardNumber);
    /**
     * BoardType action.
     *
     * Will be called when the device stack receives an invocation of the
     * BoardType action for the owning device.
     * Must be implemented iff EnableActionBoardType was called.
     */
    virtual void BoardType(IDvInvocationStd& aInvocation, uint32_t aaIndex, std::string& aaBoardNumber);
    /**
     * MaxBoards action.
     *
     * Will be called when the device stack receives an invocation of the
     * MaxBoards action for the owning device.
     * Must be implemented iff EnableActionMaxBoards was called.
     */
    virtual void MaxBoards(IDvInvocationStd& aInvocation, uint32_t& aaMaxBoards);
    /**
     * SoftwareVersion action.
     *
     * Will be called when the device stack receives an invocation of the
     * SoftwareVersion action for the owning device.
     * Must be implemented iff EnableActionSoftwareVersion was called.
     */
    virtual void SoftwareVersion(IDvInvocationStd& aInvocation, std::string& aaSoftwareVersion);
    /**
     * SoftwareUpdate action.
     *
     * Will be called when the device stack receives an invocation of the
     * SoftwareUpdate action for the owning device.
     * Must be implemented iff EnableActionSoftwareUpdate was called.
     */
    virtual void SoftwareUpdate(IDvInvocationStd& aInvocation, bool& aaAvailable, std::string& aaSoftwareVersion);
    /**
     * DeviceInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * DeviceInfo action for the owning device.
     * Must be implemented iff EnableActionDeviceInfo was called.
     */
    virtual void DeviceInfo(IDvInvocationStd& aInvocation, std::string& aaDeviceInfoXml);
private:
    DvProviderLinnCoUkVolkano1Cpp();
    void DoReboot(IDviInvocation& aInvocation);
    void DoBootMode(IDviInvocation& aInvocation);
    void DoSetBootMode(IDviInvocation& aInvocation);
    void DoBspType(IDviInvocation& aInvocation);
    void DoUglyName(IDviInvocation& aInvocation);
    void DoMacAddress(IDviInvocation& aInvocation);
    void DoProductId(IDviInvocation& aInvocation);
    void DoBoardId(IDviInvocation& aInvocation);
    void DoBoardType(IDviInvocation& aInvocation);
    void DoMaxBoards(IDviInvocation& aInvocation);
    void DoSoftwareVersion(IDviInvocation& aInvocation);
    void DoSoftwareUpdate(IDviInvocation& aInvocation);
    void DoDeviceInfo(IDviInvocation& aInvocation);
private:
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKVOLKANO1CPP

