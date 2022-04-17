#include<iostream>
using namespace std;
/*template<class t>
t display(t a,t b){// if we declare only one argument in template then it will access only same data type
    cout<<a<<" "<<b<<endl;// if we give different data type then it will show error
}*/
template<class t1,class t2>
void display(t1 a,t2 b){
    cout<<a<<" "<<b<<endl;
}
int main(){
    int a=3;
    string s=" aman ";
    //float s=1.6;
    display(a,s);
    return 0;
}