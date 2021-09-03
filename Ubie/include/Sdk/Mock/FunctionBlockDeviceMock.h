/*
** FunctionBlockDeviceMock.h for Ubie in /home/qbus/ubie/Sdk/Sdk/export/Sdk/Mock
**
** Made by Koen Bijttebier
** Login   <>
**
** Started on  Thu Sep 5 5:15:16 PM 2019 Koen Bijttebier
** Last update Thu Sep 5 5:15:16 PM 2019 Koen Bijttebier
*/

#ifndef FUNCTIONBLOCKDEVICEMOCK_H_
#define FUNCTIONBLOCKDEVICEMOCK_H_
#include "Sdk/FunctionBlockDeviceIf.h"
#include <gmock/gmock.h>

namespace SdkNs
{
class FunctionBlockDeviceMock: public FunctionBlockDeviceIf
{
public:
	MOCK_METHOD1(registerClient, void(FunctionBlockDeviceClientIf* client));
	MOCK_METHOD0(unRegisterClient, void());
	MOCK_CONST_METHOD0(id, std::string());
	MOCK_CONST_METHOD0(type, std::string());
	MOCK_METHOD1(name, void(const std::string& name));
	MOCK_CONST_METHOD0(name, std::string());
	MOCK_METHOD1(serial, void(const std::string& serial));
	MOCK_CONST_METHOD0(serial, std::string());
	MOCK_METHOD1(ip, void(const std::string& ip));
	MOCK_METHOD1(mac, void(const std::string& mac));
	MOCK_METHOD1(version, void(const std::string& version));
	MOCK_METHOD1(refId, void(const std::string& refId));
	MOCK_METHOD1(connectable, void(bool connectable));
	MOCK_METHOD1(connected, void(bool connected));
	MOCK_METHOD0(commit, void());
	MOCK_METHOD1(configVersion, void(const std::string& version));
	MOCK_METHOD0(beginConfigUpdate, void());
	MOCK_METHOD0(commitConfigUpdate, void());
	MOCK_METHOD0(beginStatusUpdate, void());
	MOCK_METHOD0(commitStatusUpdate, void());
	MOCK_METHOD3(cloudMessage, void(SdkMessageLevel level, const std::string& id, const std::map<int, std::string>& dataFields));
	MOCK_METHOD5(activationMessage, void(SdkMessageLevel level, const std::string& id, const std::map<int, std::string>& dataFields, int currentStep, int maxStep));
	MOCK_METHOD1(addLocation, int (const std::string& name));
	MOCK_METHOD2(addLocation, int(const std::string& name, int parent));
	MOCK_METHOD2(addLocation, int(int id, const std::string& name));
	MOCK_METHOD3(addLocation, int(int id, const std::string& name, int parent));
	MOCK_METHOD0(clearLocations, void());
	MOCK_METHOD1(locationName, std::string(int locationId));
};
}

#endif /* !FUNCTIONBLOCKDEVICEMOCK_H_ */
