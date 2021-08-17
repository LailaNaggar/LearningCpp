#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
    double x;
    
    double y;

};
struct Coordinates
{
    Point firstpoint;

    Point secondpoint;

};
double Sqrt(int length, Point* array)
{
    double SQRT = sqrt(pow(array[0].x-array[1].x,2)+pow(array[0].y-array[1].y,2));
    double min=SQRT;

    for(int i=0; i<length; i++)
    {
        for(int j=0; j<length; j++)
        {
            SQRT=sqrt(pow(array[i].x-array[j].x,2)+pow(array[i].y-array[j].y,2));
            if(i==j)
            {
                continue;
            }
            else if (SQRT<min)
            {
                min=SQRT;
            }
        
        }
    }

return min;
}

int main()
{
    double SQRT;
    int length;
    cin>>length;
    Point* array{ new Point[length]{}};
    cout<<"enter how many points you want to get: ";
    for(int i=0; i<length; i++)
    {
        cout<<"enter (x,y)";
        cin>>array[i].x>>array[i].y;
    
    }

    Sqrt(length, array);
    cout<<"min is: "<<Sqrt(length, array);

    delete[] array;
    
    return 0;
}