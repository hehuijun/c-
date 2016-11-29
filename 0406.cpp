//
//  0406.从键盘上输入一些字母和数字，统计其中数字字符的个数和非数字字符的个数
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//

#include "0406.hpp"
#include <iostream>
using namespace std;
int &fun(char, int &, int &);
void StatisticsNumber()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：从键盘上输入一些字母和数字，统计其中数字字符的个数和非数字字符的个数。输入：abc 976235mn 51x#，其中数字8个，非数字6个。以下程序开始：\n"<<endl;
    
    int tn(0), tc(0);
    cout<<"输入一些字母和数字，以#结尾:";
    char ch;
    cin>>ch;
    while(ch!='#')
    {
        fun(ch, tn, tc)++;
        cin>>ch;
    }
    cout<<"数字字符的个数是: "<<tn<<endl;
    cout<<"非数字字符的个数是: "<<tc<<endl;
}
int & fun(char cha, int & n, int & c)
{
    if(cha>='0'&& cha<='9')
        return n;
    else
        return c;
}
