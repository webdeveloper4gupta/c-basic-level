#include<iostream>
using namespace std;
auto max(int a,float b){
 return a>b? a: b;

}
int main()
{
    auto a=9;// we cannot left it without initlization
    auto b=9.8;//default declaration
    auto c=max(a,b);
  cout<<c<<endl;
/*cin>>a>>b;//now the value of a and b is cjhange
cout<<a<<b;*/
}