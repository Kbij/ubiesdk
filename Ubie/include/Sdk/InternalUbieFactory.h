/*
 * InternalFunctionBlockFactory.h
 *
 *  Created on: Jun 16, 2018
 *      Author: qbus
 */

#ifndef EXPORT_SDK_INTERNALFUNCTIONBLOCKFACTORY_H_
#define EXPORT_SDK_INTERNALFUNCTIONBLOCKFACTORY_H_

#include "UbieSdkIf.h"
#include "SdkSettings.h"

namespace SdkNs
{

class InternalUbieFactory
{
public:
	/**
	 * @brief Create a Ubie Sdk object, using the provided settings
	 *
	 * @param settings
	 * @return UbieSdkIf*
	 */
	static UbieSdkIf* createUbieSdk(const SdkSettings& settings);

	/**
	 * Delete the Ubie SDK
	 * @param sdk
	 */
	static void destroyUbieSdk(UbieSdkIf* sdk);
};

} /* namespace SdkNs */



#endif /* EXPORT_SDK_INTERNALFUNCTIONBLOCKFACTORY_H_ */
