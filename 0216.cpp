#include <iostream>
#include <math.h>
using namespace std;
int main() {
int a,b,c;
a=1,b=2,c=a+b+3;
c=(a++,a+=b,a+b);
cout<<c<<endl;
}