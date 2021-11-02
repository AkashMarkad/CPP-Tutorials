/*
Pass By Reference :

We used normal variables when we passed parameters to a function. You can also pass a reference to the function. This can be useful when you need to change the value of the arguments

*/

//Swapping of two numbers

#include <iostream>
using namespace std;

void swap(int &x , int &y) {
    int z = x;
    x = y ;
    y = z;
}

int sum ( int i , int j) {
    return i + j;
}

double sum ( double i , double j) {
    return i + j;
}

int main() {

    int a = 10 ;
    int b = 20 ;

    cout << "Before swapping : \n";
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    swap(a , b);

    cout << "After swapping : \n";
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    cout << "Function Overloading" << endl;

    int s1 = sum(2 , 3);
    double s2 = sum(2.3 , 4.5);

    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}