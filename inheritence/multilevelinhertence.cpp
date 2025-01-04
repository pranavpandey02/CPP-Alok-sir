
#include<iostream>
using namespace std ;
class first
{

public: void display()
    {
        cout<<"alll";
    }
};
class second :public first
{
    public:
    void sec()
    {
        cout<<"kya haal ba";
    }     
};
class third :public second
{
    
};

int main()
{
    second o;
    o.display();
    o.sec();
}