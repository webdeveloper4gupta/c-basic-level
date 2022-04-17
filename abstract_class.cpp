#include <iostream>
using namespace std;
class car // abstract class because here fun1 present which bmake it abstract and we cannot create an object of this class
{
    // this class is used as both polymorphism and reusibility(inheritance).

public:
    virtual void start() = 0; //pure virtual function

    virtual void stop() = 0;
    void fun1()
    {
        cout << "enter" << endl;
    }
};
class swift : public car
{

public:
    void start()
    {
        cout << "swift  starteed" << endl;
    }
    void stop()
    {
        cout << "swift stopeed" << endl;
    }
};
class innova : public car
{
public:
    void start()
    {
        cout << "innova  starteed" << endl;
    }
    void stop()
    {
        cout << "innova stopeed" << endl;
    }
    void fund()
    { // i can also write an another function here but it is mandotary to write pure virrtual function neither wise it behaves as abstract
        cout << "fund" << endl;
    }
};
int main()
{
    car *c; // we cannot create object of abstract class

    swift d; // if in the class swift i had not write the funtion of pure virtual class then this will also behaves as abstract class
    c = &d;
    d.stop();
    c->start();
    c->stop();
    innova i;
    c = &i;
    i.start();
    c->start();
    c->stop();
    i.fun1();
    i.fund();
    return 0;
}