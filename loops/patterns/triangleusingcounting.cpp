#include<iostream>
using namespace std;
int main()
{
    int n;
    int count =1; 
    cout<<"plz enter your number";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}