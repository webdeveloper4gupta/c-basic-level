#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2},v1{2,1};
    swap(v,v1);//used to swap two objects 
    for(int x:v){
        cout<<x;
    }
}