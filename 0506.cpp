class A
{
public:A
(int x,int y)
{X=x;Y=y;}
int a()
{return X;}
}
int B()
{return Y;}
}
int c();
int d();
Private:
int X,Y;
};
inline int A::c()
{
return a()+b();
}
inline intA::d()
{
return c();
}
#include <iostream.h>
void main()
{
A m(3,5);
int i=m.d();
cout<<"d()return:"<<i<<endl;
}

