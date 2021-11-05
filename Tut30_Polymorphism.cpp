/*

Polymorphism :

1. Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

Use of polymorphism :

- It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

*/

#include <iostream>
using namespace std;


// Base Class 
class Animal {

    public:
        void animalsound() {
            cout << "The animal makes a sound \n " << endl;
        }
};

// Derived class 
class Cat : public Animal {
    public:
        void animalsound() {
            cout << "The cat says: meow meow \n " << endl;
        }
};

// Derived class 
class Dog : public Animal {
    public:
        void animalsound() {
            cout << "The dog says: bow wow \n " << endl;
        }
};

int main() {
 
    Animal A;
    Cat C;
    Dog D;

    A.animalsound();
    C.animalsound();
    D.animalsound();

    return 0;
}