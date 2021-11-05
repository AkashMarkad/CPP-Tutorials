/* Exception :

1. When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.

2. When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (throw an error).

**************

1. Exception handling in C++ consist of three keywords: try, throw and catch:

2. The try statement allows you to define a block of code to be tested for errors while it is being executed.

3. The throw keyword throws an exception when a problem is detected, which lets us create a custom error.

4. The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.

5. The try and catch keywords come in pairs.

6. You can also use the throw keyword to output a reference number, like a custom error number/code for organizing purposes.

Handle Any Type of Exceptions (...) :

1. If you do not know the throw type used in the try block, you can use the "three dots" syntax (...) inside the catch block, which will handle any type of exception.
*/

#include <iostream>
using namespace std;

int main()
{

    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted ";
        }
        else
        {
            throw 505;
        }
    }
    catch (int myNum)
    {
        cout << "Access denied \n";
        cout << myNum << endl;
    }

    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted ";
        }
        else
        {
            throw 505;
        }
    }
    catch (...)
    {
        cout << "Access denied \n";
    }

    return 0;
}
