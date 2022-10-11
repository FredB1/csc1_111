#include <cmath>
#include <cstdlib> // Include support for randomizing.
#include <ctime>   // Include support for ctime.
#include <iostream>
using namespace std;
int main() {
  int x, y, z = 1;
  double salary = 0.01;
  srand(time(nullptr));
  x = (rand() % 50 + 1);
  y = (rand() % 15 + 1);
  while (x != 0) {
    cout << "Enter square size or 0 to stop: ";
    cin >> x;
    for (int i = 0; i < x; i++) {
      for (int c = 0; c < x; c++) {
        if((i+c)%2==0){cout << "X ";}
        else {
        cout<< "O ";
        }
      }
      cout << endl;
    }
  }
  cout << "Goodbye.\n";

  return 0;
}
