#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"plz enter nth number";
 cin>>n;
 int i=1;
 while (i<=n)
 {
    int j=1;
    while(j<=i)
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
 }
 
}