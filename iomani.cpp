#include<iostream>
int main()
{
   int a=26,b=20;
   std::cout<<std::noshowbase;
   std::cout<<a<<" "<<b;
   std::cout<<std::hex;
   std::cout<<a<<" "<<b<<"\n";
   std::cout<<std::showpos;
   std::cout<<a<<"\n";
   return 0;
}
