
#ifndef FUNCTIONBLOCKS_HUMIDITYCLIENTIF_H_
#define FUNCTIONBLOCKS_HUMIDITYCLIENTIF_H_
#include <string>
#include <set>

namespace SdkNs
{

const std::string PROP_HUMIDITY_CURRREGIME = "currRegime";
const std::string PROP_HUMIDITY_VALUE = "value";


class HumidityClientIf
{
public:
	/**
	 * @brief Destroy the HumidityClientIf object
	 *
	 */
	virtual ~HumidityClientIf() {};

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void currRegime(std::string cloudValue) = 0;

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

#endif /* FUNCTIONBLOCKS_HUMIDITYCLIENTIF_H_ */
