#include<iostream>
using namespace std;
int main()
{
    auto s=[](auto x,auto y)->auto{ return x+y; }(10,8.9);
    cout<<s<<endl;
}