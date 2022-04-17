#include<iostream>
#include<string.h>
using namespace std;
class dfg{//we cannot write class name as data type neither wise se are unable to use that data type inside the class
    int length;
    string s;
    public:
    dfg(){
        s="the_coder_the_life";
        length=18;
        cout<<s<<" "<<length<<endl;
    }
    dfg(int l,string d){
     s=d;
     length=l;
     cout<<s<<" "<<length<<endl;
    }
    dfg(dfg &c){
        s=c.s;
        length=c.length;
         cout<<s<<" "<<length<<endl;
    }
    void c();

};
void dfg::c(){
    
       s=s+s;
        cout<<s<<endl;
    
}
int main()
{
    dfg s;
    dfg s1(10,"aman");
   dfg s2(s1);
   s1.c();
}