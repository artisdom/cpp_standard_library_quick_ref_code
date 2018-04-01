#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

int main(int argc, char const *argv[])
{
    time_t time = std::time(nullptr);
    tm time_tm = *std::localtime(&time);
    char buffer[256];

    using std::chrono::system_clock;
    const auto now = system_clock::now();
    const time_t now_time_t = system_clock::to_time_t(now);
    std::cout << now.time_since_epoch().count() << '\n';
    std::cout << ctime(&now_time_t) << '\n';

    return 0;
}
