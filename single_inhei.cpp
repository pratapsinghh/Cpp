#include<iostream>
using namespace std;
class X
{
   public:
         int id;
         char *c;
         float salary;
         X(int inpid,char *ch,float salary)
         {
            id=inpid;
            c=ch;
            this->salary=salary;
         }
         X()
         { };
         void display()
         {
             cout<<"your id is ="<<id<<endl<<"Name is ="<<c<<endl<<"salary is ="<<salary<<endl;
         }
};
class Y :public X
{
    public:
          Y(int impid,char *ch,float sal)
          {
             id=impid;
             c=ch;
             salary=sal;
          }
          void show()
          {
             cout<<"impid is ="<<id<<" \n"<<"Your name is = "<<c<<"\n"<<"salary is = "<<salary<<endl;
          }
};
int main()
{
   X obj1(1,"Harsh",12000.0);
      obj1.display();
   Y obj2(2,"Alok",35000),obj3(3,"Ram",40000);
   obj2.show();
   obj3.show();
   return 0;
}
