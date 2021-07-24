#include<iostream>
#include<array>
using namespace std;
int main()
{
  array<int ,5>arr;
  for(int i=0;i<5;i++)
  { 
    int a;
    cin>>a;
    arr.at(i)=a;
  }
  for(auto it=arr.begin();it<arr.end();it++)
  if(*it==12)
     cout<<"data is found ";
  cout<<endl;
  return 0;
}
