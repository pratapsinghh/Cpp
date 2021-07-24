#include<iostream>
#include<string>
using namespace std;
class test
{
    string* str;
    int* age;
    public:
    test(){}
    test(string ptr,int a)
    {
        str=new string();
        age=new int();
        *str=ptr;
        *age=a;
    }
    void display();
};
void test:: display()
    {
        cout<<*str<<" "<<*age<<endl;
    }
int main()
{
    test* s=new test("Harsh",25);
    s->display();
    test* sa=new test("Ram",24);
    sa->display();
    return 0;
}
