// Variables are containers for storing data values.

#include <iostream>
using namespace std;

int main() {

    int a = 10 , b = 5;             //Integer (whole number without decimals)
    double f = 10.10;       //Floating point number (with decimals)
    char ch = 'A';          //Character
    string str = "Akash";   //String (text)
    bool B = true;          //Boolean (true or false)

    cout<< "value of a : "<< a << "\nvalue of f : "<< f << endl;
    cout<< "value of ch : "<< ch << "\nvalue of String : "<< str << "\nvalue of B : "<< B << endl;
    cout<< "a + b = " << a + b << endl;
    
    /*
    Constants

    When you do not want others (or yourself) to override existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):
    */

    const int cst = 12;         //myNum will always be 12
 //   cst = 20;                   //error: assignment of read-only variable 'cst'

    return 0;
}

/*
C++ Identifiers
All C++ variables must be identified with unique names.

These unique names are called identifiers.
*/