#include<iostream>
using namespace std;
class Rectangle
{
   int height;
   int width;
   public:
         Rectangle(int x,int y):height(x),width(y){ }
         int area()
         {
             return height*width;
         }
};
int main()
{
   Rectangle obj(3,5);
   Rectangle *foo,*bar,*so;
   foo=&obj;
   so=new Rectangle[2] {{2,1},{3,2}};
   bar=new Rectangle(5,6);
   cout<<obj.area()<<endl;
   cout<<bar->area()<<endl;
   cout<<foo->area()<<endl;
   cout<<so[0].area()<<endl;
   return 0;
}
