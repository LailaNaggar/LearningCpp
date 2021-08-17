#include <iostream>

void printarray(int array[], int length)
{
    for(int i=0; i<length; i++)
    {
        std::cout<<array[i];
    }
}
int main()
{
    int length= 15;
    int array[length];
    for(int i=0; i<length; i++)
    {
        std::cin>>array[i];
    }
    printarray(array, length);
}