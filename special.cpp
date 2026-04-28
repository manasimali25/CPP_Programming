#include <iostream>
using namespace std;

class demo
{
  public: 
    int i;   //characteristics
    float f;  //chracteristics

    demo()  //constructor
    {
      cout<<"inside constructor\n";
      i=0;
      f=0.0f;

    }

    ~demo()  //destructor
    {
      cout<<"inside destructor\n";


    }
    void fun()   //behavoiur
    {
      cout<<"inside fun\n";
    }

};
int main()
{
  cout<<"inside main\n";
  demo dobj;   //object creation
  cout<<"\n"<<dobj.i<<"\n";

  dobj.fun();

  cout<<"End of main\n";
  
  
  return 0;

}