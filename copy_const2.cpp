#include<iostream>
using namespace std;
class test
{
    int* x;
    string* ptr;
public:
    test(const int& x):x(new int(x)){}
    test(const test& x):x(new int(x.get())){}
    test(const string& y):ptr(new string& (y)){}
    test(const test& ptr):ptr(new string&(ptr.print())){}
    int get()const{return *x;}
    string print()const{return *ptr;}
};
int main()
{
    test bar(10);
    test bat=bar;
    cout<<bat.get()<<endl;
    test foo;
    test bar=foo;
    cout<<bar.print()<<endl;
    reuturn 
    
