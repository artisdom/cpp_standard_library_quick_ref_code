#include <functional>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
    int array[] = { 7, 9, 7, 2, 0, 4 };

    std::for_each(begin(array), end(array), [](auto &e) { cout << e << ' ';} );
    cout << std::endl;

    std::sort(begin(array), end(array), std::greater<int>());

    std::for_each(begin(array), end(array), [](auto &e) { cout << e << ' ';} );
    cout << std::endl;

    std::plus<> functor;
    std::cout << functor(234, 432) << ' ' << functor(1.101, 2.0405) << std::endl;
    
    return 0;
}
