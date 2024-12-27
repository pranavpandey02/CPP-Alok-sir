#include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=4;r++)
    {
        for(int c=1;c<=10;c++)
        {
            if((c>=6-r) && (c<=r+4))
            {
                cout<<r;

            }
            else{
                cout<<" ";
            }
        }
       cout<<endl;
    }

    for(int r=1;r<=9;r++)
    {
        for(int c=1;c<=9;c++)
        {
            if((c>=r && c<=10-r))
            {
                cout<<r+4;

            }
            else{
                cout<<" ";
            }
        }
       cout<<endl;
    }

}