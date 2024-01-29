#include <iostream>

namespace common
{
    class Date
    {
    private:
        int m_day;
        int m_month;
        int m_year;

    public:
        Date() = delete;
        Date(int &d, int &m, int &y);

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