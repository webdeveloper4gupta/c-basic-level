#include<iostream>
using namespace std;
template<class t>
t maxi(t a,t b){
    t c;
   c= a>b?a:b;
   return c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c;
    c= maxi(a,b);
    cout<<c<<endl;
}
