/*
 * UbieFactory.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCKS_FUNCTIONBLOCKFACTORY_H_
#define FUNCTIONBLOCKS_FUNCTIONBLOCKFACTORY_H_

#include "UbieSdkIf.h"

namespace SdkNs
{

class UbieFactory
{
public:
	/**
	 * Create a instance of the Ubie SDK
	 * @param name The Name of the application
	 * @param idPrefix  The prefix value to use for Device and FunctionBlock Id's
	 * @return
	 */
	static UbieSdkIf* createUbieSdk(const std::string& name, const std::string& idPrefix);

	/**
	 * Create a instance of the Ubie SDK
	 * @param appName The Name of the application
	 * @param idPrefix  The prefix value to use for Device and FunctionBlock Id's
	 * @param storagePath The path to the location where the Sdk can write data
	 * @return
	 */
	static UbieSdkIf* createUbieSdk(const std::string& appName, const std::string& idPrefix, const std::string& storagePath);

	/**
	 * Delete the Ubie SDK
	 * @param sdk
	 */
	static void destroyUbieSdk(UbieSdkIf* sdk);
};

} /* namespace SdkNs */

#endif /* FUNCTIONBLOCKS_FUNCTIONBLOCKFACTORY_H_ */
