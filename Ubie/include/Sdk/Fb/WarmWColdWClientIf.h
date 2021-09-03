
#ifndef FUNCTIONBLOCKS_WARMWCOLDWCLIENTIF_H_
#define FUNCTIONBLOCKS_WARMWCOLDWCLIENTIF_H_
#include <string>
#include <set>

namespace SdkNs
{

const std::string PROP_WARMWCOLDW_BRIGHTNESS = "brightness";
const std::string PROP_WARMWCOLDW_CURRREGIME = "currRegime";
const std::string PROP_WARMWCOLDW_ON = "on";
const std::string PROP_WARMWCOLDW_PRESETCOLOR = "presetColor";
const std::string PROP_WARMWCOLDW_PRESETMOVIE = "presetMovie";
const std::string PROP_WARMWCOLDW_TEMPERATURE = "temperature";


class WarmWColdWClientIf
{
public:
	/**
	 * @brief Destroy the WarmWColdWClientIf object
	 *
	 */
	virtual ~WarmWColdWClientIf() {};

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void brightness(double cloudValue) = 0;

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud  Possible values: "ColorSelect", "ColorWheel", "MovieSelect"
	 */
	virtual void currRegime(std::string cloudValue) = 0;

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void on(bool cloudValue) = 0;

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void presetColor(int cloudValue) = 0;

	/**
	 * Received value from the cloud. 
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void presetMovie(int cloudValue) = 0;

	/**
	 * Received value from the cloud. Color Temperature: 0%: Cold White, 100% Warm White
	 * @param cloudValue: The value received from the cloud 
	 */
	virtual void temperature(double cloudValue) = 0;

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

#endif /* FUNCTIONBLOCKS_WARMWCOLDWCLIENTIF_H_ */
