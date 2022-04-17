#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> d;
    d={1,2,3,4,5,6,7};
    d.push_front(23);
    d.push_back(89);
    
    for(int x:d){
        cout<<x<<endl;
    }
}
