#include<iostream>
using namespace std;
class pranav
{
    public:
    string name;
    string age;
    string batch;
    pranav(string p, string k, string l)
    {
      name = p;
      age = k;
      batch = l;
    }
    void display()
    {
        cout<<"name is -->"<<name<<endl<<"age is the-->"<<age<<endl<<"batch is the -->"<<batch;
    }
};
int main()
{
    pranav m("pranav","250","kl rahul");
    m.display();
}
