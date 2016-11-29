//
//  例0320（P9101）:编程计算从键盘上输入的10个数中的所有正数之和，对负数不进行计算，并显示求和结果。
//  使用了continue。
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//
#include "0320.hpp"
#include <iostream>
#define M 10
using namespace std;
void PositiveNumberSum()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：计算从键盘上输入的10个数中的所有正数之和，对负数不进行计算，并显示求和结果；使用了continue。录入: -1 -2 -3 -4 -5 6 7 8 9 10,输出结果为:40。以下程序开始：\n"<<endl;
    int num,sum(0);
    cout<<"Input number: ";
    for(int i=0;i<M;i++)
    {
        cin>>num;
        if(num<0)
            continue;
        sum+=num;
    }
    cout<<"sum="<<sum<<endl;
}
