#include <iostream>
#include <string>

using namespace std;
double add(double num1, double num2);
double sub(double num1, double num2);
double mult(double num1, double num2);
double div(double num1, double num2);
double mod(int num1, int num2);
int main()
{
    double num1;
    char op;
    double num2;

//get user input for one number 
    cout << "Input 1: ";
    cin >> num1;
//use an operator (+ - * / % )    
  do 
    {
        cout << "Choose your operation (+, -, *, /, %): ";
        cin >> op;
    }
    while (op != '+' && op != '-' && op != '*' && op != '/' && op != '%');    
    
//get a second number
    cout << "Input 2: ";
    cin >> num2;
//you process the two numbers 
//you get an answer 

if (op == '+')
{
    cout << add(num1, num2) << endl;
}
else if (op == '-')
{
    cout << "Answer = " << sub(num1, num2) << endl;
}
else if (op == '*')
{
    cout << "Answer = " << mult(num1, num2) << endl;
}
else if (op == '/')
{
    cout << "Answer = " << div(num1, num2) << endl;
}else if (op == '%')
{
    cout << "Answer = " << mod(num1, num2) << endl;
}
else cout << "Please input a correct operator.\n";

return 0;
}

double add(double num1, double num2){
    double ans;
    ans = num1+num2;
    return ans;
}
double sub(double num1, double num2){
    double ans;
    ans = num1-num2;
    return ans;
}
double mult(double num1, double num2){
    double ans;
    ans = num1*num2;
    return ans;
}
double div(double num1, double num2){
    double ans;
    ans = num1/num2;
    return ans;
}
double mod(int num1, int num2){
    double ans;
    ans = num1 % num2;
    return ans;
}


