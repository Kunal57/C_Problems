#include <iostream>
using namespace std;

int main(){

  cout << "1.\tAdd new record." << endl;
  cout << "2.\tDelete record." << endl;
  cout << "3.\tView record." << endl;
  cout << "4.\tSearch record." << endl;
  cout << "5.\tQuit." << endl;

  cout << "Enter Command: " << flush;

  int value;
  cin >> value;

  if(value == 5){
    cout << "Application Quitting..." << endl;
  }
  else {
    cout << "Command Invalid.";
  }

  return 0;
}