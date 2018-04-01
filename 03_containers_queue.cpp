#include <queue>
#include <iostream>
#include "Person.h"
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::queue<Person> cont;
    cont.emplace("Doug", "B", true);
    cont.emplace("Phil", "W", false);
    cont.emplace("Stu", "P", true);
    cont.emplace("Alan", "G", false);

    while(!cont.empty())
    {
        std::cout << cont.front() << std::endl; // queue
        // std::cout << cont.top() << std::endl; // priority_queue and stack
        cont.pop();
    }

    // std::for_each(cbegin(myMap), cend(myMap), [](auto& element){ std::cout << element.first.GetFirstName() << ' ' << element.second << std::endl; });

    return 0;
}
