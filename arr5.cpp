#include<iostream>
#include<array>
using namespace std;
int main()
{
  array<int ,5> arr;
  int a;
  for(int i=0;i<arr.size();i++)
  {
    cin>>a;
    arr.at(i)=a;
  }
  cout<<"front value is= "<<arr.front()<<endl;
  cout<<"value from back= "<<arr.back()<<endl;
  arr.back()=100;
  cout<<"value from back= "<<arr.back()<<endl;
  return 0;
}
