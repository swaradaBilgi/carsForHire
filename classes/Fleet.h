#include <vector>
#include <memory>

#include "Car.h"

namespace management
{
    class Fleet
    {
    private:
        std::vector<management::Car> m_cars;

    public:
        Fleet();
        Fleet(std::vector<management::Car> &cars);
        ~Fleet();

        std::vector<management::Car> Cars();
        void DisplayAllCars();
        void addCar(std::shared_ptr<management::Car> car);
        std::shared_ptr<management::Car> CarAtIndex(int index);
    };
} // namespace management