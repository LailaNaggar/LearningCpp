#include <iostream>

int sum(int array[], int length)
{
    int sum=0;
    for(int i = 0; i<length; i++)
    {
        sum=sum+array[i];
    }
    return sum;
}
int main()
{
    int length=10;
    int array[10];
    for(int i=0; i<10; i++)
    {
        std::cin>>array[i];
    }
    std::cout << sum(array, length);
}