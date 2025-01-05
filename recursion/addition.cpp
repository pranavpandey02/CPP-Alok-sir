#include <iostream>
using namespace std;
int sum(int num)
{
    if(num==0)
    {
        return 1;
    }
    else{
        return num+sum(num-1);
    }
}
int main()
{
    int num = 20;
    cout<<"sum of all number is"<<sum(num);
}