#ifndef __ACCOMMODATION__
#define __ACCOMMODATION__
#include "../Services/NecessaryLib.h"
enum class accommodationType
{
    Motel,
    Hotel,
    Apartment,
    Villa
};
class Accommodation
{
private:
    string id;
    string accommodationName;
    accommodationType type;
    string location;
};
#endif