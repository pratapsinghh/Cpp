#include<iostream>
using namespace std;
class Box
{
   int len;
   int wid;
   public:
        Box()
        {
        }
        Box(int l,int b):len(l),wid(b)
        {
           
        }
        void setdata(int x,int y)
        {
            len=x;
            wid=y;
        }
        void getdata()
        {
           cout<<len<<" "<<wid<<endl;
        }
};
int main()
{
   Box obj(4,5);
   obj.getdata();
   obj.setdata(7,8);
   obj.getdata();
   return 0;
}
