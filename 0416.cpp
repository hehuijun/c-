#include <iostream>
#include <math.h>
using namespace std;
const int k(4);
const int n(6);
int sum_of_powers(int k,int n),powers(int m,int n);

int main() {
  cout<<"sum of"<<k<<"powers of integers from 1 to"<<n<<"=";
cout<<sum_of_powers(k,n)<<endl;

}
int sum_of_powers(int k,int n)
{
int sum(0);
 for(int i(1);i<=n;i++)
 sum+=powers(i,k);
 return sum;
}
int powers(int m,int n)
{
int i,product(i);
for(i=1;i<=n;i++) product * = m;//在此处程序报错
return product;
}