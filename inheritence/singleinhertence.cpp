#include<iostream>
using namespace std ;
class first
{
    public:
    string name = "pranav";
    void display(first n)
    {
        cout<<n.name;
    }
};
class second :public first
{
    
};
int main()
{
    second o;
    o.display(o);
}