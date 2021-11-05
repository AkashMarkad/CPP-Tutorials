/*
Access Specifier :


*/

#include <iostream>
using namespace std;

// Base class
class Employee
{
protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer : public Employee
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Programmer Obj;
    Obj.setSalary(50000);
    Obj.bonus = 15000;
    cout << "Salary: " << Obj.getSalary() << "\n";
    cout << "Bonus: " << Obj.bonus << "\n";
    return 0;
}