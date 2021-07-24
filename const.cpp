#include<iostream>
using namespace std;
class sample
{
    static int a;
    public:
       sample()
       {
         a++;
         cout<<a<<endl;
       }
       ~sample()
       {
        cout<<endl<<a;
        a--;
       }
};
int sample::a;
int main()
{
   cout<<"constructor="<<endl;
   sample t1,t2,t3;
   cout<<"destructor=";
   return 0;
}
