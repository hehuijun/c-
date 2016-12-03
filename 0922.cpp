//
//  0922.将一个文件中的内容复制到另一个文件中
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//

#include "0922.hpp"
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;


void CopyFileContent()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：将一个文件中的内容复制到另一个文件中。以下程序开始：\n"<<endl;
    cout<<"／／注意：按照课本例子是找不到文件位置的，需要写上文件在磁盘中的绝对位置才可以。\n"<<endl;
    fstream infile,outfile;
    infile.open("/Users/hehuijun/Library/Mobile Documents/com~apple~CloudDocs/DEV/ccc/ccc/ccc/f2.dat",ios::in);
    if(!infile)
    {
        cout<<"f2.dat 找不到文件.＼n";
        abort();
    }
//    char ch;
//    while(infile.get(ch))
//        cout<<ch;//程序在此处读取ch后，后面复制的内容将为空，不知道为啥？
    outfile.open("/Users/hehuijun/Library/Mobile Documents/com~apple~CloudDocs/DEV/ccc/ccc/ccc/f4.dat",ios::out);
    if(!outfile)
    {
        cout<<"f4.dat 找不到文件.＼n";
        abort();
    }
    cout<<"文本复制成功，以下为复制的内容：\n";
   char ch;
    while(infile.get(ch))
        cout<<ch;//原课本中代码while(infile.get(ch))outfile.put(ch);cout<<ch;修改为现在的就可以现实读出的文字了
    infile.close();
    outfile.close();
}

