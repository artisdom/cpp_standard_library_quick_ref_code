#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <ctime>

int main(int argc, char const *argv[])
{
    std::random_device seeder;
    const auto seed = seeder.entropy() ? seeder() : std::time(nullptr);
    std::default_random_engine gen(static_cast<std::default_random_engine::result_type>(seed));
    std::vector<int> vec { 1, 2, 3, 4, 5, 6 };
    std::shuffle(begin(vec), end(vec), gen);

    for(auto v : vec)
    {
        std::cout << v << std::endl;
    }

    return 0;
}
