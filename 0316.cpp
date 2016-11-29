//
//  例0316（P97）:编程求出50-100之内的素数（并将求出的素数以每行6个的方式显示在屏幕上）。
//  素数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数的数。
//  ccc
//
//  Created by 何慧君 on 2016/11/23.
//  Copyright © 2016年 何慧君. All rights reserved.
//
#include <iostream>
#include <math.h>
#define MIN 51
#define MAX 100
using namespace std;
void CalculatingPrimeNumbers()//当前为子程序写法，作为主程序单独运行时应写为int main()
{
    cout<<"程序说明：计算50-100之内的素数，每行显示6个。输出结果为:53  59  61  67  71  73 79  83  89  97。以下程序开始：\n"<<endl;
    int i,j,k,n(0);
    for(i=MIN;i<=MAX;i+=2)
    {
        k=(int)sqrt(double(i));//sqrt计算平方根
        for(j=2;j<=k;j++)
            if(i%j==0)
                break;
        if(j>=k+1)
        {
            if(n%6==0)
                cout<<endl;//每行6个数字
            n++;
            cout<<"  "<<i;
        }
    }
    cout<<endl;
}
