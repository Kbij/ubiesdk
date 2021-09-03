//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/*
 * Copyright 2018 Qbus n.v.
 */

#ifndef MOCK_IPCAMIF_H_
#define MOCK_IPCAMIF_H_

#include "Sdk/Fb/IPCamIf.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <vector>
#include <map>


namespace SdkNs
{
class IPCamMock: public SdkNs::IPCamIf
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
	MOCK_METHOD1(registerClient, void(SdkNs::IPCamClientIf*));
	MOCK_METHOD0(unRegisterClient, void());

	MOCK_METHOD1(listeningPort, void(int ubieValue));

	MOCK_METHOD1(listeningPortConfig, void(const SdkNs::IPCamDef::listeningPortConf& conf));

	MOCK_METHOD1(activateCompleted, void(bool success));

	MOCK_METHOD1(deactivateCompleted, void(bool success));

	MOCK_METHOD1(commitHistory, void(const std::vector<SdkNs::IPCamDef::HistoryState>&));
};
}
#endif /* MOCK_IPCAMIF_H_ */