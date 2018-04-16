#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> vec { 4,2,5,1,3,6 };
    int sum = std::accumulate(begin(vec), end(vec), 0);
    std::cout << "sum: " << sum << std::endl;

    double v1[] = { 0, 1, 2 };
    double v2[] = { 1, 0, 2 };
    double dot = std::inner_product(std::begin(v1), std::end(v1), std::begin(v2), 0.0);
    std::cout << "dot: " << dot << std::endl;
    return 0;
}
