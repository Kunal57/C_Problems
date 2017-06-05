#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  float fValue = 123.456789;
  cout << setprecision(20) << fValue << endl;
  cout << sizeof(float) << endl;

  double dValue = 123.456789;
  cout << setprecision(20) << dValue << endl;
  cout << sizeof(double) << endl;

  long double lValue = 123.456789876543210;
  cout << setprecision(20) << fixed << lValue << endl;
  cout << sizeof(lValue) << endl;

  return 0;
}