#include <iostream.h>
#include <string.h>
void main()
{
    const int SIZE=20;
    char buf[SIZE];
    char *largest;
    int curLen,maxLen=-1,cnt=0;
    cout<<″Input  words:\n″;
    while(cin>>buf)
    {
        curLen=strlen(buf);
        cnt++;
        if(curLen>maxLen)
        {
            maxLen=curLen;
            largest=buf;
        }
    }
    cout<<endl;
    cout<<cnt<<endl;
    cout<<maxLen<<endl;
    cout<<largest<<endl;
}



Input words:
if else return do while switch case for goto break continue �z〈Ctrl+Z〉



//11
//8
//continue
