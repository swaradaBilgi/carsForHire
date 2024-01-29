#include <iostream>

namespace common
{
    class Date
    {
    public:
        int m_day;
        int m_month;
        int m_year;

        Date();
        Date(int d, int m, int y)
            : m_day(d), m_month(m), m_year(y)
        {
        }

        int Day()
        {
            return m_day;
        }

        int Month()
        {
            return m_month;
        }

        int Year()
        {
            return m_year;
        }
    };
} // namespace common