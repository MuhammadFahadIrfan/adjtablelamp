#include <iostream>
#include "tablelap.h"
using namespace std;

class adjtablelap:public tablelap
{
  public:
  adjtablelap (): tablelap()// BASE CONSTRUCTOR CALLED HERE AND USES BASE PRIVATE MEMBER 
  {
    this->bright=1.00;
  }
  void dim()
  {
    if(this->bright>0.1)
    {
      this->bright=this->bright-0.1;
    }
  }
  void print(ostream & o)  //reading brightness dim and tablelamp constructor
   
  {
    o<<*this<<"with brightness"<<this->bright<<endl;
  }




  private:
  float bright;
};