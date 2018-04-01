#include <vector>
#include <iostream>
#include "Person.h"
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> vec = { 1, 2, 3, 2, 2, 6 };
    auto iter = std::remove(begin(vec), end(vec), 2);

    std::for_each(cbegin(vec), cend(vec), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    vec.erase(iter, end(vec));
    std::for_each(cbegin(vec), cend(vec), [](auto& iter){ std::cout << iter << ' '; });
    std::cout << std::endl;

    return 0;
}
