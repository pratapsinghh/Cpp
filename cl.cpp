#include<iostream>
using namespace std;
class Circle
{
    double radius;
    public:
       Circle(double r): radius(r){ }
       double area() { return radius*radius*3.14148265;}
};
class Cylinder{
     Circle obj;
     double height;
     public:
      Cylinder(double r,double h):obj(r),height(h){}
      double volume(){
      return obj.area()*height;
      }
};
int main()
{
   Cylinder foo(10,20);
   cout<<foo.volume()<<endl;
   return 0;
}
