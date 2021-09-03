/*
 * GenericFunctionBlockIf.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCKS_GENERICFUNCTIONBLOCKIF_H_
#define FUNCTIONBLOCKS_GENERICFUNCTIONBLOCKIF_H_

#include "UbieSdk.h"
#include "FunctionBlockIf.h"
#include <boost/variant.hpp>
#include <string>
#include <functional>
#include <set>
#include <vector>
#include <stdint.h>

namespace SdkNs {

typedef boost::variant<bool, int, uint64_t, double, std::string, std::vector<uint8_t>> PropertyValueType;

class GenericFunctionBlockClientIf;

struct PropertyState
{
    PropertyState(const std::string& name, const PropertyValueType& value): propertyName(name), propertyValue(value) {};
    std::string propertyName;
    PropertyValueType propertyValue;
};

struct PropertyHistory
{
	PropertyHistory(): timeUTC(), properties() {};
    time_t timeUTC;
    std::vector<PropertyState> properties;
};

struct ActionProperty
{
	ActionProperty(): mName(), mMandatory() {};
	ActionProperty(const std::string& name, bool mandatory): mName(name), mMandatory(mandatory) {};
	std::string mName;
	bool mMandatory;
};

struct GenericValue
{
	GenericValue(): value(), name(), extra() {};
    /* The property value */
    PropertyValueType value;
    /* The name of this value */
    std::string name;
    /* Extra Json configuration for this value */
    std::string extra;
};

class GenericFunctionBlockIf: public FunctionBlockIf
{
public:
	virtual ~GenericFunctionBlockIf() {};

	/**
	 * Register a client that will listen to events from this Generic FunctionBlock
	 * @param client
	 */
	virtual void registerClient(GenericFunctionBlockClientIf* client) = 0;

	/**
	 * Unregister a client
	 */
	virtual void unRegisterClient() = 0;

	/**
	 * Register a property
	 * @param name Name of the property; must be unique in a functionblock
	 * @param type Data type of the property
	 * @param callBack The callback function that will be called when a value update from the cloud is received
	 */
	virtual void registerProperty(const std::string& name, PropertyType type, std::function<void(const std::string&, const PropertyValueType&)> callBack) = 0;

	/**
	 *	Register a property with a step (int)
	 * @param name Name of the property; must be unique in a functionblock
	 * @param type Data type of the property
	 * @param callBack The callback function that will be called when a value update from the cloud is received
	 * @param step The step of the property value: ex: 0.1 -> the value is increased, decreased in steps of 0.1
	 */
	virtual void registerProperty(const std::string& name, PropertyType type, std::function<void(const std::string&, const PropertyValueType&)> callBack, int step) = 0;

	/**
	 *	Register a property with a min, max and step (int)
	 * @param name Name of the property; must be unique in a functionblock
	 * @param type Data type of the property
	 * @param callBack The callback function that will be called when a value update from the cloud is received
	 * @param min The minimum value of the property
	 * @param max The maxiun value of the property
	 * @param step The step of the property value: ex: 0.1 -> the value is increased, decreased in steps of 0.1
	 */
	virtual void registerProperty(const std::string& name, PropertyType type, std::function<void(const std::string&, const PropertyValueType&)> callBack, int min, int max, int step) = 0;

	/**
	 *	Register a property with a step (double)
	 * @param name Name of the property; must be unique in a functionblock
	 * @param type Data type of the property
	 * @param callBack The callback function that will be called when a value update from the cloud is received
	 * @param step The step of the property value: ex: 0.1 -> the value is increased, decreased in steps of 0.1
	 */
	virtual void registerProperty(const std::string& name, PropertyType type, std::function<void(const std::string&, const PropertyValueType&)> callBack, double step) = 0;

	/**
	 *	Register a property with a min, max and step (double)
	 * @param name Name of the property; must be unique in a functionblock
	 * @param type Data type of the property
	 * @param callBack The callback function that will be called when a value update from the cloud is received
	 * @param min The minimum value of the property
	 * @param max The maxiun value of the property
	 * @param step The step of the property value: ex: 0.1 -> the value is increased, decreased in steps of 0.1
	 */
	virtual void registerProperty(const std::string& name, PropertyType type, std::function<void(const std::string&, const PropertyValueType&)> callBack, double min, double max, double step) = 0;

	/**
	 * Register a property of type enumString
	 * @param name Name of the property; must be unique in a functionblock
	 * @param type Data type of the property
	 * @param callBack The callback function that will be called when a value update from the cloud is received
	 * @param enumValues A set with all possible enumValues
	 */
	virtual void registerProperty(const std::string& name, PropertyType type, std::function<void(const std::string&, const PropertyValueType&)> callBack, const std::vector<std::string>& enumValues) = 0;

	/**
	 * Register a property of type Json
	 * @param name Name of the property; must be unique in a functionblock
	 * @param type Data type of the property
	 * @param callBack The callback function that will be called when a value update from the cloud is received
	 * @param jsonSchema The schema of the Json object, see http://json-schema.org/ for examples of schema's
	 */
	virtual void registerProperty(const std::string& name, PropertyType type, std::function<void(const std::string&, const PropertyValueType&)> callBack, const std::string& jsonSchema) = 0;

	/**
	 * Register (Reregister) a (new) list of enumValues
	 * @param name
	 * @param enumValues
	 */
	virtual void registerPropertyEnumValues(const std::string& name, const std::vector<std::string>& enumValues) = 0;

	/**
	 * Register a valuelist for this property
	 * @param name The name of the property
	 * @param valueList The list of possible values
	 */
	virtual void registerPropertyValues(const std::string& name, const std::vector<GenericValue> valueList) = 0;

	/**
	 * Unregister a property (remove it from the config)
	 *
	 * @param name The name of the property
	 */
	virtual void unRegisterProperty(const std::string& name) = 0;

	/**
	 * Register a callback when a functionblock action is received
	 * @param name Name the action
	 * @param callBack Callback function
	 * @param properties The mandatory parameters that where supplied with this action
	 */
	virtual void registerAction(const std::string& name, std::function<int(const std::string&, const std::set<std::string>&)> callBack, const std::set<std::string>& properties) = 0;

	/**
	 * @brief Register a callback when a functionblock action is received
	 *
	 * @param name Name of the action
	 * @param callBack Callback function
	 * @param properties The mandatory/optional parameters that where supplied with this action
	 */
	virtual void registerAction(const std::string& name, std::function<int(const std::string&, const std::set<std::string>&)> callBack, const std::vector<ActionProperty>& properties) = 0;

	/**
	 * Is a property read allowed
	 * @param name Name of the property
	 * @param allowed is read allowed or not
	 */
	virtual void readAllowed(const std::string& name, bool allowed) = 0;

	/**
	 * Is a property write allowed
	 * @param name Name of the property
	 * @param allowed is write allowed or not
	 */
	virtual void writeAllowed(const std::string& name, bool allowed) = 0;

	/**
	 * The min Value of a property
	 * @param name Name of the property
	 * @param minValue min value
	 */
	virtual void minValue(const std::string& name, PropertyValueType minValue) = 0;

	/**
	 * The max Value of a property
	 * @param name Name of the property
	 * @param maxValue max value
	 */
    virtual void maxValue(const std::string& name, PropertyValueType maxValue) = 0;

	/**
	 * The step Value of a property
	 * @param name Name of the property
	 * @param stepValue step value
	 */
    virtual void stepValue(const std::string& name, PropertyValueType stepValue) = 0;

	/**
	 * The unit of a property
	 * @param name Name of the property
	 * @param unit unit of the property
	 */
    virtual void unit(const std::string& name, const std::string& unit) = 0;

	/**
	 * Set the actual value of a property
	 * @param name Name of the property
	 * @param value Value of the property
	 */
    virtual void property(const std::string& name, const PropertyValueType& value) = 0;

	/**
	 * Notify the Sdk that an action was completed
	 * @param name
	 * @param success
	 */
	virtual void actionCompleted(const std::string& name, bool success) = 0;

	/**
	 * Commit property history
	 * @param history The history values of this functionblock. Time is expressed in UTC
	 */
	virtual void commitHistory(const std::vector<PropertyHistory>& history) = 0;
};
}



#endif /* FUNCTIONBLOCKS_GENERICFUNCTIONBLOCKIF_H_ */
