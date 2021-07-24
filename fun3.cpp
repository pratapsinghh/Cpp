#include<iostream>
#include<string>
using namespace std;
string concati(string a,string b)
{
   string c;
   c=a+ " " +b;
   return c;
}
int main()
{
   string a("hello"),b("how are you");
   cout<<concati(a,b);
   return 0;
}
