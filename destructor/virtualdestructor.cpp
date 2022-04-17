#include<iostream>
using namespace std;
class base{
 
    public:
    base(){
    cout<<"base constructor"<<endl;
    }
   virtual ~base(){//if i not write virtual here then derived destrtuctor does not delete
        cout<<"base destructor"<<endl;
    }
};
class derived:public base{
public:

derived(){
     cout<<"derived constructor"<<endl;
}


~derived(){
    cout<<"derived destructor"<<endl;
}
};
int main()
{
    base *b;
    b=new derived();//output base constructor ,derived destructor
    delete b;
}