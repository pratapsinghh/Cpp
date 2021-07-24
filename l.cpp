#include<iostream>
using namespace std;
void line1();
void line2();
void line()
{
    int i,j,m=5;
    cout<<"cofficient negative and intercept are negative=";
   for(i=-10;i<10;i++)
   {
       for(j=-10;j<10;j++)
       {
          if(j+(m/3)*i+6==0)
          {
             cout<<".";
          }
          else
              cout<<" ";
       }
       cout<<endl;
   }
}
void line2()
{
 int i,j,m=2;
 cout<<"intercept is zero=";
   for(i=-10;i<10;i++)
   {
       for(j=-10;j<10;j++)
       {
          if(j-m*i==0)
          {
             cout<<".";
          }
          else
              cout<<" ";
       }
       cout<<endl;
   }
}
void line1()
{
   int i,j,m=5;
   cout<<"when intercept negative and cofficent are positive="<<endl;
   for(i=-10;i<10;i++)
   {
       for(j=-10;j<10;j++)
       {
          if(j-m*i+6==0)
          {
             cout<<".";
          }
          else
              cout<<" ";
       }
       cout<<endl;
   }
}
void line3()
{
   int i,j,m=5;
   cout<<"when y axis is zero="<<endl;
   for(i=-10;i<10;i++)
   {
       for(j=-10;j<10;j++)
       {
          if((m*i)==0)
          {
             cout<<".";
          }
          else
              cout<<" ";
       }
       cout<<endl;
   }
}
void line4()
{
   int i,j,m=5;
   cout<<"when cofficent positive and intercept positive="<<endl;
   for(i=-10;i<10;i++)
   {
       for(j=-10;j<10;j++)
       {
          if((j-(m/3)*i-4)==0)
          {
             cout<<".";
          }
          else
              cout<<" ";
       }
       cout<<endl;
   }
}
int main()
{
   line();
   line1();
   line2();
   line3();
   line4();
   return 0;
}
