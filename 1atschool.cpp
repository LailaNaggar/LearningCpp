#include <iostream>

using namespace std;

int main()
{
    int n{};
    cout << "Enter the number of elemnts: ";
    cin >> n;
    int *array {new int[n]{}};
    double sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        sum= sum+array[i];
    }
    double avg = sum/n;
    cout << avg << endl;
   
    delete[] array;

    return 0;
}