#include <iostream>
#include "adjtablelap.h"
using namespace std;

int main()
{
  adjtablelap *urlamp=new adjtablelap();   //dynamic object
  cout<<*urlamp<<endl;
  //urlamp->print(cout);
  urlamp->pressswitch();
  //urlamp->dim();
  urlamp->print(cout);//adjtablelamp and  read
  system ("pause");

}