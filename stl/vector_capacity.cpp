#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,7,8,9};// if we insert any one element it shows doule of this 
   cout<< v.capacity()<<endl;
   v.insert(v.begin(),15,25);// it shows the capacity
   cout<< v.capacity()<<endl;
   v.insert(v.begin(),1,23);
   cout<< v.capacity()<<endl;
   cout<<v.size()<<endl;
}

