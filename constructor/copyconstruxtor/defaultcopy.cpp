#include<iostream>
using namespace std;

class pranav
{
    public:
    string name;
    string age;
    string batch;
    pranav( string n, string k, string p )
    {
       name = n;
       age = k;
       batch = p;
    }
    void display()
    {
        cout<<name<<endl<<age<<endl<<batch;
    }
};
int main()
{
    pranav l("Pranav","25","b-tech");
    l.display();
    pranav p (l);
    l.display();
}