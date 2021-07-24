#include<iostream>
using namespace std;
class Box
{
   protected:
            int len;
            int wid;
};
class Y : Box
{
   public:
        void setdata(int ,int );
        void getdata();
};
void Y :: setdata(int x,int y)
{
   len=x;
   wid=y;
}
void Y :: getdata()
{
   cout<<len<<" "<<wid<<endl;
}
int main()
{
  Y obj[4];
  int m,n;
  for(int i=0;i<4;i++)
  {
     cin>>m>>n;
     obj[i].setdata(m,n);
  }
     obj[1].getdata();
  return 0;
}
