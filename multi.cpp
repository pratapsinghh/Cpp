#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    int size,i;
    cout<<"enter the size of array =";
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
    cout<<endl;
    reverse(vect.begin(),vect.end());
    for(i=0;i<size;i++)
    cout<<vect[i]<<" ";
    cout<<*min_element(vect.begin(),vect.end())<<endl;
    cout<<*max_element(vect.begin(),vect.end())<<endl;
    cout<<accumulate(vect.begin(),vect.end(),0)<<endl;
    return 0;
}
