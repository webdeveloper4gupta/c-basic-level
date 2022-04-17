#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
class shape{
    public:// if instead of public i write private or ptotected we cannot write area () function outside class 
    virtual int area()=0;//if we donot write zero here the compiler automatical takes it as pure virtual function

};
class circle:public shape{
    int radius;
    public:
    circle(int r){
        radius=r;
    }
    int area(){
         pow(radius,2);
        return 3.14*pow(radius,2) ;
    }
};
class square:public shape{
    int s;
    public:
    square(int s){
        this->s=s;
    }
    int area(){
        return pow(s,2);
    }
};
class triangle:public shape{
    int h;
    int b;
    public:
    triangle(int b,int h){
        this->b=b;
        this->h=h;
    }
    int area(){
        return 0.5*b*h;
    }
};
int main()
{
    shape *s;
    int n1,n2,n3;
    circle c(3);
    square sq(2);
    triangle tri(1,2);
    s=&c;
    n1=s->area();
    cout<<n1<<endl;
    s=&sq;
    n2=s->area();
    cout<<n2<<endl;
    s=&tri;
    n3=s->area();
    cout<<n3<<endl;

}