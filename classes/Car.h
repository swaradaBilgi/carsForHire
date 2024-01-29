#include <string>
#include <vector>
#include <chrono>

#include "Booking.h"

namespace management
{
    class Car
    {
    private:
        std::string m_brand;
        std::string m_model;
        int m_seatingCapacity;
        std::vector<common::Booking> m_bookings;

    public:
        Car();
        Car(std::string brand, std::string model);
        ~Car();

        std::string Brand();
        void SetBrand(std::string &brand);
        std::string Model();
        void SetModel(std::string &model);
        int SeatingCapacity();
        void SetSeatingCapacity(int &seats);

        void Display();
    };
} // namespace management
