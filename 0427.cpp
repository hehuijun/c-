#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main() {
char s1[8],s3[8];
char s2[]="string";
strcpy(s1,s2);
strncpy(s3,s2,3);
s3[3]='\0';
cout<<"s1:"<<s1<<endl;
cout<<"s3:"<<s3<<endl;
char *s4=strcpy(s3,strcpy(s1,s2));
cout<<"s4:"<<s4<<endl;
}