#include <iostream>

struct item
{
    int id;
    int price;
};
void check(item* array, int num, int& budget)
{
    int sum=0;
    int left;
    for(int i=0; i<num; i++)
    {
        sum=sum+array[i].price;
    }
    if (budget>sum)
    {
        budget=budget-sum;
        std::cout<<budget<<"left";
    }
    else
        std::cout<<"you do not have enough money";
}
int main()
{
    int num=5;
    int budget;
    item array[num];
    for(int i=0; i<num; i++)
    {
        std::cin>>array[i].id>>array[i].price;
    }
    std::cout<<"enter the person's budget: ";
    std::cin>>budget;
    check(array, num, budget);
    
}