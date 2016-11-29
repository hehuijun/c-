//
//  例0309（P89）:编程统计从键盘上输入的数字中每种数字的个数和其他字符的个数，并以字符$作为输入结束符号
//  本程序使用了switch和case，进行选择判断。
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//
#include <iostream>
#include <math.h>
using namespace std;
void StatisticalCharacterNumber()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：使用switch和case进行选择判断，统计从键盘上输入的数字中每种数字的个数和其他字符的个数，并以字符$作为输入结束符号。录入10389276hgik549&*+$,输出结果为:digiter=1 1 1 1 1 1 1 1 1 2 other=7。以下程序开始：\n"<<endl;
    char c;
    int nother(0),ndigit[10];
    for(int i=0;i<10;i++)
        ndigit[i]=0;
    cout<<"input:";
    cin>>c;
    while(c!='$')
    {
        switch(c)
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':++ndigit[c-'0'];
                break;
            default:++nother;
        }
        cin>>c;
    }
    cout<<"digiter=";
    for(int i=0;i<10;i++) cout<<ndigit[i]<<' ';//编译报错：Use of undeclared identifier‘i’;课本上未再定义i，重新定义int i即可。
    cout<<"\nother="<<nother<<endl;
}
