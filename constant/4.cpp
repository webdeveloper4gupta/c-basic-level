#include<iostream>
using namespace std;
int main()
{
    int x=10;
  int * const ptr=&x;//its a mandotary to initlised in this step
  //  ptr=&x;// so here we cannot initilise nexxt steps we have to initilise in previous step
    //(*ptr)++;//x++ inside the compilier// now we are unable to change the value as thepointer data member now is constant 
    cout<<x<<endl;
  int y=9;
   //ptr=&y;// now this will show error we cannot point to another variable inthis case
   cout<<*ptr<<endl;

}