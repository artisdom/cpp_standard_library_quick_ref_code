#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <ctime>

int main(int argc, char const *argv[])
{
    std::vector<int> vec(6);
    int value = 11;

    std::generate(begin(vec), begin(vec) + 3, [&value] { value *= 2; return value; });

    for (auto v : vec)
    {
        std::cout << v << std::endl;
    }

    std::cout << std::endl;

    std::iota(begin(vec) + 3, end(vec), 2);

    for (auto v : vec)
    {
        std::cout << v << std::endl;
    }
    return 0;
}
