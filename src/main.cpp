#include "test.h"

#include<iostream>

int main()
{
    std::cout << "hello world" << std::endl;
    Test test;
    int result = test.calculate(1,2);
    std::cout << result << std::endl;

    return 0;
}
