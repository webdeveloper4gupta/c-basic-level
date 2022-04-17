#include<iostream>
#include<vector>
using namespace std;
// used to insert at first position
int main()
{
    vector<float> v;
    int i,num;
    for(i=0;i<5;i++){
        cin>>num;
         v.push_back(num);
    }
    v.insert(v.end(),1,25);//from the last of vector
    v.insert(v.begin()+2,1,23);
    v.insert(v.begin(),1,30);
    for(int x:v){
        cout<<x<<endl;
    }
}