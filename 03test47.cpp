//
//  03test47:输入4个int型数，要求按其大小排序输出
//  ccc
//
//  Created by 何慧君 on 2016/11/24.
//  Copyright © 2016年 何慧君. All rights reserved.
//

#include "03test47.hpp"
#include <iostream>
using namespace std;

void IntegerSorting()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：输入4个int型数，要求按其大小排序输出。以下程序开始：\n"<<endl;

    //最傻的办法：定义5个参数，循环判断，输出数据
    int a,b,c,d,i;
    cout<<"请输入四个整数"<<endl;
    cin>>a>>b>>c>>d;
    if(a<b) {i=a;a=b;b=i;}
    if(a<c) {i=a;a=c;c=i;}
    if(a<d) {i=a;a=d;d=i;}
    if(b<c) {i=b;b=c;c=i;}
    if(b<d) {i=b;b=d;d=i;}
    if(c<d) {i=c;c=d;d=i;}
    cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;

    
}
