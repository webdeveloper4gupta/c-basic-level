#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream aman("mytxt");
    if(!aman){
         cout<<"file cannot be opened"<<endl;
    }
    string str1,str2;
    int x;
    aman>>str1;
  
    aman>>x;
    aman>>str2;
    cout<<str1<<" "<<x<<" "<<str2<<endl;//serlization is very important if we change it shows errror
    if(aman.eof()){
        cout<<"end of file "<<endl;
    }
    aman.close();
}