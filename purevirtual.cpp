#include <iostream>
using namespace std;
class car
{
   protected:int x;
public:
  virtual  void start()=0;
   
   virtual void stop()=0;
    
};
class swift : public car
{

public:
    void start()
    {
        cout << "swift starteed" << endl;
        
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
};
int main()
{
    car *c;//if we make a class interface then we cannot create an object of that class
  
    swift d;
   c=&d;
    c->start();
    c->stop();
    innova i;
    c=&i;
    c->start();
    c->stop();
  
    return 0;
}