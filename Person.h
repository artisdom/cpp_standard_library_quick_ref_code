#include <string>
#include <ostream>

class Person {
public:
    Person() = default;
    explicit Person(const std::string& first, const std::string& last = "", bool isVIP = false) : m_first(first), m_last(last), m_isVIP(isVIP) {}

    const std::string& GetFirstName() const { return m_first; };
    void SetFirstName(const std::string& first) { m_first = first; }

    const std::string& GetLastName() const { return m_last; }
    void SetLastName(const std::string& last) { m_last = last; }

    bool IsVIP() const { return m_isVIP; }

private:
    friend bool operator<(const Person&, const Person&);
    std::string m_first;
    std::string m_last;
    bool m_isVIP = false;
};

// Comparison operator.
bool operator<(const Person& lhs, const Person& rhs)
{
    if (lhs.IsVIP() != rhs.IsVIP()) return rhs.IsVIP();
    if (lhs.GetLastName() != rhs.GetLastName())
        return lhs.GetLastName() < rhs.GetLastName();
    return lhs.GetFirstName() < rhs.GetFirstName();
}

//Equality operator
bool operator==(const Person& lhs, const Person& rhs)
{
    return lhs.IsVIP() == rhs.IsVIP() && lhs.GetFirstName() == rhs.GetFirstName() && lhs.GetLastName() == rhs.GetLastName();
}

// operator<< to support output to C++ streams.
// Details of this streaming operator can be found in Chapter 5.
std::ostream& operator<<(std::ostream& os, const Person& person)
{
    os << person.GetFirstName() << ' ' << person.GetLastName();
    return os;
}

namespace std {
    template<> struct hash<Person> {
        // Two nested types required by the Standard for specializations, but
        // not specified to be part of the (unspecified) has<Key> template:
        typedef Person argument_type;
        typedef std::size_t result_type;

        result_type operator()(const argument_type& p) const {
            auto firstNameHash(std::hash<std::string>()(p.GetFirstName()));
            auto lastNameHash(std::hash<std::string>()(p.GetLastName()));
            return firstNameHash ^ lastNameHash;
        }
    };
}