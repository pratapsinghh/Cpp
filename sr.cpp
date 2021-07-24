#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
  string mystr("12024");
  int sint;
  stringstream(mystr)>>sint;
  cout<<sint;
  int x;
  string s;
  getline(cin,x);
  stringstream(x)>>s;
  cout<<s;
  return 0;
}
  
