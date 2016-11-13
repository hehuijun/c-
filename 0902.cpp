#include <iostream.h>
void main()
{
    int a=100;
    int *pa=&a;
    cout<<″a=″<<a<<endl<<″&a=″<<&a<<endl;
    cout<<″*pa=″<<*pa<<endl<<″&pa=″<<&pa<<endl;
}


/*
a=100
&a=0x0064FDF4
*pa=100
&pa=0x0064FDF0



cout<<″a=″<<a<<endl<<″&a=″<<long(&a)<<endl;
cout<<″*pa=″<<*pa<<endl<<″&pa=″<<long(&pa)<<endl;



a=100
&a=6618612
*pa=100
&pa=6618608
 
 */
