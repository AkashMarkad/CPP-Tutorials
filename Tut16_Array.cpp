/*Array :

1. Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

2. To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store.

*/

#include <iostream>
using namespace std;

int main()
{

    int Numbers[3] = {10, 20, 30};

    // Access the Elements :
    // You access an array element by referring to the index number.

    cout << Numbers[1] << endl;

    // Change an Array Element :
    // To change the value of a specific element, refer to the index number.

    Numbers[2] = 22;
    cout << Numbers[2] << endl;

    // Loop Through an Array :
    // You can loop through the array elements with the for loop.

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (int i = 0; i < 4; i++)
    {
        cout << cars[i] << "\n";
    }

    // Omit Array Size :
    // You don't have to specify the size of the array. But if you don't, it will only be as big as the elements that are inserted into it.
    // If you specify the size however, the array will reserve the extra space.

    string cars1[5] = {"Volvo", "BMW", "Ford"}; // size of array is 5, even though it's only three elements inside it

    // Now you can add a fourth and fifth element without overwriting the others

    cars1[3] = "Tata";
    cars1[4] = "Tesla";
    for (int i = 0; i < 5; i++)
    {
        cout << cars1[i] << "\n";
    }

    return 0;
}