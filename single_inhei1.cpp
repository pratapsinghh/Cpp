#include<iostream>
using namespace std;
int n=10;
int m=16;
class X
{
    public:
           int id;
           int nu[10];
           int adhar[16];
           X(){}
           int i;
           X(int id1,int *num,int *adhar)
           {
              id=id1;
              for(i=0;i<n;i++)
                nu[i]=num[i];
              for(i=0;i<m;i++)
                this->adhar[i]=adhar[i];
           }
           void display()
           {
             cout<<"Id is="<<id<<endl;
             cout<<"mobile no. is= ";
             for(int i=0;i<n;i++)
                cout<<nu[i];
             cout<<"\n";
             cout<<"adhar no. is= ";
             for(int i=0;i<m;i++)
                cout<<adhar[i];
          }
};
class Y:public X
{
   public:
   int i;
   Y(int id1,int *num,int *adhar)
   {
      id=id1;
      for(i=0;i<n;i++)
          nu[i]=num[i];
     for(i=0;i<m;i++)
         this->adhar[i]=adhar[i];
   }
   void show()
   {
     cout<<"Id is="<<id<<endl;
             cout<<"mobile no. is= ";
             for(int i=0;i<n;i++)
                cout<<nu[i];
             cout<<"\n";
             cout<<"adhar no. is= ";
             for(int i=0;i<m;i++)
                cout<<adhar[i];
   }
};
int main()
{
  int arr[10],arr1[16],i;
  for(i=0;i<10;i++)
     cin>>arr[i];
  for(i=0;i<16;i++)
  cin>>arr1[i];
  X obj1(1,arr,arr1);
  cout<<"\n";
  obj1.display();
  Y obj2(2,arr,arr1);
  obj2.show();
  return 0;
}
