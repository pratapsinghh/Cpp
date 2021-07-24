#include<iostream>
using namespace std;
class test
{
   public:
       static void read(int x,int y)
       {
            if(x>y)
              cout<<"x is big"<<endl;
            else if(y>x)
              cout<<"y is big"<<endl;
            else
                cout<<"both are equal"<<endl;
       }
};
int main()
{
   //test t;
   t.read(10,7);//calling with object 
   test::read(20,33);//calling with class member
   return 0;
}
