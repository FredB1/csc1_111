#include <iostream>
using namespace std;

int main() {
  double input = 0;
  while (input < 1 || input > 100) {
    cout << "Please enter the exam grade out of 100: ";
    cin >> input;
  }
  if (input >= 90) {
    cout << "A\n";
  } else if (input >= 80) {
    cout << "B\n";
  } else if (input >= 70) {
    cout << "C\n";
  } else if (input >= 60) {
    cout << "D\n";
  } else {
    cout << "F\n";
  }
  return 0;
}