#include<iostream>
#include<fstream>//header file where file stream present
using namespace std;
int main()
{
    ofstream suk("my.coding");
    suk<<"my love"<<endl;
    suk<<1871<<endl;
    suk<<"patel nagar"<<endl;
    suk<<56;
    suk.close();
}
