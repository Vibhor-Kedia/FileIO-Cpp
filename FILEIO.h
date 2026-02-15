#pragma once
#include <string>

class FileIO {
public:
    static void WriteToFile(const std::string& filename, const std::string& content);
    static std::string ReadFromFile(const std::string& filename);
};