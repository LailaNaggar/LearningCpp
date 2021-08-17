#include <iostream>

using namespace std;

class IntPair
{
public:
    int m_p1{};
    int m_p2{};
   void set(int p1, int p2)
   {
       m_p1=p1;
       m_p2=p2;
   }
   void print()
   {
       cout<<"Pair: "<<m_p1<<" "<<m_p2<<endl;
   }

};

int main()
{
    IntPair p1;
    p1.set(1, 1);

    IntPair p2 {2, 2};

    p1.print();
    p2.print();

    return 0;
}