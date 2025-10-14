#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }
    ~Base() {
        cout << "Base class destructor called" << endl;
    }
};

// Intermediate Derived class
class Derived1 : public Base {
public:
    Derived1() {
        cout << "Derived1 class constructor called" << endl;
    }
    ~Derived1() {
        cout << "Derived1 class destructor called" << endl;
    }
};

// Further Derived class
class Derived2 : public Derived1 {
public:
    Derived2() {
        cout << "Derived2 class constructor called" << endl;
    }
    ~Derived2() {
        cout << "Derived2 class destructor called" << endl;
    }
};

int main() {
    cout << "Creating object of Derived2 class..." << endl;
    Derived2 obj; // Object creation
    cout << "Exiting main..." << endl;
    return 0;
}
