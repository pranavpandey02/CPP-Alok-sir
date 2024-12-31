#include <iostream>
using namespace std;

int sum(int *a)
{
    *a = 20;

    return *a;
}
int main()
{
    int b;
    cout<<sum(&b);
}