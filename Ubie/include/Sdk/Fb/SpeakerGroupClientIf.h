
#ifndef FUNCTIONBLOCKS_SPEAKERGROUPCLIENTIF_H_
#define FUNCTIONBLOCKS_SPEAKERGROUPCLIENTIF_H_
#include <string>
#include <set>

namespace SdkNs
{

const std::string PROP_SPEAKERGROUP_ALBUM = "album";
const std::string PROP_SPEAKERGROUP_MEMBERS = "members";
const std::string PROP_SPEAKERGROUP_MUTE = "mute";
const std::string PROP_SPEAKERGROUP_PLAYSTATE = "playState";
const std::string PROP_SPEAKERGROUP_SOURCE = "source";
const std::string PROP_SPEAKERGROUP_TITLE = "title";
const std::string PROP_SPEAKERGROUP_VOLUME = "volume";


class SpeakerGroupClientIf
{
public:
	/**
	 * @brief Destroy the SpeakerGroupClientIf object
	 *
	 */
	virtual ~SpeakerGroupClientIf() {};

	/**
	 * Received value from the cloud. A list (comma separated) of Id's of all the speakers present in this group.
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void members(std::string cloudValue) = 0;

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void mute(bool cloudValue) = 0;

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud  Possible values: "Play", "Pause", "Stop"
	 */
	virtual void playState(std::string cloudValue) = 0;

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void source(uint64_t cloudValue) = 0;

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void volume(int cloudValue) = 0;

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
	virtual int allOff(const std::set<std::string>& properties) = 0;

	/**
	 * Action received from the cloud. 
	 * @param properties The list of properties that where send for this action
     * @return the timeout (milliseconds) that the Sdk must wait before processing another cloud event
	 *		   Special values for return parameter are:
	 *		   0: Use the default timeout of 500 msec
	 * 	      -1: No timeout, action is already completed
	 */
	virtual int next(const std::set<std::string>& properties) = 0;

	/**
	 * Action received from the cloud. 
	 * @param properties The list of properties that where send for this action
     * @return the timeout (milliseconds) that the Sdk must wait before processing another cloud event
	 *		   Special values for return parameter are:
	 *		   0: Use the default timeout of 500 msec
	 * 	      -1: No timeout, action is already completed
	 */
	virtual int prev(const std::set<std::string>& properties) = 0;

	/**
	 * Action received from the cloud. 
	 * @param properties The list of properties that where send for this action
     * @return the timeout (milliseconds) that the Sdk must wait before processing another cloud event
	 *		   Special values for return parameter are:
	 *		   0: Use the default timeout of 500 msec
	 * 	      -1: No timeout, action is already completed
	 */
	virtual int volumeDown(const std::set<std::string>& properties) = 0;

	/**
	 * Action received from the cloud. 
	 * @param properties The list of properties that where send for this action
     * @return the timeout (milliseconds) that the Sdk must wait before processing another cloud event
	 *		   Special values for return parameter are:
	 *		   0: Use the default timeout of 500 msec
	 * 	      -1: No timeout, action is already completed
	 */
	virtual int volumeUp(const std::set<std::string>& properties) = 0;

};
}

#endif /* FUNCTIONBLOCKS_SPEAKERGROUPCLIENTIF_H_ */
