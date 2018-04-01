#include <set>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::set<int> mySet{ 3, 2, 1 };
    mySet.insert(2);
    mySet.insert(6);
    std::cout << mySet.size() << ' ' << *mySet.begin() << std::endl;

    return 0;
}
