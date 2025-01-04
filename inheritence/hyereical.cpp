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
class third :public first  
{
    
};
int main()
{
    second o;
    o.display();
    third k;
    k.display();

}

// modify krna hai isme bhut sara;