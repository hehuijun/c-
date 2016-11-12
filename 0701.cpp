#include <iostream>
class A
{
public:
  void f1();
  protected:
  int j1;
  pravate:
  int i1;
};
class B:public A
{
public:
  void f2();
protected:
  int j2;
private:
  int i2;
};
class C:public B
{
public:
  void f3();
};
