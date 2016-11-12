#include <iostream>
#include <math.h>
using namespace std;
//与课本案例结果不一致
int main() {
for(int i=1;i<=9;i++)
{
   for(int j=1;j<=10-i;j++)
   cout<<" ";
   for(int j=1;j<=i;j++)
   {
   if(i==9)
   cout<<i<<" ";
   else
   cout<<i<<" ";
   }
   cout<<endl;
   }
}