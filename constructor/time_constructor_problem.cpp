#include<iostream>
using namespace std;
class time{
    int hr;
    int min;
    public:
    time(){
        hr=00;
        min=00;
        cout<<hr<<" "<<min<<endl;
    }
    time(int h,int m=00){
        hr=h;
        min=m;
         cout<<hr<<" "<<min<<endl;
    }
    time(time &t){
        hr=t.hr;
        min=t.min;
         cout<<hr<<" "<<min<<endl;
   }

};
int main()
{
  //time t,t(11,00),t(t); we cannot declare same object to different constructor
  time t,t1(11),t2(t1);
}