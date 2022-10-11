#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Please enter a positive integer.\n";
  cin >> x;
  if (x <= 0) {
    return 0;
  }
  for (int i = 1; i <= x; i++) {
    cout << "*";
    if (i % 4 == 0) {
      cout << ",";
    }
  }
  cout << endl;
  return 0;
}