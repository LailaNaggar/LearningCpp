#include "io.h"
#include <iostream>

int readNumber()
{
    int number;
    std::cout<<"enter number: ";
    std::cin>>number;
    return number;
}

void writeAnswer()
{
    int first= readNumber();
    int second= readNumber();
    int sum= first+second;
    std::cout<<first<<"+"<<second<<"="<<sum;
}