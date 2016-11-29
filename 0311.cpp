//
//  例0311（P91）:编程求出自然数1-10之和
//  本程序使用了while，进行循环。
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//
#include <iostream>
using namespace std;
void NaturalNumbersSum_While() //当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：使用wihile循环语句求出自然数1-10之和。输出结果为:sum=55。以下程序开始：\n"<<endl;
    
    int i(1),sum(0);
    while(i<=10)
    {
        //课本提供的第一种循环体写法
        //        sum+=i;
        //        i++;
        
        //课本提供的第一种循环体写法
        sum+=i++;
    }
    cout<<"sum="<<sum<<endl;
}
