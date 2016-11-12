#include <iostream>
#include <math.h>
using namespace std;
class TPoint
{
public:
TPoint (int x,int y)
{
  int X,Y;
X=x;
Y=y;
}
TPoint(TPoint & p);
~TPoint()
{
cout<<"Destructor Called.\n";
}
int Xcoord()
{
return X;
}
int Ycoord()
{
return Y;
}
private:
int X,Y;
};
TPoint::TPoint(TPoint & p)//在此编译不过去，0504-2可以编译？没搞清楚差别在哪儿
{
X=p.x;
Y=p.y;
cout<<"Copy_initialization Constructor Called.\n";
}
  int main() 
    {
TPoint P1(5,7);
TPoint P2(P1);
cout<<"P2="<<P2.Xcoord()<<"."<<P2.Ycoord()<<endl;
}