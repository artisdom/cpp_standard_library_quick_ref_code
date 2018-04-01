#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

using namespace std::chrono;

int main(int argc, char const *argv[])
{
    using std::chrono::steady_clock;
    using std::chrono::system_clock;
    using std::chrono::time_point;
    using std::chrono::duration;

    time_point<system_clock, std::chrono::hours> one_hour(1h);
    time_point<system_clock, std::chrono::minutes> sixty_minutes = one_hour;
    std::cout << (one_hour - sixty_minutes).count() << std::endl;
    return 0;
}
