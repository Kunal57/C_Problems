#include <iostream>
using namespace std;

int main(){

  string password = "hello";

  cout << "Enter Password > " << flush;

  string input;
  cin >> input;

  if(input == password){
    cout << "Password accepted." << endl;
  }

  if(input != password){
    cout << "Password denied." << endl;
  }

  return 0;
}