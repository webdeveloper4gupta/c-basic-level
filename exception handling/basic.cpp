#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    try{
        if(b==0)
           throw 101;
        
        else{
            c=a/b;
            cout<<c<<endl;
        }
    }
    catch(int smjk ){
        cout<<'\n'<< smjk<<endl;
    }
    cout<<"the program run succesfully bye"<<endl;
}