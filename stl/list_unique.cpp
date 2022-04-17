#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> d;
    d={2,7,6,4,0,9,7,4,9,4,2,8,8,0};
   d.unique();    
    for(int x:d){
        cout<<x<<endl;
    }
}
