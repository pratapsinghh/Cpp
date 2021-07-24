#include<iostream>
using namespace std;
class complex;
class calculator
{
   public:
       int add(int a,int b)
       {
             return (a+b);
       }
       int sumRealcomplex(complex,complex);
       int sumImagcomplex(complex,complex);
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
             cout<<"the complex value is ="<<a<<"+"<<b<<"i"<<endl;
         }
         friend int calculator :: sumRealcomplex(complex,complex);
         friend int calculator :: sumImagcomplex(complex,complex);
};
int calculator :: sumRealcomplex(complex o1,complex o2)
{
   return (o1.a+o2.a);
}
int calculator :: sumImagcomplex(complex o1,complex o2)
{
   return (o1.b+o2.b);
}
int main()
{
   complex s1,s2;
   s1.setdata(1,2);
   s1.print();
   s2.setdata(3,4);
   s2.print();
   calculator sum,sum2;
   int res,res1;
   res=sum.sumRealcomplex(s1,s2);
   cout<<"sum of Real part ="<<res<<endl;
   res1=sum2.sumImagcomplex(s1,s2);
   cout<<"sum of Imaginary part = "<<res1<<"i"<<endl;
   return 0;
}
   
