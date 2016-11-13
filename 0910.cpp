#include <iostream.h>
const int SIZE=80;
void main()
{
    int lcnt=0,lmax=-1;
    char buf[SIZE];
    cout<<″Input...\n″;
    while(cin.getline(buf,SIZE))
    {
        int count=cin.gcount();
        lcnt++;
        if(count>lmax) lmax=count;
        cout<<″Line # ″<<lcnt<<″\t″<<
        ″chars read: ″<<count<<endl;
        cout.write(buf,count).put(′\n′).put(′\n′);
    }
    cout<<endl;
    cout<<″Total line: ″<<lcnt<<endl;
    cout<<″Longest line: ″<<lmax<<endl;
}


/*
Input ...
this is a string.�z
Line #1 chars read:18
this is a string.

you are a student.�z
Line #2 chars read:19
you are a student.

the four seasons of the year.�z
Line #3 chars read:30
the four seasons of the year.

change to a N.332 bus.�z
Line #4 chars read:25
change to a No.332 bus.



Total line:4
Longest line:30
*/
