#include<iostream>
using namespace std;
class Number
{
   int a;
   public:
        Number(){ a= 0; }
        Number(int num)
        {
            a=num;
        }
        void display()
        {
            cout<<"the value is = "<<a<<endl;
        }
        Number(Number &obj)
        {
          cout<<"copy constructor called !! "<<endl;
          a=obj.a;
          a=obj1.a;
        }
};
int main()
{
  Number x,y,z(45);
  z.display();
  x.display();
  y.display();
  Number z1(z);
  z1.display();
  return 0;
}
  
