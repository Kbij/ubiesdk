//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/*
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCKS_WARMWCOLDWIF_H_
#define FUNCTIONBLOCKS_WARMWCOLDWIF_H_
#include "Sdk/FunctionBlockIf.h"
#include "WarmWColdWDefinitions.h"
#include <string>
#include <set>
#include <vector>
#include <stdint.h>
#include <boost/optional.hpp>

/**
 * \class SdkNs::WarmWColdWIf
 * \brief
 * 
 * Properties:
 *  - brightness
 *  - currRegime
 *  - on
 *  - presetColor
 *  - presetMovie
 *  - temperature

 */

namespace SdkNs {
class WarmWColdWClientIf;

class WarmWColdWIf: public FunctionBlockIf
{
public:
	virtual ~WarmWColdWIf() {};

	/**
	 * Register a client that will listen to events from this WarmWColdW FunctionBlock
	 * @param client Pointer of the client
	 */
	virtual void registerClient(WarmWColdWClientIf* client) = 0;

	/**
	 * Unregister the client that will listen to events of the WarmWColdW FunctionBlock
	 */
	virtual void unRegisterClient() = 0;

	/**
	 * Send value to the cloud. 
	 * @param ubieValue The Value to send to the cloud 
	 */
	virtual void brightness(double ubieValue) = 0;

	/**
	 * Set the configuration of this property (read, write, step, unit)
	 * @param conf The configuration of the property
	 */
	virtual void brightnessConfig(const SdkNs::WarmWColdWDef::brightnessConf& conf) = 0;

	/**
	 * Send value to the cloud. 
	 * @param ubieValue The Value to send to the cloud  Possible values: "ColorSelect", "ColorWheel", "MovieSelect"
	 */
	virtual void currRegime(std::string ubieValue) = 0;

	/**
	 * Set the configuration of this property (read, write, step, unit)
	 * @param conf The configuration of the property
	 */
	virtual void currRegimeConfig(const SdkNs::WarmWColdWDef::currRegimeConf& conf) = 0;

	/**
	 * Send value to the cloud. 
	 * @param ubieValue The Value to send to the cloud 
	 */
	virtual void on(bool ubieValue) = 0;

	/**
	 * Set the configuration of this property (read, write, step, unit)
	 * @param conf The configuration of the property
	 */
	virtual void onConfig(const SdkNs::WarmWColdWDef::onConf& conf) = 0;

	/**
	 * Send value to the cloud. 
	 * @param ubieValue The Value to send to the cloud 
	 */
	virtual void presetColor(int ubieValue) = 0;

	/**
	 * Set the configuration of this property (read, write, step, unit)
	 * @param conf The configuration of the property
	 */
	virtual void presetColorConfig(const SdkNs::WarmWColdWDef::presetColorConf& conf) = 0;

	/**
	 * Register the preset value list for the PresetColor property
	 * @param presetValues The preset values for the property
	 */
	virtual void registerPresetColorValues(const std::vector<SdkNs::WarmWColdWDef::PresetColorValue>& presetValues) = 0;

	/**
	 * Send value to the cloud. 
	 * @param ubieValue The Value to send to the cloud 
	 */
	virtual void presetMovie(int ubieValue) = 0;

	/**
	 * Set the configuration of this property (read, write, step, unit)
	 * @param conf The configuration of the property
	 */
	virtual void presetMovieConfig(const SdkNs::WarmWColdWDef::presetMovieConf& conf) = 0;

	/**
	 * Register the preset value list for the PresetMovie property
	 * @param presetValues The preset values for the property
	 */
	virtual void registerPresetMovieValues(const std::vector<SdkNs::WarmWColdWDef::PresetMovieValue>& presetValues) = 0;

	/**
	 * Send value to the cloud. Color Temperature: 0%: Cold White, 100% Warm White
	 * @param ubieValue The Value to send to the cloud 
	 */
	virtual void temperature(double ubieValue) = 0;

	/**
	 * Set the configuration of this property (read, write, step, unit)
	 * @param conf The configuration of the property
	 */
	virtual void temperatureConfig(const SdkNs::WarmWColdWDef::temperatureConf& conf) = 0;

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
	virtual void commitHistory(const std::vector<SdkNs::WarmWColdWDef::HistoryState>& historyState) = 0;
};
}

#endif /* FUNCTIONBLOCKS_WARMWCOLDWIF_H_ */
