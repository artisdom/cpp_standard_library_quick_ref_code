#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <ctime>

int main(int argc, char const *argv[])
{
    std::vector<int> vec{ 11, 22, 33 };
    const int valueToAdd = 18;

    for (auto v : vec)
    {
        std::cout << v << std::endl;
    }

    std::cout << std::endl;

    auto lower = std::lower_bound(cbegin(vec), cend(vec), valueToAdd);

    vec.insert(lower, valueToAdd);

    for (auto v : vec)
    {
        std::cout << v << std::endl;
    }

    return 0;
}
