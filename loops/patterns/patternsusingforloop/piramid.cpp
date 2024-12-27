#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"plz enter your number";
    cin>>n;
  for(int i=1;i<=5;i++)
  {
    for(int j=1;j<=10;j++)
    {
        if((j>=6-i) && (j<=4+i))
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
  }
  cout<<endl;
}