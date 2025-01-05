#include<iostream>
using namespace std;
struct four
{
    string name;
    int age;
    char section;
};
int main()
{
 four* p;
 four* k;
 four d;

 p = &d;
 d.name="pranav";
 d.age=21;
 d.section='A';

cout<<p->name<<endl<<p->age<<endl<<p->section<<endl;
}