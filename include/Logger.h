#pragma once

#include <iostream>

class Logger{

    public:
        Logger() = default;

        bool Initialize(const std::string _pathToLogFile);

        void Info(std::string _log);
        void Error(std::string _log);
        void Wargning(std::string _log);
    private:

        std::string m_pathToFile;
};