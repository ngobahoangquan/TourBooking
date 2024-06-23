#include "HomeView.h"

string user_username = "testString";
string user_role = "testString";
void HomeView(void) 
{
    int choice;

    while (true)
    {
        OSCFG_System_Cls();
        cout << "Welcome to Tour Booking System" << endl;
        cout << "1. Login" << endl;
        cout << "2. Register" << endl;
        cout << "3. Available tours" << endl;
        cout << "4. About us" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        if (!(cin >> choice) || choice < 0 || choice > 4)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a choice between 0 and 4." << endl;
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
                LoginView();
                break;
            case 2:
                OSCFG_System_Cls();
                RegisterView();
                break;
            case 3:
                OSCFG_System_Cls();
                AvailableToursView();
                break;
            case 4:
                OSCFG_System_Cls();
                AboutUsView();
                break;
            case 0:
                ExitView();
                return;
            default:
                break;
            }
        }
    }
}

void LoginView(void)
{
    while (true)
    {
        string username, password;
        OSCFG_System_Cls();
        cout << "Login" << endl;
        cout << "Username: ";
        getline(cin, username);
        cout << "Password: ";
        getline(cin, password);
        // int loginRole = Login(username, password);
        int loginRole = 1;
        if (loginRole == 0)
        {
            user_username = username;
            user_role = "admin";
            // AdminView_Home();
            break;
        }
        else if (loginRole == 1)
        {
            user_username = username;
            user_role = "customer";
            CustomerView_Home();
            break;
        }
        else
        {
            cout << "Invalid username or password!" << endl;
            OSCFG_System_Pause();
            OSCFG_System_Cls();
        }
    }
}

void RegisterView(void)
{
    cout << "Register" << endl;
}

void AvailableToursView(void)
{
    cout << "Available tours" << endl;
}

void AboutUsView(void)
{
    cout << "About us" << endl;
}

void ExitView(void)
{
    cout << "Goodbye!" << endl;
}
