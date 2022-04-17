#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex();
   complex(int ,int );
   complex(complex &);
      
   ~ complex();
};
complex::complex(){
    real=12;
    img=-90;
    cout<<real<<" "<<img<<endl;
}
complex::complex( int x,int y){
    real=x;
    img=y;
    cout<<real<<" "<<img<<endl;
}
complex::complex(complex &v){
    real=v.real;
    img=v.img;
    cout<<real<<" "<<img<<endl;
}
complex::~complex(){
    cout<<"destructor will call"<<endl;
}
int main()
{
    complex c;
    complex c1(1,2);
    complex  c2(c1);
}