/*
** Qbus n.v., 2020
** Ubie
** File description:
** SdkSettings
*/

#ifndef SDKSETTINGS_H_
#define SDKSETTINGS_H_

#include <string>
#include <memory>

namespace CommonNs
{
class CliIf;
}

namespace SdkNs
{
class UbieSdkStorageIf;

struct SdkSettings
{
    SdkSettings();
	SdkSettings(const SdkSettings& src);
	SdkSettings& operator=(const SdkSettings&) = delete;

    /**
     * @brief Construct a new Sdk Settings object, with a minimal set of settings
     *
     * @param name
     * @param idPrefix
     * @param storagePath
     */
    SdkSettings(const std::string& name, const std::string& idPrefix, const std::string& storagePath);

    /**
     * @brief Convert to a pritable string
     *
     * @return std::string
     */
    std::string toString() const;

    /**
     * @brief The Name of the application
     *
     */
    std::string AppName;

    /**
     * @brief The name of the Intercom
     *
     */
    std::string CommName;

    /**
     * @brief The prefix for the functionblocks
     *
     */
    std::string IdPrefix;

    /**
     * @brief Is the prefixing handled by the user
     *
     */
    bool PrefixByUser;

    /**
     * @brief Send a config per device (Qbus Enterprise, and other large environments)
     *
     */
    bool ConfigPerDevice;

    /**
     * @brief The path where to store data
     *
     */
    std::string StoragePath;

    /**
     * @brief The Name of the Main Intercomm
     *
     */
    std::string MainId;

    /**
     * @brief The Name of the Logic Intercomm
     *
     */
    std::string LogicId;

    /**
     * @brief The size (in Mbyte) of the application Intercomm
     *
     */
    int IntercomSizeMb;

    /**
     * @brief Enable UPnP or mDns discovery
     *
     */
    bool EnableDiscovery;

    /**
     * @brief Enable the Watchdog functionality
     *
     */
    bool EnableWatchdog;

    /**
     * @brief Create a minimal Sdk
     *
     */
    bool MinimalSdk;

    /**
     * @brief
     *
     */
    std::shared_ptr<CommonNs::CliIf> Cli;

    /**
     * @brief A class that can store settings for the Sdk (currently custom names)
     *
     */
    std::shared_ptr<UbieSdkStorageIf> SdkStorage;

    /**
     * @brief Enable Automatic Mute of FunctionBlocks/Devices that generate to much events
     *
     */
    bool EnableAutoMute;
};
}

#endif /* !SDKSETTINGS_H_ */
