#ifndef __VEHICLE__
#define __VEHICLE__
#include "../Services/NecessaryLib.h"
class Vehicle
{
private:
    string id;
    string vehicleName;
    string vehicleType;
    string departure;
    string destination;
    string departureTime;
    string arrivalTime;
    struct Seat
    {
        string seatClass;
        string total;
        string available;
    };

public:
};

#endif