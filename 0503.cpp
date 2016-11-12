#include <iostream>
#include <math.h>
using namespace std;
class TDate1
{
  public:
  TDate1(int y,int m,int d)
  {
  year=y;
  month=m;
  day=d;
  cout<<"constructor called(构造函数调用).\n";
  }
  ~TDate1()
  {
  cout<<"destructor called（析构函数调用）.\n";
  }
  void Print()
  {
  cout<<year<<"."<<month<<"."<<day<<endl;
  }
  private:
  int year,month,day;
  };
int main() {
TDate1 today(1998,4,9),tomorrow(1998,4,10);
cout<<"today is";
today.Print();
cout<<"tomorrow is";
tomorrow.Print();
}