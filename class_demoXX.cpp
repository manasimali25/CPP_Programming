#include <iostream>
using namespace std;

class demo
{
  public: 
    int i;   //characteristics
    float f;  //chracteristics
    void fun()   //behavoiur
    {
      cout<<"inside fun\n";
    }

};
int main()
{
  demo dobj;
  cout<<dobj.i<<"\n";

  dobj.fun();
  
  
  return 0;

}