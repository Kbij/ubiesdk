//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/* 
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCK_DEFINITIONS_SHUTTERUPDOWNIF_H_
#define FUNCTIONBLOCK_DEFINITIONS_SHUTTERUPDOWNIF_H_
#include <string>
#include <set>
#include <vector>
#include <stdint.h>
#include <boost/optional.hpp>

namespace SdkNs {
namespace ShutterUpDownDef
{

    struct stateConf
    {
        stateConf(): available(), readAllowed(), writeAllowed() {};
        /**
         * Is the property "state" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "state" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "state" writable
         */
        boost::optional<bool> writeAllowed;

    };

    struct HistoryState
    {
        HistoryState():  timeUTC(), state() {};

        /**
         * The epoch time of this event
         */
        time_t timeUTC;
	    boost::optional<std::string> state;

    };
}
}
#endif
