#include <iostream>

using namespace std;

bool symmetic(int *array, int length, int num)
{
    if (length*0.5==0){
        for(int i=0; i<length; i++){
            if(array[i]==array[i+2]){
                num++;
            }
        }
    }
if (num==length){
    return true;
}
}
int main()
{
    int num=0;
    int length;
    int *array {new int[length]{}};
    for (int i=0; i<length; i++)
    {
        cin>>array[i]
    }
    cout<<symmetic(array, length, num)

    

 return 0;   
}