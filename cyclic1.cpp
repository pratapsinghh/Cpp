#include<iostream>
using namespace std;
int cyclic(int arr[],int n,int i=0)
{
   if(n==i)
      return 0;
   else
   {
      int temp=arr[i];
      arr[i]=arr[n-1];
      arr[n-1]=temp;
      return cyclic(arr,n,i+1);
   }
return 0;
}
void print(int arr[],int n)
{
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
}
int main()
{
   int *arr;
   arr=new int[5];
   for(int i=0;i<5;i++)
   {
      int temp;
      cin>>temp;
      arr[i]=temp;
   }
   cyclic(arr,5);
   print(arr,5);
   return 0;
}
