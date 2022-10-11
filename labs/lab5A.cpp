#include <iostream>
using namespace std;
int main(){
    int correct = 0;
    int input;
    cout << "What is 0%3?\n";
    cin >> input;
    if(input == 0){
        correct++;
    }
    cout << "What is 1/3?\n";
    cin >> input;
     if(input == 0){
        correct++;
    }
    cout << "You answered "<<correct << " questions correctly.";
    return 0;
}