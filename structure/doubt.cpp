#include<iostream>
using namespace std;
struct info 
{
    int rno ;
    string name;
    char section;
    
    void display(info n)
    {
        cout<<n.rno<<endl<<n.name<<endl<<n.section<<endl;
    }
};
int main()
{
info* p;
// info d;
info d={ 20,"Pranav Pandey",'b'};
p = &d;
cout<<p->display(d);

}