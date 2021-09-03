
#ifndef FUNCTIONBLOCKS_GAUGECLIENTIF_H_
#define FUNCTIONBLOCKS_GAUGECLIENTIF_H_
#include <string>
#include <set>

namespace SdkNs
{

const std::string PROP_GAUGE_AVERAGEVALUE = "averageValue";
const std::string PROP_GAUGE_CONSUMPTIONVALUE = "consumptionValue";
const std::string PROP_GAUGE_CURRENTPERCENTAGE = "currentPercentage";
const std::string PROP_GAUGE_CURRENTVALUE = "currentValue";


class GaugeClientIf
{
public:
	/**
	 * @brief Destroy the GaugeClientIf object
	 *
	 */
	virtual ~GaugeClientIf() {};

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

#endif /* FUNCTIONBLOCKS_GAUGECLIENTIF_H_ */
