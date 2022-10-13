#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(nullptr));
  int n = (rand() % 1000 + 1000);
  for(int i=0;i<n;i++){
    if((i*i-61)%100==0){
      cout<<i<<" ";
    }
  }
  return 0;
}