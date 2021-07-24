#include<iostream>
using namespace std;
class test
{
    string data;
public:
    test(){}
    test(string str):data(str){}
    string get()
    {
        return data;
    }
};
int main()
{
    test foo;
    test bar("hello");
    cout<<bar.get()<<endl;
    return 0;
}
