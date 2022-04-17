#include<iostream>
using namespace std;
class abc{
    int x;
    public:
    void show(){
        x=101;
        cout<<"code of error is"<<x<<endl;
    }
};
int main()
{
    int a,b,c;
    cin>>a>>b;
    try{
        if(b==0){
            throw abc();
        }
        else{
            c=a/b;
            cout<<c<<endl;
        }
    }
    catch(abc r){
      cout<<"division by zero not allowed"<< endl;
      r.show();
    }
cout<<" program run succesfully "<<endl;
}