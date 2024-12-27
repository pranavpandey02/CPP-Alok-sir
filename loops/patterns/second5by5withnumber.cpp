#include<iostream>
using namespace std;
 int main()
 {
    int n;
    int i=1;
    cout<<"plz enter your number";
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
 }