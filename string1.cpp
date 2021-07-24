#include<iostream>
#include<string>
using namespace std;
int main()
{
   char str[256];
   cin.getline(str,256,'\n');
   cout<<"your long string is "<<str<<endl;
   cin.get();
   return 0;
}
