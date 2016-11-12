#include <iostream>
#include <math.h>
using namespace std;
class TPoint
{public:
TPoint(int x,int y){X=x;Y=y;cout<<"Contructor Called.\n";}
TPoint(TPoint &p);
int Xcoord(){return X;}
int Ycoord(){return Y;}
private:
int X,Y;
};
TPoint::TPoint(TPoint &p)
{X=p.X;
Y=p.Y;
cout<<"Copy_initialization Constructor Called.\n";
}
int main()
{TPoint p1(5,7);
TPoint p2(p1);
cout<<"p2="<<p2.Xcoord()<<","<<p2.Ycoord()<<endl;
}