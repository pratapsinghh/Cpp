#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
  string mystr;
  int p;
  float f;
  cout<<"enter the pease :";
  getline(cin,mystr);
  stringstream(mystr)>>p;
  
  return 0;
}
  
