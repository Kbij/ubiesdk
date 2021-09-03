//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/* 
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCK_DEFINITIONS_NESTTHERMOIF_H_
#define FUNCTIONBLOCK_DEFINITIONS_NESTTHERMOIF_H_
#include <string>
#include <set>
#include <vector>
#include <stdint.h>
#include <boost/optional.hpp>

namespace SdkNs {
namespace NestThermoDef
{

    struct currRegimeConf
    {
        currRegimeConf(): available(), readAllowed(), writeAllowed() {};
        /**
         * Is the property "currRegime" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "currRegime" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "currRegime" writable
         */
        boost::optional<bool> writeAllowed;

    };

    struct currTempConf
    {
        currTempConf(): available(), readAllowed(), writeAllowed(), min(), max(), step(), unit() {};
        /**
         * Is the property "currTemp" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "currTemp" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "currTemp" writable
         */
        boost::optional<bool> writeAllowed;

        /**
         * The minimum value of property "currTemp"
         */
        boost::optional<double> min;
        /**
         * The maximum value of property "currTemp"
         */
        boost::optional<double> max;
        /**
         * The step value of property "currTemp"
         */
        boost::optional<double> step;
        /**
         * The unit value of property "currTemp"
         */
        boost::optional<std::string> unit;

    };

    struct isCoolingConf
    {
        isCoolingConf(): available(), readAllowed(), writeAllowed() {};
        /**
         * Is the property "isCooling" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "isCooling" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "isCooling" writable
         */
        boost::optional<bool> writeAllowed;

    };

    struct isHeatingConf
    {
        isHeatingConf(): available(), readAllowed(), writeAllowed() {};
        /**
         * Is the property "isHeating" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "isHeating" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "isHeating" writable
         */
        boost::optional<bool> writeAllowed;

    };

    struct setCoolTempConf
    {
        setCoolTempConf(): available(), readAllowed(), writeAllowed(), min(), max(), step(), unit() {};
        /**
         * Is the property "setCoolTemp" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "setCoolTemp" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "setCoolTemp" writable
         */
        boost::optional<bool> writeAllowed;

        /**
         * The minimum value of property "setCoolTemp"
         */
        boost::optional<double> min;
        /**
         * The maximum value of property "setCoolTemp"
         */
        boost::optional<double> max;
        /**
         * The step value of property "setCoolTemp"
         */
        boost::optional<double> step;
        /**
         * The unit value of property "setCoolTemp"
         */
        boost::optional<std::string> unit;

    };

    struct setHeatTempConf
    {
        setHeatTempConf(): available(), readAllowed(), writeAllowed(), min(), max(), step(), unit() {};
        /**
         * Is the property "setHeatTemp" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "setHeatTemp" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "setHeatTemp" writable
         */
        boost::optional<bool> writeAllowed;

        /**
         * The minimum value of property "setHeatTemp"
         */
        boost::optional<double> min;
        /**
         * The maximum value of property "setHeatTemp"
         */
        boost::optional<double> max;
        /**
         * The step value of property "setHeatTemp"
         */
        boost::optional<double> step;
        /**
         * The unit value of property "setHeatTemp"
         */
        boost::optional<std::string> unit;

    };

    struct setTempConf
    {
        setTempConf(): available(), readAllowed(), writeAllowed(), min(), max(), step(), unit() {};
        /**
         * Is the property "setTemp" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "setTemp" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "setTemp" writable
         */
        boost::optional<bool> writeAllowed;

        /**
         * The minimum value of property "setTemp"
         */
        boost::optional<double> min;
        /**
         * The maximum value of property "setTemp"
         */
        boost::optional<double> max;
        /**
         * The step value of property "setTemp"
         */
        boost::optional<double> step;
        /**
         * The unit value of property "setTemp"
         */
        boost::optional<std::string> unit;

    };

    struct HistoryState
    {
        HistoryState():  timeUTC(), currRegime(), currTemp(), isCooling(), isHeating(), setCoolTemp(), setHeatTemp(), setTemp() {};

        /**
         * The epoch time of this event
         */
        time_t timeUTC;
	    boost::optional<std::string> currRegime;
	    boost::optional<double> currTemp;
	    boost::optional<bool> isCooling;
	    boost::optional<bool> isHeating;
	    boost::optional<double> setCoolTemp;
	    boost::optional<double> setHeatTemp;
	    boost::optional<double> setTemp;

    };
}
}
#endif