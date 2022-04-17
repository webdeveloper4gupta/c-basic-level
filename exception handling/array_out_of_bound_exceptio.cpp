#include<iostream>
using namespace std;
int main()
{
    int *num;
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    num=new int[n];
    try{
        if(n==-1){
            throw 101;
        }
        else{
            int i;
            for(i=0;i<n;i++){
                cin>>*(num+i);// in c++ we directly gives the value not the address
            }
        }
    }
    catch(int e){
        delete []num;
        cout<<"under flow case"<<endl;
    }
    int j;
    for(j=0;j<n;j++){
        cout<<*(num+j)<<endl;
    }
    cout<<"program run succesfully"<<endl;
}