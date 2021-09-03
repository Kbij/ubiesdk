/*
 * UbieSdk.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef SDK_UBIESDK_H_
#define SDK_UBIESDK_H_


namespace SdkNs {

enum class PropertyType {Bool, Number, Percent, String, EnumString, Image, Json};

//Using ERR, as ERROR conflicts with glog
enum class SdkMessageLevel {INFO, ERR, WARNING};

}
#endif /* SDK_UBIESDK_H_ */
