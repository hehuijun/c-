#include <iostream>
#include <math.h>
using namespace std;
int a[8]={1,3,5,7,9,11,13};
void fun(int b[],int n)
{
   for(int i=0;i<n-1;i++)
      b[7]+=b[i];
}
int main() {
int m=8;
fun(a,m);
cout<<a[7]<<endl;
cout<<"计算数组中数值的和";
}