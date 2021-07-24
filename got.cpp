#include<iostream>
using namespace std;
int main()
{
 int n=10;
 lable:
   cout<<n;
   n--;
  if(n>0)
 {
   goto lable;
 }
  return 0;
}
