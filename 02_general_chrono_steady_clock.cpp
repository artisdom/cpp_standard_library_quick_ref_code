#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

int main(int argc, char const *argv[])
{
    using std::chrono::steady_clock;
    const steady_clock::time_point before = steady_clock::now();
    std::cout << steady_clock::period::num << '/' << steady_clock::period::den << '\n';
    std::cout << (steady_clock::now() - before).count() << '\n';
    return 0;
}
