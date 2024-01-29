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

    void Car::addBooking()
    {
        int d, m, y;

        std::cout << "Enter the date" << std::endl;
        std::cout << "Day : ";
        std::cin >> d;
        std::cout << "Month in numbers (1 to 12) : ";
        std::cin >> m;
        std::cout << "Year in 2 digits : ";
        std::cin >> y;
        std::cout << "Number of days : ";
        int days;
        std::cin >> days;

        common::Date date(d, m, y);

        std::vector<common::Date> desiredDates;
        desiredDates.push_back(date);
        if (days > 1)
        {
            for (int i = 1; i < days; i++)
            {
                date.m_day = date.m_day + 1;
            }
        }

        for (auto it : desiredDates)
        {
            if (!isAvailable(it))
            {
                std::cout << "Sorry, the car is not available for desired dates" << std::endl;
                break;
            }
        }

        std::string name;
        std::string lastName;
        std::cout << "Enter your name : ";
        std::cin >> name;
        std::cout << "and last name : ";
        std::cin >> lastName;

        m_bookings.push_back(common::Booking(common::Customer(name, lastName), desiredDates));
        std::cout << "Booking confirmed. Thank you" << std::endl;
    }

    bool Car::isAvailable(common::Date date)
    {
        for (auto it : m_bookings)
        {
            auto existingDates = it.Dates();

            for (auto d : existingDates)
            {
                if ((d.Day() == date.Day()) && (d.Month() == date.Month()) && (d.Year() == date.Year()))
                {
                    return false;
                }
            }
        }

        return true;
    }

    std::vector<common::Booking> Car::Bookings()
    {
        return m_bookings;
    }

} // namespace management