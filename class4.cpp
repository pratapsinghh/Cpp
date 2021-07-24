//function declare in class definition out side of class
#include<iostream>
using namespace std;
class Box
{
   int length;
   int height;
   int width;
   public:
   double volume();
   void setlength(int);
   void setheight(int);
   void setwidth(int);
   int area();
};
void Box :: setlength(int a)
{
   length=a;
}
void Box :: setheight(int h)
{
   height=h;
}
void Box :: setwidth(int w)
{
    width=w;
}
double Box :: volume()
{
  return (length * length * length );
}
int Box :: area()
{
   return (length * height *width);
}
int main()
{
  Box obj;
  obj.setlength(5);
  obj.setheight(7);
  obj.setwidth(5);
  cout<<obj.volume()<<endl;
  cout<<obj.area();
  return 0;
}
