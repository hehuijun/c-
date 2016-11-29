//
//  例0318（100）：编写程序，从1个已知的二维数组中查找出第一次出现负数的数组元素。
//  使用了for循环嵌套，使用了goto语句，以及found和end。尽量不用goto
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//

#include "0318.hpp"
#include <iostream>
using namespace std;
void FindNegativeNumber()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：从1个已知的二维数组中查找出第一次出现负数的数组元素；程序使用了for循环嵌套，使用了goto语句，以及found和end。录入：1 2 3 4 5 6，输出结果：not find!。以下程序开始：\n"<<endl;
    int i,j,num[2][3];
    cout<<"Input 6 digiters: ";
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            cin>>num[i][j];
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            if(num[i][j]<0)
                goto found;
    cout<<"not find!\n";
    goto end;
found:
    cout<<"num["<<i<<"]["<<j<<"]="<<num[i][j]<<endl;//编译成功，但是输入负数后每次都进入调试模式
end: ;
}
