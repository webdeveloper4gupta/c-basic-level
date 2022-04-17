#include<iostream>
using namespace std;
#define pi 89
#ifndef pi
# define pi 9
#endif
int main()
{
 // int pi=9.8; this will show error
    cout<<pi<<endl;
}