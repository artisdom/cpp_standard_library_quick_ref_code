#include <functional>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

bool my_less(int x, int y) { return x < y; }

int main(int argc, char const *argv[])
{
    int i = 234;
    std::vector<std::reference_wrapper<int>> v{ std::ref(i) };
    v[0].get() = 432;

    std::cout << v[0] << "==" << i << std::endl;
    return 0;
}
