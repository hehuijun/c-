class M
{
public:
M(int x,int y)
{X=x;Y=y;}
M(int x)
{X=x;Y=x*x;}
int Add(int x,int y);
int Add(int x);
int Add();
int Xout(){return X;}
int Yout(){return Y;}
priavte:
int X,Y;
};
int M::Add(int x,int y)
{
X=x;
Y=y;
return X+Y;
}
Int M:Add(int x)
{
X=Y=x;
return X+Y;
}
int M::Add()
{
return X+Y;
}
#incloude <iostream.h>
void main()
{
M a(10,20),b(4);
cout<<"a="<<a.Xout()<<"."<<a.Yout()<<endl;

cout<<"b="<<b.Xout()<<"."<<b.Yout()<<endl;
int i=a.Add();
int j=a.Add(3,9);
int k=b.Add(5);

cout<<i<<endl<<j<<endl<<k<<endl;
}

