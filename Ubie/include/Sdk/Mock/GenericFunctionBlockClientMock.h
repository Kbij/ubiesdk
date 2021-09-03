/*
 * GenericFunctionBlockClientMock.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef GENERICFUNCTIONBLOCKCLIENTMOCK_H_
#define GENERICFUNCTIONBLOCKCLIENTMOCK_H_

#include <set>
#include <string>
#include <gmock/gmock.h>

namespace SdkNs {

class GenericFunctionBlockClientMock: public GenericFunctionBlockClientIf
{
public:
	
	MOCK_METHOD1(commitClient, int(const std::set<std::string>& properties));
};
}
#endif /* !GENERICFUNCTIONBLOCKCLIENTMOCK_H_ */
