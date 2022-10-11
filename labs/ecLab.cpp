#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main (){
srand(time(nullptr));
int rando = rand()%20+1,guess,attempts = 0;
cout <<"Please enter a number"<< endl;
cin>>guess;
while(guess != rando&& attempts < 4){
    attempts++;
    if(guess < rando){
        cout << "No. It's larger, guess a larger number.\n";
    }else{
        cout << "No. It's smaller, guess a smaller number.\n";
    }
        cin >> guess;

}
if(guess == rando){
    cout<<"Yes! You got it, it's "<<rando<<endl;
}
if(attempts==4){
    cout <<"No I'm disappointed. Good-bye!\n";
}

    return 0;
}