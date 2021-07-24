#include<iostream>
using namespace std;
class test
{
public:
    int x,y;
    test(){}
    test(int a,int b):x(a),y(b){ }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};
test operator +(const test& obj,const test& obj1)
{
    test temp;
    temp.x=obj.x+obj1.x;
    temp.y=obj.y+obj1.y;
    return temp;
}
int main()
{
    test t(3,4);
    test t1(5,4);
    test result;
    result=t+t1;
    result.print();
    return 0;
}
    
