#include<iostream>
using namespace std;
void print(string str)
{
   cout<<str;
}
void print(int x)
{
  cout<<x;
}
void print(char a)
{
   cout<<a;
}
int main()
{
  print('a');
  print(10);
  print("hello");
  return 0;
}
