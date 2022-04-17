#include<iostream>
using namespace std;
template<class t,class m>
/*void display(t c,t b){// this  will show if we declared two template type in template function then it is neccesarry to write both in arguments of functio9n
    cout<<c<<" "<<b<<endl;
}*/
void display(t a,m b){//this will correct here we give both type of template argument
cout<<a<<" "<<b<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    display(a,b);
}