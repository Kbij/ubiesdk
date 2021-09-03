
#ifndef FUNCTIONBLOCKS_IPCAMCLIENTIF_H_
#define FUNCTIONBLOCKS_IPCAMCLIENTIF_H_
#include <string>
#include <set>

namespace SdkNs
{

const std::string PROP_IPCAM_CAMSERVERHOST = "camServerHost";
const std::string PROP_IPCAM_CAMSERVERPORT = "camServerPort";
const std::string PROP_IPCAM_LISTENINGPORT = "listeningPort";
const std::string PROP_IPCAM_STREAMID = "streamId";


class IPCamClientIf
{
public:
	/**
	 * @brief Destroy the IPCamClientIf object
	 *
	 */
	virtual ~IPCamClientIf() {};

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void camServerHost(std::string cloudValue) = 0;

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void camServerPort(int cloudValue) = 0;

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void streamId(std::string cloudValue) = 0;

	/**
	 * Complete event was received from the cloud. All values can be commited to the underlying device
	 * @param properties The list of properties that where send in this commit
     * @return the timeout (milliseconds) that the Sdk must wait before processing another cloud event
	 *		   Special values for return parameter are:
	 *		   0: Use the default timeout of 500 msec
	 * 	      -1: No timeout, action is already completed
	 */
	virtual int commit(const std::set<std::string>& properties) = 0;

	/**
	 * Action received from the cloud. 
	 * @param properties The list of properties that where send for this action
     * @return the timeout (milliseconds) that the Sdk must wait before processing another cloud event
	 *		   Special values for return parameter are:
	 *		   0: Use the default timeout of 500 msec
	 * 	      -1: No timeout, action is already completed
	 */
	virtual int activate(const std::set<std::string>& properties) = 0;

	/**
	 * Action received from the cloud. 
	 * @param properties The list of properties that where send for this action
     * @return the timeout (milliseconds) that the Sdk must wait before processing another cloud event
	 *		   Special values for return parameter are:
	 *		   0: Use the default timeout of 500 msec
	 * 	      -1: No timeout, action is already completed
	 */
	virtual int deactivate(const std::set<std::string>& properties) = 0;

};
}

#endif /* FUNCTIONBLOCKS_IPCAMCLIENTIF_H_ */
