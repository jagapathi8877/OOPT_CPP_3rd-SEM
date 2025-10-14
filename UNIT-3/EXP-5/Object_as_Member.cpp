//  Object as a Class member
#include <iostream>
using namespace std;

class Address {
    string city;
public:
    Address(string c) { city = c; }
    void show() { cout << "City: " << city << endl; }
};

class Student {
    string name;
    Address addr;   // Object as a class member
public:
    Student(string n, string c) : name(n), addr(c) {}
    void display() {
        cout << "Name: " << name << endl;
        addr.show();
    }
};

int main() {
    Student s("Ravi", "Hyderabad");
    s.display();
    return 0;
}
