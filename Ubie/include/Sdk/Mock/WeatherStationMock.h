//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/*
 * Copyright 2018 Qbus n.v.
 */

#ifndef MOCK_WEATHERSTATIONIF_H_
#define MOCK_WEATHERSTATIONIF_H_

#include "Sdk/Fb/WeatherStationIf.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <vector>
#include <map>


namespace SdkNs
{
class WeatherStationMock: public SdkNs::WeatherStationIf
{
public:
	MOCK_CONST_METHOD0(id, std::string());
	MOCK_CONST_METHOD0(name, std::string());
	MOCK_METHOD1(name, void(const std::string& name));
	MOCK_METHOD1(variant, void(const std::string& variant));
	MOCK_CONST_METHOD0(location, std::string());
	MOCK_METHOD1(location, void(const std::string& location));
	MOCK_METHOD1(locationId, void(int locationId));
	MOCK_METHOD1(refId, void(const std::string& refId));
	MOCK_METHOD0(commit, void());
	MOCK_METHOD3(cloudMessage, void(SdkNs::SdkMessageLevel, const std::string& , const std::map<int, std::string>& ));
	MOCK_METHOD1(registerClient, void(SdkNs::WeatherStationClientIf*));
	MOCK_METHOD0(unRegisterClient, void());

	MOCK_METHOD1(dayLight, void(double ubieValue));

	MOCK_METHOD1(dayLightConfig, void(const SdkNs::WeatherStationDef::dayLightConf& conf));

	MOCK_METHOD1(light, void(double ubieValue));

	MOCK_METHOD1(lightConfig, void(const SdkNs::WeatherStationDef::lightConf& conf));

	MOCK_METHOD1(lightEast, void(double ubieValue));

	MOCK_METHOD1(lightEastConfig, void(const SdkNs::WeatherStationDef::lightEastConf& conf));

	MOCK_METHOD1(lightSouth, void(double ubieValue));

	MOCK_METHOD1(lightSouthConfig, void(const SdkNs::WeatherStationDef::lightSouthConf& conf));

	MOCK_METHOD1(lightWest, void(double ubieValue));

	MOCK_METHOD1(lightWestConfig, void(const SdkNs::WeatherStationDef::lightWestConf& conf));

	MOCK_METHOD1(raining, void(bool ubieValue));

	MOCK_METHOD1(rainingConfig, void(const SdkNs::WeatherStationDef::rainingConf& conf));

	MOCK_METHOD1(temperature, void(double ubieValue));

	MOCK_METHOD1(temperatureConfig, void(const SdkNs::WeatherStationDef::temperatureConf& conf));

	MOCK_METHOD1(twilight, void(bool ubieValue));

	MOCK_METHOD1(twilightConfig, void(const SdkNs::WeatherStationDef::twilightConf& conf));

	MOCK_METHOD1(wind, void(double ubieValue));

	MOCK_METHOD1(windConfig, void(const SdkNs::WeatherStationDef::windConf& conf));

	MOCK_METHOD1(commitHistory, void(const std::vector<SdkNs::WeatherStationDef::HistoryState>&));
};
}
#endif /* MOCK_WEATHERSTATIONIF_H_ */