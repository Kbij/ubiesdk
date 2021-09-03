/*
 * Units.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef UNITS_H_INCLUDED
#define UNITS_H_INCLUDED
#include <string>

namespace SdkNs
{
enum class SdkUnit
{
    //Temperature
    Celcius,

    //Electricity
    KWH,
    KW,
    W,
    WH,

    //Volume
    m3,
    m3h,

    LMin,
    L


};

std::string toString(SdkUnit unit);

}

#endif