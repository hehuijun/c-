#include <iostream.h>
class A
{
public:
    A()
    { }
    virtual void f()
    { cout<<″A::f() called.\n″;}
};
class B:public A
{
public:
    B()
    {f();}
    void g()
    { f();}
};
class C:public B
{
public:
    C()
    { }
    virtual void f()
    { cout<<″C::f() called.\n″;}
};
void main()
{
    C c;
    c.g();
}



//A::f() called.
//C::f() called.
