#include <iostream>
using namespace std;

class A {
private:
    int privateVar = 10;

protected:
    int protectedVar = 20;

public:
    int publicVar = 30;

    void display() {
        cout << "Private = " << privateVar << endl;
        cout << "Protected = " << protectedVar << endl;
        cout << "Public = " << publicVar << endl;
    }
};

int main() {
    A obj;
    obj.display();
    // Not allowed:
    // cout << obj.privateVar;
    // cout << obj.protectedVar;
    cout << "Accessing public variable directly: " << obj.publicVar << endl;
    return 0;
}
