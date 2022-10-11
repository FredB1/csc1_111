#include <iostream>
using namespace std;
int main(){
    string input;
    cout << "Please enter today's date:";
    cin >> input;
    if(input == "Tuesday"||input == "Thursday"){
       
    cout << "You have lab today!";    
    }else{
        cout << "No lab today";
    }
    return 0;
}