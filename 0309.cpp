#include <iostream>
#include <math.h>
using namespace std;//执行有错误
int main() {
char c;
int nother(0),ndigit[10];
for(int i=0;i<10;i++)
    ndigit[i]=0;
    c='1234567890abc$';
    while(c!='$')
    {
    switch(c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':++ndigit[c-'0'];
         break;
    default:++nother;
    }
    //cin>>c;
    }
    cout<<"digiter=";
    for(i=0;i<10;i++)
    cout<<ndigit[i]<<' ';
    cout<<"\nother="<<nother<<endl;
}