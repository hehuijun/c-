#include <iostream.h>
class A
{
public:
virtual void f()
{ cout<<″A::f() called.\n″;}
};
class B: public A
{
public:
virtual void f()
{ cout<<″B::f() called.\n″;}
};
void main()
{
B b;
A &r=b;
void (A::*pf)()=A::f;
(r.*pf)();
}



//B::f() called.
