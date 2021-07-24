#include<iostream>
using namespace std;
int sum(int a,int b)
{
   return (a+b);
}
double sum(double x,double y)
{
   return (x+y);
}
int main()
{
   int a=5,b=6;
   cout<<sum(a,b);
   double x=5.098,y(12.098);
   cout<<sum(x,y);
   return 0;
}
