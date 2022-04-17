#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
   public: // we should write constructor inside the public specifier neither wise we are unable to declare object;
    /*complex(){//
        real=10;
        img=10;
       cout<<real<<" "<<img<<endl;
    }*/
   complex(int x,int y){
        real=x;
        img=y;
         cout<<real<<" "<<img<<endl;
   }
   complex(complex &x){
       real=x.real;
       img=x.img;
        cout<<real<<" "<<img<<endl;

   }
   ~ complex(){//destructor called : it will also call automatically inside the compilier
       cout<<"destructor invoked"<<endl;
   }
   //friend void show(complex );
  //void show( );
  void show(complex);
};
/*void complex:: show( ){//this  is the member function of class
    cout<<real<<" "<<img<<endl;
}*/
// these both are different function it is not function overloading 
/*void show(complex s){//this is not a member of class 
    cout<<s.real<<" "<<s.img<<endl;//here the copy constructor will also call
}*/
void complex::show(complex c){
    cout<<real<<" "<<img<<endl;
    cout<<c.real<<" "<<img<<endl;
}
int main()
{
    {         
   // complex c;
    }
    //c.show(); in this case object ci s outside the scope
    complex c1(1,2);
    complex  c2(c1);
    c1.show(c2);
    c2.show(c1);
    //c1.show();
    //2.show();
   // show(c1);// in this case a copy constructor will also call and 4 times destructor will call
   //show(c2);
   
}