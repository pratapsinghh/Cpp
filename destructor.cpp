#include<iostream>
using namespace std;
int count=0;
class num
{
  public:
     num()
     {
        count++;
        cout<<"this time constructor is called ="<<count<<endl;
     }
     ~num()
     {
        cout<<"this time called Destructor ="<<count<<endl;
        count --;
     }
};
int main()
{
  cout<<"inside the main function "<<endl;
  cout<<"called constructor "<<endl;
  num n1;
  {
      cout<<"entering the block "<<endl;
      cout<<"creating two more object "<<endl;
      num n2,n3;
      cout<<"exiting the block "<<endl;
  }
  cout<<"exit the program "<<endl;
  return 0;
}
