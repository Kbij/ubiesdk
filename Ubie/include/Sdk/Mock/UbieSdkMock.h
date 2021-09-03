/*
/*
 * FunctionBlockIf.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef UBIESDKMOCK_H_
#define UBIESDKMOCK_H_

#include "Sdk/UbieSdk.h"
#include "Sdk/UbieSdkIf.h"
#include "Sdk/Mock/FunctionBlockManagerMock.h"
#include <string>
#include <stdint.h>
#include <map>
#include <gmock/gmock.h>
#include <glog/logging.h>

using ::testing::Return;
using ::testing::AtLeast;


namespace SdkNs
{
class FunctionBlockManagerIf;
class UbieSdkClientIf;

class UbieSdkMock: public SdkNs::UbieSdkIf
{
public:

    UbieSdkMock():
		mFunctionBlockManager()
	{
		ON_CALL((*this), functionBlockManager()).WillByDefault(Return(&mFunctionBlockManager));
	}
	void arm()
	{
		EXPECT_CALL((*this), functionBlockManager()).Times(AtLeast(1)).WillRepeatedly(Return(&mFunctionBlockManager));
	}
	MOCK_CONST_METHOD0(version, std::string());
	MOCK_METHOD0(functionBlockManager, FunctionBlockManagerIf*());
	MOCK_METHOD1(registerUbieSdkClient, void(UbieSdkClientIf* client));
	MOCK_METHOD0(unRegisterUbieSdkClient, void ());
    MOCK_METHOD2(promise, void(const std::string& from, uint32_t timeoutMilliseconds));
    MOCK_METHOD1(removePromise, void (const std::string& from));
    MOCK_METHOD1(feed, void(const std::string& from));
    MOCK_METHOD1(idSeparator, void(const std::string& separator));
	MOCK_CONST_METHOD0(idPrefix, std::string());
    MOCK_METHOD1(readLoggingSettings, void(const std::string& settingsFile));
    MOCK_METHOD3(cloudMessage, void(SdkMessageLevel level, const std::string& id, const std::map<int, std::string>& dataFields));

	MOCK_METHOD2(removeDeviceResult, void(const std::string& devId, bool success));
	MOCK_METHOD2(replaceDeviceResult, void(const std::string& oldDeviceId, bool success));
	MOCK_METHOD0(searchmDnsServiceTypes, void());
	MOCK_METHOD1(registermDnsServiceType, void (const std::string& type));
	MOCK_METHOD1(unRegistermDnsServiceType, void(const std::string& type));
	MOCK_METHOD1(backupPrivateConfig, void(const std::string& config));
	MOCK_METHOD0(restoreComplete, void());
	FunctionBlockManagerMock mFunctionBlockManager;
};
}

#endif /* !UBIESDKMOCK_H_ */
