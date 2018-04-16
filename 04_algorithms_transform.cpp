#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <ctime>

int main(int argc, char const *argv[])
{
    std::vector<int> vec { 1, 2, 3, 4, 5, 6 };

    std::for_each(cbegin(vec), cend(vec), [](auto& element) { std::cout << element << " "; });
    std::cout << std::endl;

    std::transform(cbegin(vec), cend(vec), begin(vec), [](auto& element) { return element * 2; });

    std::for_each(cbegin(vec), cend(vec), [](auto& element) { std::cout << element << " "; });
    std::cout << std::endl;

    std::transform(cbegin(vec), cend(vec), begin(vec), std::negate<>());

    std::for_each(cbegin(vec), cend(vec), [](auto& element) { std::cout << element << " "; });
    std::cout << std::endl;
    return 0;
}
