#include <string>

namespace common
{
    class Customer
    {
    public:
        std::string m_name;
        std::string m_lastName;

        Customer() = delete;
        Customer(std::string &name, std::string &lastName)
            : m_name(name), m_lastName(lastName)
        {
        }
        ~Customer() {}
    };
} // namespace common