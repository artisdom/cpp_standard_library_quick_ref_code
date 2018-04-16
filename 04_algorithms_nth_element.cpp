#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> vec{ 9,2,4,7,3,6,1 };
    auto middle = begin(vec) + vec.size() / 2;
    std::nth_element(begin(vec), middle, end(vec));
    int median = *middle;
    std::cout << "median: " << median << std::endl;

    return 0;
}
