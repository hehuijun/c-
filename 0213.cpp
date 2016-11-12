#include <iostream>
#include <math.h>
using namespace std;
int main() {
int x,y,z;
x=y=z=1;
--x&&++y&&++z;
cout<<x<<'\t'<<y<<'\t'<<z<<'\n';
}