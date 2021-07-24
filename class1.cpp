#include<iostream>
using namespace std;
class rectangle
{
   int height,width;
   public:
   void setdata(int,int);
   int area();
   void print(int);
};
void rectangle::setdata(int a,int b)
{
    height=a;
    width=b;
}
int rectangle :: area()
{
    return height*width;
}
void rectangle:: print(int a)
{
   cout<<a<<" ";
}  
int main()
{
   rectangle rect;
   rect.setdata(10,11);
   int b;
   b=rect.area();
   rect.print(b);
   return 0;
}
