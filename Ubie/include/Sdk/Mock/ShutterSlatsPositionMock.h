//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/*
 * Copyright 2018 Qbus n.v.
 */

#ifndef MOCK_SHUTTERSLATSPOSITIONIF_H_
#define MOCK_SHUTTERSLATSPOSITIONIF_H_

#include "Sdk/Fb/ShutterSlatsPositionIf.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <vector>
#include <map>


namespace SdkNs
{
class ShutterSlatsPositionMock: public SdkNs::ShutterSlatsPositionIf
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
	MOCK_METHOD1(registerClient, void(SdkNs::ShutterSlatsPositionClientIf*));
	MOCK_METHOD0(unRegisterClient, void());

	MOCK_METHOD1(shutterPosition, void(double ubieValue));

	MOCK_METHOD1(shutterPositionConfig, void(const SdkNs::ShutterSlatsPositionDef::shutterPositionConf& conf));

	MOCK_METHOD1(slatPosition, void(double ubieValue));

	MOCK_METHOD1(slatPositionConfig, void(const SdkNs::ShutterSlatsPositionDef::slatPositionConf& conf));

	MOCK_METHOD1(shutterDownCompleted, void(bool success));

	MOCK_METHOD1(shutterUpCompleted, void(bool success));

	MOCK_METHOD1(slatDownCompleted, void(bool success));

	MOCK_METHOD1(slatUpCompleted, void(bool success));

	MOCK_METHOD1(commitHistory, void(const std::vector<SdkNs::ShutterSlatsPositionDef::HistoryState>&));
};
}
#endif /* MOCK_SHUTTERSLATSPOSITIONIF_H_ */