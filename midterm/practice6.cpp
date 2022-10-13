#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "what is n?";
    cin>>n;
    for (int r =1;r<=n;r++){
        for (int c=1;c<=2*n-1;c++){
            if(r > c&& r+ c<(2 * n-1 ))cout <<" ";
            else cout<< "*";
        }
        cout<<endl;
    }
    return 0;}