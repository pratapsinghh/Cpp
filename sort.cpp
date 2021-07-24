#include<iostream>
#include<algorithm>
using namespace std;
void show(int a[],int size)
{
   int i;
   for(i=0;i<size;i++)
       cout<<a[i];
   cout<<endl;
}
int main()
{
  int *a,i,size;
  cout<<"enter the size=";
  cin>>size;
  a=new int[size];
  for(i=0;i<size;i++)
  {
      cin>>a[i];
  }
  show(a,size);
  sort(a,a+size);
  show(a,size);
  return 0;
}
  
