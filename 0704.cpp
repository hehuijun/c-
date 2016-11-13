#include <iostream>
#include <math.h>
using namespace std;
     class A     {       public:         A()         {a=0;cout<<"A′s default constructor called.\n";}//老师提供的代码中，双引号"和斜线\为中文字符。需修改         A(int i)         {a=i; cout<<"A′s constructor called.\n";}         ~A()//~是什么意思？是A的析构函数         { cout<<"A′s destructor called.\n";}         void Print() const//常量         { cout<<a<<",";}         int Geta()         { return a;}       private:         int a;     };     class B:public A     {       public:         B()         { b=0;cout<<"B′s default constructor called.\n";}         B(int i,int j,int k);         ~B()//B的析构函数         { cout<<"B′s destructor called.\n";}         void Print();       private:         int b;         A aa;//定义一个A的对象aa     };     B::B(int i,int j,int k):A(i),aa(j)//B的构造函数     {         b=k;         cout<<"B′s constructor called.\n";     }     void B::Print()//修改冒号为英文格式      {         A::Print();         cout<<b<<","<<aa.Geta()<<endl;     }     int main()     {         B bb [2];//修改方括号为英文格式//输出数组中的2个数，a=0，a=1         bb[0]=B(1,2,5);         bb[1]=B(3,4,7);         for(int i=0;i<2;i++)           bb[i].Print();     }
     

/*输出结果
A′s default constructor called.
A′s default constructor called.
B′s default constructor called.
A′s default constructor called.
A′s default constructor called.
B′s default constructor called.
A′s constructor called.
A′s constructor called.
B′s constructor called.
B′s destructor called.
A′s destructor called.
A′s destructor called.
A′s constructor called.
A′s constructor called.
B′s constructor called.
B′s destructor called.
A′s destructor called.
A′s destructor called.
1,5,2
3,7,4
B′s destructor called.
A′s destructor called.
A′s destructor called.
B′s destructor called.
A′s destructor called.
A′s destructor called.
*/


     