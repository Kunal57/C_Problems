#include <iostream>
using namespace std;

int main(){
  bool bValue = false;
  cout << bValue << endl;

  char cValue = 65;
  cout << cValue << endl;

  cout << "Size of char: " << sizeof(char) << endl;

  wchar_t wValue = 'i';
  cout << wValue << endl;
  cout << sizeof(wchar_t) << endl;

  return 0;
}