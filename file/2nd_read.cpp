#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream jk;
    jk.open("my.coding");
    if(!jk){
        cout<<"fele is not open"<<endl;
    }
    string str;
    int x;
    jk>>str;
    jk>>x;
    cout<<str<<" "<<x<<endl;
     if(jk.eof()){
        cout<<"end of file"<<endl;
     }
     jk.close();
} 