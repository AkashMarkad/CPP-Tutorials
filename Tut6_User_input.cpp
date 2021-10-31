// cin is a predefined variable that reads data from the keyboard with the extraction operator (>>)

#include <iostream>
using namespace std;

int main() {
    
    double a , b , sum , sub , mult , div;

    cout << "Simple Calculator"<<endl;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    
    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    cout << "a +  b = "  << sum<<endl;
    cout << "a -  b = "  << sub<<endl;
    cout << "a *  b = "  << mult<<endl;
    cout << "a /  b = "  << div<<endl;

    return 0;
}