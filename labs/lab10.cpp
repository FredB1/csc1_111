#include <iostream>
using namespace std;

int main (){
    int n =4;
    for(int r=1;r<=n ;r++){
    for (int cf=1, cb=n;cb>=1;cf++,cb--){
        if(r== cb|| r==cf){
            if( cb%2==0)cout<<"*";
            else cout << "^";
        }
        else cout <<" ";
    }
    cout<<endl;
    }
    return 0;
}