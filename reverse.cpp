#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int size,i;
   cout<<"enter the size of array =";
   cin>>size;
   int arr[size];
   vector<int> vect(arr,arr+size);
   for(i=0;i<size;i++)
   cin>>vect[i];
   for(i=0;i<size;i++)
   cout<<vect[i]<<" ";
   cout<<endl;
   reverse(vect.begin(),vect.end());
   for(i=0;i<size;i++)
   cout<<vect[i]<<" ";
   cout<<endl;
   return 0;
}
