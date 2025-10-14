//  Demonstration of Virtual Functions
#include <iostream>
using namespace std;
// Base Class
class Base {
public:
    virtual void display() {  // Virtual Function
        cout << "Display from Base class" << endl;
    }
};

// Derived Class 1
class Derived1 : public Base {
public:
    void display() override {
        cout << "Display from Derived1 class" << endl;
    }
};

// Derived Class 2
class Derived2 : public Base {
public:
    void display() override {
        cout << "Display from Derived2 class" << endl;
    }
};
int main() {
    Base* basePtr;  // Base class pointer
    Base b;
    Derived1 d1;
    Derived2 d2;

    // Base pointer pointing to Base object
    basePtr = &b;
    basePtr->display();  
    // Base pointer pointing to Derived1 object
    basePtr = &d1;
    basePtr->display();  

    // Base pointer pointing to Derived2 object
    basePtr = &d2;
    basePtr->display();  

    return 0;
}
