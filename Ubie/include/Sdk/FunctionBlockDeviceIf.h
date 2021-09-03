/*
 * FunctionBlockDeviceIf.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCKS_FUNCTIONBLOCKDEVICEIF_H_
#define FUNCTIONBLOCKS_FUNCTIONBLOCKDEVICEIF_H_

#include "UbieSdk.h"
#include <string>
#include <map>


namespace SdkNs {
class FunctionBlockDeviceClientIf;

class FunctionBlockDeviceIf
{
public:

	virtual ~FunctionBlockDeviceIf() {};

	/**
	 * Register a client that will listen to events from this FunctionBlock Device
	 * @param client Pointer of the client
	 */
	virtual void registerClient(FunctionBlockDeviceClientIf* client) = 0;

	/**
	 * Unregister the client that will listen to events from this FunctionBlock Device
	 */
	virtual void unRegisterClient() = 0;

	/**
	 * Get the id of the function block device
	 * @return
	 */
	virtual std::string id() const = 0;

	/**
	 * Get the type of the function block device
	 * @return
	 */
	virtual std::string type() const = 0;

	/**
	 * Set the name of the function block device
	 * @param name
	 */
	virtual void name(const std::string& name) = 0;

	/**
	 * @brief Get the name of the funtion block device
	 *
	 * @return std::string
	 */
	virtual std::string name() const = 0;

	/**
	 * Set the serial of the device
	 * @param serial
	 */
	virtual void serial(const std::string& serial) = 0;

	/**
	 * @brief Get the serial of the device
	 *
	 * @return std::string
	 */
	virtual std::string serial() const = 0;

	/**
	 * Set the ip address of the device
	 * @param ip
	 */
	virtual void ip(const std::string& ip) = 0;

	/**
	 * @brief Set the Mac address of the device (if known)
	 *
	 * @param mac
	 */
	virtual void mac(const std::string& mac) = 0;

	/**
	 * @brief Set the Version of the device (if known)
	 *
	 * @param version
	 */
	virtual void version(const std::string& version) = 0;

	/**
	 * Add some kind of reference to the underlying system (ex Knx/Qbus address). Is visible in the configuration of the application
	 * @param refId
	 */
	virtual void refId(const std::string& refId) = 0;

	/**
	 * Do we have all the information to connect to the device (ip, authentication, etc...)
	 * @param connectable
	 */
	virtual void connectable(bool connectable) = 0;

	/**
	 * Are we actuallly connected to the device
	 * @param connected
	 */
	virtual void connected(bool connected) = 0;

	/**
	 * Commit the connectable/connected properties to the cloud
	 */
	virtual void commit() = 0;

	/**
	 * @brief Optional, set your own version string. Could be used to monitor config versions accros restarts.
	 * It is up to the user to change the version string each time the configuration changes
	 *
	 * @param version
	 */
	virtual void configVersion(const std::string& version) = 0;

	/**
	 * @brief Start a config update. This must be finished by a call to commitConfigUpdate, and a call to functionBlockManager->sendUbieConfig()
	 *
	 */
	virtual void beginConfigUpdate() = 0;

	/**
	 * @brief End the config update
	 *
	 */
	virtual void commitConfigUpdate() = 0;

	/**
	 * Combine multiple status updates on this device
	 */
	virtual void beginStatusUpdate() = 0;

	/**
	 * Commit multiple status updates on this device
	 */
	virtual void commitStatusUpdate() = 0;

	/**
	 * Send a user message to the cloud, the message concerns this device
	 * @param level Message severity level
	 * @param id The id of the message (messages.json)
	 * @param dataFields Zero or more fields that will we inserted in the message
	 */
	virtual void cloudMessage(SdkMessageLevel level, const std::string& id, const std::map<int, std::string>& dataFields) = 0;

	/**
	 * @brief Send a device activation message to the cloud.
	 *
	 * @param level
	 * @param id
	 * @param dataFields
	 * @param currentStep The current steop (starts at 1)
	 * @param maxStep The maximum number of steps
	 */
	virtual void activationMessage(SdkMessageLevel level, const std::string& id, const std::map<int, std::string>& dataFields, int currentStep, int maxStep) = 0;

	/**
	 * @brief Add a location, without parent. Sdk will generate a id
	 *
	 * @param name
	 * @return int the locationId, to be used in the FunctionBlock
	 */
	virtual int addLocation(const std::string& name) = 0;

	/**
	 * @brief Add a location, with a parent. Sdk will generate a id
	 *
	 * @param name
	 * @param parentId
	 * @return int the locationId, to be used in the FunctionBlock
	 */
	virtual int addLocation(const std::string& name, int parentId) = 0;

	/**
	 * @brief Add a location, without parent, specify the id
	 *
	 * @param id
	 * @param name
	 * @return int int the locationId, to be used in the FunctionBlock (=identical to id)
	 */
	virtual int addLocation(int id, const std::string& name) = 0;

	/**
	 * @brief Add a location, with parent, specify the id
	 *
	 * @param id
	 * @param name
	 * @param parentId
	 * @return int int the locationId, to be used in the FunctionBlock (=identical to id)
	 */
	virtual int addLocation(int id, const std::string& name, int parentId) = 0;

	/**
	 * @brief Clear the current locations
	 *
	 */
	virtual void clearLocations() = 0;

};
}

#endif /* FUNCTIONBLOCKS_FUNCTIONBLOCKDEVICEIF_H_ */
