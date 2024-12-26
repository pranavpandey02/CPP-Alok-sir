#include<iostream>
using namespace std;

class pranav 
{
    public:
    string name;
    string age;
    pranav (string name, string age)
    {
        this->name = name;
        this->age = age;
    }
    pranav(pranav &j)
    {

        cout<<"hlw ji kya haal chal";
        this->name = j.name;
        this->age = j.age;
    }
    void dis()
    {
        cout<<name<<endl<<age<<endl;
    }
    
};
int main()
{
    pranav k("pranav","25");
    pranav s(k);
    k.dis();
    
}