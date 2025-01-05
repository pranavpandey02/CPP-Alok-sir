#include<iostream>
using namespace std;
struct third
{
   int arr[5];
};
int main()
{
    third* p; 
    third d = {3,2,4,5,6};
    p=&d;
    
    for(int i=0;i<5;i++){
    cout<<p->arr[i];
    }
}