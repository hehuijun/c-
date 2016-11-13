#include <iostream>
#include <math.h>
using namespace std;

class A
{
public:
  void f(int i)
  {
  cout<<i<<endl;
  }
  void g()
  {
  cout<<"g\n";
  }
};
class B:public A //使用class关键字定义类时，默认的继承方式private
{
public:
  void h()
  {
  cout<<"h\n";
  }
  A::f;
};
int main()
{
B d1;//类B的对象b1
d1.f(6);//对象的成员
d1.g();
d1.h();
}