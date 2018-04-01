#include <map>
#include <iostream>
#include "Person.h"
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::map<Person, int> myMap { { Person("Jenne"), 1}, { Person("Bart"), 2} };

    auto iter = begin(myMap);
    std::cout << "Key=" << iter->first.GetFirstName();
    std::cout << ", Value=" << iter->second << std::endl;

    myMap.emplace(Person("Anna"), 4);

    myMap.emplace(std::piecewise_construct, std::forward_as_tuple("Anna2"), std::forward_as_tuple(5));

    std::for_each(cbegin(myMap), cend(myMap), [](auto& element){ std::cout << element.first.GetFirstName() << ' ' << element.second << std::endl; });

    return 0;
}
