//
//  0412：使用引用作为行参。
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//

#include "0412.hpp"
#include <iostream>
using namespace std;

typedef int arrayy[8];//用类型定义语句，定义一个int型的数组类型，然后使用array来定义数组和应用
int a[8]={1,3,5,7,9,11,13};
//void fun(array &b,int n)//课本原来代码，提示“reference to array is ambinguous”，意思是array是模糊的，可能是和系统某关键词重名，改为arrayy后可以运行
void fun(arrayy &b,int n)
{
    for(int i=0;i<n-1;i++)
        b[7]+=b[i];//n=2才开始从数组第一个数开始求和
    cout<<"n=m="<<n<<endl;//测试过程用的代码
    cout<<"b=a="<<b[7]<<endl;//测试过程用的代码
}
void  FormalParameter()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：考察实参和形参。m=0/1,a=0;m=2,a=1;m=3,a=4;m=4,a=9;......m=8,a=49;m>=9,a=98。以下程序开始：\n"<<endl;
    int m=9;
    fun(a,m);
    cout<<"a="<<a[7]<<endl;
}
