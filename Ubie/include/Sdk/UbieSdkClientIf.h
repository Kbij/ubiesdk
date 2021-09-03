/*
 * UbieSdkClientIf.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCKS_UBIESDKCLIENTIF_H_
#define FUNCTIONBLOCKS_UBIESDKCLIENTIF_H_
#include <string>

namespace SdkNs
{
struct mDnsDevice
{
	mDnsDevice(): Name(), HostName(), Address(), Type(), Domain(), Port() {};
	std::string Name;
	std::string HostName;
	std::string Address;
	std::string Type;
	std::string Domain;
	uint16_t Port;
};

class UbieSdkClientIf
{
public:

	virtual ~UbieSdkClientIf() {};
	/**
	 * Receive a config from the cloud
	 * @param config The Json config
	 */
	virtual void receivecloudConfig(const std::string& config) = 0;

	/**
	 * A UPnP Device was found
	 * @param host
	 * @param st
	 * @param descriptionXml
	 */
	virtual void uPnpDeviceFound(const std::string& host, const std::string& st, const std::string& descriptionXml) = 0;

	/**
	 * A UPnP Device was lost
	 * @param host
	 * @param st
	 * @param descriptionXml
	 */
	virtual void uPnpDeviceLost(const std::string& host, const std::string& st, const std::string& descriptionXml) = 0;

	/**
	 *
	 * @param serviceType
	 */
	virtual void mDnsServiceTypeFound(const std::string& serviceType) = 0;

	/**
	 *
	 * @param device
	 */
	virtual void mDnsDeviceFound(const mDnsDevice& device) = 0;

	/**
	 *
	 * @param device
	 */
	virtual void mDnsDeviceLost(const mDnsDevice& device) = 0;

	/**
	 * Remove a device. Once the device is removed, you should never use the devId again.
	 * Call UbieSdkIf::removeDeviceResult when the change was successful, or failed. When the change was successful, call FunctionBlockManagerIf::sendUbieConfig
	 * @param devId
	 */
	virtual void removeDevice(const std::string& devId) = 0;

	/**
	 * @brief A device is causing to much traffic (events);  please block this device.
	 *
	 * @param devId
	 */
	virtual void blockDevice(const std::string& devId) = 0;

	/**
	 * @brief When sending commitHistory() messages. The history processor queue is overflowing. Wait until overflow condition is cleared for sending new history messages
	 *
	 * @param overflow
	 */
	virtual void historyProcessingOverflow(bool overflow) = 0;

	/**
	 * @brief Replace a device by a new device. All Fb's below that device should use the "oldDeviceId" ids.
	 *
	 * @param oldDeviceId
	 * @param newDeviceId
	 */
	virtual void replaceDevice(const std::string& oldDeviceId, const std::string& newDeviceId) = 0;

	/**
	 * @brief A Ubie replace/restore is initiated from the cloud. Restore the local private config with this content, and restart the application
	 *
	 * @param config
	 */
	virtual void restorePrivateConfig(const std::string& config) = 0;
};
}


#endif /* FUNCTIONBLOCKS_UBIESDKCLIENTIF_H_ */
