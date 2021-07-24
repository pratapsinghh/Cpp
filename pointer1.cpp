#include<iostream>
using namespace std;
int main()
{
   int *p,c=23,d,*q,**a;
   p=&c;
   q=&(*p);
   *q=200;
   a=&q;
   **a=400;
   cout<<c;
   
   return 0;
}
