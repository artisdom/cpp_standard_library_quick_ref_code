#include <initializer_list>
#include <iostream>

class ExampleClass
{
public:
    ExampleClass(int, int) { };
    ExampleClass(std::initializer_list<int>) { };
    ~ExampleClass() { };
private:

};

int main(int argc, char const *argv[])
{
    auto list = { 1, 2, 3 };

    ExampleClass a(1, 2); //(int, int) constructor is used
    ExampleClass b{1, 2}; // initializer_list<int> constructor is used
    return 0;
}
