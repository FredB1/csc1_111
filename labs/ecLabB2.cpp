#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Please enter a positive integer.\n";
  cin >> x;
  for (int i = 1; i <= x; i++) {
    cout << "*";
  }
  cout << endl;
  for (int i = x - 2; i != 0; i--) {
    for (int j = i ; j != 0; j--) {
      cout << " ";
    }
      cout << "*\n";
  }
  for (int i = 1; i <= x; i++) {
    cout << "*";
  }
  cout << endl;
  return 0;
}