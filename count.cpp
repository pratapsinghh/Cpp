#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   int size,i;
   cout<<"enter the size of array=";
   cin>>size;
   int arr[size];
   vector<int> vect(arr,arr+size);
   for(i=0;i<size;i++)
   cin>>vect[i];
   for(i=0;i<size;i++)
   cout<<vect[i]<<" ";
   cout<<endl;
   sort(vect.begin(),vect.end());
   for(i=0;i<size;i++)
   cout<<vect[i]<<" ";
   cout<<endl;
   cout<<count(vect.begin(),vect.end(),5)<<endl;
   find(vect.begin(),vect.end(),5) !=vect.begin()?cout<<"\n element is found":cout<<"\n element not found";
   return 0;
}
