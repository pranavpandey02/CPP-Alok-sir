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
    
};
class third :public first , public second 
{
    
};
int main()
{
    second o;
    o.display();
}