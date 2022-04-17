#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    try{
        try{
        if(b==0){
            throw string("enter the approriate input");
        }
        else{
            c=a/b;
            cout<<c<<endl;
        }
    }
    catch(string s){
        throw;
    }
    }
    catch(string s){
        cout<<"error"<<s<<endl;
    }
    cout<<"program run succesfully congrats"<<endl;
}