#include <iostream>
#include <math.h>
using namespace std;
void swap1(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
cout<<"x="<<x<<"y="<<y<<endl;
}
int main() {
int a(5),b(9);
swap1(a,b);
cout<<"a="<<a<<"b="<<b<<endl;
}