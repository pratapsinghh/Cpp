#include<iostream>
using namespace std;
class Bankdeposit
{
  int princple;
  int year;
  float interestrate;
  float returnValue;
  public:
        Bankdeposit()
        {
        }
        Bankdeposit(int p,int y,int R);
        Bankdeposit(int p,int y,float r);
     void show();
};
 Bankdeposit :: Bankdeposit(int p,int y,int R)
      {
            princple=p;
            year=y;
            interestrate=float(R)/100;
            returnValue=princple;
            for(int i=0;i<y;i++)
            {
                returnValue=returnValue*(1+interestrate);
            }
     }
        Bankdeposit :: Bankdeposit(int p,int y,float r)
        {
            princple=p;
            year=y;
            interestrate=r;
            returnValue=princple;
            for(int i=0;i<y;i++)
            {
               returnValue=returnValue*(1+r);
            }
       }
       void Bankdeposit :: show()
     {
         cout<<"the principle amount  "<<"after  "<<year<<" year"<<returnValue<<endl;
     }
int main()
{
    Bankdeposit bd1,bd2;
    int p,y,R;
    float r;
    cout<<"enter the principle amount= ";
    cin>>p;
    cout<<endl<<"enter the year= ";
    cin>>y;
    cout<<endl<<"enter the rate";
    cin>>R;
    bd1=Bankdeposit(p,y,R);
    bd1.show();
    return 0;
}
    
