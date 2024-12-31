#include<iostream>
using namespace std;

int sum(int *a)
{
    *a = 30;
    return *a;
}
int main()
{
  int a;
  cout <<sum(&a);  
}
