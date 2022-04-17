#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(){
        real=10;
        img=10;
       cout<<real<<" "<<img<<endl;
    }
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
   ~ complex(){
       cout<<"destructor invoked"<<endl;
   }
};
int main()
{
    complex c;
    complex c1(1,2);
    complex  c2(c1);
}