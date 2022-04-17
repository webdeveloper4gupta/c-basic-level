#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d={1,2,3,4,5,6,7};
    d.push_front(23);
    d.push_back(89);
    d.clear();
    for(int x:d){
        cout<<x<<endl;
    }
}
