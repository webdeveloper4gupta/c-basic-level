#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> d;
    d={1,2,3,4,5,6,7};
    d.reverse();
    
    for(int x:d){
        cout<<x<<endl;
    }
}
