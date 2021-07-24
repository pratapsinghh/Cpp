#include<iostream>
using namespace std;
class test
{
   public:
       int x;
       int y=30;
       test(){ }
       test(int a,int b):x(a),y(b){ }
};
int main()
{
    const test obj(10,30);
    cout<<obj.x<<endl;
    cout<<obj.y<<endl;
    test obj1(40,50);
    cout<<obj1.x<<endl;
    return 0;
}
    
