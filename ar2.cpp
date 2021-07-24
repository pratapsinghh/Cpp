#include<iostream>
#include<array>
using namespace std;
int main()
{
  array<int ,6>arr;
  int a;
  for(int it=0;it<arr.size();it++)
  {
    cin>>a;
    arr.at(it)=a;
  }
  for(int x : arr)
  cout<<x<<' ';
  return 0;
}
