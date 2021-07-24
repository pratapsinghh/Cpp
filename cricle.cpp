#include<iostream>
using namespace std;
class Circle
{
    double r;
    public:
         Circle(double r)
         {
             this->r=r;;
         }
         double circum()
         {
             return (2*r*3.1414);
         }
};
int main()
{
    Circle foo=10.0;
    Circle baz(10.0);
    Circle obj={10.0};
    Circle o{20.45};
    cout<<foo.circum()<<endl;
    cout<<baz.circum()<<endl;
    cout<<obj.circum()<<endl;
    cout<<o.circum()<<endl;
    return 0;
}
