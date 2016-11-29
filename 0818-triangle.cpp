//
//  例8.18:计算三角形面积
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//

//
#include <iostream>
#include <0818-triangle.hpp>
using namespace std;



void TriangleArea()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：计算三角形面积,高3，底边长4，面积为6。以下程序开始：\n"<<endl;
    cout<<"请输入三角形的高及底边长度：";
    double H,W;
    cin>>H>>W;
    double Area=H*W*0.5;
    cout<<"三角形面积="<<Area<<endl;
    }
