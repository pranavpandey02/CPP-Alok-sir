#include<iostream>
using namespace std;

class Teacher
{
  private: 
   int sallary = 25000;
   public: 
   string name;
   string sub;

//    setter
   
   void setSalary(double s)
   {
    sallary = s; 
   }
//    getter
    double getSalary()
    {
        return sallary;
    }
};
int main()
{
    Teacher t1;
    t1.name="Pranav Pandey";
    t1.sub= "b-tech";
    t1.setSalary(350000);

    cout<<t1.getSalary();


} 