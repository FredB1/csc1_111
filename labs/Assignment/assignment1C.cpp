#include <iostream>
using namespace std;

int main() {
  int pos, input, odd = 0;
  cout << "Please enter a positive integer: ";
  cin >> input;
  if (input >= 1) {
    for (int i =input;i> 0;) {
      pos = i % 10;
      if (pos % 2 == 1) {
        odd++;
      }
      i /= 10;
    }
    cout << "There's " << odd << " odd digits in " << input<<endl;
  }
  return 0;
}