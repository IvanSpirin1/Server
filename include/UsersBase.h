#pragma once

#include <iostream>
#include <unordered_map>

class UsersBase{

    public:

        bool ParseFile(const std::string& _pathToFile);

        bool AddUser(const std::string& _login,const std::string& _password);
        
        std::string getPassword(const std::string& _login);
        const bool isHasUser(const std::string& _login);
        
    private:
        std::unordered_map<std::string,std::string> m_users;
};