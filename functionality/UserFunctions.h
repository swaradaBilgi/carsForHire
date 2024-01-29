#include <iostream>

#include "../classes/Fleet.h"

void MakeBooking(std::shared_ptr<management::Fleet> &fleet)
{
    std::cout << "\nSelect index of desired car" << std::endl;
    fleet->DisplayAllCars();

    int selection = 0;
    std::cin >> selection;

    fleet->CarAtIndex(selection - 1)->addBooking();
}

void CancelBooking()
{
}

void DisplayUserFunctions(std::shared_ptr<management::Fleet> &fleet)
{
    int selection = 0;
    std::cout << "Enter the operation to execute from the options below : " << std::endl
              << std::endl;
    std::cout << "Press 1 to book a car" << std::endl;
    std::cout << "Press 2 to cancel a reservation" << std::endl;
    std::cin >> selection;

    switch (selection)
    {
    case 1:
    {
        MakeBooking(fleet);
        break;
    }
    case 2:
    {
        CancelBooking();
        break;
    }

    default:
        break;
    }
}