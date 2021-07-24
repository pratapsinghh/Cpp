#include<iostream>
using namespace std;
class second
{
  int height,width;
  public:
        second();
        second(int,int);
        int area()
        {
            return (height*width);
        }
};
second::second()
{
   height=5;
   width=5;
}
second::second(int a,int b)
{
   height=a;
   width=b;
}
int main()
{
   second obj;
   second obj1(3,4);
   cout<<obj.area()<<endl;;
   cout<<obj1.area()<<endl;
   return 0;
}
