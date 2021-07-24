#include<iostream>
using namespace std;
class test
{
    int x,y;
public:
    test()
    {}
    test(int a,int b):x(a),y(b){}
    int find()
    {
        return (x+y);
    }
};
int main()
{
    int m,n;
    test* arr;
    arr=new test[5];
    for(int i=0;i<5;i++)
    {
        cin>>m>>n;
        arr[i]=test(m,n);
    }
    for(int i=0;i<5;i++)
        cout<<arr[i].find()<<" ";
    return 0;
}
