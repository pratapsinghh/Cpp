#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int i,j,x=25,y=25,d,a,r;
   cout<<"enter the radius=";
   cin>>r;
   for(i=0;i<50;i++)
   {
      for(j=0;j<50;j++)
      {
          a=((i-x)*(i-x))+((j-y)*(j-y));
          d=sqrt(a);
          //cout<<d;
          if(r==d)
          {
             cout<<".";
          }
          else
           cout<<" ";
      }
      cout<<endl;
   }
   return 0;
}
