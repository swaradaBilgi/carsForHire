#include <iostream>

#include "Fleet.h"

namespace management
{
    Fleet::Fleet()
    {
    }

    Fleet::Fleet(std::vector<management::Car> &cars)
        : m_cars(cars)
    {
    }

    Fleet::~Fleet()
    {
    }

    void Fleet::DisplayAllCars()
    {
        std::cout << "We have " << m_cars.size() << " cars in our fleet" << std::endl
                  << std::endl;
        std::cout << "Car                     Seating capacity" << std::endl;

        for (auto &it : m_cars)
        {
            it.Display();
        }
    }

    void Fleet::addCar(std::shared_ptr<management::Car> car)
    {
        m_cars.push_back(*car);
    }
} // namespace management