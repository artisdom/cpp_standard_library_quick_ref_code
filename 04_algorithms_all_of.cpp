#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <ctime>

int main(int argc, char const *argv[])
{
    std::vector<int> vec { 1, 2, 3, 4, 5, 6 };

    for (auto v : vec)
    {
        std::cout << v << std::endl;
    }

    std::cout << std::endl;

    bool allOf = std::all_of(cbegin(vec), cend(vec), [](auto& element) { return element % 2 == 0; });

    std::cout << "allOf: " << allOf << std::endl;

    return 0;
}
