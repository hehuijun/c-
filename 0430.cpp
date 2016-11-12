#include <iostream>
using namespace std;
template <class T> 
T maxx (T a, T b)
{
return a>b?a:b;
}
int main() {
int n1=8,n2=9;
double m1=3.14,m2=3.15;
char c1='m',c2='n';
cout<<"max(n1,n2)="<<maxx(n1,n2)<<endl;
cout<<"max(m1,m2)="<<maxx(m1,m2)<<endl;
cout<<"max(c1,c2)="<<maxx(c1,c2)<<endl;
cout<<"注意事项：max是系统关键词，不能用于自定义函数，本例中使用max定义函数导致程序无法运行"<<endl;
}