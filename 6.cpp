#include<iostream>
using namespace std;
void fun()
{
    string s1="hello",s2="bye";
    string &&s3=s1+" "+s2;
    cout<<s3;
}
int main()
{
    int &&x=3;
    cout<<x;
    fun();
    return 0;
}
