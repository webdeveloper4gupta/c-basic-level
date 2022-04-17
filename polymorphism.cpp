#include <iostream>
using namespace std;
class car
{
   protected:int x;
public:
  virtual  void start()
    {
        cout << " car start" << endl;
    }
   virtual void stop()
    {
        cout << " car stop" << endl;
    }
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
    car *c,c1;
  
    swift d;
   c=&d;
    c->start();
    c->stop();
    innova i;
    c=&i;
    c->start();
    c->stop();
    c1.start();
    return 0;
}
