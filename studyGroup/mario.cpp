#include <iostream>
//input 0-8
using namespace std;
int main(){
    int input;
    
    do{
        cout<<"Enter a positive number below 8: ";
    cin>>input;
            }
    while(input<0||input>8);
    for(int i = 1;i<=input;i++){
        cout<<input-i;
        for(int j = input-i;j<input;j++){
            int count = j;
            while (count) {
            cout<<" ";
            count--;
            }
        cout<<"*";
        }
        cout<<"\n";
    }
}