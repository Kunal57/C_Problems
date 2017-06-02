#include <iostream>
using namespace std;

int main(){

  int numberDogs = 5;
  int numberLions = 10;
  int numberAminals = numberDogs + numberLions;

  cout << "Number of Dogs: " << numberDogs << endl;

  cout << "Number of Lions: " << numberLions << endl;

  cout << "Total Number of Animals: " << numberAminals << endl;

  cout << "New Dog Added" << endl;

  numberDogs = numberDogs + 1;

  cout << "New Number of Dogs: " << numberDogs << endl;

  cout << "New Number of Animals: " << numberAminals << endl;

  return 0;
}