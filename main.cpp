#include <iostream>
#include <memory>

#include "functionality/EntryPoint.h"

int main()
{
    auto fleet = std::make_shared<management::Fleet>();

    fleet->addCar(std::make_unique<management::Car>("Mercedes", "C200"));
    fleet->addCar(std::make_unique<management::Car>("BMW", "520i"));
    fleet->addCar(std::make_unique<management::Car>("Audi", "A4"));
    fleet->addCar(std::make_unique<management::Car>("Toyota", "Camri"));
    fleet->addCar(std::make_unique<management::Car>("Porsche", "911"));
    fleet->addCar(std::make_unique<management::Car>("Hyundai", "i30"));

    StartUI(fleet);
}