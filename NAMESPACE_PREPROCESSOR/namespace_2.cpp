#include<iostream>
using namespace std;
 
void fun(){
    cout<<"first"<<endl;
}

 
namespace second
{

void fun(){
    cout<<"hello you run second code"<<endl;
}
}

int main()
{
    fun();//shows error if i not that steps
   second::fun();
   cout<<"1";
}
 
