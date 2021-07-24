#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void show(int a[],int size)
{
   for(int i=0;i<size;i++)
     cout<<a[i]<<" ";
  cout<<endl;
}
int main()
{
    int size,i;
    cout<<"enter the size =";
    cin>>size;
    int a[size];
    vector<int> vect(a,a+size);
    for(i=0;i<size;i++)
        cin>>vect[i];
    for(i=0;i<size;i++)
    cout<<vect[i]<<" ";
    cout<<endl;
    sort(vect.begin(),vect.end());
    for(i=0;i<size;i++)
     cout<<vect[i]<<" ";
    return 0;
}
