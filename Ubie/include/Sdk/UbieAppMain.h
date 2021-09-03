/*
** Qbus n.v., 2021
** Ubie
** File description:
** UbieAppMain
*/

#ifndef UBIEAPPMAIN_H_
#define UBIEAPPMAIN_H_

#include <string>

namespace SdkNs
{
void ubieAppInit(bool daemon, const std::string& appName, const std::string& pidFile, const std::string& appStorageDir);
void ubieAppWaitForExit();
void ubieAppCleanup();
}

#endif /* !UBIEAPPMAIN_H_ */
