#include<iostream>
using namespace std;
 
 class student
 {
     public:
     string name;
     double* cgpaPtr;
     
     student (string name, double cgpa)
     {
         this->name = name;
         cgpaPtr = new double;
         *cgpaPtr = cgpa;
     }
     
    //  detructor
    ~student()
    {
        cout<<"hi I delte everythings";
        delete cgpaPtr;
    }
     
     void getInfo()
     {
         cout<<"name : "<<name<<endl;
         cout<<"cgpa : "<<*cgpaPtr<<endl;
     }
     
 };
 
 int main()
 {
     student s1("rahul kumar",8.9);
     s1.getInfo();
     
 }