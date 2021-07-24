#include<iostream>
using namespace std;
class first
{
   int height,width;
   public:
       first(int,int);
       int area()
       {
          return height*width;
       }
};
first:: first(int a,int b)
{
  height=a;
  width=b;
}
int main()
{
  first recta(12,11);
  first rectb(22,11);
  cout<<recta.area()<<endl;
  cout<<rectb.area()<<endl;
  return 0;
}
