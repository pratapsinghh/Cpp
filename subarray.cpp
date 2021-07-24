#include<iostream>
using namespace std;
int main()
{
  int* arr;
  int size;
  cout<<"enter the size =:";
  cin>>size;
  arr=new int[size];
  for(int i=0;i<size;i++)
  cin>>arr[i];
  cout<<" print all subarray = "<<endl;
  for(int i=0;i<size;i++)
  {
    for(int j=i;j<size;j++)
    {
      for(int k=i;k<=j;k++)
      cout<<arr[k]<<" ";
     cout<<endl;
    }
    //cout<<endl;
  }
  return 0;
}
