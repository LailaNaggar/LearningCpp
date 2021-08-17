#include <iostream>

struct employee
{
    int age;
    int wage;
};
void check(employee& emp)
{
    if (emp.age>40){
        emp.wage=emp.wage+50;
    }
}
int main()
{
    employee laila;
    laila.age=45;
    laila.wage=4000;
    check(laila);
    std::cout<<laila.wage;
}