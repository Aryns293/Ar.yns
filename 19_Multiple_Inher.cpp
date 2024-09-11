#include<iostream>
using namespace std;

/* Multiple Inheritance: When there r more than one base class is being inherited by a single 
    derived class.*/

class a
{
    protected:
    int a;

    public:
    void input()
    {
        cout<<"Enter number for class a: ";
        cin>>a;
    }
};

class b
{
    protected:
    int b;

    public:
    void getData()
    {
        cout<<"Enter number for class b: ";
        cin>>b;
    }
};

class c: public a, public b
{
    public:
    void addition()
    {
        cout<<"Addition: "<<a+b<<endl;
    }
};

int main()
{
    c s1;
    s1.input();
    s1.getData();
    s1.addition();
    return 0;
}