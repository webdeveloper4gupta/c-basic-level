#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7};
    if(v.empty()){
        cout<<"there is no elements in vector"<<endl;
    }
    else{
        cout<<"element present "<<endl;
    }
}
