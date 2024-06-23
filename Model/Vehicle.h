#ifndef __VEHICLE__
#define __VEHICLE__
#include "../Services/NecessaryLib.h"
enum vehicleType
{
    Car,
    Train,
    Plane
};
class Vehicle
{
private:
    string id;
    string vehicleName;
    vehicleType vehicleType;
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