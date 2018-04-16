#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <ctime>

int main(int argc, char const *argv[])
{
    auto people = { Person("Wally"), };
    std::vector<int> vec { 1, 2, 2, 3, 4 };

    for (auto v : vec)
    {
        std::cout << v << std::endl;
    }

    std::cout << std::endl;

    auto result = std::equal_range(cbegin(vec), cend(vec), 2);

    vec.erase(result.first, result.second);

    for (auto v : vec)
    {
        std::cout << v << std::endl;
    }

    return 0;
}
