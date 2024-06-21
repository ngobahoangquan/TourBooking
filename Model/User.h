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
    User operator=(const User &other);
    string getUsername() const;
    string getPassword() const;
    string getDisplayName() const;
    string getBirthOfDate() const;
    string getPhoneNumber() const;
    string getAddress() const;
    string getRole() const;
    void setUsername(const string &uname);
    void setPassword(const string &pass);
    void setDisplayName(const string &dispName);
    void setBirthOfDate(const string &birthDate);
    void setPhoneNumber(const string &phoneNum);
    void setAddress(const string &addr);
    void setRole(const string &userRole);
};

#endif