#include <iostream>
#include <math.h>
using namespace std;
class TDate
{
public:
void SetDate(int y,int m,int d)
{
year=y;
month=m;
day=d;
}
int IsLeapYear()
{
return (year%4==0&&year%100!=0)||(year%400==0);
}
void Print()
{
cout<<year<<"."<<month<<"."<<day<<endl;
}
private:
int year,month,day;
};

int main() {
TDate date1,date2;
date1.SetDate(1996,5,4);
date2.SetDate(1996,4,9);
int leap=date1.IsLeapYear();
cout<<leap<<endl;
date1.Print();
date2.Print();
}