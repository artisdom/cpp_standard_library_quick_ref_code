#include <list>
#include <iostream>
#include "Person.h"
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::list<int> list1{ 1, 7, 5}, list2{ 5, 6, 2}, list3{ 3, 4 };

    std::for_each(cbegin(list1), cend(list1), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    list1.sort();

    std::for_each(cbegin(list1), cend(list1), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    list2.sort();
    list1.merge(list2);

    std::for_each(cbegin(list1), cend(list1), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    list1.unique();

    std::for_each(cbegin(list1), cend(list1), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    auto splicePosition = std::next(begin(list1), 2);
    list1.splice(splicePosition, list3);

    std::for_each(cbegin(list1), cend(list1), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    std::for_each(cbegin(list3), cend(list3), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;
    return 0;
}
