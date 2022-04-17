#include<iostream>
using namespace std;
int max(const int &x,int &y){
    int c;
   //x=10;we cannot do this
   y=10;
  c=  x>y? x : y ;
  return c;
}
int main()
{
    int a=2;
    int b=9;
    cout<<max(a,b)<<endl;
}