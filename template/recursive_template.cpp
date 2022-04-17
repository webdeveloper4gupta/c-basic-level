#include<iostream>
using namespace std;
template<class t>
t fact(t a){
    if(a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int ans;
    ans=fact(n);
    cout<<ans<<endl;
    return 0;
}