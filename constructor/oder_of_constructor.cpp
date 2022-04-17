#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class abc{
    int x;
    int y;
    public:
   abc(){//it is mandotary tro write default constructor first because in inheritance and polymorphism it is mandotary default constructor
        x=0;
        y=0;
         cout<<x<<" "<<y<<endl;
    }
    abc(int f,int y){
        x=f;
        this->y=y;
        cout<<x<<" "<<y<<endl;
    }
     
};
int main()
{
    abc g;
    abc h(2,3);
     
}