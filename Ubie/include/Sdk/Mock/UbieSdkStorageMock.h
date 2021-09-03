/*
** Qbus n.v., 2021
** Ubie
** File description:
** UbieSdkStorageMock
*/

#ifndef UBIESDKSTORAGEMOCK_H_
#define UBIESDKSTORAGEMOCK_H_
#include "Sdk/UbieSdkStorageIf.h"
#include <gmock/gmock.h>

namespace SdkNs
{
class UbieSdkStorageMock: public UbieSdkStorageIf
{
public:
    MOCK_METHOD3(lookupName, bool(const std::string& id, const std::string& originalName, std::string& sdkName));
    MOCK_METHOD2(storeName, void(const std::string& id, const std::string& sdkName));
    MOCK_METHOD0(commit, void());
};
}

#endif /* !UBIESDKSTORAGEMOCK_H_ */
