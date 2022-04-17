#include<iostream>
using namespace std;
template<class t>
class abc{
    t a;
    t b;
    public:
    abc(t a,t b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    abc<int> a1(n1,n2);
     a1.display();
}