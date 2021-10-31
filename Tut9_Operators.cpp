// Operators are used to perform operations on variables and values.

#include <iostream>
using namespace std;

int main() {

    int sum = 2 + 1;
    int sub = 3 - 1;
    int mult = 1 * 2;
    double div = 2 / 1;
    int mod = sum % sub;
    
    cout << " sum : " << sum << endl;
    cout << " sub : " << sub << endl;
    cout << " mult : " << mult << endl;
    cout << " div : " << div << endl;
    cout << " mod : " << mod << endl;

    ++sum;      //Increment 
    --sub;      //Decrement

    cout << " Increment in sum by 1 : " << sum << endl;
    cout << " Decrement in sub by 1 : " << sub << endl;

    // Assignment Operator 

    int x = 10 , y = 20;
    x += 5;
    y -= 5;
    cout << " x : " << x << endl;
    cout << " y : " << y << endl;

    x -= 5;
    y += 5;

    // Comparison Operator :-  < , > , == , != , >= , <= 

    cout << " x is less than y : " << (x < y) << endl;  //return boolean value 

    /* Logical Operator  : Logical operators are used to determine the logic between variables or values

    Logical and (&&)
    Logical or (||)
    Logical not (!)

    */
    return 0;
}

/* 
Arithmetic Operator

1. Addition (+) : Adds together two values 
2. Substraction (-) : Substracts one value from another
3. Multiplication (*) : Multiplies two values 
4. Division (/) : Divides one value by another 
5. Modulus (%) : Returns the division remainder
6. Increment (++) : Increases the value of a variable by 1 
7. Decrement (--) : Decreases the value of a variable by 1 

*/