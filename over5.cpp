#include<iostream>
using namespace std;
class test
{
    int x,y;
public:
    test(){ }
    test(int a,int b):x(a),y(b){ }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
    test operator %(const test&);
};
test test::operator %(const test& parm)
{
    test temp;
    temp.x=x%parm.x;
    temp.y=y%parm.y;
    return temp;
}
int main()
{
     test obj(11,3);
     test obj1(2,2);
     test result;
     result=obj%obj1;
     result.print();
     return 0;
}
