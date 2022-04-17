#include<iostream>
using namespace std;
class base{
 public:
 virtual void fun1(){
     cout<<"base class"<<endl;
 }
 void fun2(){
     cout<<"2 nd function";
 }

};
class derived:public base{
    public:
    void fun1(){
        cout<<"derived class"<<endl;
    }
};
int main()
{
   base *b,b1;
    derived d;
   b=&d;
   
   b1.fun1();
   b->fun2();// from the base class pointer we call any function of base class through derived class
  
   
   b->fun1();

}