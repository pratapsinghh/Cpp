#include<iostream>
#include<array>
using namespace std;
int main()
{
 array<int,6> Arr;
 for(int i=0;i<Arr.size();i++)
 {
    cin>>Arr[i];
 }
 for(int i=0;i<Arr.size();i++)
 cout<<Arr[i]<<" ";
 return 0;
}
