#include<iostream>
using namespace std;
class box
{
   protected:
       int data;
};
class Y : box
{
   public:
   void setdata();
   void getdata();
};
void Y :: setdata()
{
   data=8;
}
void Y :: getdata()
{
   cout<<data;
}
int main()
{
  Y obj;
  obj.setdata();
  obj.getdata();
  return 0;
}
