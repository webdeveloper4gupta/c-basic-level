#include<iostream>
using namespace std;
void divide(int a,int b){
    int d;
    try{
        if(a==0){
            throw 101;
        }
        else{
            d=b/a;
            cout<<d<<endl;
        }
    }
    catch(){
      
        throw;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b;
    try{
        divide(a,b);
     
    }
    catch(int e){
        cout<<"error found"<<e<<endl;
    }
    cout<<"program run correctly"<<endl;
}