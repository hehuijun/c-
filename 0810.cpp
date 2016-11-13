#include <iostream.h>
class A
{
public:
    virtual void act1();
    void act2()
    { act1();}
};
void A::act1()
{
    cout<<″A::act1() called.″<<endl;
}
class B: public A
{
public:
    void act1();
};
void B::act1()
{
    cout<<″B::act1() called.″<<endl;
}

void main()
{
    B b;
    b.act2();
}
