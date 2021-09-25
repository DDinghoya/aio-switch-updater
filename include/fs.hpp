#pragma once

#include <switch.h>
#include <set>
#include <json.hpp>

namespace fs
{
    bool removeDir(const std::string& path);
    int removeDir(const char* path);
    nlohmann::ordered_json parseJsonFile(const std::string& path);
    void writeJsonToFile(nlohmann::json &data, const std::string& path);
    bool copyFile(const std::string& from, const std::string& to);
    std::string copyFiles(const std::string& path);
    void createTree(std::string path);
    std::set<std::string> readLineByLine(const std::string& path);
    std::string readLine(const char * path);
    Result getFreeStorageSD(s64& free);
}
