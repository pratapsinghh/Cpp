#include<iostream>
using namespace std;
void fun(int &x,int &y)
{
   int temp=x;
   x=y;
   y=temp;
}
int main()
{
   int x=10,y=20;
   fun(x,y);
   cout<<x<<" "<<y;
   return 0;
}
