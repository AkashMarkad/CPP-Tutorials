/*Class Methods : 

Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:

--Inside class definition
--Outside class definition

You access methods just like you access attributes; by creating an object of the class and using the dot syntax (.)

..To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function.

*/

#include <iostream>
using namespace std;

class myclass {                                         //class
    public:                                             //access specifier
        void myfun() {                                  //Method/function defined inside the class
            
            cout << "myfun : \n" << "Method inside the class." << endl;
        }
        void myMethod();                                // Method/function declaration
};

void myclass :: myMethod() {
    cout << "mymethod : \n" << "Method outside the class." << endl;
}

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {

    myclass m;                                          //Create an object of myClass
    m.myfun();                                          //Call the method
    m.myMethod();

    Car c;
    int sp = c.speed(200);
    cout << sp;                               // Call the method with an argument
    return 0;
}
