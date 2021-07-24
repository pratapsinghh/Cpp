#include<iostream>
using namespace std;
int cyclic(int arr[],int n,int temp1)
{
   if(n==0)
     return (arr[0]=temp1);
   else
   {
       arr[n]=arr[n-1];
       return cyclic(arr,n-1,temp1);
   }
   return 0;
}
void print(int arr[],int n)
{
   for(int i=0;i<=n;i++)
   cout<<arr[i]<<" ";
}
int main()
{
  int *arr;
  arr=new int[7];;
  for(int i=0;i<7;i++)
  {
     int temp;
     cin>>temp;
     arr[i]=temp;
  }
  int temp1=arr[6];
  cyclic(arr,6,temp1);
  print(arr,6);
  return 0;
}
