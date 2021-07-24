#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v)
{
   for(auto x:v)
   cout<<x;
}
int main()
{
   vector<int> v;
   for(int i=0;i<5;i++)
   {
      v.push_back(i);
   }
   print(v);
   return 0;
}
