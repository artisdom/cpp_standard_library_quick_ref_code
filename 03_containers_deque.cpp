#include <deque>
#include <iostream>
#include "Person.h"
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::deque<int> myDeque = { 1, 2, 3, 4 };
    myDeque.insert(myDeque.begin() + 2, 22);

    std::for_each(cbegin(myDeque), cend(myDeque), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    myDeque.pop_front();

    std::for_each(cbegin(myDeque), cend(myDeque), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    myDeque.erase(myDeque.begin() + 1);

    std::for_each(cbegin(myDeque), cend(myDeque), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    myDeque.push_front(11);
    std::for_each(cbegin(myDeque), cend(myDeque), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    return 0;
}
