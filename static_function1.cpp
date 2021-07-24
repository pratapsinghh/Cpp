#include<iostream>
using namespace std;
class test
{
    static int a,b;
   public :
         static void get()
         {
              cout<<"enter the two no a and b=";
              cin>>a>>b;
              if(a>b)
                 cout<<" a is big"<<endl;
              else if(a<b)
                 cout<<" b is big"<<endl;
              else
                 cout<<"both are equal";
         }
};
int test :: a;
int test :: b;
int main()
{
   test t;
   t.get();
   test :: get();
   return 0;
}
