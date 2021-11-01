/*References :

Creating References :

A reference variable is a "reference" to an existing variable, and it is created with the & operator.

*/

#include <iostream>
using namespace std;

int main()
{

    string food = "Pizza"; // food variable
    string &meal = food;   // reference to food
    // we can use either the variable name food or the reference name meal to refer to the food variable.
    cout << food << endl;
    cout << meal << endl;

    // Memory Address :
    //1. In the example from the previous page, the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

    //2. When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.

    //3. To access it, use the & operator, and the result will represent where the variable is stored.

    cout << &food; // Outputs 0x6dfea0

    return 0;
}