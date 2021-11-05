/*Inheritance : 

1. In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

--  derived class (child) - the class that inherits from another class
--  base class (parent) - the class being inherited from

2. To inherit from a class, use the : symbol.

why we use Inheritance : 

- It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

*/

#include <iostream>
using namespace std;

// Base Class
class Vehicle {
    public:
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut!" << endl;
        }
};

// Derived class 
class car: public Vehicle {

    public:
        string model = "Mustang";
};

int main() {

    car c;
    c.honk();
    cout << c.brand + " " + c.model << endl;
    return 0;
}