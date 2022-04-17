#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    try{
        if(a==0){
            throw string("a should not be zero");
        }
        else if(b==0){
            throw 101;
        }
        else{
            d=c/(a+b);
            cout<<d<<endl;
        }
    }
    catch(int e){
        cout<<"the error for b zero is :"<<e<<endl;
    }
    catch(string s){
        cout<<"error:"<<s<<endl;
    }
  cout<<"program run succesfully"<<endl;
}