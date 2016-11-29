//
//  0415.利用一个在参数个数上不相同的重载函数，找出几个int型数的最小者
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//

#include "0415.hpp"
#include <iostream>
using namespace std;

//int min(int a,int b);//将函数从放到主函数前面后，此前定义的就没有用了。
//int min(int a,int b,int c);
//int min(int a,int b,int c,int d);
int min(int a,int b)
{
    return a<b?a:b;
}
int min(int a,int b,int c)
{
    int t=min(a,b);
    return min(t,c);
}
int min(int a,int b,int c,int d)
{
    int t1=min(a,b);
    int t2=min(c,d);
    return min(t1,t2);
}

void Minimization()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：利用一个在参数个数上不相同的重载函数，找出几个int型数的最小者。以下程序开始：\n"<<endl;
    cout<<min(13,5,4,9)<<endl;
    cout<<min(-2,8,0)<<endl;
    cout<<min(10,9)<<endl;
}
