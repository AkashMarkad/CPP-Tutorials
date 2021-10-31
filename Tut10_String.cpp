/* String :
1. Strings are used for storing text.
2. A string variable contains a collection of characters surrounded by double quotes
*/

#include <iostream>
#include <string>       //To use string , you must include an additional header file in the source code
using namespace std;

int main() {

    string s1 = "Hello";
    string s2 = "World";

    /* String Concatenation : 

    The + operator can be used between strings to add them together to make a new string. This is called concatenation.
    */

   string greeting = s1 + " " + s2;
   cout << greeting << endl;

    /* Append : 
    
    A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function.
    */

   greeting = s1.append(s2);
   cout << greeting << endl;

    /*String length : 

    To get the length of a string, use the length() function.

    Note : You might see some C++ programs that use the size() function to get the length of a string. This is just an alias of length(). It is completely up to you if you want to use length() or size().
    */

    cout << "Length of the greeting string : " <<   greeting.length() << endl;
    cout << "Length of the greeting string : " <<   greeting.size() << endl;

    /* Access Strings: 

    You can access the characters in a string by referring to its index number inside square brackets []. 
    */

   cout << greeting[0] << endl;
   cout << greeting[4] << endl;

//    Change String Characters

    string str = "Akash";
    str[0] = 'S';
    cout << str << endl;

    // User Input Strings 

    string fullName;
    cout << "Type your full name: ";
    getline (cin , fullName);
    cout << "Your name is : " << fullName;

    return 0;
}