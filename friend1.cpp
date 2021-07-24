#include<iostream>
using namespace std;
class complex;
class calculator
{
   public:
        int multiple(int v1,int v2)
        {
           return (v1*v2);
        }
        int multiple(complex,complex);
        int imagmultiple(complex,complex);
};
class complex
{
    int a,b;
    public:
         void setdata(int v1,int v2)
         {
               a=v1;
               b=v2;
         }
         void print()
         {
             cout<<"the complex value is = "<<a<<"+"<<b<<"i"<<endl;
         }
         friend int calculator :: multiple(complex,complex);
         friend int calculator :: imagmultiple(complex,complex);
};
int calculator :: multiple(complex o1,complex o2)
{
   return (o1.a * o2.a);
}
int calculator :: imagmultiple(complex o1,complex o2)
{
    return (o1.b * o2.b);
}
int main()
{
   complex s1,s2;
   s1.setdata(3,4);
   s1.print();
   s2.setdata(5,6);
   s2.print();
   calculator res,res1;
   int sum,sum1;
   sum=res.multiple(s1,s2);
   cout<<"multiple of Real value ="<<sum<<endl;
   sum1=res1.imagmultiple(s1,s2);
   cout<<"multiple of imageinary value ="<<sum1<<"i"<<endl;
   return 0;
}
