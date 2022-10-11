#include <iostream>
using namespace std;
int main (){
int base = 15,input,count;
cout << "Enter a number between 100 and 2000 that is a multiple of "<< base<<endl;
cin >> input;
while(input % base != 0||input <100||input>2000){
    //attempted the 3 chances
    if(count>=2){
        cout << "No. I am disappointed.  Good-bye!";
        break;
    }
    count++;
    cout << "Wrong. Enter a number between 100 and 2000 that is a multiple of "<< base<<endl;
    cin >> input;
}
if(input % base == 0&&input >100&&input<2000){
    cout << "Yes you got it, "<< input <<" is a multiple of " << base<<endl;
}
return 0;
}