#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <ctime>

int main(int argc, char const *argv[])
{
    std::vector<int> vec { 3, 4, 4, 4, 5, 6, 4, 5, 5, 7 };
    auto result = std::unique(begin(vec), end(vec));

    vec.erase(result, end(vec));

    for(auto v : result)
    {
        std::cout << v << std::endl;
    }

    // std::cout << result << std::endl;

    for(auto v : vec)
    {
        std::cout << v << std::endl;
    }

    return 0;
}
