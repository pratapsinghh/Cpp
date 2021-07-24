#include<iostream>
using namespace std;
void change(int& a,int& b)
{
   a=50;
   b=60;
}
int main()
{
  int x(9),y(4);
  cout<<x<<" "<<y<<endl;
  change(x,y);
  cout<<x<<" "<<y<<endl;
  return 0;
}
  
