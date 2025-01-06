#include<iostream>
using namespace std;

class mech 
{
private:
string name = "Pranav";
public:
// void setName (string k)
// {
//     name = "nisus";
// }
string getName()
{
    return name;
}
};
int main()
{
    mech c;
    cout<<c.getName();
}