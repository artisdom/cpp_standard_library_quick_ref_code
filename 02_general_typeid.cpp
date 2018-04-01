#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::string s;
    std::cout << typeid(s).name() << '\n';
    std::cout << (typeid(typeid(s).name()) == typeid(s.data())) << '\n';
    return 0;
}
