#include<iostream>
using namespace std;
int main()
{
   int x=20;
   int &y=x;
   y=y+12;
   cout<<x;
   cout<<y;
   return 0;
}
