#include<iostream>
#include<iomanip>
#include<array>
using std:: setw;
using namespace std;
int main()
{
   array<int ,5>arr;
   int num;
   for(int i=0;i<5;i++)
   {
       cin>>num;
       arr[i]=num;
   }
   cout<<"Element"<<setw(10)<<"value"<<endl;
   for(int i=0;i<5;i++)
   {
       cout<<setw(5)<<i<<setw(10)<<arr[i]<<endl;
   }
return 0;
}
