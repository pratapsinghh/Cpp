#include<iostream>
using namespace std;
class test
{
    int height;
    int width;
public:
    friend void get(int ,int);
    void getdata();
};
void test:: get(int a,int b)
{
    height=a;
    width=b;
}
void getdata()
{
    cout<<width*height<<endl;
}
int main()
{
    test bar;
    get(3,4);
    bar.getdata();
    return 0;
}
