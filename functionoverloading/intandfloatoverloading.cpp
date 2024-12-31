#include<iostream>
using namespace std;
void sub(float a , float b )
{
    cout<<a+b<<endl;
}
void sub(float a, float b, float c)
{
    cout<<a+b+c<<endl;
}
void sub(float a, float b, float c,int d)
{
    cout<<a+b+c+d<<endl;
}
int main()
{
    sub(2,3);
    sub(2,3,5.2);
    sub(2,3,5.2,3.2);
}