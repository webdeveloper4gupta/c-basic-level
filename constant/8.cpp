#include <iostream>
using namespace std;
int max(int &x, int &y)//vqalue will notupdated
{
    int c;
    x = 10;  //no value will updated ,value remain same as pre3vious
    y = 100; //also remain same not updated
    x++;
    c = x > y ? x : y;
    return c;
}
int main()
{
    const int a = 12;
    const int b = 9;
    cout << max(a, b) << endl;
}