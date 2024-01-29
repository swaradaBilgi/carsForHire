#include <iostream>

#include "UserFunctions.h"
#include "companyFunctions.h"

void StartUI(std::shared_ptr<management::Fleet> &fleet)
{
    std::cout << "Welcome to Cars For Hire" << std::endl
              << std::endl;
    std::cout << "Press 1 to book a car" << std::endl;
    std::cout << "Press 2 if you are our employee" << std::endl;

    int a;
    std::cin >> a;

    switch (a)
    {
    case 1:
        DisplayUserFunctions(fleet);
        break;
    case 2:
        std::cout << "Employee selected" << std::endl;
        break;
    default:
        std::cout << "Wrong selection" << std::endl;
        break;
    }
}