#include <iostream>
#include "Lion.h"
using namespace std;

void Lion::roar(){
  if(happy){
    cout << "ROARRRR" << endl;
  }
  else{
    cout << "rar" << endl;
  }
}

void Lion::makeHappy(){
  happy = true;
}

void Lion::makeSad(){
  happy = false;
}