#include<iostream>
using namespace std;
struct one
{
    string name;
    int age;
    char section;
    int arr[5];
    
    void display(one n)
    {
        cout<<n.name<<endl<<n.age<<endl<<n.section<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<n.arr[i];
        }
    }
}p;

int main()
{
    one p={"pranav",21,'b',{1,2,5,6,7}};
    
    p.display(p);
}