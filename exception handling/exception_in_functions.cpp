#include<iostream>
#include<conio.h>
using namespace std;
int divide(int a,int b){
    int c;
    if(b==0){
        throw string("wrong input by you");
    }
    else{
        return a/b;
    }
}
int main()
{
    int a,b,o;
    cin>>a>>b;
    try{
       o= divide(a,b);
       cout<<o<<endl;
    }
    catch( string msg){
        cout<<'\n'<<msg<<endl;
    }
    cout<<" program run succesfully  BYE"<<endl;
}