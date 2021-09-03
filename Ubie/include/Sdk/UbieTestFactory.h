/*
 * UbieTestFactory.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef UBIETESTFACTORY_H_INCLUDED
#define UBIETESTFACTORY_H_INCLUDED

namespace SdkNs
{
class OnOffTestIf;
class AnalogTestIf;
class ShutterUpDownTestIf;
class ShutterPositionTestIf;
class ShutterSlatsPositionTestIf;
class ThermoTestIf;
class SmokeCoTestIf;
class MultiColorTestIf;
class SceneTestIf;
class SpeakerTestIf;
class SpeakerGroupTestIf;
class SpeakerSystemTestIf;
class NestThermoTestIf;
class IPCamTestIf;
class HealthBoxRoomTestIf;
class GaugeIf;
class HumidityIf;
class VentilationIf;
class WeatherStationIf;
class WarmWColdWIf;

class UbieTestFactory
{
public:

	static OnOffTestIf* createOnOff();
	static AnalogTestIf* createAnalog();
	static ShutterUpDownTestIf* createShutterUpDown();
	static ShutterPositionTestIf* createShutterPosition();
	static ShutterSlatsPositionTestIf* createShutterSlatsPosition();
	static ThermoTestIf* createThermo();
	static MultiColorTestIf* createMultiColor();
	static SceneTestIf* createScene();
	static SpeakerTestIf* createSpeaker();
	static SpeakerGroupTestIf* createSpeakerGroup();
	static SpeakerSystemTestIf* createSpeakerSystem();
	static NestThermoTestIf* createNestThermo();
	static SmokeCoTestIf* createSmokeCo();
	static IPCamTestIf* createIPCam();
	static HealthBoxRoomTestIf* createHealthBoxRoom();
	static GaugeIf* createGauge();
	static HumidityIf* createHumidity();
	static VentilationIf* createVentilation();
    static WeatherStationIf* createWeatherStation();
	static WarmWColdWIf* createWarmWColdW();
};
}
#endif // UBIETESTFACTORY_H_INCLUDED
