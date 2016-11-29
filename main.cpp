//
//  main函数：通过修改子程序中的main函数名称和在main中引入子程序的方式，做到c++的一个项目中仅仅保留1个main函数，解决报错问题。
//  if else函数：刚开始用注释的方式执行其中一个子程序，后来尝试使用swich和case，发现不支持字符；查资料说map可以扩展，浪费了很长时间没有得到预期的结果；后来才考虑使用if-else，基本上是实现。缺憾是没法使用cin。
//  开发环境：mac 10.12；开发工具：Xcode8.1；编译器：LLVM8.0
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//
#include <iostream>
#include<e0306.h>
#include<0308.h>
#include<0309.h>
#include<0311.h>
#include<0312.h>
#include<0316.h>
#include<0318.hpp>
#include<0320.hpp>
#include<03test41.hpp>
#include<03test44.hpp>
#include<03test47.hpp>
#include<0406.hpp>
#include<0412.hpp>
#include<0415.hpp>
#include<0802.h>
#include<0818.h>
#include<0818-triangle.hpp>
#include<0910.hpp>
#include<0921.hpp>
#include<0922.hpp>






using namespace std;

int main()
{
    char *n;
    n="0818-triangle";
    
    
    if(0 == strcmp(n, "0306"))
    {
        //char n[]= "0306";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        NumberComparing();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0308"))
    {
        //char n[]= "0308";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        FourOperations();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0309"))
    {
        //    char n[]= "0309";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        StatisticalCharacterNumber();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0311"))
    {
        //    char n[]= "0311";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        NaturalNumbersSum_While();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0312"))
    {
        //    char n[]= "0312";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        NaturalNumbersSum_DoWhile();
        cout<<"\n例"<<n<<"程序结束"<<endl;
        
    }
    else if(0 == strcmp(n, "0316"))
    {
        //    char n[]= "0316";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        CalculatingPrimeNumbers();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0318"))
    {
        //    char n[]= "0318";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        FindNegativeNumber();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0320"))
    {
        //    char n[]= "0320";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        PositiveNumberSum();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    
    else if(0 == strcmp(n, "03test41"))
    {
        //    char n[]= "03test41";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        OddNumberSum();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }    else if(0 == strcmp(n, "03test44"))
    {
        //    char n[]= "03test44";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        FractionSequenceSum();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "03test47"))
    {
        //    char n[]= "03test47";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        IntegerSorting();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0406"))
    {
        //    char n[]= "0406";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        StatisticsNumber();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0412"))
    {
        //    char n[]= "0412";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        FormalParameter();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0415"))
    {
        //    char n[]= "0415";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        Minimization();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0802"))
    {
        //    char n[]= "0802";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        CountArithmetic();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0818"))
    {
        //    char n[]= "0818";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        AreaSum();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0818-triangle"))
    {
        //    char n[]= "0818-triangle";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        TriangleArea();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    
    else if(0 == strcmp(n, "0910"))
    {
        //    char n[]= "0910";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        StatisticsNumber();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0921"))
    {
        //    char n[]= "0921";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        StatisticsNumber();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else if(0 == strcmp(n, "0922"))
    {
        //    char n[]= "0922";
        cout<<"这是主函数，现在开始运行例"<<n<<"程序\n"<<endl;
        StatisticsNumber();
        cout<<"\n例"<<n<<"程序结束"<<endl;
    }
    else {
        cout<<"没有匹配的例题";
    }
}
