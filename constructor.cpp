#include<iostream>
using namespace std;
class sample
{
     int data1;
     int data2;
     public:
           sample(int a,int b=8)
           {
              data1=a;
              data2=b;
           }
           void print()
           {
               cout<<"the value is data1 ="<<data1<<"and"<<data2<<endl;
           }
};
int main()
{
   sample s(1);
   s.print();
   return 0;
}
