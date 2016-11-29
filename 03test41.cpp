//
//  03test41:求100之内的自然数中的奇数之和
//  ccc
//
//  Created by 何慧君 on 2016/11/24.
//  Copyright © 2016年 何慧君. All rights reserved.
//

#include "03test41.hpp"
#include <iostream>
using namespace std;
void OddNumberSum()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：求100之内的自然数中的奇数之和。输出结果为:2500。以下程序开始：\n"<<endl;
    int i(1),sum(0);
    for(int i=0;i<=100;i++)
    {
       if(i%2!=0)
        sum+=i++;
    }
    cout<<"sum="<<sum<<endl;

}
