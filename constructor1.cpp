#include<iostream>
using namespace std;
class Box
{
   private:
       int a;
       int b;
       int c;
   public:
        Box()
        {
           a=5;
           b=6;
           c=7;
        }
        void setdata(int ,int ,int);
        void getdata();
};
void Box :: setdata(int x,int y,int z)
{
   a=x;
   b=y;
   c=z;
}
void Box :: getdata()
{
   cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
   Box obj;
   obj.setdata(5,6,7);
   obj.getdata();
   return 0;
}
        
