//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/* 
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCK_DEFINITIONS_IPCAMIF_H_
#define FUNCTIONBLOCK_DEFINITIONS_IPCAMIF_H_
#include <string>
#include <set>
#include <vector>
#include <stdint.h>
#include <boost/optional.hpp>

namespace SdkNs {
namespace IPCamDef
{

    struct listeningPortConf
    {
        listeningPortConf(): available(), readAllowed(), writeAllowed(), min(), max(), step(), unit() {};
        /**
         * Is the property "listeningPort" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "listeningPort" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "listeningPort" writable
         */
        boost::optional<bool> writeAllowed;

        /**
         * The minimum value of property "listeningPort"
         */
        boost::optional<int> min;
        /**
         * The maximum value of property "listeningPort"
         */
        boost::optional<int> max;
        /**
         * The step value of property "listeningPort"
         */
        boost::optional<int> step;
        /**
         * The unit value of property "listeningPort"
         */
        boost::optional<std::string> unit;

    };

    struct HistoryState
    {
        HistoryState():  timeUTC(), listeningPort() {};

        /**
         * The epoch time of this event
         */
        time_t timeUTC;
	    boost::optional<int> listeningPort;

    };
}
}
#endif
