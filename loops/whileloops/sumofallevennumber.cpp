#include<iostream>
using namespace std;
int main()
{
  int i=0;
  int n;
  int sum=0;
  cout<<"plz enter nth the number";
  cin>>n;
  while(i<n)
  {
      sum=sum+i;
      i=i+2;
  }
  cout<<sum;
}