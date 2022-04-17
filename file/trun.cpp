#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream aman("mytxt");//ostream is a built class in c++ to make file //aman is the object of osstream class
    aman<<"mahajan"<<endl;
    aman<<95<<endl;
    aman.close();//closing the file
}