#include <iostream>

#include "UserFunctions.h"
#include "companyFunctions.h"

void StartUI(std::shared_ptr<management::Fleet> &fleet)
{
    int uiRepeat = 1;

    while (uiRepeat)
    {
        std::cout << "Welcome to Cars For Hire" << std::endl
                  << std::endl;
        std::cout << "Press 1 to book a car" << std::endl;
        std::cout << "Press 2 if you are our employee" << std::endl;
        std::cout << "Press any other key to exit" << std::endl;

        int a;
        std::cin >> a;

        switch (a)
        {
        case 1:
            uiRepeat = DisplayUserFunctions(fleet);
            break;
        case 2:
            uiRepeat = DisplayInternalFunctions(fleet);
            break;
        default:
            std::cout << "Wrong selection" << std::endl;
            break;
        }
    }
}