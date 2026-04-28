#include <iostream>
using namespace std;

//encapsulation    
class Marvellous     
{

  //access specifier (bydefault - private)

  int no1,no2;    //characteristics

  void fun()          //behavoiur
  {
    cout<<"inside fun\n";

  }

  void gun()          //behaviour
  {
    cout<<"inside gun\n";    


  }

};
int main()
{

  //object oriented instance
  Marvellous mobj1;
  Marvellous mobj2;

  cout<<sizeof(mobj1)<<"\n";  //8bytes

  cout<<mobj1.no1<<"\n";     //error

  mobj1.fun();    //error
  mobj2.fun();    //error

  mobj1.gun();    //error
  


  return 0;

}
