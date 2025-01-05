#include <iostream>
using namespace std;
int sub(int num)
{
    if(num==0)
    {
       return 1;
    }
    else{
        return num-sub(num-1);
    }
}
int main()
{
// int number;
    cout<<sub(5); 
}


// sir se puchna hai--