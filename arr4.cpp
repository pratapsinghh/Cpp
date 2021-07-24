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
  for(auto it=arr.begin();it<arr.end();++it)
  cout<<*it<<" ";
  for(int i=0;i<arr.size();i++)
  {
    if(arr.at(i)==12)
    cout<<"data is found "<<endl;
  }
  return 0;
}
