#include<iostream>
using namespace std;
class test
{
   public:
        int x;
        test(){ }
        test(int val):x(val){ }
        const int& get()const{return x;}
};
int main()
{
   test obj(10);
   obj.x=20;
   cout<<obj.x<<endl;
   return 0;
}
