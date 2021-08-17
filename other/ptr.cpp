#include <iostream>

void check(int* x)
{
    if(*x%2==0)
    {
        *x=2;
    }
    else
        *x=1;
}
int main()
{
    int x=3;
    check(& x);
    std::cout<<x;
    int y = 10;
    int& m = x;
    m = y;

}