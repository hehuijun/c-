//
//  例0312（P92）:用do-while循环体求出自然数1-10之和
//  本程序使用了do-while，进行循环。
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//
#include <iostream>
using namespace std;
void NaturalNumbersSum_DoWhile()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：使用do-while循环语句求出自然数之和，输出结果为:sum=55。以下程序开始：\n"<<endl;
    int i(1),sum(0);
    do{
        sum+=i++;
    }while(i<=10);
    cout<<"sum="<<sum<<endl;
}
