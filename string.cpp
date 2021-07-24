#include<iostream>
#include<string>
using namespace std;
int main()
{
  string ram="hello how are you";
  auto sem=ram;
  string s("hello how are you");
  cout<<sem<<endl;
  cout<<s<<endl;
  string r{"hello how are you"};
  cout<<r<<endl;
  return 0;
}
