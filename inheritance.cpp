#include<iostream>
using namespace std;
class Employee
{
    public:
    int id;
    int salary;
      Employee(int inpid)
      {
          id=inpid;
          salary=34;
      }
      Employee()
      {
      }
};
class programmer : public Employee
{
     public:
        programmer(int inpid)
        {
           id=inpid;
           salary=66;
        }
        int langraue=9;
        void show()
        {
          cout<<"Employee Id is "<<id<<" "<<"Employee Salary is = "<<salary<<endl;
        }
};
int main()
{
   Employee obj1(2),obj2(3);
   cout<<obj1.id<<" "<<obj1.salary<<endl;
   cout<<obj2.id<<" "<<obj2.salary<<endl;
   programmer obj3(5);
   cout<<"langrage code is ="<<obj3.langraue<<endl;
   cout<<"employee id is ="<<obj3.id<<endl;
   obj3.show();
   return 0;
}
   
