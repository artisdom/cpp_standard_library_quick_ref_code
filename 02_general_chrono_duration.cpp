#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

using namespace std::chrono;

int main(int argc, char const *argv[])
{
    typedef duration<int, std::ratio<3600>> hours_t;
    typedef duration<int64_t, std::milli> millisecs_t;
    const hours_t one_hour(1);
    const millisecs_t ms(one_hour);
    std::cout << "1h = " << ms.count() << "ms" << '\n';

    return 0;
}
