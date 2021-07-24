#include<iostream>
using namespace std;
class Box
{
    int x;
    public:
        friend void print(Box);
        void setdata(int);
};
void Box :: setdata(int a)
{
   x=a;
}
void print(Box obj)
{
   cout<<obj.x<<endl;
}
int main()
{
  Box obj;
  obj.setdata(6);
  print(obj);
  return 0;
}
        
