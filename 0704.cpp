#include <iostream>
class A
{
public:
    A()
    {a=0;cout<<"A's default constructor called.\n";}
    A(int i)
    {a=i;cout<<"A's constructor called.\n";}
    ~A()//~是什么意思呢？
    {cout<<"A's destructor callde.\n";}
    void Print() const
    {cout<<a<<",";}
    int Geta()
    {retrun a;}
private:
    int a;
};
class B:public A
{
public:
    B()
    {b=0;cout<<"B's default constructor called.\n";}
    B(int i,int j,int k);
    {a=i;cout<<"A's constructor called.\n";}
        ~B()//~是什么意思呢？
        {cout<<"B's destructor callde.\n";}
        void Print();
    private:
        int b;
        A aa;
        
        };
        B::B(int i,int j,int k):A(i),aa(j)
        {
            b=k;
            cout<<"B's constructor called.\n";
        }
        void B::Print()
        {
            A::Print();
            cout<<b<<","<<aa.Geta()<<endl;
        }
        int main
        {
            B bb[2];
            bb[0]=B(1,2,5);
            bb[1]=B(3,4,7);
            for(int i=0;i<2;i++)
                bb[i].Print();
        }
