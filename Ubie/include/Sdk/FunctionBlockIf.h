/*
 * FunctionBlockIf.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCKS_FUNCTIONBLOCKIF_H_
#define FUNCTIONBLOCKS_FUNCTIONBLOCKIF_H_
#include "UbieSdk.h"
#include <string>
#include <map>

namespace SdkNs {
class FunctionBlockIf
{
public:
	virtual ~FunctionBlockIf() {};
	/**
	 * Get the id of the function block
	 * @return
	 */
	virtual std::string id() const = 0;

	/**
	 * Get the name of the functionblock
	 */
	virtual std::string name() const = 0;

	/**
	 * Set the name of the functionblock
	 * @param name
	 */
	virtual void name(const std::string& name) = 0;

	/**
	 * @brief A variant of a functionblock type
	 * A type variant of a functionblock, means that the method of control of the functionblock type is still the same
	 * But the variant means: different appearance, different icon etc...
	 *
	 * @param variant
	 */
	virtual void variant(const std::string& variant) = 0;

	/**
	 * Get the location of the functionblock
	 */
	virtual std::string location() const = 0;

	/**
	 * Set the location of the functionblock
	 * @param name
	 */
	virtual void location(const std::string& name) = 0;

	/**
	 * Set the location of the functionblock, via locationId
	 * @param locationId
	 */
	virtual void locationId(int locationId) = 0;

	/**
	 * Add some kind of reference to the underlying system (ex Knx/Qbus address). Is visible in the configuration of the application
	 * @param refId
	 */
	virtual void refId(const std::string& refId) = 0;

	/**
	 * Send the Commit the configuration changes (an event will be send to the cloud)
	 */
	virtual void commit() = 0;

	/**
	 * Send a user message to the cloud, the message concerns this functionblock device
	 * @param level Message severity level
	 * @param id The id of the message (messages.json)
	 * @param dataFields Zero or more fields that will we inserted in the message
	 */
	virtual void cloudMessage(SdkMessageLevel level, const std::string& id, const std::map<int, std::string>& dataFields) = 0;

};
}

#endif /* FUNCTIONBLOCKS_FUNCTIONBLOCKIF_H_ */
