//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/*
 * Copyright 2018 Qbus n.v.
 */

#ifndef MOCK_KINETURAIF_H_
#define MOCK_KINETURAIF_H_

#include "Sdk/Fb/KineturaIf.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <vector>
#include <map>


namespace SdkNs
{
class KineturaMock: public SdkNs::KineturaIf
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
	MOCK_METHOD1(registerClient, void(SdkNs::KineturaClientIf*));
	MOCK_METHOD0(unRegisterClient, void());

	MOCK_METHOD1(brightness, void(double ubieValue));

	MOCK_METHOD1(brightnessConfig, void(const SdkNs::KineturaDef::brightnessConf& conf));

	MOCK_METHOD1(registerBrightnessModeValues, void(const std::vector<std::string>& enumValues));

	MOCK_METHOD1(brightnessMode, void(std::string ubieValue));

	MOCK_METHOD1(brightnessModeConfig, void(const SdkNs::KineturaDef::brightnessModeConf& conf));

	MOCK_METHOD1(registerCurrRegimeValues, void(const std::vector<std::string>& enumValues));

	MOCK_METHOD1(currRegime, void(std::string ubieValue));

	MOCK_METHOD1(currRegimeConfig, void(const SdkNs::KineturaDef::currRegimeConf& conf));

	MOCK_METHOD1(lampType, void(std::string ubieValue));

	MOCK_METHOD1(lampTypeConfig, void(const SdkNs::KineturaDef::lampTypeConf& conf));

	MOCK_METHOD1(motion, void(double ubieValue));

	MOCK_METHOD1(motionConfig, void(const SdkNs::KineturaDef::motionConf& conf));

	MOCK_METHOD1(registerMotionModeValues, void(const std::vector<std::string>& enumValues));

	MOCK_METHOD1(motionMode, void(std::string ubieValue));

	MOCK_METHOD1(motionModeConfig, void(const SdkNs::KineturaDef::motionModeConf& conf));

	MOCK_METHOD1(brightnessOffCompleted, void(bool success));

	MOCK_METHOD1(brightnessOnCompleted, void(bool success));

	MOCK_METHOD1(motionOffCompleted, void(bool success));

	MOCK_METHOD1(motionOnCompleted, void(bool success));

	MOCK_METHOD1(offCompleted, void(bool success));

	MOCK_METHOD1(onCompleted, void(bool success));

	MOCK_METHOD1(commitHistory, void(const std::vector<SdkNs::KineturaDef::HistoryState>&));
};
}
#endif /* MOCK_KINETURAIF_H_ */
