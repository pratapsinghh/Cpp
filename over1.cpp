#include<iostream>
using namespace std;
class test
{
    int x;
    int y;
public:
     test(){ }
     test(int a,int b):x(a),y(b){ }
     test operator -(const test& obj)
     {
         test temp;
         temp.x=x-obj.x;
         temp.y=y-obj.y;
         return temp;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    test obj1(3,4);
    test obj2(2,1);
    test result;
    result=obj1-obj2;
    result.print();
    return 0;
}
    
