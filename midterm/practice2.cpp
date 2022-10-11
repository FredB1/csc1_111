#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "What is n?";
  cin >> n;
  for (int r = 1; r <= (2 * n - 1); r++) {
    for (int c = 1; c <= n; c++) {
      if (r >= c&& r+ c<=(2 * n )) {
        cout << "*";
      }
    }
    cout << endl;
  }
  return 0;
}