
#ifndef FUNCTIONBLOCKS_SPEAKERSYSTEMCLIENTIF_H_
#define FUNCTIONBLOCKS_SPEAKERSYSTEMCLIENTIF_H_
#include <string>
#include <set>

namespace SdkNs
{

const std::string PROP_SPEAKERSYSTEM_ALIAS = "alias";
const std::string PROP_SPEAKERSYSTEM_FAVORITES = "favorites";
const std::string PROP_SPEAKERSYSTEM_MEMBERS = "members";


class SpeakerSystemClientIf
{
public:
	/**
	 * @brief Destroy the SpeakerSystemClientIf object
	 *
	 */
	virtual ~SpeakerSystemClientIf() {};

	/**
	 * Received value from the cloud. The alias for a group when creating a group.
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void alias(std::string cloudValue) = 0;

	/**
	 * Received value from the cloud. A list (comma separated) of Id's of all the groups present in this system.
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void members(std::string cloudValue) = 0;

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
	 * Action received from the cloud. Create a speaker group, using the list of members in the members property. When the action contains the 'alias' property, then this alias must be registered by calling FunctionBlockManagerIf::addAlias
	 * @param properties The list of properties that where send for this action
     * @return the timeout (milliseconds) that the Sdk must wait before processing another cloud event
	 *		   Special values for return parameter are:
	 *		   0: Use the default timeout of 500 msec
	 * 	      -1: No timeout, action is already completed
	 */
	virtual int createGroup(const std::set<std::string>& properties) = 0;

};
}

#endif /* FUNCTIONBLOCKS_SPEAKERSYSTEMCLIENTIF_H_ */
