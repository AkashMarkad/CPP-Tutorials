/*Pointer : 
1. A pointer however, is a variable that stores the memory address as its value.
2. A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator.
3. The address of the variable you're working with is assigned to the pointer

*/

#include <iostream>
using namespace std;

int main()
{

    // Creating Pointers :
    // we can get the memory address of a variable by using the & operator.

    string food = "Pizza";      // A food variable of type string
    cout << food << endl;               // Outputs the value of food (Pizza)
    cout << &food << endl;              // Outputs the memory address of food (0x6dfea4)


    string *ptr = &food;
    cout << "Pointer of food name is ptr :" << endl;
    cout << food << endl;               
    cout << &food << endl;  
    cout << &ptr << endl;        //ptr holds the value of food's memory address

    // Dereference :
    // 1. we used the pointer variable to get the memory address of a variable (used together with the & reference operator).
    // 2. you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator).

    cout << *ptr << endl;

    // * operator :
    // 1. When used in declaration (string* ptr), it creates a pointer variable.
    // 2. When not used in declaration, it act as a dereference operator.

    return 0;
}