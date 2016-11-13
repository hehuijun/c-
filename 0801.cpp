#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
class string{ public:   string(char *s);   string(string &s1);   string(int size=80);   ~string()   { delete sptr;}   int getlen()   { return length;}   void print()   { cout<<sptr<<endl;} private:   char *sptr;   int length;};string∷string(char *s){     length=strlen(s);   sptr=new char［length+1］;   strcpy(sptr,s);}  string∷string(string &s1){     length=s1.length;   sptr=new char［length+1］;   strcpy(sptr,s1.sptr);}    string∷string(int size){     length=size;   sptr=new char［length+1］;   *sptr=′＼0′;}  void main(){     string str1("This is a string.");   str1.print();   cout<<str1.getlen()<<endl;   char *s1="That is a program.";   string str2(s1);   string str3(str2);   str3.print();   cout<<str3.getlen()<<endl;}/*输出结果 This is a string.17That is a program.18
*/