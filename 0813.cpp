#include <iostream.h>
class A
{
public:
    virtual void print(int x,int y)
    { cout<<x<<″,″<<y<<endl;}
};
class B: public A
{
public:
    virtual void print(int x,float y)
    { cout<<x<<″,″<<y<<endl;}
};
void show(A &a)
{
    a.print(3,8);
    a.print(6,5.9);
}
void main()
{
    B b;
    show(b);
}



//3,8
//6,5
