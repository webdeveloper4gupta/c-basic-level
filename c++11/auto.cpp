#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    auto x=1.5;
    cout<<sizeof(x)<<endl;
   //show error we cannot declare again auto variable auto x=1.5f;
   auto k=1.5f;
    cout<<sizeof(k)<<endl;
    auto str="aman the mahajan";
    auto x1=strlen(str);
    cout<<x1<<endl;
}