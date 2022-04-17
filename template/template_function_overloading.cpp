#include<iostream>
using namespace std;
template<class t>
void display(t a=0){
    cout<<a<<endl;
}
template<class t,class m>
void display(t a,m b=0){
  cout<<a<<" "<<b<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    display(a);
    display(a);
    display(a,b);
    display(a,2);//this will run first template function because int the secod function there is two differernt arguments 
    return 0;
}