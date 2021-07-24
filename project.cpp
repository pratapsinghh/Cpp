#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<cstdio>
using namespace std;
struct table
{
char op[5],arg1[5],arg2[5];
}t[10];
int main()
{
int i,j=0,k=0;
char s[30];
cout<<"\n Generation of 3 addr code triple implementation";
while(1)
{
cout<<"\n For exit press ~ \n else enter the expression";
fgets(s);
if(!strcmp(s,"~"))
break;
i=strlen(s)-1;
t[j].arg2[k]=s[i];
t[j].op[k]=s[i-1];
t[j].arg1[k]=s[i-2];
if(j==8)
cout<<"+";
else
cout<<"-";
for( i=strlen(s)-4;i>0;i-=2)
{
t[j].op[k]=s[i];
t[j].arg1[k]=s[i-1];
snprintf(j-1,t[j].arg2,10);
}
}
cout<<"the end";
return 0;
}
