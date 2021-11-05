/*
Multiple Inheritance :

A class can also be derived from more than one base class, using a comma-separated list:

*/

#include <iostream>
using namespace std;

// Base Class 
class A
{
    public:
        void fun1() {
            cout << "Content of A class " << endl;
        }
};

// Another Base Class 
class B {
    public:
        void fun2() {
            cout << "Content of B class " << endl;
        }
};

// Derived class 
class C : public A , public B {
    public:
        void fun3() {
            cout << "Content of C class " << endl;
        }
};

int main() {

    C obj;
    obj.fun1();
    obj.fun2();
    obj.fun3();
    return 0;
}
