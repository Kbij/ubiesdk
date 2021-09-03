/*
** Qbus n.v., 2021
** Ubie
** File description:
** UbieSdkClientMock
*/

#ifndef UBIESDKCLIENTMOCK_H_
#define UBIESDKCLIENTMOCK_H_
#include "Sdk/UbieSdkClientIf.h"
#include <gmock/gmock.h>

namespace SdkNs
{

class UbieSdkClientMock: public UbieSdkClientIf
{
public:
	MOCK_METHOD1(receivecloudConfig, void(const std::string& config));
	MOCK_METHOD3(uPnpDeviceFound, void(const std::string& host, const std::string& st, const std::string& descriptionXml));
	MOCK_METHOD3(uPnpDeviceLost, void(const std::string& host, const std::string& st, const std::string& descriptionXml));
	MOCK_METHOD1(mDnsServiceTypeFound, void(const std::string& serviceType));
	MOCK_METHOD1(mDnsDeviceFound, void(const mDnsDevice& device));
	MOCK_METHOD1(mDnsDeviceLost, void(const mDnsDevice& device));
	MOCK_METHOD1(removeDevice, void(const std::string& devId));
	MOCK_METHOD1(blockDevice, void(const std::string& devId));
	MOCK_METHOD1(historyProcessingOverflow, void(bool overflow));
	MOCK_METHOD2(replaceDevice, void(const std::string& oldDeviceId, const std::string& newDeviceId));
	MOCK_METHOD1(restorePrivateConfig, void(const std::string& config));
};
}

#endif /* !UBIESDKCLIENTMOCK_H_ */
