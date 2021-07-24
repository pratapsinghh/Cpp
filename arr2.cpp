#include<iostream>
#include<array>
using namespace std;
int main()
{
  array<int ,10>array;
  int a;
  for(int i=0;i<10;i++)
  {
    cin>>a;
    array.at(i)=a;
  }
  for(int i=0;i<10;i++)
  cout<<' '<<array.at(i);
  return 0;
}
