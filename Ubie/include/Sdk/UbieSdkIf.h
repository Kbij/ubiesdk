/*
 * UbieSdkIf.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCKS_UBIESDKIF_H_
#define FUNCTIONBLOCKS_UBIESDKIF_H_

#include "UbieSdk.h"
#include <string>
#include <stdint.h>
#include <map>

namespace SdkNs {
class FunctionBlockManagerIf;
class UbieSdkClientIf;

class UbieSdkIf
{
public:
	/**
	 * @brief Destroy the UbieSdk object
	 *
	 */
	virtual ~UbieSdkIf() {};

	/**
	 * @brief Get the SDK version as a string
	 *
	 * @return std::string
	 */
	virtual std::string version() const = 0;

	/**
	 * Get the FunctionBlock Manager
	 * @return The FunctionBlock Manager. The FunctionBlock manager allows you to create Ubie Devices and Ubie FunctionBlocks
	 */
	virtual FunctionBlockManagerIf* functionBlockManager() = 0;

	/**
	 * Register a client that will listen to events from the Ubie SDK
	 */
	virtual void registerUbieSdkClient(UbieSdkClientIf* client) = 0;

	/**
	 * Unregister the Client that listens to the Ubie SDK events
	 */
	virtual void unRegisterUbieSdkClient() = 0;

	/**
	 * Make a promise to the Watchdog
	 * @param from The name of the promise. Must be used when  feeding the watchdog
	 * @param timeoutMilliseconds timeout in miliseconds
	 */
    virtual void promise(const std::string& from, uint32_t timeoutMilliseconds) = 0;

    /**
     * Remove the promise from the Watchdog
     * @param from the same name as ased in the promise
     */
    virtual void removePromise(const std::string& from) = 0;

    /**
     * Feed the watchdog
     * @param from the same name as ased in the promise
     */
    virtual void feed(const std::string& from) = 0;

    /**
     * The character used as Fb separator
     * @param separator the separator (Default: _ -> XXX_)
     */
    virtual void idSeparator(const std::string& separator) = 0;

	/**
	 * @brief Get the ID prefix that is automatically added to the id's
	 *
	 * @return std::string
	 */
	virtual std::string idPrefix() const = 0;

    /**
     * Read the log settings from file
     * @param settingsFile The logging settings file
     */
    virtual void readLoggingSettings(const std::string& settingsFile) = 0;

	/**
	 * Send a user message to the cloud, the message concerns the general application
	 * @param level Message severity level
	 * @param id The id of the message (messages.json)
	 * @param dataFields Zero or more fields that will we inserted in the message
	 */
    virtual void cloudMessage(SdkMessageLevel level, const std::string& id, const std::map<int, std::string>& dataFields) = 0;

	/**
	 *
	 * @param devId the id of the removed device
	 * @param success Return "true" if the remove was successfull
	 */
	virtual void removeDeviceResult(const std::string& devId, bool success) = 0;

	/**
	 * @brief
	 *
	 * @param oldDeviceId The id of the "old device"
	 * @param success Return "true" if the remove was successfull
	 */
	virtual void replaceDeviceResult(const std::string& oldDeviceId, bool success) = 0;

	/**
	 * Search for mDns service types
	 */
	virtual void searchmDnsServiceTypes() = 0;

	/**
	 * Register for notifications for new mDns services
	 * @param type
	 */
	virtual void registermDnsServiceType(const std::string& type) = 0;

	/**
	 * UnRegister for notification for this type
	 * @param type
	 */
	virtual void unRegistermDnsServiceType(const std::string& type) = 0;

	/**
	 * @brief Create a backup of the application private config
	 *
	 * @param config
	 */
	virtual void backupPrivateConfig(const std::string& config) = 0;

	/**
	 * @brief Confirm that the private config was restored
	 *
	 */
	virtual void restoreComplete() = 0;
};
}


#endif /* FUNCTIONBLOCKS_UBIESDKIF_H_ */
