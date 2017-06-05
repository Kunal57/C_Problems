#include <iostream>
using namespace std;

int main(){
  cout << "Array of integers" << endl;
  cout << "=================" << endl;

  int values[3];

  values[0] = 88;
  values[1] = 123;
  values[2] = 7;

  cout << values[0] << endl;
  cout << values[1] << endl;
  cout << values[2] << endl;


  cout << endl << "Array of Doubles" << endl;
  cout << "================" << endl;
  double numbers[4] = {4.5, 2.3, 7.2, 8.1};

  for(int i = 0; i < 4; i++){
    cout << "Element at index " << i << ": " << numbers[i] << endl;
  }

  cout << endl << "Initialize with Zero Values" << endl;
  cout << "===========================" << endl;

  int numberArray[8] = {};
  for(int x = 0; x < 8; x++){
    cout << "Element at index " << x << ": " << numberArray[x] << endl;
  }


  cout << endl << "Arrays of Strings" << endl;
  cout << "=================" << endl;
  string texts[] = {"apple", "banana", "orange"};
  for(int j = 0; j < 3; j++){
    cout << "Element at index " << j << ": " << texts[j] << endl;
  }

  return 0;
}