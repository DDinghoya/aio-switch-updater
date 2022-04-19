#pragma once

constexpr const char ROOT_PATH[]=           "/";
constexpr const char APP_PATH[] =           "/switch/kefir-updater/";
constexpr const char NRO_PATH[] =           "/switch/kefir-updater/kefir-updater.nro";
constexpr const char DOWNLOAD_PATH[] =      "/config/kefir-updater/";
constexpr const char CONFIG_PATH[] =        "/config/kefir-updater/";
constexpr const char CONFIG_PATH_UNZIP[] =   "config\\kefir-updater";

constexpr const char RCM_PAYLOAD_PATH[] =   "/payload.bin";
constexpr const char MARIKO_PAYLOAD_PATH[] = "/payload.bin";
constexpr const char MARIKO_PAYLOAD_PATH_TEMP[] = "/payload.bin.aio";

constexpr const char APP_URL[] =            "https://github.com/rashevskyv/kefir-updater/releases/latest/download/kefir-updater.zip";
constexpr const char TAGS_INFO[] =           "https://api.github.com/repos/rashevskyv/kefir-updater/releases/latest";
constexpr const char APP_FILENAME[] =        "/config/kefir-updater/app.zip";

constexpr const char SIGPATCHES_URL[] =     "https://raw.githubusercontent.com/rashevskyv/nx-links/master/sigpatches.json";
constexpr const char SIGPATCHES_FILENAME[] ="/config/kefir-updater/sigpatches.zip";
constexpr const char HEKATE_IPL_PATH[] =    "/bootloader/hekate_ipl.ini";

constexpr const char FIRMWARE_URL[] =       "https://raw.githubusercontent.com/rashevskyv/nx-links/master/firmwares.json";
constexpr const char FIRMWARE_FILENAME[] =  "/config/kefir-updater/firmware.zip";
constexpr const char FIRMWARE_PATH[] =      "/firmware/";

constexpr const char CFW_URL[] =            "https://raw.githubusercontent.com/rashevskyv/nx-links/master/bootloaders.json";
constexpr const char CFW_FILENAME[] =       "/config/kefir-updater/atmo.zip";

constexpr const char AMS_URL[] =            "https://raw.githubusercontent.com/rashevskyv/nx-links/master/cfws.json";
constexpr const char SXOS_URL[] =           "https://raw.githubusercontent.com/rashevskyv/nx-links/master/sxos.json";
constexpr const char AMS_FILENAME[] =       "/config/kefir-updater/atmo.zip";

constexpr const char HEKATE_URL[] =         "https://raw.githubusercontent.com/rashevskyv/nx-links/master/hekate.json";

constexpr const char PAYLOAD_URL[] =        "https://raw.githubusercontent.com/rashevskyv/nx-links/master/payloads.json";

constexpr const char DEEPSEA_META_JSON[] =  "https://builder.teamneptune.net/meta.json";
constexpr const char DEEPSEA_BUILD_URL[] =  "https://builder.teamneptune.net/build/";
constexpr const char DEEPSEA_PACKAGE_PATH[] = "/config/deepsea/customPackage.json";

constexpr const char CUSTOM_PACKS_PATH[] =  "/config/kefir-updater/customPacks.json";

constexpr const char CHEATS_RELEASE_URL[] = "https://github.com/HamletDuFromage/switch-cheats-db/releases/tag/v1.0";
constexpr const char CHEATS_URL_TITLES[] = "https://github.com/HamletDuFromage/switch-cheats-db/releases/latest/download/titles.zip";
constexpr const char CHEATS_URL_CONTENTS[] = "https://github.com/HamletDuFromage/switch-cheats-db/releases/latest/download/contents.zip";
constexpr const char CHEATS_URL_VERSION[] = "https://github.com/HamletDuFromage/switch-cheats-db/releases/latest/download/VERSION";
constexpr const char LOOKUP_TABLE_URL[] = "https://raw.githubusercontent.com/HamletDuFromage/switch-cheats-db/master/versions.json";
constexpr const char LOOKUP_TABLE_CBOR[] = "https://github.com/HamletDuFromage/switch-cheats-db/raw/master/versions.cbor";
constexpr const char VERSIONS_DIRECTORY[] = "https://raw.githubusercontent.com/HamletDuFromage/switch-cheats-db/master/versions/";
constexpr const char CHEATS_DIRECTORY[] = "https://raw.githubusercontent.com/HamletDuFromage/switch-cheats-db/master/cheats/";
constexpr const char CHEATSLIPS_CHEATS_URL[] ="https://www.cheatslips.com/api/v1/cheats/";
constexpr const char CHEATSLIPS_TOKEN_URL[] ="https://www.cheatslips.com/api/v1/token";
constexpr const char TOKEN_PATH[] =         "/config/kefir-updater/token.json";
constexpr const char CHEATS_FILENAME[] =    "/config/kefir-updater/cheats.zip";
constexpr const char CHEATS_EXCLUDE[] =     "/config/kefir-updater/exclude.txt";
constexpr const char FILES_IGNORE[] =       "/config/kefir-updater/preserve.txt";
constexpr const char INTERNET_JSON[] =      "/config/kefir-updater/internet.json";
constexpr const char UPDATED_TITLES_PATH[] ="/config/kefir-updater/updated.dat";
constexpr const char CHEATS_VERSION[] =     "/config/kefir-updater/cheats_version.dat";
constexpr const char AMS_CONTENTS[] =       "/atmosphere/contents/";
constexpr const char REINX_CONTENTS[] =     "/ReiNX/contents/";
constexpr const char SXOS_TITLES[] =        "/sxos/titles/";
constexpr const char AMS_PATH[] =           "/atmosphere/";
constexpr const char SXOS_PATH[] =          "/sxos/";
constexpr const char REINX_PATH[] =         "/ReiNX/";
constexpr const char CONTENTS_PATH[] =      "contents/";
constexpr const char TITLES_PATH[] =        "titles/";
constexpr const char KEFIR_DIRECTORY_PATH[] =   "/kefir/";

constexpr const char COLOR_PROFILES_PATH[] ="/config/kefir-updater/jc_profiles.json";
constexpr const char PC_COLOR_PATH[] =      "/config/kefir-updater/pc_profiles.json";

constexpr const char PAYLOAD_PATH[] =       "/payloads/";
constexpr const char BOOTLOADER_PATH[] =    "/bootloader/";
constexpr const char BOOTLOADER_PL_PATH[] = "/bootloader/payloads/";
constexpr const char UPDATE_BIN_PATH[] =    "/bootloader/update.bin";
constexpr const char REBOOT_PAYLOAD_PATH[] ="/atmosphere/reboot_payload.bin";
constexpr const char FUSEE_SECONDARY[] =    "/atmosphere/fusee-secondary.bin";
constexpr const char FUSEE_MTC[] =          "/atmosphere/fusee-mtc.bin";

constexpr const char AMS_ZIP_PATH[] =       "/config/kefir-updater/ams.zip";
constexpr const char APP_ZIP_PATH[] =       "/config/kefir-updater/app.zip";
constexpr const char CFW_ZIP_PATH[] =       "/config/kefir-updater/cfw.zip";
constexpr const char FW_ZIP_PATH[] =        "/config/kefir-updater/firmware.zip";
constexpr const char CHEATS_ZIP_PATH[] =    "/config/kefir-updater/cheats.zip";
constexpr const char SIGPATCHES_ZIP_PATH[] ="/config/kefir-updater/sigpatches.zip";
constexpr const char AMS_DIRECTORY_PATH[] = "/config/kefir-updater/atmosphere/";
constexpr const char SEPT_DIRECTORY_PATH[] ="/config/kefir-updater/sept/";
constexpr const char FW_DIRECTORY_PATH[] =  "/firmware/";
constexpr const char THEME_DIR[] =          "/atmosphere/contents/0100000000001000";

constexpr const char HIDE_TABS_JSON[] =     "/config/kefir-updater/hide_tabs.json";
constexpr const char COPY_FILES_TXT[] =     "/config/kefir-updater/copy_files.txt";
constexpr const char LANGUAGE_JSON[] =      "/config/kefir-updater/language.json";
constexpr const char HOMEBREW[] =           "/config/kefir-updater/language.json";

constexpr const char ROMFS_FORWARDER[] =    "romfs:/aiosu-forwarder.nro";
constexpr const char FORWARDER_PATH[] =     "/config/kefir-updater/aiosu-forwarder.nro";

constexpr const char HIDDEN_AIO_FILE[] =    "/config/kefir-updater/.kefir-updater";

constexpr const char DAYBREAK_PATH[] = "/switch/daybreak/daybreak.nro";

constexpr const int LISTITEM_HEIGHT =       50;


enum class archiveType{
    sigpatches,
    cheats,
    fw,
    app,
    cfw,
    ams_cfw,
};

enum class CFW{
    rnx,
    sxos,
    ams,
};