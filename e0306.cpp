//
//  例0306（P87）:编程比较两个数的大小
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//
#include <iostream>
using namespace std;//必须声明std，否则直接使用cout等会报错，或者使用std::cout


void NumberComparing()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：比较两个数的大小。如果录入: 1 2，则正确的结果是x<y,以下程序开始：\n"<<endl;
    int x,y;
    cout<<"input x,y:";
    cin>>x>>y;
    if(x!=y)
        if(x>y)
            cout<<"x>y"<<endl;
        else
            cout<<"x<y\n";
        else
            cout<<"x=y\n";
}
