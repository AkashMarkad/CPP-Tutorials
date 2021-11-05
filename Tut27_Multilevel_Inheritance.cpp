/*

Multilevel Inheritance :

-- A class can also be derived from one class, which is already derived from another class.


*/

#include <iostream>
using namespace std;

//Base class 

class parent {
    
    public:
        void fun() {
            cout << "Content in parent class" << endl;
        }
};

//Derived class 

class child : public parent {

};

//Derived class 

class grandchild : public child {

};

int main() {

    grandchild obj;
    obj.fun();
    return 0;
}
