#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int input = 0;
  while (input <= 1 ) {
    cout << "Please enter a number greater than 1: ";
    cin >> input;
  }
  for (int i = 1; i <= sqrt(input); i++) {
    if (input % i == 0&&i!=1) {
      cout << input << " is not prime number.";
      return 0;
    }
  }
  

  cout << input<< " is  a prime number.";
  return 0;
}