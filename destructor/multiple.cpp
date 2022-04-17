#include<iostream>
using namespace std;
class shape{
    public:
    shape(){
        cout<<"shape constructor"<<endl;
    }
    ~shape(){
        cout<<"shape destructor"<<endl;
    }
};
class rect: public shape{
    public:
    rect(){
        cout<<"rect constructor"<<endl;
    }
    ~rect(){
        cout<<"rect destructor"<<endl;
    }
};
class sq:public rect{
    public:
    sq(){
        cout<<"sq constructor "<<endl;
    }
    ~sq(){
        cout<<"sq destructor"<<endl;
    }
};
int main()
{
 //sq s;//firstly all constructor called and then all the destructor called
 shape s;
}