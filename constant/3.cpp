#include<iostream>
using namespace std;
int main()
{
    int x=10;
   const int *ptr;
   // we can also write
  // int const*ptr=&x;
    ptr=&x;
    int y=100;
    ptr=&y;
    //(*ptr)++;//x++ inside the compilier// now we are unable to change the value as thepointer data member now is constant 
    cout<<x<<endl;

    cout<<*ptr<<endl;
}