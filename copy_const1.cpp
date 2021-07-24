#include<iostream>
using namespace std;
class test
{
    int* ptr;
public:
    test(const int& str):ptr(new int(str)){}
    test(const test& x):ptr(new int(x.contest())){}
    int& contest()const{return *ptr;}
};
int main()
{
    test foo(1002);
    test bat=foo;
    test bar=bat;
    cout<<bar.contest()<<endl;
    cout<<bat.contest()<<endl;
    return 0;
}
