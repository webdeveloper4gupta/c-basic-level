#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> d,d1;
    d={1,2,3,4,5,6,7};
    d1={8,9,10,11,12,13,14,16};
    d.merge(d1);
    for(int x:d){
        cout<<x<<endl;
    }
}
