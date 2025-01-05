#include<iostream>
using namespace std;
int fibo(int num)
{
    if(num==0)
    { 
        return 1;
    }
    else{
        return fibo(num-1)+fibo(num-2);
    }
}
int main()
{
    int num=2;
    cout<<fibo(num);
}




9