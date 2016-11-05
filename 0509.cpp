#incloude <iostream.h>
int g=5;
void f1(),f2();
void main()
{
g=10;
f1();
f2();
cout<<g<<endl;
}
void f1()
{
g=15;
}
void f2()
{
g=20;
}
