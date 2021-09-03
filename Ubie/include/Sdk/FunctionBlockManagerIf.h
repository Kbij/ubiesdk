/*
 * FunctionBlockManagerIf.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCKS_FUNCTIONBLOCKMANAGERIF_H_
#define FUNCTIONBLOCKS_FUNCTIONBLOCKMANAGERIF_H_
#include <string>

namespace SdkNs {
class FunctionBlockIf;
class FunctionBlockDeviceIf;
class GenericFunctionBlockIf;
class GenericNetFunctionBlockIf;
class OnOffIf;
class AnalogIf;
class MultiColorIf;
class ShutterUpDownIf;
class ShutterPositionIf;
class ShutterSlatsPositionIf;
class ThermoIf;
class NestThermoIf;
class SmokeCoIf;
class SpeakerIf;
class SpeakerGroupIf;
class SpeakerSystemIf;
class SceneIf;
class IPCamIf;
class HealthBoxRoomIf;
class GaugeIf;
class HumidityIf;
class VentilationIf;
class WeatherStationIf;
class WarmWColdWIf;
class KineturaIf;
class AudioControlIf;

class FunctionBlockManagerIf
{
public:
	/**
	 * @brief Destroy the FunctionBlockManager object
	 *
	 */
	virtual ~FunctionBlockManagerIf() {};

	/**
	 * Send the full config for all devices
	 */
	virtual void sendUbieConfig() = 0;

	/**
	 * Register a alias for a function block
	 * @param fbId
	 * @param alias
	 */
	virtual void addAlias(const std::string& fbId, const std::string& alias) = 0;

	/**
	 * Remove the alias
	 * @param alias
	 */
	virtual void removeAlias(const std::string& alias) = 0;

	/**
	 * Create a Device. A Device is the root for all functionblocks
	 * @param type The type of device
	 * @param devId The unique id of the device
	 * @return The Ubie Device. Use this device to attach Functionblocks to it
	 */
	virtual FunctionBlockDeviceIf* createDevice(const std::string& type, const std::string& devId) = 0;

	/**
	 * Create a Generic FunctionBlock
	 * @param device the Base device of this functionblock
	 * @param type The type of the functionblock
	 * @param fbId The Id of this functionblock; must be unique
	 * @return The Generic FunctionBlock
	 */
	virtual GenericFunctionBlockIf* createGenericFunctionBlock(FunctionBlockDeviceIf* device, const std::string& type, const std::string& fbId) = 0;

	/**
	 * Create a generic FunctionBlocks for .Net (use only simple datatypes)
	 * @param device
	 * @param type
	 * @param fbId
	 * @return
	 */
	virtual GenericNetFunctionBlockIf* createGenericNetFunctionBlock(FunctionBlockDeviceIf* device, const std::string& type, const std::string& fbId) = 0;

	/**
	 * Create a OnOff FunctionBlock
	 * @param device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The OnOff FunctionBlock
	 */
	virtual OnOffIf* createOnOff(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a Analog FunctionBlock
	 * @param device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The Analog FunctionBlock
	 */
	virtual AnalogIf* createAnalog(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a MultiColor FunctionBlock
	 * @param device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The MultiColor FunctionBlock
	 *
	 */
	virtual MultiColorIf* createMultiColor(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a ShutterUpDownn function block
	 * @param device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The Shutter FunctionBlock
	 */
	virtual ShutterUpDownIf* createShutterUpDown(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a Shutter with position functionblock
	 * @param device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The ShutterSlats FunctionBlock
	 */
	virtual ShutterPositionIf* createShutterPosition(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a Shutter with slats functionblock
	 * @param device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The ShutterSlats FunctionBlock
	 */
	virtual ShutterSlatsPositionIf* createShutterSlatsPosition(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a Thermo functionblock
	 * @param device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The Thermo FunctionBlock
	 */
	virtual ThermoIf* createThermo(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a Nest Thermo functionblock
	 * @param device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The Thermo FunctionBlock
	 */
	virtual NestThermoIf* createNestThermo(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a Smoke/Co functionblock
	 * @param device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The SmokeCo FunctionBlock
	 */
	virtual SmokeCoIf* createSmokeCo(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a Speaker functionblock
	 * @param device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The Speaker FunctionBlock
	 */
	virtual SpeakerIf* createSpeaker(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a SpeakerGroup functionblock
	 * @param device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The SpeakerGroup FunctionBlock
	 */
	virtual SpeakerGroupIf* createSpeakerGroup(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a SpeakerSystem functionblock
	 * @param device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The SpeakerSystem FunctionBlock
	 */
	virtual SpeakerSystemIf* createSpeakerSystem(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a Scene
	 * @param device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId the Id of this functionblock
	 * @return The Scene FunctionBlock
	 */
	virtual SceneIf* createScene(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a IPCam
	 * @param device device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId fbId the Id of this functionblock
	 * @return The IPCam FunctionBlock
	 */
	virtual IPCamIf* createIPCam(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a HealthBoxRoom
	 * @param device device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId fbId the Id of this functionblock
	 * @return The HealthBoxRoom FunctionBlock
	 */
	virtual HealthBoxRoomIf* createHealthBoxRoom(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a Gauge
	 * @param device device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId fbId the Id of this functionblock
	 * @return The Gauge FunctionBlock
	 */
	virtual GaugeIf* createGauge(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a HumiditySensor
	 * @param device device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId fbId the Id of this functionblock
	 * @return The Humidity FunctionBlock
	 */
	virtual HumidityIf* createHumidity(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a Ventilation
	 * @param device device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId fbId the Id of this functionblock
	 * @return The Ventilation FunctionBlock
	 */
	virtual VentilationIf* createVentilation(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a WeatherStation
	 * @param device device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId fbId the Id of this functionblock
	 * @return The WeatherStation FunctionBlock
	 */
    virtual WeatherStationIf* createWeatherStation(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a Warm White Cold White
	 * @param device device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId fbId the Id of this functionblock
	 * @return The WarmWColdW FunctionBlock
	 */
    virtual WarmWColdWIf* createWarmWColdW(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a Kinetura
	 * @param device device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId fbId the Id of this functionblock
	 * @return The Kinetura FunctionBlock
	 */
	virtual KineturaIf* createKinetura(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Create a AudioControl
	 * @param device device device the Base device of this functionblock; created with CreateDevice
	 * @param fbId fbId the Id of this functionblock
	 * @return The Kinetura FunctionBlock
	 */
	virtual AudioControlIf* createAudioControl(FunctionBlockDeviceIf* device, const std::string& fbId) = 0;

	/**
	 * Begin the update of multiple statuses, must be completed by a commitStatusUpdate
	 */
	virtual void beginStatusUpdate() = 0;

	/**
	 * Commit the update of multiple statuses. One status message is send to the cloud
	 */
	virtual void commitStatusUpdate() = 0;

	/**
	 * @brief Flush all history updates.
	 * And clear processing memory for all functionblocks of device
	 *
	 */
	virtual void commitHistoryUpdate(const std::string& devId) = 0;
};
}


#endif /* FUNCTIONBLOCKS_FUNCTIONBLOCKMANAGERIF_H_ */
