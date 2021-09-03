/*
 * FunctionBlockIf.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCKMANAGERMOCK_H_
#define FUNCTIONBLOCKMANAGERMOCK_H_

#include "Sdk/UbieSdk.h"
#include "Sdk/UbieSdkIf.h"
#include "Sdk//FunctionBlockManagerIf.h"
#include <string>
#include <stdint.h>
#include <map>
#include <gmock/gmock.h>

namespace SdkNs {

class FunctionBlockManagerMock: public SdkNs::FunctionBlockManagerIf
{
public:

	MOCK_METHOD0(sendUbieConfig, void());
	MOCK_METHOD2(addAlias, void(const std::string& fbId, const std::string& alias));
	MOCK_METHOD1(removeAlias, void(const std::string& alias));
	MOCK_METHOD2(createDevice, FunctionBlockDeviceIf*(const std::string& type, const std::string& devId));
	MOCK_METHOD3(createGenericFunctionBlock, GenericFunctionBlockIf*(FunctionBlockDeviceIf* device, const std::string& type, const std::string& fbId));
	MOCK_METHOD3(createGenericNetFunctionBlock, GenericNetFunctionBlockIf*(FunctionBlockDeviceIf* device, const std::string& type, const std::string& fbId));
	MOCK_METHOD2(createOnOff, OnOffIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createAnalog, AnalogIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createMultiColor, MultiColorIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createShutterUpDown,  ShutterUpDownIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createShutterPosition, ShutterPositionIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createShutterSlatsPosition, ShutterSlatsPositionIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createThermo, ThermoIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createNestThermo, NestThermoIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createSmokeCo, SmokeCoIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createSpeaker, SpeakerIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createSpeakerGroup, SpeakerGroupIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createSpeakerSystem, SpeakerSystemIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createScene, SceneIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createIPCam, IPCamIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createHealthBoxRoom, HealthBoxRoomIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createGauge, GaugeIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createHumidity, HumidityIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createVentilation, VentilationIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
    MOCK_METHOD2(createWeatherStation, WeatherStationIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
    MOCK_METHOD2(createWarmWColdW, WarmWColdWIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createKinetura, KineturaIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD2(createAudioControl, AudioControlIf*(FunctionBlockDeviceIf* device, const std::string& fbId));
	MOCK_METHOD0(beginStatusUpdate, void());
	MOCK_METHOD0(commitStatusUpdate, void());
	MOCK_METHOD1(commitHistoryUpdate, void(const std::string& devId));
};
}
#endif /* !FUNCTIONBLOCKMANAGERMOCK_H_ */
