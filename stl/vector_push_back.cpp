#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8};
    v.push_back(9);
    vector<int>::iterator itr=v.begin();
    for(itr=v.begin();itr!=v.end();itr++){
         cout<<*itr<<endl;
    }
//v.clear();
for(int x:v){
    cout<<x;
}
    

}