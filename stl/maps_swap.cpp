#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> m,m1;
    m.insert(pair<string,int>("hello",2));
    m1.insert(pair<string,int>("aman",1871));
    swap(m,m1);
    map<string,int>::iterator itr=m.begin();
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
}