#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"please enter your number";
cin>>n;
int i=1;
char start = 'A';
while(i<=n)
{
  int j = 1;
  while(j<=n)
  {
    cout<<start;
    start++;
    j++;
  }
  cout<<endl;
  i++;
}
}