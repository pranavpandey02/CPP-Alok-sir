#include<iostream>
using namespace std;
int sum(int *a, int *b,int *c)
{
   *a=30;
    *b = 40;
    *c = 50;
    return *a+*b+*c; 
}
int main()
{
    int b;
    cout<<sum(&b,&b,&b);
}