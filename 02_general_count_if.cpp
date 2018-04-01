#include <vector>
#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<std::string> v { "Test", "", "123", "", "" };
    std::cout << std::count_if(begin(v), end(v), std::mem_fn(&std::string::empty));
    return 0;
}
