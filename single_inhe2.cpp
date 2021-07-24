#include<iostream>
using namespace std;
class base
{
    int data;
    public:
        int data2;
        void setdata();
        int getdata();
};
void base :: setdata()
{
   data=10;
   data2=34;
}
int base :: getdata()
{
    return data;
}
class derived : public base
{
     int data3;
    public:
         void process();
         void show();
};
 void derived :: process()
 {
       data3 = data2;
 }
 void derived :: show()
 {
    cout<<getdata()<<endl;
    cout<<data2<<endl;
    cout<<data3<<endl;
 }
       
int main()
{
   derived  obj;
   obj.setdata();
   obj.show();
   return 0;
}
