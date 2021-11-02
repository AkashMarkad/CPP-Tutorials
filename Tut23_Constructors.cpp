/*Constructor : 

1. A constructor in C++ is a special method that is automatically called when an object of a class is created.
2. To create a constructor, use the same name as the class, followed by parentheses ().
3. The constructor has the same name as the class, it is always public, and it does not have any return value.

Constructor Parameters :

1. Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.
2. When we call the constructor (by creating an object of the class), we pass parameters to the constructor, which will set the value of the corresponding attributes to the same.

3. Just like functions, constructors can also be defined outside the class. First, declare the constructor inside the class, and then define it outside of the class by specifying the name of the class, followed by the scope resolution :: operator, followed by the name of the constructor (which is the same as the class).

*/

#include <iostream>
using namespace std;

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Constructor inside the class.";
    }
};

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)

  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << "\n" <<carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}