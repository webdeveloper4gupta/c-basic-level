#include<iostream>
using namespace std;
class base{
    public:
    void fun(){
        cout<<"base pointer "<<endl;
    }
};
class derived:public base{
public:

};
int main()
{
    base b;
    derived d;
    b.fun();
    d.fun();
    return 0;
}

