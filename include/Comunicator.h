#pragma once

#include "UsersBase.h"

class Comunicator
{
public:
    int CreateSocket(const int _port);
    int WaitClient(const int _socket);
    bool isAutorized(int work_sock,UsersBase _usersBase);
};
