#include<iostream>
using namespace std;
class Box
{
   int len;
   int hei;
   int wid;
   public:
         void setdata()
         {
            len=11;
            hei=12;
            wid=13;
         }
         void print()
         {
           cout<<hei<<len<<wid<<endl;
         }
};
int main()
{
 Box obj;
 obj.setdata();
 obj.print();
 return 0;
}
