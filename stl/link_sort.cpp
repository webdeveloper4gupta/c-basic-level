#include<iostream>
#include<list>
using namespace std;
int main()
{
   list<int> d;
    d={9,5,3,8,7,2,4,9,0};
    d.sort();
    
    for(int x:d){
        cout<<x<<endl;
    }
}
