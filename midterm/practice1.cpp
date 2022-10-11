#include <iostream>
using namespace std;

int main(){
    string input;
    cout  << "What day is it? ";
    cin >> input;
    if(input=="Tuesday"||input=="Thursday"){
        cout<< "You have a CS111 class today.";
    }else{
        cout<< "No CS111 today!";
    }
    return 0;
}