#include<iostream>
using namespace std;
class abc{
    int x;
    int y;
    public:
    abc(int s,int b){
        try{
            if(s==0){
                throw 101;
            }
            else{
        x=s;
        y=b;
        }
        }
        catch(int e){
           throw;
        }
    }
    void display(){
        int c=y/x;
        cout<<c<<endl;
    }
    ~abc(){
        cout<<"destructor called"<<endl;
    }

};
int main()
{
    int i,j;
    cin>>i>>j;
    try{
    abc a(i,j);
    a.display();
}
catch(int e){
    cout<<"error deduct:"<<e<<endl;
}
cout<<"program run succesfully congrats"<<endl;
}