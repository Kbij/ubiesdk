
#ifndef FUNCTIONBLOCKS_SMOKECOCLIENTIF_H_
#define FUNCTIONBLOCKS_SMOKECOCLIENTIF_H_
#include <string>
#include <set>

namespace SdkNs
{

const std::string PROP_SMOKECO_BATTALARM = "battAlarm";
const std::string PROP_SMOKECO_COALARM = "coAlarm";
const std::string PROP_SMOKECO_COLORSTATE = "colorState";
const std::string PROP_SMOKECO_SMOKEALARM = "smokeAlarm";


class SmokeCoClientIf
{
public:
	/**
	 * @brief Destroy the SmokeCoClientIf object
	 *
	 */
	virtual ~SmokeCoClientIf() {};

	/**
	 * Complete event was received from the cloud. All values can be commited to the underlying device
	 * @param properties The list of properties that where send in this commit
     * @return the timeout (milliseconds) that the Sdk must wait before processing another cloud event
	 *		   Special values for return parameter are:
	 *		   0: Use the default timeout of 500 msec
	 * 	      -1: No timeout, action is already completed
	 */
	virtual int commit(const std::set<std::string>& properties) = 0;

};
}

#endif /* FUNCTIONBLOCKS_SMOKECOCLIENTIF_H_ */
