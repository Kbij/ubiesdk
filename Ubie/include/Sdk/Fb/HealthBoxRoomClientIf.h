
#ifndef FUNCTIONBLOCKS_HEALTHBOXROOMCLIENTIF_H_
#define FUNCTIONBLOCKS_HEALTHBOXROOMCLIENTIF_H_
#include <string>
#include <set>

namespace SdkNs
{

const std::string PROP_HEALTHBOXROOM_BOOSTREMAINING = "boostRemaining";
const std::string PROP_HEALTHBOXROOM_BOOSTTIMEOUT = "boostTimeout";
const std::string PROP_HEALTHBOXROOM_BOOSTVALUE = "boostValue";
const std::string PROP_HEALTHBOXROOM_CURRENTFLOWRATE = "currentFlowRate";


class HealthBoxRoomClientIf
{
public:
	/**
	 * @brief Destroy the HealthBoxRoomClientIf object
	 *
	 */
	virtual ~HealthBoxRoomClientIf() {};

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void boostTimeout(int cloudValue) = 0;

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void boostValue(int cloudValue) = 0;

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
	virtual int boost(const std::set<std::string>& properties) = 0;

};
}

#endif /* FUNCTIONBLOCKS_HEALTHBOXROOMCLIENTIF_H_ */
