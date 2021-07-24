#include<iostream>
#include<array>
using namespace std;
int main()
{
  array<int ,6> arr;
  int a;
  for(int i=0;i<arr.size();i++)
  {
     cin>>a;
     arr.at(i)=a;
  }
  for(int i=0;i<arr.size();i++)
  cout<<arr.at(i)<<" ";
  cout<<endl;
  return 0;
}
