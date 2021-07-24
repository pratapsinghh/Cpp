#include<iostream>
using namespace std;
int main()
{
    float y,k;
    cout<<"Enter the radius ";
    cin>>y;
    float m=2;
    for(int i=-y;i<=y;i++)
    {
        for(int j=-y;j<=y;j++)
        {
            k=((i*m)/y)*((i*m)/y)+(j/y)*(j/y);
            //cout<<k;
            if(k>.95 && k<1.08)
            {
                 cout<<".";
            }
            else
            {
               cout<<" ";
            }
            
         }
         cout<<"\n";
   }
   return 0;
}
