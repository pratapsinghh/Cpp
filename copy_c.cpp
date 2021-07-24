#include<iostream>
using namespace std;
class Box
{
  int *ptr;
  public:
  Box()
  {
  }
  Box(int len)
  {
     cout<<"constructor is classed="<<endl;
     ptr=new int;
     *ptr=len;
  }
  Box(Box &obj)
  {
     ptr = new int;
    *ptr=*obj.ptr;
  }
  void get()
  {
     cout<<*ptr;
  }
};
int main()
{
  Box obj(10),obj2(100);
  obj.get();
  Box obj1(obj2);
  obj1.get();
  return 0;
}
