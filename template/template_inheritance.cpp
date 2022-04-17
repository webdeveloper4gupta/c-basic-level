#include<iostream>
using namespace std;
template<class t>
class base{
    t a=1;
    public:
    void dispaly(){
        cout<<a<<endl;
    }
};
template<class t>
class derived:public base<t>
{
   
};
int main()
{
 base<int> b;
 b.dispaly();
 derived<int> d;
 d.dispaly();
 
}