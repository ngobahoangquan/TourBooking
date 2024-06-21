#ifndef __HOME_VIEW__
#define __HOME_VIEW__
#include "Services/NecessaryLib.h"
#include "Services/OSConfig.h"
#include "View/AdminView/AdminView_Home.h"
#include "View/CustomerView/CustomerView_Home.h"
extern string user_username;
extern string user_role;
void HomeView(void);
void LoginView(void);
void RegisterView(void);
void AvailableToursView(void);
void AboutUsView(void);
void ExitView(void);
#endif
