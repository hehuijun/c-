//
//  03test44：求下列分数序列前15项之和，2/1，3/2，5/3，8/5，13/8，21/13.......
//  ccc
//
//  Created by 何慧君 on 2016/11/24.
//  Copyright © 2016年 何慧君. All rights reserved.
//

#include "03test44.hpp"
#include <iostream>
using namespace std;

void FractionSequenceSum()//当前为子程序写法，作为主程序单独运行时应写为int main()

{
    cout<<"程序说明：求分数序列前15项之和，2/1，3/2，5/3，8/5，13/8，21/13.......。分数序列第一个值是2/1以后每个值的分母都是上一个分数的分子，而分子是上一个分数的分子分母的和。输出结果为:24.57009098。以下程序开始：\n"<<endl;
    //也可以借鉴斐波那契数列 1,1,2,3,5,8,13,21,34...满足关系f(n) = f(n-1)+f(n-2)
    //思路：定义参数，定义序列，使用条件函数，计算，输出结果。
    int x=2,y=1,n;
    double sum=(double)x/y;
    cout<<"sum="<<sum<<endl;//帮助校验程序用，可注释掉；因为在定义sum是，它已经有2/1的初试值，所以for循环14次即可

    for(int i=2;i<=15;i++)//sum已经有初始值，所以是从第二次循环开始计算
    {
        
        n=y;
        y=x;
        x+=n;
        sum+=(double)x/y;
        cout<<"x/y="<<x<<"/"<<y<<",sum="<<sum<<endl;//帮助校验程序用的，可注释掉
    }
    cout<<"sum="<<sum<<endl;
}
