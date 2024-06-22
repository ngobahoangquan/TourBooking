#include "CustomerView_Home.h"

void CustomerView_Home()
{
    while (true)
    {
        OSCFG_System_Cls();
        cout << "Tour Booking System" << endl;
        cout << "1. My Profile" << endl;
        cout << "2. My Order" << endl;
        cout << "3. Book a new Tour" << endl;
        cout << "0. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        if (!(cin >> choice) || choice < 0 || choice > 3)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a choice between 0 and 3." << endl;
            OSCFG_System_Pause();
            OSCFG_System_Cls();
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (choice)
            {
            case 1:
                OSCFG_System_Cls();
                //CustomerView_Home_Profile();
                OSCFG_System_Pause();
                break;
            case 2:
                OSCFG_System_Cls();
                //CustomerView_Home_Orders();
                OSCFG_System_Pause();
                break;
            case 3:
                OSCFG_System_Cls();
                //CustomerView_Home_BookTour();
                OSCFG_System_Pause();
                break;
            case 0:
                //CustomerView_Home_Exit();
                return;
            default:
                break;
            }
        }
    }
}