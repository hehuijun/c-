#include <iostream>
#include <math.h>
using namespace std;
void swap2(int *x,int *y)
{
int temp;
temp=*x;//*后面是地址
*x=*y;
*y=temp;
cout<<"x="<<*x<<"y="<<*y<<endl;
}
int main() {
int a(5),b(9);
swap2(&a,&b);
cout<<"a="<<a<<"b="<<b<<endl;
}