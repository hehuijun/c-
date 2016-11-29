//#include <iostream>
////#include <math.h>
//using namespace std;
//class A
//{
//public:
//    A(int i)
//    {a=i;}
//    int fun(int b)
//    {return a*c+b;}
//    int c;
//private:
//    int a;
//};
//
//int main()
//{
//    A x(8);//a=8
//    int A::*pc;//指向一个类A的成员对象，没有确定指向哪个变量
//    pc=&A::c;//定义一个指向类A的数据成员c的指针pc
//    x.*pc=3;//等价于x.c=3;
//    int(A:: * pfun)(int);//定义一个指向类A的成员函数fun的指针pfun，等价于A::fun;
//   // pfun=A::fun;//error"invalid use of non-static member function ,无效使用非静态成员函数"
//    A * p=&x;//a是类A的一个对象，p是指向对象x的指针,
//    cout<<(p->* pfun)(5)<<endl;//等价于p->fun(5);
//}
