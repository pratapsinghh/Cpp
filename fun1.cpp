//this function send only copy of variable not change in main variable
#include<iostream>
using namespace std;
void change(int a,int b)
{
   a=30;
   b=20;
}
int main()
{
  int x(3),y(4);
  cout<<x<<" "<<y<<endl;
  change(x,y);
  cout<<x<<" "<<y;
  return 0;
}
