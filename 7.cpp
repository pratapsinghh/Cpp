#include<utility>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int arr[5];
   char brr[5];
   for(int i=0;i<5;i++)
      cin>>arr[i];
   for(int j=0;j<5;j++)
      cin>>brr[j];
   for(int e:arr)
     cout<<e<<" ";
   cout<<endl;
   for(auto x:brr)
       cout<<x<<" ";
   cout<<endl;
   pair<int ,char>pa[5];
   for(int i=0;i<5;i++)
       pa[i]={arr[i],brr[i]};
   sort(pa,pa+5);
   for(int i:pa)
       cout<<i<<" ";
   return 0;
}
   
