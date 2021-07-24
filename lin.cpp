#include<iostream>
using namespace std;
void line(int x,int y,int n,int m)
{
   int i,j,a;
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
          if((i+x)==(j+y))
              cout<<"\\";
          else
               cout<<" ";
       }
       cout<<"\n";
   } 
} 
   void line1(int x,int y,int n,int m)
{
   int i,j,a;
   a=n/2;
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
          if(a==i)
              cout<<"_";
          else
               cout<<" ";
       }
       cout<<"\n";
   } 
} 
int main()
{
    line(50,20,10,100); 
    line1(50,20,10,50); 
return 0;
}
