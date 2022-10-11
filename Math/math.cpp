#include <cmath>
#include <cstdlib> // Include support for randomizing.
#include <ctime>   // Include support for ctime.
#include <iostream>
using namespace std;
int main() {

  int x= 251 , count=0;

  while (x>0){
    x/=10;
    count++;
  }
cout<<count;
  return 0;
}
