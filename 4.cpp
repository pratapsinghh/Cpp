#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> vect{10,20,30};
  for(auto &x:vect)
     x=x+10;
  for(auto x:vect)
  cout<<x<<" ";
  return 0;
}
