#include <iostream>
using namespace std;

int main(){
int ny, la;
cout<<"What is the temperature in New York? ";
cin>>ny;
cout<<"What is the temperature in Los Angeles? ";
cin>>la;
if(ny>la){
    cout<<"Liar!";
}else{
    cout<<"You need a vacation.\n";
}
    return 0;
}