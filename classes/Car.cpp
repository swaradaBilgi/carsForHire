#include "Car.h"

namespace management
{
    Car::Car()
    {
    }

    Car::Car(std::string brand, std::string model)
        : m_brand(brand), m_model(model), m_seatingCapacity(5)
    {
    }

    Car::~Car()
    {
    }

    std::string Car::Brand()
    {
        return m_brand;
    }

    void Car::SetBrand(std::string &brand)
    {
        m_brand = brand;
    }

    std::string Car::Model()
    {
        return m_model;
    }

    void Car::SetModel(std::string &model)
    {
        m_model = model;
    }

    int Car::SeatingCapacity()
    {
        return m_seatingCapacity;
    }

    void Car::SetSeatingCapacity(int &seats)
    {
        m_seatingCapacity = seats;
    }

    void Car::Display()
    {
        std::cout << m_brand << " " << m_model << "              " << m_seatingCapacity << std::endl;
    }

} // namespace management