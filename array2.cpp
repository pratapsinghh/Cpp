#include<iostream>
#include<iomanip>
using std::setw;
using namespace std;
int main()
{
   int arr[5];
   for(int i=0;i<5;i++)
   {
       cin>>arr[i];
    }
    cout<<"Element"<<setw(10)<<"Value"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<setw(5)<<i<<setw(10)<<arr[i]<<endl;
    }
return 0;
}
