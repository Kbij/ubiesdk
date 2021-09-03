//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/*
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCKS_IPCAMIF_H_
#define FUNCTIONBLOCKS_IPCAMIF_H_
#include "Sdk/FunctionBlockIf.h"
#include "IPCamDefinitions.h"
#include <string>
#include <set>
#include <vector>
#include <stdint.h>
#include <boost/optional.hpp>

/**
 * \class SdkNs::IPCamIf
 * \brief
 * 
 * Properties:
 *  - camServerHost
 *  - camServerPort
 *  - listeningPort
 *  - streamId
 * Actions:
 *  - activate
 *  - deactivate

 */

namespace SdkNs {
class IPCamClientIf;

class IPCamIf: public FunctionBlockIf
{
public:
	virtual ~IPCamIf() {};

	/**
	 * Register a client that will listen to events from this IPCam FunctionBlock
	 * @param client Pointer of the client
	 */
	virtual void registerClient(IPCamClientIf* client) = 0;

	/**
	 * Unregister the client that will listen to events of the IPCam FunctionBlock
	 */
	virtual void unRegisterClient() = 0;

	/**
	 * Send value to the cloud. 
	 * @param ubieValue The Value to send to the cloud 
	 */
	virtual void listeningPort(int ubieValue) = 0;

	/**
	 * Set the configuration of this property (read, write, step, unit)
	 * @param conf The configuration of the property
	 */
	virtual void listeningPortConfig(const SdkNs::IPCamDef::listeningPortConf& conf) = 0;

	/**
	 * Notify the Sdk that the action was completed; this will cancel the timeout returned in the IPCamClientIf::activate(const std::set<std::string>& properties) call
	 * @param success The action was successfull or not
	 */
	virtual void activateCompleted(bool success) = 0;

	/**
	 * Notify the Sdk that the action was completed; this will cancel the timeout returned in the IPCamClientIf::deactivate(const std::set<std::string>& properties) call
	 * @param success The action was successfull or not
	 */
	virtual void deactivateCompleted(bool success) = 0;

	/**
	 * Send a user message to the cloud, the message concerns this functionblock
	 * @param level Message severity level
	 * @param id The id of the message (messages.json)
	 * @param dataFields Zero or more fields that will we inserted in the message
	 */
	virtual void cloudMessage(SdkMessageLevel level, const std::string& id, const std::map<int, std::string>& dataFields) = 0;

	/**
	 * Commit history
	 * @param historyState A vector of history states
	 */
	virtual void commitHistory(const std::vector<SdkNs::IPCamDef::HistoryState>& historyState) = 0;
};
}

#endif /* FUNCTIONBLOCKS_IPCAMIF_H_ */
