#pragma once

#include "Logger.h"
#include "Comunicator.h"
#include "UsersBase.h"

class Server
{


public:
        
    bool ParseCmdLine(int argc, char **argv);
    bool Initialize();

    int Run();

private:
    std::string m_usersBasePath;

    int m_targetPort;

    std::string m_logFilePath;

    UsersBase m_usersBase;
    Comunicator m_communicator;
    Logger m_logger;

    std::string getNextArg(int argc,char** argv);

    bool isNumber(std::string _str);
};
