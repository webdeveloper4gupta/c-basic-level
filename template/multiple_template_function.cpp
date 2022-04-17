#include<iostream>
using namespace std;
template<class t>
t add(t a,t b){
    return a+b;
}
template<class t>// we can also give declaration
t sub(t a,t b){
    return abs(a-b) ;//abs used as mod function in c++;
}
template<class t,class t1>
void display(t a,t1 b){
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    cout<<sub(a,b)<<endl;
    display(a,b);
}