#include<iostream>
using namespace std;
namespace foo
{
   int value()
   {
     return 5;
   }
}
namespace bar
{
   double pi=3.1414;
   double value()
   {
      return 2*pi;
   }
}
 int main()
 {
   cout<<foo::value()<<endl;
