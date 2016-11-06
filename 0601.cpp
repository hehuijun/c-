#include <iostream>
#include <math.h>
using namespace std;
class A
{
public:
A(int i)
{a=i;}
int fun(int b)
{return a*c+b;}
int c;
private:
int a;  
};

int main() {
A x(8);
int A::*pc;
pc=&A::c;
x.*pc=3;//等价于x.c=3;
int(A:: * pfun)(int);
pfun=A::fun;
A * p=&x;
cout<<(p->*pfun(5)<<endl;//等价于p->fun(5);
}
