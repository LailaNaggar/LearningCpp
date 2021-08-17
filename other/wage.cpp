#include <iostream>

struct employee
{
    int age;
    int wage;
};
int wages(employee* array)
{
    int average=0;
    for(int i=0; i<5; i++)
    {
        average=average+array[i].wage;
    }
    return average/5;
}
int main()
{
    int average=0;
    employee array[5];
    for(int i=0; i<5; i++)
    {
        std::cin>>array[i].age>>array[i].wage;
    }
    std::cout<<"average"<<wages(array);
}