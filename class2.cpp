//how to access the public member->public member are accessed anywhare
#include<iostream>
using namespace std;
class Box
{
   public:
   double len;
   double hei;
   double wid;
};
int main()
{
   Box obj;
   obj.len=8;
   obj.hei=9;
   obj.wid=10;
   cout<<obj.len<<" "<<obj.hei<<" "<<obj.wid<<endl;
   return 0;
}
