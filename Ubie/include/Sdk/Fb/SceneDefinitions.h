//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/* 
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCK_DEFINITIONS_SCENEIF_H_
#define FUNCTIONBLOCK_DEFINITIONS_SCENEIF_H_
#include <string>
#include <set>
#include <vector>
#include <stdint.h>
#include <boost/optional.hpp>

namespace SdkNs {
namespace SceneDef
{

    struct HistoryState
    {
        HistoryState():  timeUTC() {};

        /**
         * The epoch time of this event
         */
        time_t timeUTC;

    };
}
}
#endif
