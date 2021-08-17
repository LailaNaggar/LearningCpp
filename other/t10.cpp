#include <iostream>

using namespace std;

bool check(int arr1[], int arr2[], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int n=0; n<size; n++)
        {
            if(arr1[i]==arr2[n])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return false;
}

int main()
{
     int arr1[10];
    for(int i=0; i<10; i++){
        cout<<"enter value of i: ";
        cin>>arr1[i];
    }
    int arr2[10];
    for(int n=0; n<10; n++){
        cout<<"enter value of n: ";
        cin>>arr2[n];
    }

    cout << check(arr1, arr2, 10) << endl;
    return 0;
}