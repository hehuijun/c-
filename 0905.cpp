#include <iostream.h>
#include <string.h>
void PrintString(char *s)
{
    cout.write(s,strlen(s)).put(′\n′);
    cout.write(s,6)<<″\n″;
}
void main()
{
    char str[]=″I loveC++″;
    cout<<″the string is: ″<<str<<endl;
    PrintString(str);
    PrintString(″this is a string″);
}


/*
The string is: I loveC++
I loveC++
I love
this is a string
this i
 */



