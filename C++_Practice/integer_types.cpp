#include <iostream>
#include <limits>

using namespace std;

int main(){

  int value = 9;
  cout << value << endl;

  cout << "Max Integer Value: " << INT_MAX << endl;
  cout << "Min Integer Value: " << INT_MIN << endl;

  long lValue = 237488923789483;
  cout << lValue << endl;

  short sValue = 2345;
  cout << sValue << endl;

  cout << "Size of Int: " << sizeof(int) << endl;
  cout << "Size of Short Int: " << sizeof(short) << endl;

  unsigned int uValue = 3123243;
  cout << uValue << endl;

  return 0;
}
