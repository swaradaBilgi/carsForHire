#include <string>

namespace common
{
    class Customer
    {
    private:
        std::string m_name;
        std::string m_lastName;

    public:
        Customer() = delete;
        Customer(std::string &name, std::string &lastName)
            : m_name(name), m_lastName(lastName)
        {
        }
        ~Customer() {}

        std::string Name() { return m_name; }
        std::string LastName() { return m_lastName; }
    };
} // namespace common