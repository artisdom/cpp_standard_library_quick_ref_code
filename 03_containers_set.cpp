#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <ctime>
#include <set>

int main(int argc, char const *argv[])
{
    // std::vector<int> vec { 1, 2, 3, 4, 5, 6 };

    // std::for_each(cbegin(vec), cend(vec), [](auto& element) { std::cout << element << " "; });
    // std::cout << std::endl;

    std::set<int> mySet{ 3, 2, 1 };
    mySet.insert(2);
    mySet.insert(6);
    std::cout << mySet.size() << ' ' << *mySet.begin();
    std::cout << std::endl;
    return 0;
}
