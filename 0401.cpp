#include <iostream>
#include <math.h>
using namespace std;
double s_d(double x,double y)
{return x+y;}

int main() {
double a,b;
a=1;
b=1;
double sum=s_d(a,b);
cout<<"sum="<<sum<<endl;
}