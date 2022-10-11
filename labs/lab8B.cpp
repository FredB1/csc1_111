#include <iostream>
using namespace std;
int main(){
    int input;
    cout<<"Please enter a positive integer: ";
    cin>>input;
    if(input < 0){
        cout<<"That is not a proper input, goodbye.";
        return 0;
    }
    for(int i=2;i<input;i++){
        if(input%i==0){
            cout<<i<<", ";

        }
        
    }
    cout<<endl;
    return 0;
}