/*Loops : 

Loops can execute a block of code as long as a specified condition is reached.
Loops are handy because they save time, reduce errors, and they make code more readable.


*/

#include <iostream>
using namespace std;

int main()
{

    // 1. While Loop :
    // The while loop loops through a block of code as long as a specified condition is true.

    int i = 0;
    cout << "While loop : " << endl;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }

    // 2. Do/While Loop :
    // The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

    int j = 0;
    cout << "Do/While loop : " << endl;
    do
    {
        cout << j << "\n";
        j++;
    } while (j < 5);

    // 3. For loop : 
    // When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop

    int a ;
    cout << "For loop " << endl;
    for (int a = 0; a < 5; a++)
    {
        cout << a << endl;
    }
    
    return 0;
}