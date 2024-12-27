#include<iostream>
using namespace std;
 int main()
 {
     int count ;
     for(int i=1;i<=5;i++)
     {
         count=i;
         for(int j=1;j<=9;j++)
         {
             if((j>=6-i)&&(j<=i+4))
             {
                 cout<<count++;
             }
             else{
                 cout<<" ";
             }
         }
         cout<<endl;
     }
 }