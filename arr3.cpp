#include<iostream>
#include<array>
using namespace std;
int main()
{
  array<int ,5> arr;
  for(auto it=arr.begin();it!=arr.end();it++)
  cin>>arr[it];
  for(auto it=arr.begin();it!=arr.end();it++)
  cout<<' '<<*it;
  return 0;
}
