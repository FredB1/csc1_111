#include <iostream>
using namespace std;
int main() {
  int input = 0;
  cout<<"Please enter a positive number: ";
  cin >> input;
  for (int i = 0; i < input; i++) {
    for (int j = 0; j < input; j++) {
        if(j>=i){
      cout << "*";
        }else{
          cout << " ";  
        }
    }
    cout << endl;
  }
  return 0;
}