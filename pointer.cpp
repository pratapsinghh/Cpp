#include<iostream>
using namespace std;
int main()
{
  int *p,c=24,**q;
  p=&c;
  q=&(p);
  cout<<(**q);
  return 0;
}
