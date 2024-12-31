#include<iostream>
using namespace std;

void sum(int a, int b)
{
    cout<<a+b;
}
void sum (int a, int b, int c)
{
    cout<<endl<<a+b+c;
}
int main()
{
    sum(10,20);
    sum(20,30,50);
}