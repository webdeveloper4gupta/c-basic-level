#include<iostream>
using namespace std;
class base{
    int x;
    int y;
    public:
    base(){//if we write   this with  permtised constructor then  in the inheritanace we get error
        x=0;
        y=0;
        cout<<x<<" "<<y<<endl;
    }
    base(int x,int y){// no need default argument for inherited class as deault constructor present 
        this->x=x;
        this->y=y;
     cout<<x<<" "<<y<<endl;
     cout<<"base parametrisedf"<<endl;
    }
    base(base &b){
        x=b.x;
        y=b.y;
        cout<<x<<" "<<y<<endl;
    }
};
class derived:public base{
    int z;
    int k;
    public:
     derived(){
         z=0;
         k=0;
         cout<<z<<" "<<k<<endl;
     }
     derived(int x1,int y1){
         z=x1;
         k=y1;
          cout<<z<<" "<<k<<endl;
     }
     derived(int x,int y,int x1,int y1):base(x,y){
        z=x1;
        k=y1;
        cout<<z<<" "<<k<<endl;
     }
};
int main()
{
   // derived d1;
    //derived d(1,8);// here also the base clas default constructor will called not parametrisewd constructor of base
   // base b1;
   // base b(11,10);
   derived d2(1,2,3,4);
}