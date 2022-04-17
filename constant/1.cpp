#include<iostream>
using namespace std;
int main()
{
   const static int x=10;//if i write a constant here it means value should not be increment/decrement
    //x++;this show error we are unable to increment the value;
    cout<<x<<endl;
    x;
    cout<<x<<endl;

}