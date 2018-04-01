#include <array>
#include <iostream>
#include "Person.h"
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::array<int, 3> myArray{ 1, 2 };
    std::array<int, 3> myArray2{};

    std::for_each(cbegin(myArray), cend(myArray), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    std::for_each(cbegin(myArray2), cend(myArray2), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    myArray2.fill(5);

    std::for_each(cbegin(myArray2), cend(myArray2), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    return 0;
}
