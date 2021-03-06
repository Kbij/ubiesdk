//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/* 
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCK_DEFINITIONS_SPEAKERGROUPIF_H_
#define FUNCTIONBLOCK_DEFINITIONS_SPEAKERGROUPIF_H_
#include <string>
#include <set>
#include <vector>
#include <stdint.h>
#include <boost/optional.hpp>

namespace SdkNs {
namespace SpeakerGroupDef
{

    struct albumConf
    {
        albumConf(): available(), readAllowed(), writeAllowed() {};
        /**
         * Is the property "album" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "album" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "album" writable
         */
        boost::optional<bool> writeAllowed;

    };

    struct membersConf
    {
        membersConf(): available(), readAllowed(), writeAllowed() {};
        /**
         * Is the property "members" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "members" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "members" writable
         */
        boost::optional<bool> writeAllowed;

    };

    struct muteConf
    {
        muteConf(): available(), readAllowed(), writeAllowed() {};
        /**
         * Is the property "mute" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "mute" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "mute" writable
         */
        boost::optional<bool> writeAllowed;

    };

    struct playStateConf
    {
        playStateConf(): available(), readAllowed(), writeAllowed() {};
        /**
         * Is the property "playState" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "playState" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "playState" writable
         */
        boost::optional<bool> writeAllowed;

    };

    struct titleConf
    {
        titleConf(): available(), readAllowed(), writeAllowed() {};
        /**
         * Is the property "title" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "title" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "title" writable
         */
        boost::optional<bool> writeAllowed;

    };

    struct volumeConf
    {
        volumeConf(): available(), readAllowed(), writeAllowed(), min(), max(), step(), unit() {};
        /**
         * Is the property "volume" available (does this functionblock implement this property)
         */
        boost::optional<bool> available;
        /**
         * is the value of property "volume" readable
         */
        boost::optional<bool> readAllowed;
        /**
         * is the value of property "volume" writable
         */
        boost::optional<bool> writeAllowed;

        /**
         * The minimum value of property "volume"
         */
        boost::optional<int> min;
        /**
         * The maximum value of property "volume"
         */
        boost::optional<int> max;
        /**
         * The step value of property "volume"
         */
        boost::optional<int> step;
        /**
         * The unit value of property "volume"
         */
        boost::optional<std::string> unit;

    };

    struct HistoryState
    {
        HistoryState():  timeUTC(), album(), members(), mute(), playState(), title(), volume() {};

        /**
         * The epoch time of this event
         */
        time_t timeUTC;
	    boost::optional<std::vector<uint8_t>> album;
	    boost::optional<std::string> members;
	    boost::optional<bool> mute;
	    boost::optional<std::string> playState;
	    boost::optional<std::string> title;
	    boost::optional<int> volume;

    };
}
}
#endif
