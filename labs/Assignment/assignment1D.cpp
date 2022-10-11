#include <iostream>
using namespace std;

int main() {
  int n, sum;
  cout << "Please enter a positive integer: ";
  cin >> n;
  if (n % 2 == 1) {
    for (int i = 1; i <= (n + 1) / 2; i++) {
      for (int j = 0; j < n; j++) {
        if (j == n / 2) {
          cout << "-";
        } else if (j < i - 1 || j > (n - i)) {
          cout << " ";
        } else {
          cout << "o";
        }
      }
      cout << endl;
    }
  } else {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
        cout << j;
        if (j < i) {
          cout << "+";
        }
      }
      sum += i;
      cout << "=" << sum << endl;
    }
  }
  return 0;
}