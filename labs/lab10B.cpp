#include <iostream>
using namespace std;

int main() {
  for (int r = 1; r <= 9; r++) {
    for (int c = 1; c <= 9; c++) {
      cout << " " << r * c;
    }
    cout << endl;
  }
  return 0;
}