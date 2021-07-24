#include<iostream>
using namespace std;
int main()
{
   int *p,c=23,d;
   p=&c;
   d=*p;
   cout<<d;
   return 0;
}
