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

        int index = 1;

        for (auto &it : m_cars)
        {
            std::cout << index;
            it.Display();
            index++;
        }
    }

    void Fleet::addCar(std::shared_ptr<management::Car> car)
    {
        m_cars.push_back(*car);
    }

    std::shared_ptr<management::Car> Fleet::CarAtIndex(int index)
    {
        if (index > m_cars.size())
        {
            std::cout << "Wrong selection" << std::endl;
            return NULL;
        }

        return std::make_shared<management::Car>(m_cars.at(index));
    }

    std::vector<management::Car> Fleet::Cars()
    {
        return m_cars;
    }
} // namespace management