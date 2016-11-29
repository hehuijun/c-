//
//  例0308（P88）:编程实现两个浮点数的四则运算
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//
#include <iostream>
#include <math.h>
using namespace std;
void FourOperations()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：实现2个浮点数的四则运算。如果录入 3+7，则正确的结果是10,以下程序开始：\n"<<endl;
    float d1,d2;
    char op;
    cout<<"input d1 op d2:";
    cin>>d1>>op>>d2;
    switch(op)
    {
            float temp;
        case'+':temp=d1+d2;
            cout<<d1<<op<<d2<<"="<<temp<<endl;
            break;//可以试试不跳出的情况。
        case'-':temp=d1-d2;
            cout<<d1<<op<<d2<<"="<<temp<<endl;
            break;
        case'*':temp=d1*d2;
            cout<<d1<<op<<d2<<"="<<temp<<endl;
            break;
        case'/':temp=d1/d2;
            cout<<d1<<op<<d2<<"="<<temp<<endl;
            break;
        default:cout<<"error!\n";
    }
}
