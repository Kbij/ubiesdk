
#ifndef FUNCTIONBLOCKS_WEATHERSTATIONCLIENTIF_H_
#define FUNCTIONBLOCKS_WEATHERSTATIONCLIENTIF_H_
#include <string>
#include <set>

namespace SdkNs
{

const std::string PROP_WEATHERSTATION_DAYLIGHT = "dayLight";
const std::string PROP_WEATHERSTATION_LIGHT = "light";
const std::string PROP_WEATHERSTATION_LIGHTEAST = "lightEast";
const std::string PROP_WEATHERSTATION_LIGHTSOUTH = "lightSouth";
const std::string PROP_WEATHERSTATION_LIGHTWEST = "lightWest";
const std::string PROP_WEATHERSTATION_RAINING = "raining";
const std::string PROP_WEATHERSTATION_TEMPERATURE = "temperature";
const std::string PROP_WEATHERSTATION_TWILIGHT = "twilight";
const std::string PROP_WEATHERSTATION_WIND = "wind";


class WeatherStationClientIf
{
public:
	/**
	 * @brief Destroy the WeatherStationClientIf object
	 *
	 */
	virtual ~WeatherStationClientIf() {};

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

#endif /* FUNCTIONBLOCKS_WEATHERSTATIONCLIENTIF_H_ */
