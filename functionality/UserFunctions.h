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

void CancelBooking(std::shared_ptr<management::Fleet> &fleet)
{
    std::string name, lastName;
    std::vector<common::Booking> foundBookings;

    std::cout << "Enter your name : ";
    std::cin >> name;
    std::cout << "Enter last name : ";
    std::cin >> lastName;

    int carIndex = 0;

    for (auto car : fleet->Cars())
    {
        int bookingIndex = 0;

        for (auto booking : car.Bookings())
        {
            if ((name == booking.Customer().m_name) && (lastName == booking.Customer().m_lastName))
            {
                fleet->Cars().at(carIndex).Bookings().erase(fleet->Cars().at(carIndex).Bookings().begin() + bookingIndex - 1);
                std::cout << "Booking cancelled." << std::endl;
            }
            else
            {
                std::cout << "Booking not found under this name" << std::endl;
            }
            bookingIndex++;
        }

        carIndex++;
    }
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