#include<iostream>
using namespace std;
class test
{
  int x;
  public:
       test(){}
       test(int val):x(val){ }
       const int& get() const{return x;}
};
void print(const test& arg)
{
   cout<<arg.get()<<'\n';
}
int main()
{
   test foo(10);
   print(foo);
   return 0;
}
