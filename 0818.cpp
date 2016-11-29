//
//  例8.18:计算三角形、矩形、圆形、梯形、正方形的面积和
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//

//
#include <iostream>
#include <0818.h>
using namespace std;

class Shape//类shape是一个抽象类，相当于是triangle等5个类的根，shape类中的虚函数Area（）在其他五个派生类中有着不同的是实现。
{
public:
    virtual double Area() const=0;
};
class Triangle:public Shape
{
public:
    Triangle(double h,double w) { H=h;W=w;}
    double Area() const {return H*W*0.5;}
private:
    double H,W;
};
class Rectangle: public Shape
{
public:
    Rectangle(double h,double w) { H=h;W=w;}
    double Area() const { return H*W;}
private:
    double H,W;
};
class Circle: public Shape
{
public:
    Circle(double r) { radius=r;}
    double Area() const { return radius*radius*3.1415;}
private:
    double radius;
};
class Trapezoid: public Shape
{
public:
    Trapezoid(double top,double bottom,double high)
    { T=top;B=bottom;H=high;}
    double Area() const { return (T+B)*H*0.5;}
private:
    double T,B,H;
};
class Square: public Shape
{
public:
    Square(double side) { S=side;}
    double Area() const { return S*S;}
private:
    double S;
};
class Application
{
public:
    double Compute(Shape *s[],int n) const;
};
double Application::Compute(Shape *s[],int n) const
{
    double sum=0;
    for(int i=0;i<n;i++)
        sum+=s[i]->Area();
    return sum;
}
class MyProgram:public Application
{
public:
    MyProgram();
    ~MyProgram();
    double Run();
private:
    Shape **s;
};
MyProgram::MyProgram()
{
    s=new Shape*[5];
    s[0]=new Triangle(3.0,4.0);
    s[1]=new Rectangle(6.0,8.0);
    s[2]=new Circle(6.5);
    s[3]=new Trapezoid(10.0,8.0,5.0);
    s[4]=new Square(6.7);
}
MyProgram::~MyProgram()
{
    for(int i=0;i<5;i++)
        delete s[i];
    delete[]s;
}
double MyProgram::Run()
{
    double sum=Compute(s,5);
    return sum;
}

void AreaSum()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：计算三角形、矩形、圆形、梯形、正方形的面积和。以下程序开始：\n"<<endl;
    
    cout<<"Area's Sum="<<MyProgram().Run()<<endl;
}




//Area′s Sum=276.618
