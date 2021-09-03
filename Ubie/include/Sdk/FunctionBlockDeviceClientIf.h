/*
 * FunctionBlockDeviceClientIf.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef EXPORT_SDK_FUNCTIONBLOCKDEVICECLIENTIF_H_
#define EXPORT_SDK_FUNCTIONBLOCKDEVICECLIENTIF_H_
#include <string>
#include <set>

namespace SdkNs
{

class FunctionBlockDeviceClientIf
{
public:

	/**
	 * @brief Destructor
	 *
	 */
	virtual ~FunctionBlockDeviceClientIf(){};

	/**
	 * The authkey for the activate action is received from the cloud
	 * @param cloudValue The authorisation key to store
	 */
	virtual void authKey(const std::string& cloudValue) = 0;

	/**
	 * Action received from the cloud
	 * @param properties List of properties for this action (authKey)
	 */
	virtual int activate(const std::set<std::string>& properties) = 0;

};
}



#endif /* EXPORT_SDK_FUNCTIONBLOCKDEVICECLIENTIF_H_ */
