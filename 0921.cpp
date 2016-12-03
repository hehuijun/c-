//
//  0921.使用get和put函数读写文本文件
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//

#include "0921.hpp"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;


void RWfiles()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：使用get和put函数读写文本文。注意：将本地的f3.dat修为改任何名称，程序都会执行。以下程序开始：\n"<<endl;
    cout<<"／／注意：按照课本例子是找不到文件位置的，需要写上文件在磁盘中的绝对位置才可以。\n"<<endl;

    fstream outfile,infile;
    outfile.open("/Users/hehuijun/Library/Mobile Documents/com~apple~CloudDocs/DEV/ccc/ccc/ccc/f3.dat",ios::out);//ios::out	以输出方式打开文件，如果文件不存在则新建，如果文件存在就将其原有内容全部清空
    if(!outfile)
    {
        cout<<"f3.dat 第一次读取文件时找不到文件.＼n";
       abort();//异常退出
    }
//    char Firstch;//不知道为啥取不到文本内容
//    while(infile.get(Firstch))
//        cout<<Firstch;
    char str[]="This is a C++ program.";//报错:cannot initialize avarable of type char with an lvalue of type const char[22]//将方括号改为英文字符即可
    for(int  i=0;i<=strlen(str);i++)//报错：use of undeclared identifier str
        outfile.put(str[i]);
    outfile.close();
    infile.open("/Users/hehuijun/Library/Mobile Documents/com~apple~CloudDocs/DEV/ccc/ccc/ccc/f3.dat",ios::in);//ios::in	以输入方式打开文件
    if(!infile)
    {
        cout<<"f3.dat 修改文件后再次读取文件时找不到文件＼n";
       abort();
      
    }
    char ch;
    while(infile.get(ch))
        cout<<ch;
    cout<<endl;
    infile.close();
}
