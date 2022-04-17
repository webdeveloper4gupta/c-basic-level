#include<iostream>
using namespace std;
int main()
{
    int a=1;
    decltype(a) z=2;
    cout<<sizeof(z)<<endl;
}