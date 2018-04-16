#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <ctime>

int main(int argc, char const *argv[])
{
    std::vector<int> vec { 1, 2, 3, 4, 5, 6 };
    std::rotate(begin(vec), begin(vec) + 4, end(vec));

    for(auto v : vec)
    {
        std::cout << v << std::endl;
    }

    return 0;
}
