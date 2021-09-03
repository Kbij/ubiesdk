/*
 * GenericFunctionBlockClientIf.h
 *
 * Copyright 2018 Qbus n.v.
 */

#ifndef FUNCTIONBLOCKS_GENERICFUNCTIONBLOCKCLIENTIF_H_
#define FUNCTIONBLOCKS_GENERICFUNCTIONBLOCKCLIENTIF_H_
#include <set>
#include <string>

namespace SdkNs {

class GenericFunctionBlockClientIf
{
public:

	/**
	 * @brief Destroy the Generic FunctionBlockClientIf object
	 * 
	 */
	virtual ~GenericFunctionBlockClientIf() {};
	
	/**
	 * Complete event was received from the cloud. All values can be commited to the underlying device
	 * @param properties The list of properties that are changed
	 * @return The number of milliseconds (approx) it will take to confirm the new values (0 = default of 500 milliseconds).
	 * 		   When multiple states are received from the cloud, then the next state will be applied after the commit, or a timeout
	 */
	virtual int commitClient(const std::set<std::string>& properties) = 0 ;
};
}



#endif /* FUNCTIONBLOCKS_GENERICFUNCTIONBLOCKCLIENTIF_H_ */
