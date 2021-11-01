#include <iostream>
using namespace std;

int main() {

    int a = 5 , b = 10;

    if (a < b)
    {
        cout << "a is less than b." << endl;
    } else if (a > b)
    {
        cout << "a is greater than b." << endl;
    } else
    {
        cout << "a is equal to b." << endl;
    }

    // Short Hand If...Else (Ternary Operator) :
    // Syntax
    // variable = (condition) ? expressionTrue : expressionFalse;
    
    int time = 20;
    string result = (time < 18 ) ? "Good day." : "Good evinig.";
    cout << result << endl;

    return 0;
}