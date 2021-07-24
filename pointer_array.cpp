#include<iostream>
using namespace std;
int main()
{
  int *p;
  p=new int[4];
  for(int i=0;i<4;i++)
  {
      cin>>*(p+i);
  }
  for(int j=0;j<4;j++)
     cout<<*(p+j)<<endl;
  return 0;
}
