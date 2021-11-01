/*1. Break : 

You have already seen the break statement used to "jump out" of a switch statement.

The break statement can also be used to jump out of a loop.


2. Continue : 

The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

Used to skip the value.

*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Break in for loop " << endl;
    for (int i = 0; i < 6; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << "\n";
    }

    int k = 0;
    cout << "Break in while loop " << endl;
    while (k < 10)
    {
        cout << k << "\n";
        k++;
        if (k == 4)
        {
            break;
        }
    }

    cout << "Continue in for loop " << endl;
    for (int j = 0; j < 6; j++)
    {
        if (j == 4)
        {
            continue;
        }
        cout << j << "\n";
    }

    int m = 0;
    cout << "Continue in while loop " << endl;
    while (m < 10)
    {
        if (m == 4)
        {
            m++;
            continue;
        }
        cout << m << "\n";
        m++;
    }

    return 0;
}