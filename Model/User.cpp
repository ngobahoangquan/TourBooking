#include "User.h"

User::User() {}

User::~User() {}

User::User(string username, string password, string displayName, string birthOfDate, string phoneNumber, string address, string role) : username(username), password(password), displayName(displayName), birthOfDate(birthOfDate),
                                                                                                                                        phoneNumber(phoneNumber), address(address), role(role) {}

User User::operator=(const User &other)
{
    username = other.username;
    password = other.password;
    displayName = other.displayName;
    birthOfDate = other.birthOfDate;
    phoneNumber = other.phoneNumber;
    address = other.address;
    role = other.role;
}

string User::getUsername() const
{
    return username;
}

string User::getPassword() const
{
    return password;
}

string User::getDisplayName() const
{
    return displayName;
}

string User::getBirthOfDate() const
{
    return birthOfDate;
}

string User::getPhoneNumber() const
{
    return phoneNumber;
}

string User::getAddress() const
{
    return address;
}

string User::getRole() const
{
    return role;
}

// Setter methods
void User::setUsername(const string &uname)
{
    username = uname;
}

void User::setPassword(const string &pass)
{
    password = pass;
}

void User::setDisplayName(const string &dispName)
{
    displayName = dispName;
}

void User::setBirthOfDate(const string &birthDate)
{
    birthOfDate = birthDate;
}

void User::setPhoneNumber(const string &phoneNum)
{
    phoneNumber = phoneNum;
}

void User::setAddress(const string &addr)
{
    address = addr;
}

void User::setRole(const string &userRole)
{
    role = userRole;
}