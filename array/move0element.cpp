#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,0,2,0,3};
    int index=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]!=0)
        {
            arr[index]=arr[i];
            index++;
        }
    }
    while(index<5)
    { 
        arr[index]=0;
        index++;
    }
    for(int i=0; i<5; i++)
    {
        cout<<arr[i];
    }
}