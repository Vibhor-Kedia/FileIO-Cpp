#include "pch.h"
#include "FILEIO.h"
#include <fstream>
#include <sstream>

void FileIO::WriteToFile(const std::string& filename, const std::string& content) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << content;
        outFile.close();
    }
}

std::string FileIO::ReadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    std::stringstream buffer;
    if (inFile.is_open()) {
        buffer << inFile.rdbuf();
        inFile.close();
    }
    return buffer.str();
}