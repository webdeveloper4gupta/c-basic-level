#include<iostream>
using namespace std;
class base{
    public:
    void display(){
    cout<<"base"<<endl;
    }
};
class derived:public base{
    void show(){
        cout<<"derived"<<endl;
    }
};
int main()
{
    try{
        throw derived();
    }
    catch(base b){
        cout<<"base class"<<endl;
    }
    catch(derived d){
        cout<<"derived class"<<endl;
    }
}
