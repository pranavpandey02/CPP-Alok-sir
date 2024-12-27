#include<iostream>
using namespace std;
int main()
{
  int i=2;
  int n;
  int sum=0;
  cout<<"plz enter nth the number";
  cin>>n;
  while(i<n)
  {
      if(n%i==0)
      {
          cout<<"Not a prime"<<i<<endl;
        //   break;
      }
     
      else{
          cout<<"prime"<<i<<endl;
        //   break;
      }
       i=i+1;
   
  }

}