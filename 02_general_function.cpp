#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

struct my_struct {
    int val;
    bool fun(int i) {
        return val == i;
    }
};

int main(int argc, char const *argv[])
{
    my_struct s{123};

    std::function<int(my_struct&)> f_get_val = &my_struct::val;
    std::function<bool(my_struct&, int)> f_call_fun = &my_struct::fun;
    std::cout << f_get_val(s) << ' ' << f_call_fun(s, 123) << std::endl;

    using std::placeholders::_1;
    // auto b_get
    return 0;
}
