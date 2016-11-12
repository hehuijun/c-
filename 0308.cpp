#include <iostream>
#include <math.h>
using namespace std;
int main() {
float d1=3,d2=7;
char op='+';
switch(op)
{
  float temp;
  case'+':temp=d1+d2;
          cout<<d1<<op<<d2<<"="<<temp<<endl;
          //break;//可以试试不跳出的情况。
  case'-':temp=d1-d2;
          cout<<d1<<op<<d2<<"="<<temp<<endl;
          //break;
  case'*':temp=d1*d2;
          cout<<d1<<op<<d2<<"="<<temp<<endl;
          //break;
  case'/':temp=d1/d2;
          cout<<d1<<op<<d2<<"="<<temp<<endl;
          //break;
  default:cout<<"error!\n";
}
}