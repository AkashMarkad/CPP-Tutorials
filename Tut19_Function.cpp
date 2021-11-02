/*Function :

1. A function is a block of code which only runs when it is called.
2. You can pass data, known as parameters, into a function.
3. Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

Create a Function :

1. C++ provides some pre-defined functions, such as main(), which is used to execute code. But you can also create your own functions to perform certain actions.
2. To create (often referred to as declare) a function, specify the name of the function, followed by parentheses ().

Call a Function :

1. Declared functions are not executed immediately. They are "saved for later use", and will be executed later, when they are called.
2. To call a function, write the function's name followed by two parentheses () and a semicolon ;
3. A function can be called multiple times.
4. void means that the function does not have a return value.

Function Declaration and Definition :

A C++ function consist of two parts:
1. Declaration: the function's name, return type, and parameters (if any)
2. Definition: the body of the function (code to be executed)

Parameters and Arguments :

1. Information can be passed to functions as a parameter. Parameters act as variables inside the function.
2. Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma.

Default Parameter Value :

1. You can also use a default parameter value, by using the equals sign (=).

Multiple Parameters :

1. Inside the function, you can add as many parameters as you want.

Return Values :

1. The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, and use the return keyword inside the function.

*/

#include <iostream>
using namespace std;

void myfunction(string fname , string lname);          //function declaration 

void myfunction(string fname , string lname) {         //function defination 
    cout << fname + " " + lname << endl;
}

int sum( int a , int b);

int sum(int a , int b) {
    return a + b;
}

int main() {

    myfunction("Akash" , "Markad");                    //function call
    myfunction("Sachin" , "Markad");
    
    int s = sum(3 , 3);
    cout << s << endl;

    return 0;
}











