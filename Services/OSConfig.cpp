#include "OSConfig.h"

void OSCFG_System_Cls(void)
{
#ifdef _WIN32
    system("cls");
#elif __APPLE__
    system("clear");
#elif __linux__
    system("clear");
#else
    system("clear");
#endif
}

void OSCFG_System_Pause(void)
{
#ifdef _WIN32
    system("pause");
#elif __APPLE__
    system("read -p 'Press enter to exit...'");
#elif __linux__
    system("read -p 'Press enter to exit...'");
#else
    system("read -p 'Press enter to exit...'");
#endif
}