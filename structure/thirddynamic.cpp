#include <iostream>
using namespace std;
struct third{
    int age;
    string name;
    char section;
    void display (third n)
    {
         cout<<n.age<<endl<<n.name<<endl<<n.section;
    }
};
int main()
{
    third p={20,"Pranav Pandey",'a'};
    p.display(p);
}