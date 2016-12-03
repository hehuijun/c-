//
//  0910.编程统计从键盘上输入每一行字符的个数，从中选择最长的行的字符个数，统计共输入了多少行
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//

#include "0910.hpp"
#include <iostream>
using namespace std;
const int SIZE=80;
void  RowStatistics()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：编程统计从键盘上输入每一行字符的个数，从中选择最长的行的字符个数，统计共输入了多少行。以下程序开始：\n"<<endl;
    int lcnt=0,lmax=-1;
    char buf［SIZE］;
    cout<<"Input...＼n";
    while(cin.getline(&buf［SIZE］,SIZE))//将课本中buf改为&buf［SIZE］方可编译
    {
        int count=cin.gcount();
        lcnt++;
        if(count>lmax) lmax=count;
        cout<<"Line # "<<lcnt<<"＼t"<<"chars read: "<<count<<endl;
        cout.write(&buf［SIZE］,count).put('\n').put('\n');//将课本中buf改为&buf［SIZE］方可编译//系统报错：use of undeclared identifier ‘buf’(未说明的标志符的使用/类型转换失败)
    }
    cout<<endl;
    cout<<"Total line: "<<lcnt<<endl;
    cout<<"Longest line: "<<lmax<<endl;
}


//
//Input ...
//this is a string.
//Line #1 chars read:18
//this is a string.
//
//you are a student.
//Line #2 chars read:19
//you are a student.
//
//the four seasons of the year.
//Line #3 chars read:30
//the four seasons of the year.
//
//change to a N.332 bus.
//Line #4 chars read:25
//change to a No.332 bus.
