#include<iostream>
using namespace std;
class base{
     public:
     int x=10;
     int y=0;
    
    
    
    void display()const{
      //  x=100; //this will show x is constant we cannot update their value
     //  x++;
      
       cout<<y<<endl;
        cout<<x<<endl;
    }
    ~ base(){
        cout<<"destructor called"<<endl;
    }
};
int main()
{
   base b;
   b.x=0;
   b.display();
}
// it is mandotary to initilised the constant variable neitherwiswe it shows error