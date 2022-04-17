#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream aman("mytxt",ios::app);//ostream is a built class in c++ to make file //aman is the object of osstream class
    aman<<"amangupta"<<endl;
    aman<<"jk"<<endl;
    aman<<45<<endl;
    aman.close();//closing the file
}