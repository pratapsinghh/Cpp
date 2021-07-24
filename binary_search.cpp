#include<iostream>
#include<algorithm>
using namespace std;
void show(int a[],int size)
{
    for(int i=0;i<size;i++)
       cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
   int *a ,i,size;
   cout<<"enter the array size=";
   cin>>size;
   a=new int[size];
   for(i=0;i<size;i++)
      cin>>a[i];
   show(a,size);
   sort(a,a+size);
   show(a,size);
   if(binary_search(a,a+size,2))
      cout<<"your key is found="<<'2';
   else
      cout<<"your key is not found=";
   return 0;
}
