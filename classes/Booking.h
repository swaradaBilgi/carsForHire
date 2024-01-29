#include <vector>

#include "Customer.h"
#include "Date.h"

namespace common
{
    class Booking
    {
    private:
        common::Customer m_customer;
        std::vector<common::Date> m_dates;

    public:
        Booking() = delete;
        Booking(common::Customer cust, std::vector<common::Date> dates)
            : m_customer(cust), m_dates(dates)
        {
        }

        std::vector<common::Date> Dates()
        {
            return m_dates;
        }
    };
} // namespace common