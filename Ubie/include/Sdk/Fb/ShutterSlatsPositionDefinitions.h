//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/* 
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCK_DEFINITIONS_SHUTTERSLATSPOSITIONIF_H_
#define FUNCTIONBLOCK_DEFINITIONS_SHUTTERSLATSPOSITIONIF_H_
#include <string>
#include <set>
#include <vector>
#include <stdint.h>
#include <boost/optional.hpp>

namespace SdkNs {
namespace ShutterSlatsPositionDef
{

    struct shutterPositionConf
    {
        shutterPositionConf(): available(), readAllowed(), writeAllowed(), min(), max(), step(), unit() {};
        /**
         * Is the property "shutterPosition" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "shutterPosition" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "shutterPosition" writable
         */
        boost::optional<bool> writeAllowed;

        /**
         * The minimum value of property "shutterPosition"
         */
        boost::optional<double> min;
        /**
         * The maximum value of property "shutterPosition"
         */
        boost::optional<double> max;
        /**
         * The step value of property "shutterPosition"
         */
        boost::optional<double> step;
        /**
         * The unit value of property "shutterPosition"
         */
        boost::optional<std::string> unit;

    };

    struct slatPositionConf
    {
        slatPositionConf(): available(), readAllowed(), writeAllowed(), min(), max(), step(), unit() {};
        /**
         * Is the property "slatPosition" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "slatPosition" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "slatPosition" writable
         */
        boost::optional<bool> writeAllowed;

        /**
         * The minimum value of property "slatPosition"
         */
        boost::optional<double> min;
        /**
         * The maximum value of property "slatPosition"
         */
        boost::optional<double> max;
        /**
         * The step value of property "slatPosition"
         */
        boost::optional<double> step;
        /**
         * The unit value of property "slatPosition"
         */
        boost::optional<std::string> unit;

    };

    struct HistoryState
    {
        HistoryState():  timeUTC(), shutterPosition(), slatPosition() {};

        /**
         * The epoch time of this event
         */
        time_t timeUTC;
	    boost::optional<double> shutterPosition;
	    boost::optional<double> slatPosition;

    };
}
}
#endif
