#include <iostream>
using namespace std ;

void sum(int a, int b)
{
    cout<<a+b;
}
void sum(int a, int b, int c)
{
    cout<<a+b+c;
}
int main()
{
int a=10;
int b=20;
int c=50;
sum(a,b);
sum(a,b,c);
}