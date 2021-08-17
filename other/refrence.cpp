#include <iostream>

void switcha (int& first, int& second)
{
    int i=first;
    first=second;
    second=i;
}
int main()
{
    int first=5;
    int second=6;
    switcha(first, second);
    std::cout<<first<<second;
}