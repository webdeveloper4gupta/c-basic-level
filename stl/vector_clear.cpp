#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int num;
    int i;
    for(i=0;i<5;i++){
        cin>>num;
         v. push_back(num);
    }
   
    for(int x:v){
        cout<<x<<endl;
    }
    v.clear();
    for(int x:v){
        cout<<x<<endl;
    }
    return 0;
}