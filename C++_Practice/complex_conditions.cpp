#include <iostream>
using namespace std;

/*
* == equality test
* != not equal
* < less than
* > greater than
* <= less than or equal to
>= greater than or equal to
*/

int main(){

  int value1 = 7;
  int value2 = 4;

  bool condition1 = value2 != 8 && value1 == 10;
  bool condition2 = value1 < 10;

  if(condition1 || condition2){
    cout << "Condition 1: True" << endl;
  }
  else{
    cout << "Condition 1: False" << endl;
  }

  return 0;
}