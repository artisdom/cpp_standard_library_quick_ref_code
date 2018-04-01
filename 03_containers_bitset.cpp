#include <bitset>
#include <iostream>
#include "Person.h"
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::bitset<10> myBitset;

    std::bitset<4> myBitset2("1001");

    std::cout << myBitset.to_ulong() << std::endl;
    std::cout << myBitset2.to_ulong() << std::endl;

    // std::for_each(cbegin(myMap), cend(myMap), [](auto& element){ std::cout << element.first.GetFirstName() << ' ' << element.second << std::endl; });

    return 0;
}
