#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char name[50];
   char lastname[50];
   char fullname[50];
   cout<<"please enter your name: ";
   cin.getline(name,50);
   cin.getline(lastname,40);
   strcat(fullname,name);
   strcat(fullname," ");
   strcat(fullname,lastname);
   cout<<"your fullname is "<<fullname<<endl;
   return 0;
}
