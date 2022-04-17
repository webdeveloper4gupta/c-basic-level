#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;
template<class t,class r,class d>
class abc{
    t a;
    r b;
    d c;
    public:
    abc(t a,r b,d c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void display();
};
template<class a,class b,class c>//if we declare outline function then it is mandotary to declare here
void abc<a,b,c>::display(){// this is very important step
    cout<<a<<b<<c<<endl;
}
int main()
{
    int n1;
    cin>>n1;
    float n2;
    cin>>n2;
    string n3;
    cin>>n3;
  //  getline(cin,n3);
 
    abc<int,float,string> a1(n1,n2,n3);
     a1.display();
}