#include <functional>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

bool my_less(int x, int y) { return x < y; }

int main(int argc, char const *argv[])
{
    std::function<bool(int, int)> test = my_less; //function
    test = &my_less; // function pointer
    test = std::less<>{}; // function object
    test = [](int x, int y) { return x < y; }; //lambda closure

    if(test)
    {
        std::cout << test(234, 432) << std::endl;
    }

    return 0;
}
