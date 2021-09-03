
#ifndef FUNCTIONBLOCKS_SCENECLIENTIF_H_
#define FUNCTIONBLOCKS_SCENECLIENTIF_H_
#include <string>
#include <set>

namespace SdkNs
{



class SceneClientIf
{
public:
	/**
	 * @brief Destroy the SceneClientIf object
	 *
	 */
	virtual ~SceneClientIf() {};

	/**
	 * Complete event was received from the cloud. All values can be commited to the underlying device
	 * @param properties The list of properties that where send in this commit
     * @return the timeout (milliseconds) that the Sdk must wait before processing another cloud event
	 *		   Special values for return parameter are:
	 *		   0: Use the default timeout of 500 msec
	 * 	      -1: No timeout, action is already completed
	 */
	virtual int commit(const std::set<std::string>& properties) = 0;

	/**
	 * Action received from the cloud. 
	 * @param properties The list of properties that where send for this action
     * @return the timeout (milliseconds) that the Sdk must wait before processing another cloud event
	 *		   Special values for return parameter are:
	 *		   0: Use the default timeout of 500 msec
	 * 	      -1: No timeout, action is already completed
	 */
	virtual int active(const std::set<std::string>& properties) = 0;

};
}

#endif /* FUNCTIONBLOCKS_SCENECLIENTIF_H_ */
