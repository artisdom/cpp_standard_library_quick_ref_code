#include <functional>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <memory>

using namespace std;

bool my_less(int x, int y) { return x < y; }

int main(int argc, char const *argv[])
{
    auto s = std::make_shared<std::string>("SharedString");
    auto w = std::weak_ptr<std::string>(s);

    {
        std::shared_ptr<std::string> s2 = w.lock();
        std::cout << *s2 << '\n';
    }
    s.reset();
    return 0;
}
