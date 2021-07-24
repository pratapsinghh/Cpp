#include<iostream>
using namespace std;
bool gameover;
const int width=20;
const int height=17;
int tailx[100],taily[100];
int ntail;
enum edirection{STOP=0,LEFT,RIGHT,UP,DOWN};
edirection dir;
int furitx,furity,x,y,score;
void setup()
{
     gameover=false;
     dir=STOP;
     x=width/2;
     y=height/2;
     furitx=rand()%width;
     furity=rand()%height;
     score=0;
}
void draw()
{
      int i;
      for(i=0;i<width+2;i++)
           cout<<"#";
           cout<<endl;
      for(i=0;i<height;i++)
      {
           for(int j=0;j<width;j++)
           {
                if(j==0)
                  cout<<"#";
                if(i==y && j==x)
                cout<<"*";
                else if(i==furity && j==furitx)
                cout<<"%";
                else
                {
                   bool print=false;
                   for(int k=0;k<ntail;k++)
                   {
                       if(tailx[k]==j && taily[k]==i)
                       {
                       cout<<"*";
                       print=true;
                       }
                   }
                   if(!print)
                   cout<<" ";
                 }
                 if(j==width-1)
                 cout<<"#";
                 }
                 cout<<endl;
               }
               for(int i=0;i<width+2;i++)
               cout<<"#";
               cout<<endl;
               cout<<"score"<score<<endl;
         }
         
       
                       
             
           
