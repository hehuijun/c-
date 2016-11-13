#include <iostream.h>
class A
{
    public：
    virtual void f1()
    { cout<<″A::f1() called.\n″;}
    void f2()
    { f1();}
};
class B: public A
{
public:
    void f1()
    { cout<<″B::f1() called.\n″;}
    void f3()
    { A::f1():}
};
void main()
{
    B b;
    b.f2();
    b.f3();
    A &ra=b;
    ra.f2();
    A a=b;
    a.f2();
}


/*输入结果
B::f1() called.
A::f1() called.
B::f1() called.
A::f1() called.
*／
