#include<iostream>
using namespace std;
class first
{
  public:    
  int age=20;
  void display(first n)
  {
      cout<<n.age;
  }
}o;
int main()
{
    o.display(o);
}