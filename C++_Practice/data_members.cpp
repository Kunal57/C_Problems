#include <iostream>
#include "Lion.h"
using namespace std;

int main(){

  Lion leo;
  leo.makeHappy();
  leo.roar();

  Lion larry;
  larry.makeSad();
  larry.roar();

  return 0;
}