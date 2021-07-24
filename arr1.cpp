#include<iostream>
#include<array>
using namespace std;
int main()
{
  array<int ,6>arr;
  for(int i=0;i<arr.size();i++)
   cin>>arr[i];
  for(auto it=arr.begin();it<arr.end();++it)
  cout<<" "<<*it;
  return 0;
}
