#include <iostream>
using namespace std;
struct second
{
    int age = 20;
    string name ="Pranav Pandey";
    char section='b';
    void display(second n)
    {
        cout<<n.age<<endl<<n.name<<endl<<n.section<<endl;
    }
}p;
int main()
{
    p.display(p);
}
