#include <iostream>
using namespace std;

void doSomething();

int main(){

  doSomething();
  doSomething();

  return 0;
}

void doSomething(){
  cout << "Hello" << endl;
}