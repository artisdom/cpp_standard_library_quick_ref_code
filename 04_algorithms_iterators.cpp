#include <vector>
#include <algorithm>
#include <deque>
#include <iostream>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{
    std::vector<std::string> v{ "1", "2", "3" };
    std::deque<std::string> reversed;
    std::copy(cbegin(v), cend(v), std::front_inserter(reversed));
    // std::copy(begin(v), end(v), std::front_inserter(reversed));

    std::string s123 = std::accumulate(std::make_move_iterator(begin(v)), std::make_move_iterator(end(v)), std::string());

    std::cout << s123 << '\n';

    return 0;
}

///proj/epg-tools/compilers/clang6.0.0-rhel6.6-binutils2.24.gold.rhel6-stdlibgcc6.3.0/bin/clang++