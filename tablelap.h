#include <iostream>
using namespace std;

class tablelap
{
  enum state{ON,OFF} on_off;
  public:
  tablelap()
  {
    this->on_off=ON;

  }

  void pressswitch()
  {
   on_off = (on_off==ON) ? OFF:ON ;

  }
  friend ostream & operator<<(ostream& o,const tablelap& t);



};
ostream& operator <<(ostream& o,const tablelap& t)
{
  return (t.on_off==0)? o<<"is on"<<endl: o <<"TABLE LAMP IS OFF"<<endl ;
};
