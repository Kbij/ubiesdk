//File generated by Functionblock Generator
// !!!! DO NOT EDIT MANUALLY !!!!
/*
 * Copyright 2018 Qbus n.v.
 */

#ifndef MOCK_SPEAKERGROUPIF_H_
#define MOCK_SPEAKERGROUPIF_H_

#include "Sdk/Fb/SpeakerGroupIf.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <vector>
#include <map>


namespace SdkNs
{
class SpeakerGroupMock: public SdkNs::SpeakerGroupIf
{
public:
	MOCK_CONST_METHOD0(id, std::string());
	MOCK_CONST_METHOD0(name, std::string());
	MOCK_METHOD1(name, void(const std::string& name));
	MOCK_METHOD1(variant, void(const std::string& variant));
	MOCK_CONST_METHOD0(location, std::string());
	MOCK_METHOD1(location, void(const std::string& location));
	MOCK_METHOD1(locationId, void(int locationId));
	MOCK_METHOD1(refId, void(const std::string& refId));
	MOCK_METHOD0(commit, void());
	MOCK_METHOD3(cloudMessage, void(SdkNs::SdkMessageLevel, const std::string& , const std::map<int, std::string>& ));
	MOCK_METHOD1(registerClient, void(SdkNs::SpeakerGroupClientIf*));
	MOCK_METHOD0(unRegisterClient, void());

	MOCK_METHOD1(album, void(std::vector<uint8_t> ubieValue));

	MOCK_METHOD1(albumConfig, void(const SdkNs::SpeakerGroupDef::albumConf& conf));

	MOCK_METHOD1(members, void(std::string ubieValue));

	MOCK_METHOD1(membersConfig, void(const SdkNs::SpeakerGroupDef::membersConf& conf));

	MOCK_METHOD1(mute, void(bool ubieValue));

	MOCK_METHOD1(muteConfig, void(const SdkNs::SpeakerGroupDef::muteConf& conf));

	MOCK_METHOD1(playState, void(std::string ubieValue));

	MOCK_METHOD1(playStateConfig, void(const SdkNs::SpeakerGroupDef::playStateConf& conf));

	MOCK_METHOD1(title, void(std::string ubieValue));

	MOCK_METHOD1(titleConfig, void(const SdkNs::SpeakerGroupDef::titleConf& conf));

	MOCK_METHOD1(volume, void(int ubieValue));

	MOCK_METHOD1(volumeConfig, void(const SdkNs::SpeakerGroupDef::volumeConf& conf));

	MOCK_METHOD1(allOffCompleted, void(bool success));

	MOCK_METHOD1(nextCompleted, void(bool success));

	MOCK_METHOD1(prevCompleted, void(bool success));

	MOCK_METHOD1(volumeDownCompleted, void(bool success));

	MOCK_METHOD1(volumeUpCompleted, void(bool success));

	MOCK_METHOD1(commitHistory, void(const std::vector<SdkNs::SpeakerGroupDef::HistoryState>&));
};
}
#endif /* MOCK_SPEAKERGROUPIF_H_ */