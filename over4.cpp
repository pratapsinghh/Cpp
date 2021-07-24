#include<iostream>
using namespace std;
class test
{
    int x;
    int y;
public:
    test(){}
    test(int a,int b):x(a),y(b){ }
    test operator /(const test&);
    void print()
    {
         cout<<x<<" "<<y<<endl;
    }
};
test test:: operator/(const test& obj)
{
     test temp;
     temp.x=x/obj.x;
     temp.y=y/obj.y;
     return temp;
}
int main()
{
    test obj1(3,2);
    test obj2(6,12);
    test result;
    result=obj2/obj1;
    result.print();
    return 0;
}
     
