#include <iostream>

void addCar(std::shared_ptr<management::Fleet> &fleet)
{
    std::string brand, model;

    std::cout << "Enter brand : ";
    std::cin >> brand;
    std::cout << "Enter model : ";
    std::cin >> model;

    fleet->addCar(std::make_shared<management::Car>(brand, model));
}

void removeCar(std::shared_ptr<management::Fleet> &fleet)
{
    std::string brand, model;

    std::cout << "Enter brand : ";
    std::cin >> brand;
    std::cout << "Enter model : ";
    std::cin >> model;

    int carIndex = 0;
    for (auto car : fleet->Cars())
    {
        if ((car.Brand() == brand) && (car.Model() == model))
        {
            fleet->Cars().erase(fleet->Cars().begin() + carIndex - 1);
            std::cout << "Car removed from fleet" << std::endl;
        }
        else
        {
            std::cout << "Car not found" << std::endl;
        }
        carIndex++;
    }
}

int DisplayInternalFunctions(std::shared_ptr<management::Fleet> &fleet)
{
    int selection;
    std::cout << "Press 1 to add a car to fleet" << std::endl;
    std::cout << "Press 2 to remove car from fleet" << std::endl;
    std::cout << "Press 9 to go to home page" << std::endl;
    std::cin >> selection;

    switch (selection)
    {
    case 1:
        addCar(fleet);
        break;
    case 2:
        removeCar(fleet);
        break;
    case 9:
        return 0;
        break;
    default:
        std::cout << "Wrong selection" << std::endl;
        break;
    }

    return 1;
}