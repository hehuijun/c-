#include <iostream>
#include <math.h>
using namespace std;
void swap3(int &x,int &y)//给a，b换个名字
{
int temp;
temp=x;
x=y;
y=temp;
cout<<"x="<<x<<"y="<<y<<endl;
}
int main() {
int a(5),b(9);
swap3(a,b);
cout<<"a="<<a<<"b="<<b<<endl<<endl;
cout<<"使用引用调用来实现函数之间的信息交换";
}