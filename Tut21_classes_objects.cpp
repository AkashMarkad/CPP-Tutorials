/*Classes/Objects : 

1. C++ is an object-oriented programming language.

2. Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

3. Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

4. A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

Class :

To create a class, use the class keyword.

Object :

1. To create an object of Class, specify the class name, followed by the object name.
2. To access the class attributes , use the dot syntax (.) on the object.
3. You can create multiple objects of one class.

*/

#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
};
int main()
{
    // Create an object of Car
    Car c1;
    c1.brand = "BMW";
    c1.model = "X5";
    c1.year = 1999;

    // Create another object of Car
    Car c2;
    c2.brand = "Ford";
    c2.model = "Mustang";
    c2.year = 1969;

    // Print attribute values
    cout << c1.brand << " " << c1.model << " " << c1.year << "\n";
    cout << c2.brand << " " << c2.model << " " << c2.year << "\n";

    return 0;
}