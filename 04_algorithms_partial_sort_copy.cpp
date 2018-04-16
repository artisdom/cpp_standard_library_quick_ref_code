#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> vec{ 9,2,4,7,3,6,1 };
    std::vector<int> threeSmallestElements(3);

    std::partial_sort_copy(begin(vec), end(vec), begin(threeSmallestElements), end(threeSmallestElements));

    for (auto v : threeSmallestElements) {
        std::cout << "v: " << v << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
