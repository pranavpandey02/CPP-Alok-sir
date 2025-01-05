#include <iostream>
using namespace std;
int fac(int num)
{
    if (num==0)
    {
        return 1;
    }
    else{
        return num*fac(num-1);
    }
}

int main()
{
    int num;
 cout<<fac(5);
}