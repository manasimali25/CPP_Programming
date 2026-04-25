#include <iostream>
using namespace std;

//encapsulation    
class marvellous     
{

  //access specifier
  public:
  int no1, no2;     //chracteristics 


  //default constructor
  marvellous()   //constructors and destructor are considered as behaviour
  {
    cout<<"inside default constructor\n";

    no1= 0;   //any value
    no2 =0;   //any value

  }
  
  // parametrised constructor 
  marvellous(int a, int b)   
  {
    cout<<"inside parametrised constructor\n";

    no1= a;
    no2 =b;

  }
 
  //copy constructor
  marvellous(marvellous &ref)
  {
    cout<<"inside copy constructor\n";

    no1 = ref.no1;
    no2 = ref.no2;

  }


  //destructor
  ~marvellous()     //constructors and destructor are considered as behaviour
  {

    cout<<"inside destructor\n";
  }

};
int main()
{

  cout<<"inside main\n";

  marvellous mobj1;          //default costructor    (eg. 1 coffee)
  marvellous mobj2(11,21);     //parametrised constructor  (eg. 1 coffee with no sugar)
  marvellous mobj3(mobj2);     //copy constructor        (eg. same coffee) 
  
  cout<<"end of main\n";

    return 0;

}   //all destructors gets called