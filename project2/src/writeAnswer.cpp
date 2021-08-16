#include "writeAnswer.h"
#include "readNumber.h"

void writeAnswer()
{
    int first= readNumber();
    int second= readNumber();
    int sum= first+second;
    std::cout<<"The answer is: "<<sum;
}