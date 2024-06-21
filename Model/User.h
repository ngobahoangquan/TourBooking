#ifndef __USER__
#define __USER__
#include "../Services/NecessaryLib.h"
class User
{
private:
    string username;
    string password;
    string displayName;
    string birthOfDate;
    string phoneNumber;
    string address;
    string role;

public:
    User();
    ~User();
    User(string username, string password, string displayName, string birthOfDate, string phoneNumber, string address, string role);
};

#endif