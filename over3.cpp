#include<iostream>
using namespace std;
class test
{
     int x;
     int y;
     public:
         test()
         {  }
         test(int a,int b):x(a),y(b){}
         void print()
         {
            cout<<x<<" "<<y<<endl;
         }
         test operator *(const test&);
};
test test::operator*(const test& obj)
{
    test temp;
    temp.x=x*obj.x;
    temp.y=y*obj.y;
    return temp;
}
int main()
{
    test* obj1=new test[3];
    obj1[0]=test(3,4);
    obj1[1]=test(4,3);
    obj1[2]=test(1,2);
    test result;
    result=obj1[0]*obj1[1]*obj1[2];
    result.print();
    return 0;
}
         
